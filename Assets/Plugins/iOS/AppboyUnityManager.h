#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>

#import <BrazeKit/BrazeKit-Swift.h>
#import <BrazeUI/BrazeUI-Swift.h>

static NSString *const BRZUnityApiKey = @"ApiKey";
static NSString *const BRZUnitySdkAuthEnabledKey = @"EnableSDKAuthentication";
static NSString *const BRZUnityAutomaticPushIntegrationKey = @"IntegratesPush";
static NSString *const BRZUnityDisableAutomaticPushRegistrationKey = @"DisableAutomaticPushRegistration";
static NSString *const BRZUnityDisableProvisionalAuthKey = @"DisableProvisionalAuth";
static NSString *const BRZUnitySetPushListenerKey = @"SetPushListener";
static NSString *const BRZUnityPushReceivedGameObjectKey = @"PushReceivedGameObjectName";
static NSString *const BRZUnityPushReceivedCallbackKey = @"PushReceivedCallbackMethodName";
static NSString *const BRZUnityPushOpenedGameObjectKey = @"PushOpenedGameObjectName";
static NSString *const BRZUnityPushOpenedCallbackKey = @"PushOpenedCallbackMethodName";
static NSString *const BRZUnityInAppMessageGameObjectKey = @"InAppMessageGameObjectName";
static NSString *const BRZUnityInAppMessageCallbackKey = @"InAppMessageCallbackMethodName";
static NSString *const BRZUnityInAppMessageInitialOperation = @"InAppMessageInitialOperation";
static NSString *const BRZUnityFeedGameObjectKey = @"FeedGameObjectName";
static NSString *const BRZUnityFeedCallbackKey = @"FeedCallbackMethodName";
static NSString *const BRZUnityContentCardsGameObjectKey = @"ContentCardsGameObjectName";
static NSString *const BRZUnityContentCardsCallbackKey = @"ContentCardsCallbackMethodName";
static NSString *const BRZUnityHandleInAppMessageDisplayKey = @"DisplayInAppMessages";
static NSString *const BRZUnitySdkAuthenticationFailureGameObjectKey = @"SdkAuthFailureGameObjectName";
static NSString *const BRZUnitySdkAuthenticationFailureCallbackKey = @"SdkAuthFailureCallbackMethodName";
static NSString *const BRZUnityFeatureFlagsGameObjectKey = @"FeatureFlagsGameObjectName";
static NSString *const BRZUnityFeatureFlagsCallbackKey = @"FeatureFlagsCallbackMethodName";

/**
 * These must correspond 1:1 to BrazeUnityMessageType in AppboyBinding.cs.
 */
typedef NS_ENUM(NSInteger, BRZUnityMessageType) {
  BRZPushPermissionsPromptResponse = 0,
  BRZPushTokenReceivedFromSystem = 1,
  BRZPushReceived = 2,
  BRZPushOpened = 3,
  BRZPushDeleted = 4,
  BRZInAppMessageReceived = 5,
  BRZNewsFeedUpdated = 6,
  BRZContentCardsUpdated = 7,
  BRZSDKAuthFailed = 8,
  BRZFeatureFlagsUpdated = 9
};

@interface AppboyUnityManager : NSObject <
                                    BrazeDelegate,
                                    BrazeSDKAuthDelegate,
                                    BrazeInAppMessageUIDelegate,
                                    UNUserNotificationCenterDelegate>

@property(strong, nonatomic) Braze *braze;
@property(nonatomic, copy) NSDictionary *brazeUnityPlist;
@property(nonatomic) BRZInAppMessageUIDisplayChoice displayAction;

@property(nonatomic, copy) NSString *unityFeedGameObjectName;
@property(nonatomic, copy) NSString *unityFeedCallbackFunctionName;
@property(nonatomic, copy) NSString *unityContentCardsGameObjectName;
@property(nonatomic, copy) NSString *unityContentCardsCallbackFunctionName;
@property(nonatomic, copy) NSString *unityInAppMessageGameObjectName;
@property(nonatomic, copy) NSString *unityInAppMessageCallbackFunctionName;
@property(nonatomic, copy) NSString *unityPushReceivedGameObjectName;
@property(nonatomic, copy) NSString *unityPushReceivedCallbackFunctionName;
@property(nonatomic, copy) NSString *unityPushOpenedGameObjectName;
@property(nonatomic, copy) NSString *unityPushOpenedCallbackFunctionName;
@property(nonatomic, copy) NSString *unityPushPermissionsPromptResponseGameObjectName;
@property(nonatomic, copy) NSString *unityPushPermissionsPromptResponseFunctionName;
@property(nonatomic, copy) NSString *unityPushTokenReceivedFromSystemGameObjectName;
@property(nonatomic, copy) NSString *unityPushTokenReceivedFromSystemFunctionName;
@property(nonatomic, copy) NSString *unityFeatureFlagsGameObjectName;
@property(nonatomic, copy) NSString *unityFeatureFlagsCallbackFunctionName;
@property(nonatomic, copy) NSString *unitySdkAuthFailureGameObjectName;
@property(nonatomic, copy) NSString *unitySdkAuthFailureCallbackFunctionName;
@property(nonatomic) BOOL sendInternalPushPermissionsPromptResponse;
@property(nonatomic) BOOL sendPushTokenReceivedFromSystem;

/*!
 * The singleton to the Braze Unity plugin.
 *
 * - Important: You must call `initBraze` prior to accessing this singleton
 */
+ (AppboyUnityManager *)sharedInstance;

/*!
 * Uses the `config` parameter to initialize a `braze` instance.
 *
 * The `Braze Configuration` settings in the Unity app's UI will always be used for apiKey,
 * endpoint, and logLevel. All other fields already set in the `config` parameter will be respected.
 *
 * - Important: You must call this prior to accessing `[AppboyUnityManager sharedInstance]`
 */
+ (Braze *)initBraze:(BRZConfiguration *)config;

// In-app messages
- (void)logInAppMessageImpression:(NSString *)inAppMessageJSONString;
- (void)logInAppMessageClicked:(NSString *)inAppMessageJSONString;
- (void)logInAppMessageButtonClicked:(NSString *)inAppMessageJSONString withButtonID:(NSInteger)buttonID;
- (void)displayNextInAppMessage;
- (void)setInAppMessageDisplayAction:(int)actionType;

// News Feed
- (void)logCardImpression:(NSString *)cardJSONString;
- (void)logCardClicked:(NSString *)cardJSONString;
- (void)requestFeedRefresh;
- (void)requestFeedFromCache:(NSNotification *)notification;

// Content Cards
- (void)logContentCardImpression:(NSString *)cardJSONString;
- (void)logContentCardClicked:(NSString *)cardJSONString;
- (void)logContentCardDismissed:(NSString *)cardJSONString;
- (void)requestContentCardsRefresh;
- (void)requestContentCardsFromCache:(NSNotification *)notification;
- (void)displayContentCards;

// Feature Flags
- (void)refreshFeatureFlags;
- (NSString *)getFeatureFlag:(NSString *)identifier;
- (NSString *)getAllFeatureFlags;
- (void)logFeatureFlagImpression:(NSString *)identifier;

/*!
 * @discussion Passes the device token to Braze. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * Any Game object method configured for BRZUnityMessageType.BRZPushTokenReceivedFromSystem will be notified.
 *
 * @param deviceToken the device token
 */
- (void)registerPushToken:(NSData *)deviceToken;

/*!
 * @discussion Passes the device token to Braze. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * Any Game object method configured for BRZUnityMessageType.BRZPushTokenReceivedFromSystem will be notified.
 *
 * @param deviceToken the device token
 */
- (void)registerPushTokenBase64:(NSString *)deviceTokenBase64;

/*!
 * @discussion Requests authorization and registers the user for notifications. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * When the user responds to the request authorization permission prompt, any Game object method configured for
 * BRZUnityMessageType.BRZPushPermissionsPromptResponse will be notified.
 * @param provisional If set to true, on iOS 12 and above, provisional authorization will be requested.
 */
- (void)registerForRemoteNotificationsWithProvisional:(BOOL)provisional;

- (void)configureListenerFor:(NSInteger)messageType withGameObject:(NSString *)gameobject withMethod:(NSString *)method;
- (void)setListenersFromPList;
- (void)addInAppMessageListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addFeedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addContentCardsListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addPushReceivedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addPushOpenedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addSdkAuthFailureListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;

/*!
 * @discussion Passes the push notification data to Braze. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * Any Game object method configured for BRZUnityMessageType.BRZPushReceived or BRZUnityMessageType.BRZPushOpened
 * will be notified as appropriate.
 *
 * @param deviceToken the device token
 */
- (void)registerApplication:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

// Internal
- (void)configureInternalListenerFor:(NSInteger)messageType;

@end
