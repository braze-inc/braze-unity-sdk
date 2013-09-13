#import <Foundation/Foundation.h>
#import "Appboy.h"

@interface AppboyUnityManager : NSObject <ABKSlideupControllerDelegate>

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

@end
