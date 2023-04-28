#import "AppboyUnityManager.h"

/// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

char* convertNSStringToCString(const NSString* nsString);

# pragma mark - Appboy

void _changeUser(const char* userId, const char* sdkAuthSignature) {
  NSString *signature = sdkAuthSignature != NULL ? GetStringParam(sdkAuthSignature) : nil;
  [[AppboyUnityManager sharedInstance].braze changeUser:GetStringParam(userId)
                                       sdkAuthSignature:signature];
}

void _setSdkAuthenticationSignature(const char* sdkAuthSignature) {
  [[AppboyUnityManager sharedInstance].braze setSDKAuthenticationSignature:GetStringParam(sdkAuthSignature)];
}

void _logCustomEvent(const char* eventName, const char* properties) {
  NSMutableDictionary *eventProperties = [NSMutableDictionary dictionaryWithCapacity:1];
  if (properties != NULL && properties != nil) {
    NSError *jsonError;
    NSData *objectData = [GetStringParam(properties) dataUsingEncoding:NSUTF8StringEncoding];
    eventProperties = [NSJSONSerialization JSONObjectWithData:objectData
                                                      options:NSJSONReadingMutableContainers
                                                        error:&jsonError];
  }
  [[AppboyUnityManager sharedInstance].braze logCustomEvent:GetStringParam(eventName)
                                                 properties:eventProperties];
}

void _logPurchase(const char* productId, const char* currencyCode, const char* price, int quantity, const char* properties) {
  NSMutableDictionary *purchaseProperties = [NSMutableDictionary dictionaryWithCapacity:1];
  if (properties != NULL && properties != nil) {
    NSError *jsonError;
    NSData *objectData = [GetStringParam(properties) dataUsingEncoding:NSUTF8StringEncoding];
    purchaseProperties = [NSJSONSerialization JSONObjectWithData:objectData
                                                         options:NSJSONReadingMutableContainers
                                                           error:&jsonError];
  }
  [[AppboyUnityManager sharedInstance].braze logPurchase:GetStringParam(productId)
                                                currency:GetStringParam(currencyCode)
                                                   price:[GetStringParam(price) doubleValue]
                                                quantity:quantity
                                              properties:(NSDictionary *)purchaseProperties];

}

void _requestGeofences(int latitude, int longitude) {
  [[AppboyUnityManager sharedInstance].braze requestGeofencesWithLatitude:longitude
                                                                longitude:latitude];
}

void _requestImmediateDataFlush() {
  [[AppboyUnityManager sharedInstance].braze requestImmediateDataFlush];
}

void _addAlias(const char* alias, const char* label) {
  [[AppboyUnityManager sharedInstance].braze.user addAlias:GetStringParam(alias)
                                                     label:GetStringParam(label)];
}

# pragma mark - Braze.User

void _setUserFirstName(const char* firstName) {
  [[AppboyUnityManager sharedInstance].braze.user setFirstName:GetStringParam(firstName)];
}

void _setUserLastName(const char* lastName) {
  [[AppboyUnityManager sharedInstance].braze.user setLastName:GetStringParam(lastName)];
}

void _setUserPhoneNumber(const char* phoneNumber) {
  [[AppboyUnityManager sharedInstance].braze.user setPhoneNumber:GetStringParam(phoneNumber)];
}

void _setUserEmail(const char* email) {
  [[AppboyUnityManager sharedInstance].braze.user setEmail:GetStringParam(email)];
}

void _setUserGender(int gender) {
  BRZUserGender *userGender;
  switch (gender) {
    case 0:
      userGender = BRZUserGender.male;
      break;
    case 1:
      userGender = BRZUserGender.female;
      break;
    case 2:
      userGender = BRZUserGender.other;
      break;
    case 3:
      userGender = BRZUserGender.unknown;
      break;
    case 4:
      userGender = BRZUserGender.notApplicable;
      break;
    case 5:
      userGender = BRZUserGender.preferNotToSay;
      break;
  }
  [[AppboyUnityManager sharedInstance].braze.user setGender:userGender];
}

void _setUserDateOfBirth(int year, int month, int day) {
  NSDateComponents *comps = [[NSDateComponents alloc] init];
  [comps setDay:day];
  [comps setMonth:month];
  [comps setYear:year];
  NSCalendar *gregorian = [[NSCalendar alloc]
                           initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
  NSDate *date = [gregorian dateFromComponents:comps];
  [[AppboyUnityManager sharedInstance].braze.user setDateOfBirth:date];
}

void _setUserCountry(const char* country) {
  [[AppboyUnityManager sharedInstance].braze.user setCountry:GetStringParam(country)];
}

void _setUserHomeCity(const char* city) {
  [[AppboyUnityManager sharedInstance].braze.user setHomeCity:GetStringParam(city)];
}

void _setUserEmailNotificationSubscriptionType(int emailNotificationSubscriptionType) {
  [[AppboyUnityManager sharedInstance].braze.user setEmailSubscriptionState:(BRZUserSubscriptionState)emailNotificationSubscriptionType];
}

void _setUserPushNotificationSubscriptionType(int pushNotificationSubscriptionType) {
  [[AppboyUnityManager sharedInstance].braze.user setPushNotificationSubscriptionState:(BRZUserSubscriptionState)pushNotificationSubscriptionType];
}

void _setCustomUserAttributeBool(const char* key, bool value) {
  [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeWithKey:GetStringParam(key)
                                                                  boolValue:value];
}

void _setCustomUserAttributeInt(const char* key, int value) {
  [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeWithKey:GetStringParam(key)
                                                                   intValue:value];
}

void _setCustomUserAttributeFloat(const char* key, float value) {
  [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeWithKey:GetStringParam(key)
                                                                doubleValue:(double)value];
}

void _setCustomUserAttributeString(const char* key, const char* value) {
  [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeWithKey:GetStringParam(key)
                                                                stringValue:GetStringParam(value)];
}

void _setCustomUserAttributeToNow(const char* key) {
  [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeWithKey:GetStringParam(key)
                                                                  dateValue:[NSDate date]];
}

void _setCustomUserAttributeToSecondsFromEpoch(const char* key, long seconds) {
  NSDate *date = [NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)seconds];
  [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeWithKey:GetStringParam(key)
                                                                  dateValue:date];
}

void _unsetCustomUserAttribute(const char* key) {
  [[AppboyUnityManager sharedInstance].braze.user unsetCustomAttributeWithKey:GetStringParam(key)];
}

void _incrementCustomUserAttribute(const char* key, int incrementValue) {
  [[AppboyUnityManager sharedInstance].braze.user incrementCustomUserAttribute:GetStringParam(key)
                                                                            by:incrementValue];
}

void _setCustomUserAttributeArray(const char* key, const char* array[], int size) {
  if (array == NULL || array == nil) {
    [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeArrayWithKey:GetStringParam(key)
                                                                             array:nil];
  } else if (size == 0) {
    [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeArrayWithKey:GetStringParam(key)
                                                                             array:[NSMutableArray arrayWithCapacity:1]];
  } else {
    NSMutableArray *customAttributeArray = [NSMutableArray arrayWithCapacity:size];
    for (int i = 0; i < size; i++) {
      [customAttributeArray addObject:GetStringParam(array[i])];
    }
    [[AppboyUnityManager sharedInstance].braze.user setCustomAttributeArrayWithKey:GetStringParam(key)
                                                                             array:customAttributeArray];
  }
}

void _addToCustomUserAttributeArray(const char* key, const char* value) {
  [[AppboyUnityManager sharedInstance].braze.user addToCustomAttributeArrayWithKey:GetStringParam(key)
                                                                             value:GetStringParam(value)];
}

void _removeFromCustomUserAttributeArray(const char* key, const char* value) {
  [[AppboyUnityManager sharedInstance].braze.user removeFromCustomAttributeArrayWithKey:GetStringParam(key)
                                                                                  value:GetStringParam(value)];
}

void _setAttributionData(const char* network, const char* campaign,const char* adgroup, const char* creative) {
  BRZUserAttributionData *attributionData =
      [[BRZUserAttributionData alloc] initWithNetwork:GetStringParam(network)
                                             campaign:GetStringParam(campaign)
                                              adGroup:GetStringParam(adgroup)
                                             creative:GetStringParam(creative)];
  [[AppboyUnityManager sharedInstance].braze.user setAttributionData:attributionData];
}

void _addToSubscriptionGroup(const char* groupId) {
  [[AppboyUnityManager sharedInstance].braze.user addToSubscriptionGroupWithGroupId:GetStringParam(groupId)];
}

void _removeFromSubscriptionGroup(const char* groupId) {
  [[AppboyUnityManager sharedInstance].braze.user removeFromSubscriptionGroupWithGroupId:GetStringParam(groupId)];
}

void _setUserLastKnownLocation(double latitude, double longitude, double altitude, double accuracy, double verticalAccuracy) {
  [[AppboyUnityManager sharedInstance].braze.user setLastKnownLocationWithLatitude:latitude
                                                                         longitude:longitude
                                                                          altitude:altitude
                                                                horizontalAccuracy:accuracy
                                                                  verticalAccuracy:verticalAccuracy];
}

void _setUserLastKnownLocationSimple(double latitude, double longitude, double accuracy) {
  [[AppboyUnityManager sharedInstance].braze.user setLastKnownLocationWithLatitude:latitude
                                                                         longitude:longitude
                                                                horizontalAccuracy:accuracy];
}

# pragma mark - In-app message analytics

void _logInAppMessageImpression(const char* inAppMessageJSONString) {
  [[AppboyUnityManager sharedInstance] logInAppMessageImpression:GetStringParam(inAppMessageJSONString)];
}

void _logInAppMessageClicked(const char* inAppMessageJSONString) {
  [[AppboyUnityManager sharedInstance] logInAppMessageClicked:GetStringParam(inAppMessageJSONString)];
}

void _logInAppMessageButtonClicked(const char* inAppMessageJSONString, int buttonID) {
  [[AppboyUnityManager sharedInstance] logInAppMessageButtonClicked:GetStringParam(inAppMessageJSONString) withButtonID:buttonID];
}

# pragma mark - In-app message display

void _displayNextInAppMessage() {
  [[AppboyUnityManager sharedInstance] displayNextInAppMessage];
}

void _setInAppMessageDisplayAction(int actionType) {
  [[AppboyUnityManager sharedInstance] setInAppMessageDisplayAction:actionType];
}

# pragma mark - News Feed analytics

void _logCardImpression(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardImpression:GetStringParam(cardJSONString)];
}

void _logCardClicked(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardClicked:GetStringParam(cardJSONString)];
}

void _logFeedDisplayed() {
  NSLog(@"Logging the News Feed displayed event is not needed on iOS.");
}

# pragma mark - News Feed refresh

void _requestFeedRefresh() {
  [[AppboyUnityManager sharedInstance] requestFeedRefresh];
}

void _requestFeedRefreshFromCache() {
  [[AppboyUnityManager sharedInstance] requestFeedFromCache:nil];
}

# pragma mark - Content Card analytics

void _logContentCardImpression(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logContentCardImpression:GetStringParam(cardJSONString)];
}

void _logContentCardClicked(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logContentCardClicked:GetStringParam(cardJSONString)];
}

void _logContentCardDismissed(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logContentCardDismissed:GetStringParam(cardJSONString)];
}

void _displayContentCards() {
  [[AppboyUnityManager sharedInstance] displayContentCards];
}

# pragma mark - Content Card refresh

void _requestContentCardsRefresh() {
  [[AppboyUnityManager sharedInstance] requestContentCardsRefresh];
}

void _requestContentCardsRefreshFromCache() {
  [[AppboyUnityManager sharedInstance] requestContentCardsFromCache:nil];
}

# pragma mark - Data management

void _wipeData() {
  [[AppboyUnityManager sharedInstance].braze wipeData];
}

void _enableSDK() {
  [AppboyUnityManager sharedInstance].braze.enabled = YES;
}

void _disableSDK() {
  [AppboyUnityManager sharedInstance].braze.enabled = NO;
}

# pragma mark - Push

void _registerAppboyPushMessages(const char* tokenBase64) {
  [[AppboyUnityManager sharedInstance] registerPushTokenBase64:GetStringParam(tokenBase64)];
}

void _promptUserForPushPermissions(bool provisional) {
  [[AppboyUnityManager sharedInstance] registerForRemoteNotificationsWithProvisional:provisional];
}

# pragma mark - Device Id

char* _getInstallTrackingId() {
  NSString* deviceId = [AppboyUnityManager sharedInstance].braze.deviceId;
  return convertNSStringToCString(deviceId);
}

# pragma mark - Gameobject callbacks

void _configureListener(int messageType, const char* gameobject, const char* method) {
  [[AppboyUnityManager sharedInstance] configureListenerFor:messageType withGameObject:GetStringParam(gameobject) withMethod:GetStringParam(method)];
}

# pragma mark - Internal

char* convertNSStringToCString(const NSString* nsString) {
  if (nsString == NULL) {
    return NULL;
  }

  const char* nsStringUtf8 = [nsString UTF8String];
  char* cString = (char*)malloc(strlen(nsStringUtf8) + 1);
  strcpy(cString, nsStringUtf8);

  return cString;
}

void _configureInternalListener(int messageType) {
  [[AppboyUnityManager sharedInstance] configureInternalListenerFor:messageType];
}
