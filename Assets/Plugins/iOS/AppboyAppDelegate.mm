#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "AppboyUnityManager.h"

@import BrazeKit;
@import BrazeUI;

@interface AppboyAppDelegate : UnityAppController

@property (nonatomic,copy) NSDictionary *brazeUnityPlist;

@end

@implementation AppboyAppDelegate : UnityAppController

static Braze *_braze;

# pragma mark - UIApplicationDelegate methods

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions {
  [super application:application didFinishLaunchingWithOptions:launchOptions];
  NSLog(@"AppboyAppDelegate called from application:didFinishLaunchingWithOptions:");

  BRZConfiguration *config = [[BRZConfiguration alloc] init];
  config.triggerMinimumTimeInterval = 1;
  Braze *braze = [AppboyUnityManager initBraze:config];
  AppboyAppDelegate.braze = braze;

  // Set listeners
  [[AppboyUnityManager sharedInstance] setListenersFromPList];

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
  if ([self.brazeUnityPlist[BRZUnityAutomaticPushIntegrationKey] boolValue]) {
    [[AppboyUnityManager sharedInstance] registerApplication:application
                                didReceiveRemoteNotification:userInfo
                                      fetchCompletionHandler:completionHandler];
  } else {
    NSLog(@"Automatic push integration disabled. Not forwarding notification.");
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
