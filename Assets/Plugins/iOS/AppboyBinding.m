#import "AppboyUnityManager.h"

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

char* convertNSStringToCString(const NSString* nsString);

# pragma mark - Appboy

void _changeUser(const char* userId) {
  [[Appboy sharedInstance] changeUser:GetStringParam(userId)];
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
  [[Appboy sharedInstance] logCustomEvent:GetStringParam(eventName) withProperties:eventProperties];
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
  [[Appboy sharedInstance] logPurchase:GetStringParam(productId)
                            inCurrency:GetStringParam(currencyCode)
                               atPrice:[NSDecimalNumber decimalNumberWithString:GetStringParam(price)]
                          withQuantity:quantity
                         andProperties:(NSDictionary *)purchaseProperties];

}

void _requestGeofences(int latitude, int longitude) {
  [[Appboy sharedInstance] requestGeofencesWithLongitude:longitude
                                                latitude:latitude];
}

void _requestImmediateDataFlush() {
  [[Appboy sharedInstance] requestImmediateDataFlush];
}

void _addAlias(const char* alias, const char* label) {
  [[Appboy sharedInstance].user addAlias:GetStringParam(alias) withLabel:GetStringParam(label)];
}

# pragma mark - ABKUser

void _setUserFirstName(const char* firstName) {
  [Appboy sharedInstance].user.firstName = GetStringParam(firstName);
}

void _setUserLastName(const char* lastName) {
  [Appboy sharedInstance].user.lastName = GetStringParam(lastName);
}

void _setUserPhoneNumber(const char* phoneNumber) {
  [Appboy sharedInstance].user.phone = GetStringParam(phoneNumber);
}

void _setUserAvatarImageURL(const char* imageURL) {
  [Appboy sharedInstance].user.avatarImageURL = GetStringParam(imageURL);
}

void _setUserEmail(const char* email) {
  [Appboy sharedInstance].user.email = GetStringParam(email);
}

void _setUserGender(int gender) {
  [[Appboy sharedInstance].user setGender:(ABKUserGenderType)gender];
}

void _setUserDateOfBirth(int year, int month, int day) {
  NSDateComponents *comps = [[NSDateComponents alloc] init];
  [comps setDay:day];
  [comps setMonth:month];
  [comps setYear:year];
  NSCalendar *gregorian = [[NSCalendar alloc]
                           initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
  NSDate *date = [gregorian dateFromComponents:comps];
  [Appboy sharedInstance].user.dateOfBirth = date;
}

void _setUserCountry(const char* country) {
  [Appboy sharedInstance].user.country = GetStringParam(country);
}

void _setUserHomeCity(const char* city) {
  [Appboy sharedInstance].user.homeCity = GetStringParam(city);
}

void _setUserEmailNotificationSubscriptionType(int emailNotificationSubscriptionType) {
  [[Appboy sharedInstance].user setEmailNotificationSubscriptionType:(ABKNotificationSubscriptionType)emailNotificationSubscriptionType];
}

void _setUserPushNotificationSubscriptionType(int pushNotificationSubscriptionType) {
  [[Appboy sharedInstance].user setPushNotificationSubscriptionType:(ABKNotificationSubscriptionType)pushNotificationSubscriptionType];
}

void _setCustomUserAttributeBool(const char* key, bool value) {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:GetStringParam(key) andBOOLValue:value];
}

void _setCustomUserAttributeInt(const char* key, int value) {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:GetStringParam(key) andIntegerValue:value];
}

void _setCustomUserAttributeFloat(const char* key, float value) {
  NSString *floatString = [NSString stringWithFormat:@"%f", value];
  [[Appboy sharedInstance].user setCustomAttributeWithKey:GetStringParam(key) andDoubleValue:[floatString doubleValue]];
}

void _setCustomUserAttributeString(const char* key, const char* value) {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:GetStringParam(key) andStringValue:GetStringParam(value)];
}

void _setCustomUserAttributeToNow(const char* key) {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:GetStringParam(key) andDateValue:[NSDate date]];
}

void _setCustomUserAttributeToSecondsFromEpoch(const char* key, long seconds) {
  [[Appboy sharedInstance].user setCustomAttributeWithKey:GetStringParam(key) andDateValue:[NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)seconds]];
}

void _unsetCustomUserAttribute(const char* key) {
  [[Appboy sharedInstance].user unsetCustomAttributeWithKey:GetStringParam(key)];
}

void _incrementCustomUserAttribute(const char* key, int incrementValue) {
  [[Appboy sharedInstance].user incrementCustomUserAttribute:GetStringParam(key) by:incrementValue];
}

void _setCustomUserAttributeArray(const char* key, const char* array[], int size) {
  if (array == NULL || array == nil) {
    [[Appboy sharedInstance].user setCustomAttributeArrayWithKey:GetStringParam(key) array:nil];
  } else if (size == 0) {
    [[Appboy sharedInstance].user setCustomAttributeArrayWithKey:GetStringParam(key) array:[NSMutableArray arrayWithCapacity:1]];
  } else {
    NSMutableArray *customAttributeArray = [NSMutableArray arrayWithCapacity:size];
    for (int i = 0; i < size; i ++) {
      NSString *value = GetStringParam(array[i]);
      [customAttributeArray addObject:value];
    }
    [[Appboy sharedInstance].user setCustomAttributeArrayWithKey:GetStringParam(key) array:customAttributeArray];
  }
}

void _addToCustomUserAttributeArray(const char* key, const char* value) {
  [[Appboy sharedInstance].user addToCustomAttributeArrayWithKey:GetStringParam(key) value:GetStringParam(value)];
}

void _removeFromCustomUserAttributeArray(const char* key, const char* value) {
  [[Appboy sharedInstance].user removeFromCustomAttributeArrayWithKey:GetStringParam(key) value:GetStringParam(value)];
}

void _setAttributionData(const char* network, const char* campaign,const char* adgroup, const char* creative) {
  ABKAttributionData *attributionData = [[ABKAttributionData alloc]
                                         initWithNetwork:GetStringParam(network)
                                         campaign:GetStringParam(campaign)
                                         adGroup:GetStringParam(adgroup)
                                         creative:GetStringParam(creative)];
  [[Appboy sharedInstance].user setAttributionData:attributionData];
}

void _addToSubscriptionGroup(const char* groupId) {
  [[Appboy sharedInstance].user addToSubscriptionGroupWithGroupId:GetStringParam(groupId)];
}

void _removeFromSubscriptionGroup(const char* groupId) {
  [[Appboy sharedInstance].user removeFromSubscriptionGroupWithGroupId:GetStringParam(groupId)];
}

# pragma mark - Social Media

void _setUserFacebookData(const char*  facebookId, const char*  firstName, const char*  lastName, const char*  email,
                          const char*  bio, const char*  cityName, int gender, int numberOfFriends, const char* birthday) {
  [[AppboyUnityManager sharedInstance] setUserFacebookData:GetStringParam(facebookId)
                                                 firstName:GetStringParam(firstName)
                                                  lastName:GetStringParam(lastName)
                                                     email:GetStringParam(email)
                                                       bio:GetStringParam(bio)
                                                  cityName:GetStringParam(cityName)
                                                    gender:gender
                                           numberOfFriends:numberOfFriends
                                                  birthday:GetStringParam(birthday)];
}

void _setUserTwitterData(int twitterUserId, const char* twitterHandle, const char* name, const char* description, int followerCount,
                         int followingCount, int tweetCount, const char* profileImageUrl) {
  [[AppboyUnityManager sharedInstance] setUserTwitterData:twitterUserId
                                            twitterHandle:GetStringParam(twitterHandle)
                                                     name:GetStringParam(name)
                                              description:GetStringParam(description)
                                            followerCount:followerCount
                                           followingCount:followingCount
                                               tweetCount:tweetCount
                                          profileImageUrl:GetStringParam(profileImageUrl)];
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

void _setInAppMessageDelegatesEnabled(bool enabled) {
  [[AppboyUnityManager sharedInstance] setInAppMessageDelegatesEnabled:enabled];
}

# pragma mark - News Feed analytics

void _logCardImpression(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardImpression:GetStringParam(cardJSONString)];
}

void _logCardClicked(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardClicked:GetStringParam(cardJSONString)];
}

void _logFeedDisplayed() {
  [[Appboy sharedInstance] logFeedDisplayed];
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

void _logContentCardsDisplayed() {
  [[Appboy sharedInstance] logContentCardsDisplayed];
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
  [Appboy wipeDataAndDisableForAppRun];
}

void _enableSDK() {
  [Appboy requestEnableSDKOnNextAppRun];
}

void _disableSDK() {
  [Appboy disableSDK];
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
  NSString* deviceId = [[Appboy sharedInstance] getDeviceId];
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
