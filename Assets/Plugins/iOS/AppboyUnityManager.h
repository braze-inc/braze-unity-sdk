#import <Foundation/Foundation.h>
#import <Appboy_iOS_SDK/AppboyKit.h>

static NSString *const ABKUnityApiKey = @"ApiKey";
static NSString *const ABKUnityAutomaticPushIntegrationKey = @"IntegratesPush";
static NSString *const ABKUnityDisableAutomaticPushRegistrationKey = @"DisableAutomaticPushRegistration";
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

+ (AppboyUnityManager *) sharedInstance;
- (void) showStreamView;
- (void) logCustomEvent:(NSString *)eventName withProperties:(NSDictionary *)properties;
- (void) changeUser:(NSString *)userId;
- (void) logPurchase:(NSString *)productId inCurrency:(NSString *)currencyCode
             atPrice:(NSString *)price withQuantity:(NSUInteger)quantity withProperties:(NSDictionary *)properties;
- (void) setUserFirstName:(NSString *)firstName;
- (void) setUserLastName:(NSString *)lastName;
- (void) setUserPhoneNumber:(NSString *)number;
- (void) setUserAvatarImageURL:(NSString *)imageURL;
- (void) setUserEmail:(NSString *)email;
- (void) setUserBio:(NSString *)bio;
- (void) setUserGender:(NSInteger)gender;
- (void) setUserDateOfBirthToYear:(NSInteger)year Month:(NSInteger)month andDay:(NSInteger)day;
- (void) setUserCountry:(NSString *)country;
- (void) setUserHomeCity:(NSString *)city;
- (void) setUserIsSubscribedToEmails:(BOOL)subscribedToEmail;
- (void) setUserEmailNotificationSubscriptionType:(NSInteger)emailNotificationSubscriptionType;
- (void) setUserPushNotificationSubscriptionType:(NSInteger)pushNotificationSubscriptionType;
- (void) setUserCustomAttributeWithKey:(NSString *)key andBOOLValue:(BOOL)value;
- (void) setUserCustomAttributeWithKey:(NSString *)key andIntegerValue:(NSInteger)value;
- (void) setUserCustomAttributeWithKey:(NSString *)key andDoubleValue:(double)value;
- (void) setUserCustomAttributeWithKey:(NSString *)key andStringValue:(NSString *)value;
- (void) setUserCustomAttributeToNowWithKey:(NSString *)key;
- (void) setUserCustomAttributeWithKey:(NSString *)key toDateAsSecondsFromEpoch:(NSTimeInterval)seconds;
- (void) unsetUserCustomAttributeWithKey:(NSString *)key;
- (void) incrementCustomUserAttributeWithKey:(NSString *)key by:(NSInteger)incrementValue;
- (void) setCustomAttributeArrayWithKey:(NSString *)key array:(NSArray *)valueArray;
- (void) addToCustomAttributeArrayWithKey:(NSString *)key value:(NSString *)value;
- (void) removeFromCustomAttributeArrayWithKey:(NSString *)key value:(NSString *)value;
- (void) setAttributionData:(NSString *)network campaign:(NSString *)campaign adgroup:(NSString *)adgroup creative:(NSString *)creative;
- (void) setUserFacebookData:(NSString *)facebookId firstName:(NSString *)firstName  lastName:(NSString *)lastName  email:(NSString *)email  bio:(NSString *)bio  cityName:(NSString *)cityName  gender:(NSInteger)gender  numberOfFriends:(NSInteger)numberOfFriends  birthday:(NSString *)birthday;
- (void) setUserTwitterData:(NSInteger)twitterUserId twitterHandle:(NSString *)twitterHandle name:(NSString *)name description:(NSString *)description followerCount:(NSInteger)followerCount followingCount:(NSInteger)followingCount tweetCount:(NSInteger)tweetCount profileImageUrl:(NSString *)profileImageUrl;
- (void) parsePlist;
- (NSString *) getApiKeyFromUnity;
- (void) setListeners;
- (void) addInAppMessageListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addFeedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addContentCardsListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addPushReceivedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addPushOpenedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) registerForRemoteNotifications;
- (void) registerPushToken:(NSData *)deviceToken;
- (void) registerApplication:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)notification fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
- (void) logInAppMessageClicked:(NSString *)inAppMessageJSONString;
- (void) logInAppMessageButtonClicked:(NSString *)inAppMessageJSONString withButtonID:(NSInteger)buttonID;
- (void) logInAppMessageImpression:(NSString *)inAppMessageJSONString;
- (void) logCardImpression:(NSString *)cardJSONString;
- (void) logCardClicked:(NSString *)cardJSONString;
- (void) requestFeedRefresh;
- (void) requestFeedFromCache:(NSNotification *)notification;
- (void) logFeedDisplayed;
- (void) requestContentCardsRefresh;
- (void) requestContentCardsFromCache:(NSNotification *)notification;
- (void) logContentCardsDisplayed;
- (void) logContentCardImpression:(NSString *)cardJSONString;
- (void) logContentCardClicked:(NSString *)cardJSONString;
- (void) logContentCardDismissed:(NSString *)cardJSONString;
- (void) displayNextInAppMessageWithDelegate:(BOOL)withDelegate;
- (void) requestGeofences;
- (void) requestImmediateDataFlush;
+ (void) wipeDataAndDisableForAppRun;
+ (void) disableSDK;
+ (void) requestEnableSDKOnNextAppRun;
@end
