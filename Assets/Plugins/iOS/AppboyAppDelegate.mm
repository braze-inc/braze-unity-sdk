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
    [[AppboyUnityManager sharedInstance] registerPushToken:deviceToken];
  } else{
    NSLog(@"Automatic push integration disabled. Ignoring device token %@", deviceToken);
  }
}

- (void)application:(UIApplication *)application
         didReceiveRemoteNotification:(NSDictionary *)userInfo
         fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler {

    dispatch_group_t __block callbackGroup = dispatch_group_create();
    NSMutableArray<NSNumber *> *__block fetchResults = [NSMutableArray array];
    void (^localCompletionHandler)(UIBackgroundFetchResult) =
        ^void(UIBackgroundFetchResult fetchResult) {
          [fetchResults addObject:[NSNumber numberWithInt:(int)fetchResult]];
          dispatch_group_leave(callbackGroup);
        };


    if ([UnityAppController instancesRespondToSelector:@selector(application:didReceiveRemoteNotification:fetchCompletionHandler:)]) {
    dispatch_group_enter(callbackGroup);
    [super application:application didReceiveRemoteNotification:userInfo fetchCompletionHandler:localCompletionHandler];
  }
  NSLog(@"AppboyAppDelegate called from application:didReceiveRemoteNotification:fetchCompletionHandler:. UIApplicationState is %ld", (long)[[UIApplication sharedApplication] applicationState]);

  // Pass notification to Braze
  if ([self.brazeUnityPlist[BRZUnityAutomaticPushIntegrationKey] boolValue]) {
      dispatch_group_enter(callbackGroup);
      [[AppboyUnityManager sharedInstance] registerApplication:application
                                didReceiveRemoteNotification:userInfo
                                      fetchCompletionHandler:localCompletionHandler];
  } else {
    NSLog(@"Automatic push integration disabled. Not forwarding notification.");
  }
    
    dispatch_group_notify(callbackGroup, dispatch_get_main_queue(), ^() {
      BOOL allFetchesFailed = YES;
      BOOL anyFetchHasNewData = NO;

      for (NSNumber *oneResult in fetchResults) {
        UIBackgroundFetchResult result = (UIBackgroundFetchResult)oneResult.intValue;

        switch (result) {
          case UIBackgroundFetchResultNoData:
            allFetchesFailed = NO;
            break;
          case UIBackgroundFetchResultNewData:
            allFetchesFailed = NO;
            anyFetchHasNewData = YES;
            break;
          case UIBackgroundFetchResultFailed:

            break;
        }
      }

      UIBackgroundFetchResult finalFetchResult = UIBackgroundFetchResultNoData;

      if (allFetchesFailed) {
        finalFetchResult = UIBackgroundFetchResultFailed;
      } else if (anyFetchHasNewData) {
        finalFetchResult = UIBackgroundFetchResultNewData;
      } else {
        finalFetchResult = UIBackgroundFetchResultNoData;
      }

      completionHandler(finalFetchResult);
    });
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
