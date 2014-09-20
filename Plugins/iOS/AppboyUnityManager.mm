#import "AppboyUnityManager.h"
#import "AppboyKit.h"
#import "ABKFeedbackViewControllerModalContext.h"
#import "ABKFeedViewControllerModalContext.h"
#import "ABKCard.h"

@interface ABKCard(proxy)
- (NSMutableDictionary *) proxyForJson;
@end

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

- (void) logPurchase:(NSString *)productId inCurrency:(NSString *)currencyCode 
             atPrice:(NSString *)price withQuantity:(NSUInteger)quantity {
  [[Appboy sharedInstance] logPurchase:productId 
                            inCurrency:currencyCode 
                               atPrice:[NSDecimalNumber decimalNumberWithString:price] 
                          withQuantity:quantity];
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

- (void) setCustomAttributeArrayWithKey:(NSString *)key array:(NSArray *)valueArray {
  [[Appboy sharedInstance].user setCustomAttributeArrayWithKey:key array:valueArray];
}

- (void) addToCustomAttributeArrayWithKey:(NSString *)key value:(NSString *)value {
  [[Appboy sharedInstance].user addToCustomAttributeArrayWithKey:key value:value];
}

- (void) removeFromCustomAttributeArrayWithKey:(NSString *)key value:(NSString *)value {
  [[Appboy sharedInstance].user removeFromCustomAttributeArrayWithKey:key value:value];
}

- (BOOL) submitFeedback:(NSString *)replyToEmail message:(NSString *)message isReportingABug:(BOOL)isReportingABug {
  return [[Appboy sharedInstance] submitFeedback:replyToEmail message:message isReportingABug:isReportingABug];
}

// ABKSlideUpDelegate methods
- (BOOL) onSlideupReceived:(ABKSlideup *)slideup {
  if (self.unitySlideupGameObjectName == nil) {
    NSLog(@"Not sending a Unity message in response to a slideup message being received because "
          "no message receiver was defined. To implement custom behavior in response to a slideup"
          "message being received, you must register a GameObject and method name with Appboy "
          "by calling [[AppboyUnityManager sharedInstance] addSlideupListenerWithObjectName: callbackMethodName:].");
    return YES;
  }
  if (self.unitySlideupCallbackFunctionName == nil) {
    NSLog(@"Not sending a Unity message in response to a slideup message being received because "
          "no method name was defined for the %@. To implement custom behavior in response to a slideup "
          "message being received, you must register a GameObject and method name with Appboy "
          "[[AppboyUnityManager sharedInstance] addSlideupListenerWithObjectName: callbackMethodName:].",
          self.unitySlideupGameObjectName);
    return YES;
  }
  NSLog(@"Sending a slideup message to %@:%@.", self.unitySlideupGameObjectName, self.unitySlideupCallbackFunctionName);
  
  NSData *slideupData = [slideup serializeToData];
  NSString *dataString = [[NSString alloc] initWithData:slideupData encoding:NSUTF8StringEncoding];
  UnitySendMessage([self.unitySlideupGameObjectName cStringUsingEncoding:NSUTF8StringEncoding],
                   [self.unitySlideupCallbackFunctionName cStringUsingEncoding:NSUTF8StringEncoding],
                   [dataString cStringUsingEncoding:NSUTF8StringEncoding]);
  [dataString release];
  return YES;
}

// Internal methods for communications between Appboy and Unity
- (void) addSlideupListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  self.unitySlideupGameObjectName = gameObject;
  self.unitySlideupCallbackFunctionName = callbackMethod;
}

- (void) addFeedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  self.unityFeedGameObjectName = gameObject;
  self.unityFeedCallbackFunctionName = callbackMethod;
}

- (void) addPushReceivedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  self.unityPushReceivedGameObjectName = gameObject;
  self.unityPushReceivedCallbackFunctionName = callbackMethod;
}

- (void) addPushOpenedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  self.unityPushOpenedGameObjectName = gameObject;
  self.unityPushOpenedCallbackFunctionName = callbackMethod;
}

// Push related  methods
- (void) registerApplication:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)notification {
  [[Appboy sharedInstance] registerApplication:application didReceiveRemoteNotification:notification];
  
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
      
      if (application.applicationState == UIApplicationStateActive) {
        if (self.unityPushReceivedGameObjectName == nil) {
          NSLog(@"Not sending a Unity message in response to a push notification being received because "
                "no message receiver was defined. To implement custom behavior in response to a push "
                "notification being received, you must register a GameObject and method name with Appboy "
                "by calling [AppboyUnityManager sharedInstance] addPushReceivedListenerWithObjectName: callbackMethodName].");
          return;
        }
        if (self.unityPushReceivedCallbackFunctionName == nil) {
          NSLog(@"Not sending a Unity message in response to a push notification being received because "
                "no method name was defined for the %@. To implement custom behavior in response to a push "
                "notification being received, you must register a GameObject and method name with Appboy "
                "by calling [AppboyUnityManager sharedInstance] addPushReceivedListenerWithObjectName: callbackMethodName].",
                self.unityPushReceivedGameObjectName);
          return;
        }
        NSLog(@"Sending a notification received message to %@:%@.", self.unityPushReceivedGameObjectName, self.unityPushReceivedCallbackFunctionName);
        
        UnitySendMessage([self.unityPushReceivedGameObjectName cStringUsingEncoding:NSUTF8StringEncoding],
                         [self.unityPushReceivedCallbackFunctionName cStringUsingEncoding:NSUTF8StringEncoding],
                         [dataString cStringUsingEncoding:NSUTF8StringEncoding]);
      } else {
        if (self.unityPushOpenedGameObjectName == nil) {
          NSLog(@"Not sending a Unity message in response to a push notification being opened because "
                "no message receiver was defined. To implement custom behavior in response to a push "
                "notification being opened, you must register a GameObject and method name with Appboy "
                "by calling [AppboyUnityManager sharedInstance] addPushOpenedListenerWithObjectName: callbackMethodName].");
          return;
        }
        if (self.unityPushOpenedCallbackFunctionName == nil) {
          NSLog(@"Not sending a Unity message in response to a push notification being opened because "
                "no method name was defined for the %@. To implement custom behavior in response to a push "
                "notification being opened, you must register a GameObject and method name with Appboy "
                "[AppboyUnityManager sharedInstance] addPushOpenedListenerWithObjectName: callbackMethodName].",
                self.unityPushOpenedGameObjectName);
          return;
        }
        NSLog(@"Sending a notification opened message to %@:%@.", self.unityPushOpenedGameObjectName, self.unityPushOpenedCallbackFunctionName);
        
        UnitySendMessage([self.unityPushOpenedGameObjectName cStringUsingEncoding:NSUTF8StringEncoding],
                         [self.unityPushOpenedCallbackFunctionName cStringUsingEncoding:NSUTF8StringEncoding],
                         [dataString cStringUsingEncoding:NSUTF8StringEncoding]);
      }
      
      [dataString release];
    }
  }
}

- (void) logSlideupClicked:(NSString *)slideupJSONString {
  ABKSlideup *slideup = [[ABKSlideup alloc] init];
  [self getSlideupFromString:slideupJSONString withSlideup:slideup];
  [slideup logSlideupClicked];
  [slideup release];
}

- (void) logSlideupImpression:(NSString *)slideupJSONString {
  ABKSlideup *slideup = [[ABKSlideup alloc] init];
  [self getSlideupFromString:slideupJSONString withSlideup:slideup];
  [slideup logSlideupImpression];
  [slideup release];
}

- (void) getSlideupFromString:(NSString *)slideupJSONString withSlideup:(ABKSlideup *)slideup {
  NSData *slideupData = [slideupJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedSlideupDict = [NSJSONSerialization JSONObjectWithData:slideupData options:NSJSONReadingMutableContainers error:&e];
  [slideup setValuesForKeysWithDictionary:deserializedSlideupDict];
}

- (void) dealloc {
  [_unitySlideupGameObjectName release];
  [_unitySlideupCallbackFunctionName release];
  [_unityPushReceivedGameObjectName release];
  [_unityPushReceivedCallbackFunctionName release];
  [_unityPushOpenedGameObjectName release];
  [_unityPushOpenedCallbackFunctionName release];
  [super dealloc];
}

- (void) logCardImpression:(NSString *)cardJSONString {
  NSData *cardData = [cardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedCardDict = [NSJSONSerialization JSONObjectWithData:cardData options:NSJSONReadingMutableContainers error:&e];
  ABKCard *card = [[ABKCard deserializeCardFromDictionary:deserializedCardDict] retain];
  [card logCardImpression];
  [card release];
}

- (void) logCardClicked:(NSString *)cardJSONString {
  NSData *cardData = [cardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedCardDict = [NSJSONSerialization JSONObjectWithData:cardData options:NSJSONReadingMutableContainers error:&e];
  ABKCard *card = [[ABKCard deserializeCardFromDictionary:deserializedCardDict] retain];
  [card logCardClicked];
  [card release];
}

- (void) requestFeedRefresh {
  [[NSNotificationCenter defaultCenter] addObserver:self
                                           selector:@selector(requestFeedFromCache:)
                                               name:ABKFeedUpdatedNotification
                                             object:nil];
  [[Appboy sharedInstance] requestFeedRefresh];
}

- (void) requestFeedFromCache:(NSNotification *)notification {
  BOOL fromOfflineStorage = YES;
  if (notification != nil) {
    [[NSNotificationCenter defaultCenter] removeObserver:self name:ABKFeedUpdatedNotification object:nil];
    fromOfflineStorage = NO;
  }
  if (self.unityFeedGameObjectName == nil) {
    NSLog(@"Not sending a Unity message in response to a feed cards requrest because "
          "no message receiver was defined. To implement custom behavior in response to a slideup"
          "message being received, you must register a GameObject and method name with Appboy "
          "by calling [[AppboyUnityManager sharedInstance] addSlideupListenerWithObjectName: callbackMethodName:].");
  }
  if (self.unityFeedCallbackFunctionName == nil) {
    NSLog(@"Not sending a Unity message in response to a slideup message being received because "
          "no method name was defined for the %@. To implement custom behavior in response to a slideup "
          "message being received, you must register a GameObject and method name with Appboy "
          "[[AppboyUnityManager sharedInstance] addSlideupListenerWithObjectName: callbackMethodName:].",
          self.unityFeedGameObjectName);
  }
  NSLog(@"Sending cards to %@:%@.", self.unityFeedGameObjectName, self.unityFeedCallbackFunctionName);
  
  // Parse cards to
  NSMutableArray *cardsDictionaryArray = [NSMutableArray arrayWithCapacity:1];
  NSArray *cards = [[Appboy sharedInstance].feedController getCardsInCategories:ABKCardCategoryAll];
  for (ABKCard *card in cards) {

    NSMutableDictionary *cardDictionary = [card proxyForJson];
    [cardsDictionaryArray addObject:cardDictionary];
  }
  
  NSTimeInterval timestamp = [[Appboy sharedInstance].feedController.lastUpdate timeIntervalSince1970];
  NSDictionary *feedDictionary = @{@"mFeedCards" : cardsDictionaryArray,
                                   @"mTimestamp" : [NSNumber numberWithDouble:timestamp],
                                   @"mFromOfflineStorage" : [NSNumber numberWithBool:fromOfflineStorage]};
  NSError *error;
  NSString *feedString;
  NSData *feedData = [NSJSONSerialization dataWithJSONObject:feedDictionary
                                                     options:0
                                                       error:&error];
  if (!feedData) {
    NSLog(@"Got an error %@ when parsing Appboy feed to json data.", error);
  } else {
    feedString = [[NSString alloc] initWithData:feedData encoding:NSUTF8StringEncoding];
  }
  if (feedString != nil) {
    NSLog(@"the message that's going to pass to Unity is: \n %@", feedString);
    UnitySendMessage([self.unityFeedGameObjectName cStringUsingEncoding:NSUTF8StringEncoding],
                     [self.unityFeedCallbackFunctionName cStringUsingEncoding:NSUTF8StringEncoding],
                     [feedString cStringUsingEncoding:NSUTF8StringEncoding]);
    [feedString release];
  }
}

@end
