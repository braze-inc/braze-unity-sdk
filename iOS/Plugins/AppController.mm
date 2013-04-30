#import "AppController.h"
#import "iPhone_Sensors.h"
#import "Appboy.h"

#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/CADisplayLink.h>
#import <UIKit/UIKit.h>
#import <Availability.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#import <OpenGLES/ES2/glext.h>

#include <mach/mach_time.h>

// MSAA_DEFAULT_SAMPLE_COUNT was moved to iPhone_GlesSupport.h
// ENABLE_INTERNAL_PROFILER and related defines were moved to iPhone_Profiler.h
// kFPS define for removed: you can use Application.targetFrameRate (30 fps by default)
// DisplayLink is the only run loop mode now - all others were removed

#include "iPhone_Common.h"
#include "iPhone_OrientationSupport.h"
#include "iPhone_Profiler.h"
#include "iPhone_View.h"

#include "UI/Keyboard.h"
#include "Unity/DisplayManager.h"
#include "Unity/EAGLContextHelper.h"
#include "Unity/GlesHelper.h"



// Time to process events in seconds.
#define kInputProcessingTime                    0.001

// --- Unity ------------------------------------------------------------------
//


void UnityPlayerLoop();
void UnityFinishRendering();
void UnityInitApplication(const char* appPathName);
void UnityLoadApplication();
void UnityPause(bool pause);
void UnityReloadResources();
void UnitySetAudioSessionActive(bool active);
void UnityCleanup();

void UnityGLInvalidateState();

void UnitySendLocalNotification(UILocalNotification* notification);
void UnitySendRemoteNotification(NSDictionary* notification);
void UnitySendDeviceToken(NSData* deviceToken);
void UnitySendRemoteNotificationError(NSError* error);
void UnityInputProcess();
void UnitySetInputScaleFactor(float scale);
float UnityGetInputScaleFactor();
int  UnityGetTargetFPS();

extern bool UnityUse32bitDisplayBuffer();
extern bool UnityUse24bitDepthBuffer();

int     UnityGetDesiredMSAASampleCount(int defaultSampleCount);
void    UnityGetRenderingResolution(unsigned* w, unsigned* h);

enum TargetResolution
{
    kTargetResolutionNative = 0,
    kTargetResolutionAutoPerformance = 3,
    kTargetResolutionAutoQuality = 4,
    kTargetResolution320p = 5,
    kTargetResolution640p = 6,
    kTargetResolution768p = 7
};

int UnityGetTargetResolution();
int UnityGetDeviceGeneration();
void UnityRequestRenderingResolution(unsigned w, unsigned h);

void SensorsCleanup();

bool    _ios30orNewer       = false;
bool    _ios31orNewer       = false;
bool    _ios43orNewer       = false;
bool    _ios50orNewer       = false;
bool    _ios60orNewer       = false;

bool    _supportsDiscard    = false;
bool    _supportsMSAA       = false;

bool    _glesContextCreated = false;
bool    _unityLevelReady    = false;
bool    _skipPresent        = false;
bool    _recreateMainView   = false;

static DisplayConnection* _mainDisplay = 0;


// --- OpenGLES --------------------------------------------------------------------
//

CADisplayLink*          _displayLink;

// This is set to true when applicationWillResignActive gets called. It is here
// to prevent calling SetPause(false) from applicationDidBecomeActive without
// previous call to applicationWillResignActive
BOOL                    _didResignActive = NO;


static void
QueryTargetResolution(int* targetW, int* targetH)
{
    int targetRes = UnityGetTargetResolution();

    float resMult = 1.0f;
    if(targetRes == kTargetResolutionAutoPerformance)
    {
        switch(UnityGetDeviceGeneration())
        {
            case deviceiPhone4:     resMult = 0.6f;     break;
            case deviceiPad1Gen:    resMult = 0.5f;     break;

            default:                resMult = 0.75f;
        }
    }

    if(targetRes == kTargetResolutionAutoQuality)
    {
        switch(UnityGetDeviceGeneration())
        {
            case deviceiPhone4:     resMult = 0.8f;     break;
            case deviceiPad1Gen:    resMult = 0.75f;    break;

            default:                resMult = 1.0f;
        }
    }

    switch( targetRes )
    {
        case kTargetResolution320p:
            *targetW = 320;
            *targetH = 480;
            break;

        case kTargetResolution640p:
            *targetW = 640;
            *targetH = 960;
            break;

        case kTargetResolution768p:
            *targetW = 768;
            *targetH = 1024;
            break;

        default:
            *targetW = _mainDisplay->screenSize.width * resMult;
            *targetH = _mainDisplay->screenSize.height * resMult;
            break;
    }
}

bool NeedRecreateMainView()
{
    // for now we dont have unity support for multi-screen so assume this changes only for main view
    unsigned requestedW, requestedH;
    UnityGetRenderingResolution(&requestedW, &requestedH);

    int requestedMSAA = UnityGetDesiredMSAASampleCount(MSAA_DEFAULT_SAMPLE_COUNT);

    if(    _mainDisplay->surface.use32bitColor != UnityUse32bitDisplayBuffer()
        || _mainDisplay->surface.use24bitDepth != UnityUse24bitDepthBuffer()
        || requestedW != _mainDisplay->surface.targetW || requestedH != _mainDisplay->surface.targetH
        || (_supportsMSAA && requestedMSAA != _mainDisplay->surface.msaaSamples)
        || _recreateMainView
      )
    {
        return true;
    }

    return false;
}

// WARNING: must be called only inside Repaint
//          if you want to trigger surface recreate set _recreateMainView to true
void RecreateMainView()
{
    if(_glesContextCreated)
    {
        unsigned requestedW, requestedH;
        UnityGetRenderingResolution(&requestedW, &requestedH);

        [_mainDisplay   recreateSurface:UnityUse32bitDisplayBuffer() use24bitDepth:UnityUse24bitDepthBuffer()
                        msaaSampleCount:UnityGetDesiredMSAASampleCount(MSAA_DEFAULT_SAMPLE_COUNT)
                        renderW:requestedW renderH:requestedH
        ];

        if(_unityLevelReady)
        {
            // seems like ios sometimes got confused about abrupt swap chain destroy
            // draw 2 times to fill both buffers
            // present only once to make sure correct image goes to CA
            // as we are calling this from inside repaint, second draw and present will be done automatically
            _skipPresent = true;
            {
                SetupUnityDefaultFBO(&_mainDisplay->surface);
                UnityPlayerLoop();
                UnityFinishRendering();
            }
            _skipPresent = false;
        }
    }
}

void PresentMainView()
{
    if(_skipPresent || _didResignActive)
    {
        UNITY_DBG_LOG ("SKIP PresentSurface %s\n", _didResignActive ? "due to going to background":"");
        return;
    }
    UNITY_DBG_LOG ("PresentSurface:\n");
    [_mainDisplay present];
}




void PresentContext_UnityCallback(struct UnityFrameStats const* unityFrameStats)
{
    Profiler_FrameEnd();
    PresentMainView();
    Profiler_FrameUpdate(unityFrameStats);
}


int OpenEAGL_UnityCallback(UIWindow** window, int* screenWidth, int* screenHeight,  int* openglesVersion)
{
    // first - simply create system fb
    [_mainDisplay recreateSurface:UnityUse32bitDisplayBuffer() use24bitDepth:UnityUse24bitDepthBuffer()];

    // second - query target res (it dependens on system ext to be correctly set)
    int resW=0, resH=0;
    QueryTargetResolution(&resW, &resH);

    // third - fully create screen surface
    [_mainDisplay   recreateSurface:UnityUse32bitDisplayBuffer() use24bitDepth:UnityUse24bitDepthBuffer()
                    msaaSampleCount:UnityGetDesiredMSAASampleCount(MSAA_DEFAULT_SAMPLE_COUNT)
                    renderW:resW renderH:resH
    ];
    _mainDisplay->surface.allowScreenshot = true;

    glViewport(0, 0, _mainDisplay->surface.targetW, _mainDisplay->surface.targetH);
    *window         = UnityGetMainWindow();
    *screenWidth    = _mainDisplay->surface.targetW;
    *screenHeight   = _mainDisplay->surface.targetH;
    *openglesVersion= _mainDisplay->surface.context.API;

    [EAGLContext setCurrentContext:_mainDisplay->surface.context];
    SetupUnityDefaultFBO(&_mainDisplay->surface);

    _glesContextCreated = true;
    return true;
}

void NotifyFramerateChange(int targetFPS)
{
    if( targetFPS <= 0 )
        targetFPS = 60;

        int animationFrameInterval = (60.0 / (targetFPS));
        if (animationFrameInterval < 1)
            animationFrameInterval = 1;

        [_displayLink setFrameInterval:animationFrameInterval];
}

void LogToNSLogHandler(LogType logType, const char* log, va_list list)
{
	NSLogv([NSString stringWithUTF8String:log], list);
}

void UnityInitTrampoline()
{
	if( [ [[UIDevice currentDevice] systemVersion] compare: @"3.0" options: NSNumericSearch ] != NSOrderedAscending )
        _ios30orNewer = true;

    if( [ [[UIDevice currentDevice] systemVersion] compare: @"3.1" options: NSNumericSearch ] != NSOrderedAscending )
        _ios31orNewer = true;

    if( [ [[UIDevice currentDevice] systemVersion] compare: @"4.3" options: NSNumericSearch ] != NSOrderedAscending )
        _ios43orNewer = true;

    if( [ [[UIDevice currentDevice] systemVersion] compare: @"5.0" options: NSNumericSearch ] != NSOrderedAscending )
        _ios50orNewer = true;

    if( [ [[UIDevice currentDevice] systemVersion] compare: @"6.0" options: NSNumericSearch ] != NSOrderedAscending )
        _ios60orNewer = true;

	// Try writing to console and if it fails switch to NSLog logging
	fprintf(stdout, "\n");
	if (ftell(stdout) < 0)
		SetLogEntryHandler(LogToNSLogHandler);
}


// --- AppController --------------------------------------------------------------------
//


@implementation AppController

- (void) RepaintDisplayLink
{
    [_displayLink setPaused: YES];

    static const CFStringRef kTrackingRunLoopMode = CFStringRef(UITrackingRunLoopMode);
    while (CFRunLoopRunInMode(kTrackingRunLoopMode, kInputProcessingTime, TRUE) == kCFRunLoopRunHandledSource)
        ;

    [_displayLink setPaused: NO];
    [self Repaint];
}

- (void) Repaint
{
    if(_didResignActive)
        return;

    SetupUnityDefaultFBO(&_mainDisplay->surface);

    CheckOrientationRequest();
    if(NeedRecreateMainView())
    {
        RecreateMainView();
        _recreateMainView = false;
    }

    Profiler_FrameStart();
    UnityInputProcess();
    UnityPlayerLoop();

    [[DisplayManager Instance] presentAllButMain];

    SetupUnityDefaultFBO(&_mainDisplay->surface);
}

- (void) prepareRunLoop
{
    OnUnityInited();
    UnitySetInputScaleFactor([UIScreen mainScreen].scale);

    UnityLoadApplication();
    Profiler_InitProfiler();
    InitGLES();

    _unityLevelReady = true;
    OnUnityReady();

    // Frame interval defines how many display frames must pass between each time the
    // display link fires.
    int animationFrameInterval = 60.0 / (float)UnityGetTargetFPS();
    assert(animationFrameInterval >= 1);

    _displayLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(RepaintDisplayLink)];
    [_displayLink setFrameInterval:animationFrameInterval];
    [_displayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];

    // immediately render 1st frame in order to avoid occasional black screen
    // we do it twice to fill both buffers with meaningful contents.
    [self Repaint];
    [self Repaint];
}


- (void) startUnity:(UIApplication*)application
{
    char const* appPath = [[[NSBundle mainBundle] bundlePath]UTF8String];
    UnityInitApplication(appPath);

    [[DisplayManager Instance] updateDisplayListInUnity];
    [self prepareRunLoop];
}

- (NSUInteger)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window
{
    // UIInterfaceOrientationMaskAll
    // it is the safest way of doing it:
    // - GameCenter and some other services might have portrait-only variant
    //     and will throw exception if portrait is not supported here
    // - When you change allowed orientations if you end up forbidding current one
    //     exception will be thrown
    // Anyway this is intersected with values provided from UIViewController, so we are good
    return   (1 << UIInterfaceOrientationPortrait) | (1 << UIInterfaceOrientationPortraitUpsideDown)
           | (1 << UIInterfaceOrientationLandscapeRight) | (1 << UIInterfaceOrientationLandscapeLeft);
}

- (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification
{
    UnitySendLocalNotification(notification);
}

- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
    UnitySendRemoteNotification(userInfo);
    [[Appboy sharedInstance] registerApplication:application
                    didReceiveRemoteNotification:userInfo];
}

+ (UIViewController *)unityVC
{
    return UnityGetGLViewController();
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    UnitySendDeviceToken(deviceToken);
    [[Appboy sharedInstance] registerPushToken:
     [NSString stringWithFormat:@"%@", deviceToken]];
    NSLog(@"Registering device push token %@", [NSString stringWithFormat:@"%@", deviceToken]);
}

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    UnitySendRemoteNotificationError(error);
}

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    printf_console("-> applicationDidFinishLaunching()\n");
    // get local notification
    if (&UIApplicationLaunchOptionsLocalNotificationKey != nil)
    {
        UILocalNotification *notification = [launchOptions objectForKey:UIApplicationLaunchOptionsLocalNotificationKey];
        if (notification)
            UnitySendLocalNotification(notification);
        }

    // get remote notification
    if (&UIApplicationLaunchOptionsRemoteNotificationKey != nil)
    {
        NSDictionary *notification = [launchOptions objectForKey:UIApplicationLaunchOptionsRemoteNotificationKey];
        if (notification)
            UnitySendRemoteNotification(notification);
        }

    if ([UIDevice currentDevice].generatesDeviceOrientationNotifications == NO)
        [[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];

    [DisplayManager Initialize];
    _mainDisplay = [[DisplayManager Instance] mainDisplay];
    [_mainDisplay createView:YES showRightAway:NO];

    [KeyboardDelegate Initialize];
    CreateViewHierarchy();

    [self performSelector:@selector(startUnity:) withObject:application afterDelay:0];
    
    //Registering for Push Notifications
    [[UIApplication sharedApplication]
     registerForRemoteNotificationTypes:(UIRemoteNotificationTypeBadge |
                                         UIRemoteNotificationTypeSound |
                                         UIRemoteNotificationTypeAlert)];
    
    [Appboy startWithApiKey:@"db5ef4d1-5b93-44d4-a932-738dfdf2c792"
              usingDelegate:nil
              inApplication:application
          withLaunchOptions:launchOptions];

    return NO;
}

// For iOS 4
// Callback order:
//   applicationDidResignActive()
//   applicationDidEnterBackground()
- (void)applicationDidEnterBackground:(UIApplication *)application
{
    printf_console("-> applicationDidEnterBackground()\n");
}

// For iOS 4
// Callback order:
//   applicationWillEnterForeground()
//   applicationDidBecomeActive()
- (void)applicationWillEnterForeground:(UIApplication *)application
{
    printf_console("-> applicationWillEnterForeground()\n");
}

- (void) applicationDidBecomeActive:(UIApplication*)application
{
    printf_console("-> applicationDidBecomeActive()\n");
    if (_didResignActive)
        UnityPause(false);

    _didResignActive = NO;
}

- (void) applicationWillResignActive:(UIApplication*)application
{
    printf_console("-> applicationWillResignActive()\n");
    UnityPause(true);

    _didResignActive = YES;
}

- (void) applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    printf_console("WARNING -> applicationDidReceiveMemoryWarning()\n");
}

- (void) applicationWillTerminate:(UIApplication*)application
{
    printf_console("-> applicationWillTerminate()\n");

    Profiler_UninitProfiler();

    UnityCleanup();
}

- (void) dealloc
{
	SensorsCleanup();
    ReleaseViewHierarchy();
    [super dealloc];
}
@end


