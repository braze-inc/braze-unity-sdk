#import <Foundation/Foundation.h>
#import "AppboyKit.h"

@interface AppboyUnityManager : NSObject <ABKInAppMessageControllerDelegate>

@property (nonatomic, copy) NSString *unityFeedGameObjectName;
@property (nonatomic, copy) NSString *unityFeedCallbackFunctionName;
@property (nonatomic, copy) NSString *unityInAppMessageGameObjectName;
@property (nonatomic, copy) NSString *unityInAppMessageCallbackFunctionName;
@property (nonatomic, copy) NSString *unityPushReceivedGameObjectName;
@property (nonatomic, copy) NSString *unityPushReceivedCallbackFunctionName;
@property (nonatomic, copy) NSString *unityPushOpenedGameObjectName;
@property (nonatomic, copy) NSString *unityPushOpenedCallbackFunctionName;

+ (AppboyUnityManager *) sharedInstance;
- (void) showStreamView;
- (void) showFeedbackForm;
- (void) logCustomEvent:(NSString *)eventName;
- (void) changeUser:(NSString *)userId;
- (void) logPurchase:(NSString *)productId inCurrency:(NSString *)currencyCode
             atPrice:(NSString *)price withQuantity:(NSUInteger)quantity;
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
- (BOOL) submitFeedback:(NSString *)replyToEmail message:(NSString *)message isReportingABug:(BOOL)isReportingABug;
- (void) addInAppMessageListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addFeedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addPushReceivedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addPushOpenedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) registerApplication:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)notification;
- (void) logInAppMessageClicked:(NSString *)inAppMessageJSONString;
- (void) logInAppMessageButtonClicked:(NSString *)inAppMessageJSONString withButtonID:(NSInteger)buttonID;
- (void) logInAppMessageImpression:(NSString *)inAppMessageJSONString;
- (void) logCardImpression:(NSString *)cardJSONString;
- (void) logCardClicked:(NSString *)cardJSONString;
- (void) requestInAppMessageRefresh;
- (void) requestFeedRefresh;
- (void) requestFeedFromCache:(NSNotification *)notification;
- (void) logFeedDisplayed;
- (void) logFeedbackDisplayed;
@end
