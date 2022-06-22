#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import <Appboy_iOS_SDK/AppboyKit.h>
#import "AppboyUnityManager.h"

@interface AppboyAppDelegate : UnityAppController

@property (nonatomic,copy) NSDictionary *brazeUnityPlist;

@end

@implementation AppboyAppDelegate : UnityAppController

# pragma mark - UIApplicationDelegate methods

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions {
  [super application:application didFinishLaunchingWithOptions:launchOptions];
  NSLog(@"AppboyAppDelegate called from application:didFinishLaunchingWithOptions:");

  self.brazeUnityPlist = [[AppboyUnityManager sharedInstance] parsePlist];

  // Initialize Braze
  [Appboy startWithApiKey:[[AppboyUnityManager sharedInstance] getApiKeyFromUnity]
            inApplication:application
        withLaunchOptions:launchOptions
        withAppboyOptions:@{ABKSDKFlavorKey: @(UNITY)}];

  // Add default Unity metadata
  [[Appboy sharedInstance] addSdkMetadata:@[ABKSdkMetadataUnity]];

  // Set listeners
  [[AppboyUnityManager sharedInstance] setListenersFromPList];

  // Register for push notifications
  if ([self.brazeUnityPlist[ABKUnityAutomaticPushIntegrationKey] boolValue] &&
      ![self.brazeUnityPlist[ABKUnityDisableAutomaticPushRegistrationKey] boolValue]) {
    BOOL provisional = ![self.brazeUnityPlist[ABKUnityDisableProvisionalAuthKey] boolValue];
    [[AppboyUnityManager sharedInstance] registerForRemoteNotificationsWithProvisional:provisional];
  }

  return YES;
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
  if ([UnityAppController instancesRespondToSelector:@selector(application:didRegisterForRemoteNotificationsWithDeviceToken:)]) {
    [super application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
  }
  // Register device token with Braze
  if ([self.brazeUnityPlist[ABKUnityAutomaticPushIntegrationKey] boolValue]) {
    NSLog(@"Automatic push integration enabled. Sending device token to Braze: %@", deviceToken);
    [[AppboyUnityManager sharedInstance] registerPushToken:deviceToken];
  } else{
    NSLog(@"Automatic push integration disabled. Ignoring device token %@", deviceToken);
  }
}

- (void)application:(UIApplication *)application
         didReceiveRemoteNotification:(NSDictionary *)userInfo
         fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler {
  if ([UnityAppController instancesRespondToSelector:@selector(application:didReceiveRemoteNotification:fetchCompletionHandler:)]) {
    [super application:application didReceiveRemoteNotification:userInfo fetchCompletionHandler:completionHandler];
  }
  NSLog(@"AppboyAppDelegate called from application:didReceiveRemoteNotification:fetchCompletionHandler:. UIApplicationState is %ld", (long)[[UIApplication sharedApplication] applicationState]);

  // Pass notification to Braze
  if ([self.brazeUnityPlist[ABKUnityAutomaticPushIntegrationKey] boolValue]) {
    [[AppboyUnityManager sharedInstance] registerApplication:application
                                didReceiveRemoteNotification:userInfo
                                      fetchCompletionHandler:completionHandler];
  } else {
    NSLog(@"Automatic push integration disabled. Not forwarding notification.");
  }
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(AppboyAppDelegate)
