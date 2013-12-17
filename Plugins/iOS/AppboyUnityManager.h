#import <Foundation/Foundation.h>
#import "AppboyKit.h"

@interface AppboyUnityManager : NSObject <ABKSlideupControllerDelegate>

@property (nonatomic, copy) NSString *unitySlideupGameObjectName;
@property (nonatomic, copy) NSString *unitySlideupCallbackFunctionName;
@property (nonatomic, copy) NSString *unityPushReceivedGameObjectName;
@property (nonatomic, copy) NSString *unityPushReceivedCallbackFunctionName;
@property (nonatomic, copy) NSString *unityPushOpenedGameObjectName;
@property (nonatomic, copy) NSString *unityPushOpenedCallbackFunctionName;

+ (AppboyUnityManager *) sharedInstance;
- (void) showStreamView;
- (void) showFeedbackForm;
- (void) logCustomEvent:(NSString *)eventName;
- (void) changeUser:(NSString *)userId;
- (void) logPurchase:(NSString *)productId inCurrency:(NSString *)currencyCode atPrice:(NSString *)price;
- (void) setUserFirstName:(NSString *)firstName;
- (void) setUserLastName:(NSString *)lastName;
- (void) setUserPhoneNumber:(NSString *)number;
- (void) setUserEmail:(NSString *)email;
- (void) setUserBio:(NSString *)bio;
- (void) setUserGender:(NSInteger)gender;
- (void) setUserDateOfBirthToYear:(NSInteger)year Month:(NSInteger)month andDay:(NSInteger)day;
- (void) setUserCountry:(NSString *)country;
- (void) setUserHomeCity:(NSString *)city;
- (void) setUserIsSubscribedToEmails:(BOOL)subscribedToEmail;
- (void) setUserCustomAttributeWithKey:(NSString *)key andBOOLValue:(BOOL)value;
- (void) setUserCustomAttributeWithKey:(NSString *)key andIntegerValue:(NSInteger)value;
- (void) setUserCustomAttributeWithKey:(NSString *)key andDoubleValue:(double)value;
- (void) setUserCustomAttributeWithKey:(NSString *)key andStringValue:(NSString *)value;
- (void) setUserCustomAttributeToNowWithKey:(NSString *)key;
- (void) setUserCustomAttributeWithKey:(NSString *)key toDateAsSecondsFromEpoch:(NSTimeInterval)seconds;
- (void) unsetUserCustomAttributeWithKey:(NSString *)key;
- (BOOL) submitFeedback:(NSString *)replyToEmail message:(NSString *)message isReportingABug:(BOOL)isReportingABug;
- (void) addSlideupListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addPushReceivedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) addPushOpenedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod;
- (void) registerApplication:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)notification;

@end
