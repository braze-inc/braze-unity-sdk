#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "AppboyUnityManager.h"

#import <BrazeKit/BrazeKit-Swift.h>
#import <BrazeUI/BrazeUI-Swift.h>

@interface AppboyAppDelegate : UnityAppController

@property (nonatomic,copy) NSDictionary *brazeUnityPlist;

@end

@implementation AppboyAppDelegate : UnityAppController

static Braze *_braze;

#pragma mark - UIApplicationDelegate methods

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions {
  [super application:application didFinishLaunchingWithOptions:launchOptions];
  NSLog(@"AppboyAppDelegate called from application:didFinishLaunchingWithOptions:");

  BRZConfiguration *config = [[BRZConfiguration alloc] init];
  config.triggerMinimumTimeInterval = 1;
  Braze *braze = [AppboyUnityManager initBraze:config];
  AppboyAppDelegate.braze = braze;

  // Set listeners
  [[AppboyUnityManager sharedInstance] setListenersFromPList];

  // Store the braze settings (used in system push handlers)
  self.brazeUnityPlist = [AppboyUnityManager sharedInstance].brazeUnityPlist;
    
  // Register for push notifications
  if ([self.brazeUnityPlist[BRZUnityAutomaticPushIntegrationKey] boolValue] &&
      ![self.brazeUnityPlist[BRZUnityDisableAutomaticPushRegistrationKey] boolValue]) {
    BOOL provisional = ![self.brazeUnityPlist[BRZUnityDisableProvisionalAuthKey] boolValue];
    [[AppboyUnityManager sharedInstance] registerForRemoteNotificationsWithProvisional:provisional];
  }

  return YES;
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
  if ([UnityAppController instancesRespondToSelector:@selector(application:didRegisterForRemoteNotificationsWithDeviceToken:)]) {
    [super application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
  }
  // Register device token with Braze
  if ([self.brazeUnityPlist[BRZUnityAutomaticPushIntegrationKey] boolValue]) {
    NSLog(@"Automatic push integration enabled. Sending device token to Braze: %@", deviceToken);
    // Even though the Swift SDK push automation automatically registers the device token, we still
    // call `registerPushToken:` to ensure that the device token is forwarded to the Unity side.
    // The Swift SDK push automation feature does not yet offer a subscription to the device token
    // registration event which would allow us to avoid implementing
    // `-application:didRegisterForRemoteNotificationsWithDeviceToken:` altogether.
    [[AppboyUnityManager sharedInstance] registerPushToken:deviceToken];
  } else{
    NSLog(@"Automatic push integration disabled. Ignoring device token %@", deviceToken);
  }
}

#pragma mark - Helpers

+ (Braze *)braze {
  return _braze;
}

+ (void)setBraze:(Braze *)braze {
  _braze = braze;
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(AppboyAppDelegate)
