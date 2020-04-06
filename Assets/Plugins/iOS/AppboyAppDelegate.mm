#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import <Appboy_iOS_SDK/AppboyKit.h>
#import "AppboyUnityManager.h"

@interface AppboyAppDelegate : UnityAppController

@end

@implementation AppboyAppDelegate : UnityAppController

# pragma mark - UIApplicationDelegate methods

- (BOOL) application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions {
  [super application:application didFinishLaunchingWithOptions:launchOptions];
  NSLog(@"AppboyAppDelegate called from application:didFinishLaunchingWithOptions:");

  [[AppboyUnityManager sharedInstance] parsePlist];

  // Initialize Appboy
  [Appboy startWithApiKey:[[AppboyUnityManager sharedInstance] getApiKeyFromUnity]
            inApplication:application
        withLaunchOptions:launchOptions
        withAppboyOptions:@{ABKSDKFlavorKey: @(UNITY)}];

  // Set listeners
  [[AppboyUnityManager sharedInstance] setListeners];

  // Register for push notifications
  [[AppboyUnityManager sharedInstance] registerForRemoteNotifications];

  return YES;
}

- (void) application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
  if ([UnityAppController instancesRespondToSelector:@selector(application:didRegisterForRemoteNotificationsWithDeviceToken:)]) {
    [super application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
  }
  NSLog(@"AppboyAppDelegate called from application:didRegisterForRemoteNotificationsWithDeviceToken with token %@", deviceToken);
  // Register push token with Appboy
  [[AppboyUnityManager sharedInstance] registerPushToken:deviceToken];
}

- (void) application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo {
  if ([UnityAppController instancesRespondToSelector:@selector(application:didReceiveRemoteNotification:)]) {
    [super application:application didReceiveRemoteNotification:userInfo];
  }
  NSLog(@"AppboyAppDelegate called from application:didReceiveRemoteNotification:. UIApplicationState is %ld", (long)[[UIApplication sharedApplication] applicationState]);

  // Pass notification to Appboy
  [[AppboyUnityManager sharedInstance] registerApplication:application
                              didReceiveRemoteNotification:userInfo
                              fetchCompletionHandler:nil];
}

- (void) application:(UIApplication *)application 
         didReceiveRemoteNotification:(NSDictionary *)userInfo 
         fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler {
  if ([UnityAppController instancesRespondToSelector:@selector(application:didReceiveRemoteNotification:fetchCompletionHandler:)]) {
    [super application:application didReceiveRemoteNotification:userInfo fetchCompletionHandler:completionHandler];
  }
  NSLog(@"AppboyAppDelegate called from application:didReceiveRemoteNotification:fetchCompletionHandler:. UIApplicationState is %ld", (long)[[UIApplication sharedApplication] applicationState]);

  // Pass notification to Appboy
  [[AppboyUnityManager sharedInstance] registerApplication:application
                              didReceiveRemoteNotification:userInfo
                              fetchCompletionHandler:completionHandler];
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(AppboyAppDelegate)
