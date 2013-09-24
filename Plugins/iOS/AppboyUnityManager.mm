#import "AppboyUnityManager.h"
#include "iPhone_View.h"
#import "Appboy.h"
#import "ABKFeedbackViewControllerModalContext.h"
#import "ABKFeedViewControllerModalContext.h"

@implementation AppboyUnityManager

+ (AppboyUnityManager*)sharedInstance {
	static AppboyUnityManager *sharedInstance = nil;
  
	if(!sharedInstance)
		sharedInstance = [[AppboyUnityManager alloc] init];
  
	return sharedInstance;
}

- (void) showFeedbackForm {
  ABKFeedbackViewControllerModalContext *feedbackViewController = [[ABKFeedbackViewControllerModalContext alloc] init];
  [UnityGetGLViewController() presentModalViewController:feedbackViewController animated:YES];
  [feedbackViewController release];
}

- (void) showStreamView {
  ABKFeedViewControllerModalContext *streamViewController = [[ABKFeedViewControllerModalContext alloc] init];
  [UnityGetGLViewController() presentModalViewController:streamViewController animated:YES];
  [streamViewController release];
}

- (void) logCustomEvent:(NSString *)eventName {
  [[Appboy sharedInstance] logCustomEvent:eventName];
}

- (void) changeUser:(NSString *)userId {
  [[Appboy sharedInstance] changeUser:userId];
}

- (void) logPurchase:(NSString *)productId inCurrency:(NSString *)currencyCode atPrice:(NSString *)price {
  [[Appboy sharedInstance] logPurchase:productId inCurrency:currencyCode atPrice:[NSDecimalNumber decimalNumberWithString:price]];
}

- (void) setUserFirstName:(NSString *)firstName {
  [Appboy sharedInstance].user.firstName = firstName;
}

- (void) setUserLastName:(NSString *)lastName {
  [Appboy sharedInstance].user.lastName = lastName;
}

- (void) setUserPhoneNumber:(NSString *)number {
  [Appboy sharedInstance].user.phone = number;
}

- (void) setUserEmail:(NSString *)email {
  [Appboy sharedInstance].user.email = email;
}

- (void) setUserBio:(NSString *)bio {
  [Appboy sharedInstance].user.bio = bio;
}

- (void) setUserGender:(NSInteger)gender {
  [[Appboy sharedInstance].user setGender:(ABKUserGenderType)gender];
}

- (void) setUserDateOfBirthToYear:(NSInteger)year Month:(NSInteger)month andDay:(NSInteger)day {
  NSDateComponents *comps = [[NSDateComponents alloc] init];
  [comps setDay:day];
  [comps setMonth:month];
  [comps setYear:year];
  NSCalendar *gregorian = [[NSCalendar alloc]
                           initWithCalendarIdentifier:NSGregorianCalendar];
  NSDate *date = [gregorian dateFromComponents:comps];
  [Appboy sharedInstance].user.dateOfBirth = date;
  
  [gregorian release];
  [comps release];
}

- (void) setUserCountry:(NSString *)country {
  [Appboy sharedInstance].user.country = country;
}

- (void) setUserHomeCity:(NSString *)city {
  [Appboy sharedInstance].user.homeCity = city;
}

- (void) setUserIsSubscribedToEmails:(BOOL)subscribedToEmail {
  [[Appboy sharedInstance].user setIsSubscribedToEmails:subscribedToEmail];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andBOOLValue:(BOOL)value {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:key andBOOLValue:value];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andIntegerValue:(NSInteger)value {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:key andIntegerValue:value];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andDoubleValue:(double)value {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:key andDoubleValue:value];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andStringValue:(NSString *)value {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:key andStringValue:value];
}

- (void) setUserCustomAttributeToNowWithKey:(NSString *)key {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:key andDateValue:[NSDate date]];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key toDateAsSecondsFromEpoch:(NSTimeInterval)seconds {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:key andDateValue:[NSDate dateWithTimeIntervalSince1970:seconds]];
}

- (void) unsetUserCustomAttributeWithKey:(NSString *)key {
  [[Appboy sharedInstance].user unsetCustomAttributeWithKey:key];
}

- (BOOL) submitFeedback:(NSString *)replyToEmail message:(NSString *)message isReportingABug:(BOOL)isReportingABug {
  return [[Appboy sharedInstance] submitFeedback:replyToEmail message:message isReportingABug:isReportingABug];
}

// ABKSlideUpDelegate methods
- (ABKSlideupShouldDisplaySlideupReturnType) shouldDisplaySlideup:(NSString *)message {
  if (self.unitySlideupGameObjectName == nil) {
    NSLog(@"There is no Unity GameObject registered in AppboyUnityManager to receive slideup message. "
          "Not sending the slideup message to the Unity Player. Please register GameObject name by
          "calling [[AppboyUnityManager sharedInstance] addSlideupListenerWithObjectName: callbackMethodName:].");
    return ABKSlideupShouldIgnore;
  }
  if (self.unitySlideupCallbackFunctionName == nil) {
    NSLog(@"There is no Unity callback method name registered in AppboyUnityManager. Not sending the"
          "slideup message to the Unity Player. Please register callback method name by calling "
          "[[AppboyUnityManager sharedInstance] addSlideupListenerWithObjectName: callbackMethodName:].");
    return ABKSlideupShouldIgnore;
  }
  NSLog(@"Sending a slideup message to %@:%@.", self.unitySlideupGameObjectName, self.unitySlideupCallbackFunctionName);
  
  NSDictionary *slideupMessageDictionary = [NSDictionary dictionaryWithObject:message forKey:@"message"];
  
  if ([NSJSONSerialization isValidJSONObject:slideupMessageDictionary]) {
    NSError *slideupParsingError = nil;
    NSData *data = [NSJSONSerialization dataWithJSONObject:slideupMessageDictionary options:0 error:&slideupParsingError];
    
    if (slideupParsingError == nil) {
      NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
      UnitySendMessage([self.unitySlideupGameObjectName cStringUsingEncoding:NSUTF8StringEncoding],
                       [self.unitySlideupCallbackFunctionName cStringUsingEncoding:NSUTF8StringEncoding],
                       [dataString cStringUsingEncoding:NSUTF8StringEncoding]);
      [dataString release];
    }
    
  }
  
  return ABKSlideupShouldIgnore;
}

- (void) slideupWasTapped {
}

- (void) addSlideupListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  self.unitySlideupGameObjectName = gameObject;
  self.unitySlideupCallbackFunctionName = callbackMethod;
}

- (void) addPushListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  self.unityPushGameObjectName = gameObject;
  self.unityPushCallbackFunctionName = callbackMethod;
}

- (void) registerApplication:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)notification {
  [[Appboy sharedInstance] registerApplication:application didReceiveRemoteNotification:notification];
  
  if (self.unityPushGameObjectName == nil) {
    NSLog(@"There is no Unity GameObject registered in AppboyUnityManager to receive notification message. "
          "Not sending the notification message to the Unity Player. Please register GameObject name "
          "by calling [AppboyUnityManager sharedInstance] addPushListenerWithObjectName: callbackMethodName].");
    return;
  }
  if (self.unityPushCallbackFunctionName == nil) {
    NSLog(@"There is no Unity callback method name registered in AppboyUnityManager. Not sending the "
          "notification message to the Unity Player. Please register calling method name by calling "
          "[AppboyUnityManager sharedInstance] addPushListenerWithObjectName: callbackMethodName].");
    return;
  }
  NSLog(@"Sending a notification received message to %@:%@.", self.unityPushGameObjectName, self.unityPushCallbackFunctionName);
  
  // generate a new dictionary that rearrange the notification elements
  NSMutableDictionary *aps = [NSMutableDictionary dictionaryWithDictionary:[notification objectForKey:@"aps"]];
  
  // check if the object for key alert is a string; if it is, then convert it to a dictionary
  id alert = [aps objectForKey:@"alert"];
  if ([alert isKindOfClass:[NSString class]]) {
    NSDictionary *alertDictionary = [NSDictionary dictionaryWithObject:alert forKey:@"body"];
    [aps setObject:alertDictionary forKey:@"alert"];
  }
  
  // move all other dictionarys other than aps in payload to key extra in aps dictionary
  NSMutableDictionary *extraDictionary = [NSMutableDictionary dictionaryWithDictionary:notification];
  [extraDictionary removeObjectForKey:@"aps"];
  if ([extraDictionary count] > 0) {
    [aps setObject:extraDictionary forKey:@"extra"];
  }
  
  if ([NSJSONSerialization isValidJSONObject:aps]) {
    NSError *pushParsingError = nil;
    NSData *data = [NSJSONSerialization dataWithJSONObject:aps options:0 error:&pushParsingError];
    
    if (pushParsingError == nil) {
      NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
      UnitySendMessage([self.unityPushGameObjectName cStringUsingEncoding:NSUTF8StringEncoding],
                       [self.unityPushCallbackFunctionName cStringUsingEncoding:NSUTF8StringEncoding],
                       [dataString cStringUsingEncoding:NSUTF8StringEncoding]);
      [dataString release];
    }
  }
}

@end
