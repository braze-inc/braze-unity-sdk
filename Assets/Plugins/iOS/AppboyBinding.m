#import "AppboyUnityManager.h"

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

void _logCustomEvent(const char* eventName, const char* properties) {
  NSMutableDictionary *eventProperties = [NSMutableDictionary dictionaryWithCapacity:1];
  if (properties != NULL && properties != nil) {
    NSError *jsonError;
    NSData *objectData = [GetStringParam(properties) dataUsingEncoding:NSUTF8StringEncoding];
    eventProperties = [NSJSONSerialization JSONObjectWithData:objectData
                                                      options:NSJSONReadingMutableContainers
                                                        error:&jsonError];
  }
  [[AppboyUnityManager sharedInstance] logCustomEvent:GetStringParam(eventName) withProperties:eventProperties];
}

void _changeUser(const char* userId) {
  [[AppboyUnityManager sharedInstance] changeUser:GetStringParam(userId)];
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
  [[AppboyUnityManager sharedInstance] logPurchase:GetStringParam(productId)
                                        inCurrency:GetStringParam(currencyCode)
                                           atPrice:GetStringParam(price)
                                      withQuantity:quantity
                                    withProperties:purchaseProperties];
}

void _setUserFirstName(const char* firstName) {
  [[AppboyUnityManager sharedInstance] setUserFirstName:GetStringParam(firstName)];
}

void _setUserLastName(const char* lastName) {
  [[AppboyUnityManager sharedInstance] setUserLastName:GetStringParam(lastName)];
}

void _setUserPhoneNumber(const char* phoneNumber) {
  [[AppboyUnityManager sharedInstance] setUserPhoneNumber:GetStringParam(phoneNumber)];
}

void _setUserAvatarImageURL(const char* imageURL) {
  [[AppboyUnityManager sharedInstance] setUserAvatarImageURL:GetStringParam(imageURL)];
}

void _setUserEmail(const char* email) {
  [[AppboyUnityManager sharedInstance] setUserEmail:GetStringParam(email)];
}

void _setUserBio(const char* bio) {
  [[AppboyUnityManager sharedInstance] setUserBio:GetStringParam(bio)];
}

void _setUserGender(int gender) {
  [[AppboyUnityManager sharedInstance] setUserGender:gender];
}

void _setUserDateOfBirth(int year, int month, int day) {
  [[AppboyUnityManager sharedInstance] setUserDateOfBirthToYear:year Month:month andDay:day];
}

void _setUserCountry(const char* country) {
  [[AppboyUnityManager sharedInstance] setUserCountry:GetStringParam(country)];
}

void _setUserHomeCity(const char* city) {
  [[AppboyUnityManager sharedInstance] setUserHomeCity:GetStringParam(city)];
}

void _setUserIsSubscribedToEmails(bool isSubscribedToEmails) {
  [[AppboyUnityManager sharedInstance] setUserIsSubscribedToEmails:isSubscribedToEmails];
}

void _setUserEmailNotificationSubscriptionType(int emailNotificationSubscriptionType) {
  [[AppboyUnityManager sharedInstance] setUserEmailNotificationSubscriptionType:emailNotificationSubscriptionType];
}

void _setUserPushNotificationSubscriptionType(int pushNotificationSubscriptionType) {
  [[AppboyUnityManager sharedInstance] setUserPushNotificationSubscriptionType:pushNotificationSubscriptionType];
}

void _setCustomUserAttributeBool(const char* key, bool val) {
  [[AppboyUnityManager sharedInstance] setUserCustomAttributeWithKey:GetStringParam(key) andBOOLValue:val];
}

void _setCustomUserAttributeInt(const char* key, int val) {
  [[AppboyUnityManager sharedInstance] setUserCustomAttributeWithKey:GetStringParam(key) andIntegerValue:val];
}

void _setCustomUserAttributeFloat(const char* key, float val) {
  NSString *floatString = [NSString stringWithFormat:@"%f", val];
  [[AppboyUnityManager sharedInstance] setUserCustomAttributeWithKey:GetStringParam(key) andDoubleValue:[floatString doubleValue]];
}

void _setCustomUserAttributeString(const char* key, const char* val) {
  [[AppboyUnityManager sharedInstance] setUserCustomAttributeWithKey:GetStringParam(key) andStringValue:GetStringParam(val)];
}

void _setCustomUserAttributeToNow(const char* key) {
  [[AppboyUnityManager sharedInstance] setUserCustomAttributeToNowWithKey:GetStringParam(key)];
}

void _setCustomUserAttributeToSecondsFromEpoch(const char* key, long seconds) {
  [[AppboyUnityManager sharedInstance] setUserCustomAttributeWithKey:GetStringParam(key) toDateAsSecondsFromEpoch:(NSTimeInterval)seconds];
}

void _unsetCustomUserAttribute(const char* key) {
  [[AppboyUnityManager sharedInstance] unsetUserCustomAttributeWithKey:GetStringParam(key)];
}

void _incrementCustomUserAttribute(const char* key, int incrementValue) {
  [[AppboyUnityManager sharedInstance] incrementCustomUserAttributeWithKey:GetStringParam(key) by:incrementValue];
}

void _setCustomUserAttributeArray(const char* key, const char* array[], int size) {
  if (array == NULL || array == nil) {
    [[AppboyUnityManager sharedInstance] setCustomAttributeArrayWithKey:GetStringParam(key)
                                                                  array:nil];
  } else if (size == 0) {
    [[AppboyUnityManager sharedInstance] setCustomAttributeArrayWithKey:GetStringParam(key)
                                                                  array:[NSMutableArray arrayWithCapacity:1]];
  } else {
    NSMutableArray *customAttributeArray = [NSMutableArray arrayWithCapacity:size];
    for (int i = 0; i < size; i ++) {
      NSString *value = GetStringParam(array[i]);
      [customAttributeArray addObject:value];
    }
    [[AppboyUnityManager sharedInstance] setCustomAttributeArrayWithKey:GetStringParam(key)
                                                                  array:customAttributeArray];
  }
}

void _addToCustomUserAttributeArray(const char* key, const char* value) {
  [[AppboyUnityManager sharedInstance] addToCustomAttributeArrayWithKey:GetStringParam(key) value:GetStringParam(value)];
}

void _removeFromCustomUserAttributeArray(const char* key, const char* value) {
  [[AppboyUnityManager sharedInstance] removeFromCustomAttributeArrayWithKey:GetStringParam(key) value:GetStringParam(value)];
}


void _setUserFacebookData(const char*  facebookId, const char*  firstName, const char*  lastName, const char*  email,
                          const char*  bio, const char*  cityName, int gender, int numberOfFriends, const char* birthday) {
  [[AppboyUnityManager sharedInstance] setUserFacebookData:GetStringParam(facebookId) firstName:GetStringParam(firstName) lastName:GetStringParam(lastName) email:GetStringParam(email)
                                                       bio:GetStringParam(bio) cityName:GetStringParam(cityName) gender:gender numberOfFriends:numberOfFriends birthday:GetStringParam(birthday)];
}

void _setUserTwitterData(int twitterUserId, const char* twitterHandle, const char* name, const char* description, int followerCount,
                         int followingCount, int tweetCount, const char* profileImageUrl) {
  [[AppboyUnityManager sharedInstance] setUserTwitterData:twitterUserId twitterHandle:GetStringParam(twitterHandle) name:GetStringParam(name) description:GetStringParam(description) followerCount:followerCount followingCount:followingCount tweetCount:tweetCount profileImageUrl:GetStringParam(profileImageUrl)];
}

void _logInAppMessageClicked(const char* inAppMessageJSONString) {
  [[AppboyUnityManager sharedInstance] logInAppMessageClicked:GetStringParam(inAppMessageJSONString)];
}

void _logInAppMessageButtonClicked(const char* inAppMessageJSONString, int buttonID) {
  [[AppboyUnityManager sharedInstance] logInAppMessageButtonClicked:GetStringParam(inAppMessageJSONString) withButtonID:buttonID];
}

void _logInAppMessageImpression(const char* inAppMessageJSONString) {
  [[AppboyUnityManager sharedInstance] logInAppMessageImpression:GetStringParam(inAppMessageJSONString)];
}

void _logCardImpression(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardImpression:GetStringParam(cardJSONString)];
}

void _logCardClicked(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardClicked:GetStringParam(cardJSONString)];
}

void _requestFeedRefresh() {
  [[AppboyUnityManager sharedInstance] requestFeedRefresh];
}

void _requestFeedRefreshFromCache() {
  [[AppboyUnityManager sharedInstance] requestFeedFromCache:nil];
}

void _logContentCardImpression(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logContentCardImpression:GetStringParam(cardJSONString)];
}

void _logContentCardClicked(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logContentCardClicked:GetStringParam(cardJSONString)];
}

void _logFeedDisplayed() {
  [[AppboyUnityManager sharedInstance] logFeedDisplayed];
}

void _requestContentCardsRefresh() {
  [[AppboyUnityManager sharedInstance] requestContentCardsRefresh];
}

void _requestContentCardsRefreshFromCache() {
  [[AppboyUnityManager sharedInstance] requestContentCardsFromCache:nil];
}

void _logContentCardsDisplayed() {
  [[AppboyUnityManager sharedInstance] logContentCardsDisplayed];
}

void _displayNextInAppMessage(bool withDelegate) {
  [[AppboyUnityManager sharedInstance] displayNextInAppMessageWithDelegate:withDelegate];
}

void _wipeData() {
  [AppboyUnityManager wipeDataAndDisableForAppRun];
}

void _enableSDK() {
  [AppboyUnityManager requestEnableSDKOnNextAppRun];
}

void _disableSDK() {
  [AppboyUnityManager disableSDK];
}

void _setAttributionData(const char* network, const char* campaign,const char* adgroup, const char* creative) {
  [[AppboyUnityManager sharedInstance] setAttributionData:GetStringParam(network) campaign:GetStringParam(campaign) adgroup:GetStringParam(adgroup) creative:GetStringParam(creative)];
}
