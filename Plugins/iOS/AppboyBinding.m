#import "AppboyUnityManager.h"

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

void _logCustomEvent(const char* eventName) {
	[[AppboyUnityManager sharedInstance] logCustomEvent:GetStringParam(eventName)];
}

void _changeUser(const char* userId) {
	[[AppboyUnityManager sharedInstance] changeUser:GetStringParam(userId)];
}

void _logPurchase(const char* productId, const char* currencyCode, const char* price) {
    [[AppboyUnityManager sharedInstance] logPurchase:GetStringParam(productId) inCurrency:GetStringParam(currencyCode) atPrice:GetStringParam(price)];
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

void _submitFeedback(const char* replyToEmail, const char* message, bool isReportingABug) {
  [[AppboyUnityManager sharedInstance] submitFeedback:GetStringParam(replyToEmail) message:GetStringParam(message) isReportingABug:isReportingABug];
}

void _logSlideupClicked(const char* slideupJSONString) {
  [[AppboyUnityManager sharedInstance] logSlideupClicked:GetStringParam(slideupJSONString)];
}

void _logSlideupImpression(const char* slideupJSONString) {
  [[AppboyUnityManager sharedInstance] logSlideupImpression:GetStringParam(slideupJSONString)];
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
