#import <Foundation/Foundation.h>
#import <Appboy_iOS_SDK/AppboyKit.h>

static NSString *const ABKUnityApiKey = @"ApiKey";
static NSString *const ABKUnityAutomaticPushIntegrationKey = @"IntegratesPush";
static NSString *const ABKUnityDisableAutomaticPushRegistrationKey = @"DisableAutomaticPushRegistration";
static NSString *const ABKUnityDisableProvisionalAuthKey = @"DisableProvisionalAuth";
static NSString *const ABKUnitySetPushListenerKey = @"SetPushListener";
static NSString *const ABKUnityPushReceivedGameObjectKey = @"PushReceivedGameObjectName";
static NSString *const ABKUnityPushReceivedCallbackKey = @"PushReceivedCallbackMethodName";
static NSString *const ABKUnityPushOpenedGameObjectKey = @"PushOpenedGameObjectName";
static NSString *const ABKUnityPushOpenedCallbackKey = @"PushOpenedCallbackMethodName";
static NSString *const ABKUnityInAppMessageGameObjectKey = @"InAppMessageGameObjectName";
static NSString *const ABKUnityInAppMessageCallbackKey = @"InAppMessageCallbackMethodName";
static NSString *const ABKUnityFeedGameObjectKey = @"FeedGameObjectName";
static NSString *const ABKUnityFeedCallbackKey = @"FeedCallbackMethodName";
static NSString *const ABKUnityContentCardsGameObjectKey = @"ContentCardsGameObjectName";
static NSString *const ABKUnityContentCardsCallbackKey = @"ContentCardsCallbackMethodName";
static NSString *const ABKUnityHandleInAppMessageDisplayKey = @"DisplayInAppMessages";

/**
 * These must correspond 1:1 to BrazeUnityMessageType in AppboyBinding.cs.
 */
typedef NS_ENUM(NSInteger, ABKUnityMessageType) {
  ABKPushPermissionsPromptResponse = 0,
  ABKPushTokenReceivedFromSystem = 1,
  ABKPushReceived = 2,
  ABKPushOpened = 3,
  ABKPushDeleted = 4,
  ABKInAppMessageReceived = 5,
  ABKNewsFeedUpdated = 6,
  ABKContentCardsUpdated = 7
};

@interface AppboyUnityManager : NSObject <ABKInAppMessageControllerDelegate, UNUserNotificationCenterDelegate>

@property (nonatomic,copy) NSDictionary *appboyUnityPlist;
@property (nonatomic, copy) NSString *unityFeedGameObjectName;
@property (nonatomic, copy) NSString *unityFeedCallbackFunctionName;
@property (nonatomic, copy) NSString *unityContentCardsGameObjectName;
@property (nonatomic, copy) NSString *unityContentCardsCallbackFunctionName;
@property (nonatomic, copy) NSString *unityInAppMessageGameObjectName;
@property (nonatomic, copy) NSString *unityInAppMessageCallbackFunctionName;
@property (nonatomic, copy) NSString *unityPushReceivedGameObjectName;
@property (nonatomic, copy) NSString *unityPushReceivedCallbackFunctionName;
@property (nonatomic, copy) NSString *unityPushOpenedGameObjectName;
@property (nonatomic, copy) NSString *unityPushOpenedCallbackFunctionName;
@property (nonatomic, copy) NSString *unityPushPermissionsPromptResponseGameObjectName;
@property (nonatomic, copy) NSString *unityPushPermissionsPromptResponseFunctionName;
@property (nonatomic, copy) NSString *unityPushTokenReceivedFromSystemGameObjectName;
@property (nonatomic, copy) NSString *unityPushTokenReceivedFromSystemFunctionName;
@property (nonatomic) BOOL sendInternalPushPermissionsPromptResponse;
@property (nonatomic) BOOL sendPushTokenReceivedFromSystem;

+ (AppboyUnityManager *) sharedInstance;
- (NSString *)getApiKeyFromUnity;
- (NSDictionary *)parsePlist;

// Social
- (void)setUserFacebookData:(NSString *)facebookId firstName:(NSString *)firstName lastName:(NSString *)lastName email:(NSString *)email bio:(NSString *)bio cityName:(NSString *)cityName gender:(NSInteger)gender numberOfFriends:(NSInteger)numberOfFriends birthday:(NSString *)birthday;
- (void)setUserTwitterData:(NSInteger)twitterUserId twitterHandle:(NSString *)twitterHandle name:(NSString *)name description:(NSString *)description followerCount:(NSInteger)followerCount followingCount:(NSInteger)followingCount tweetCount:(NSInteger)tweetCount profileImageUrl:(NSString *)profileImageUrl;

// In-app messages
- (void)logInAppMessageImpression:(NSString *)inAppMessageJSONString;
- (void)logInAppMessageClicked:(NSString *)inAppMessageJSONString;
- (void)logInAppMessageButtonClicked:(NSString *)inAppMessageJSONString withButtonID:(NSInteger)buttonID;
- (void)displayNextInAppMessageWithDelegate:(BOOL)withDelegate;

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

/*!
 * @discussion Passes the device token to Braze. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * Any Game object method configured for ABKUnityMessageType.ABKPushTokenReceivedFromSystem will be notified.
 *
 * @param deviceToken the device token
 */
- (void)registerPushToken:(NSData *)deviceToken;

/*!
 * @discussion Passes the device token to Braze. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * Any Game object method configured for ABKUnityMessageType.ABKPushTokenReceivedFromSystem will be notified.
 *
 * @param deviceToken the device token
 */
- (void)registerPushTokenBase64:(NSString *)deviceTokenBase64;

/*!
 * @discussion Requests authorization and registers the user for notifications. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * When the user responds to the request authorization permission prompt, any Game object method configured for
 * ABKUnityMessageType.ABKPushPermissionsPromptResponse will be notified.
 * @param provisional If set to true, on iOS 12 and above, provisional authorization will be requested.
 */
- (void)registerForRemoteNotificationsWithProvisional:(BOOL)provisional;

- (void)configureListenerFor:(NSInteger)messageType withGameObject:(NSString *)gameobject withMethod:(NSString *)method;
- (void)setListenersFromPList;
- (void)addInAppMessageListenerWithObjectNameAndSetDelegate:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addFeedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addContentCardsListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addPushReceivedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void)addPushOpenedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;

/*!
 * @discussion Passes the push notification data to Braze. The caller is responsible for respecting
 * automatic integration and automatic registration configuration as this method is unaware of Braze-specific configuration.
 *
 * Any Game object method configured for ABKUnityMessageType.ABKPushReceived or ABKUnityMessageType.ABKPushOpened
 * will be notified as appropriate.
 *
 * @param deviceToken the device token
 */
- (void)registerApplication:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)notification fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

// Internal
- (void)configureInternalListenerFor:(NSInteger)messageType;

@end
