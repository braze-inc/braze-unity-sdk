#import "AppboyUnityManager.h"

/// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

char* convertNSStringToCString(const NSString* nsString);
BRZTrackingProperty* convertTrackingProperty(const NSString* propertyString);
NSDictionary<NSString *, BRZTrackingProperty *> *getTrackingPropertyMap() {
    static NSDictionary<NSString *, BRZTrackingProperty *> *trackingPropertyMap = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        trackingPropertyMap = @{
            @"all_custom_attributes": BRZTrackingProperty.allCustomAttributes,
            @"all_custom_events": BRZTrackingProperty.allCustomEvents,
            @"analytics_events": BRZTrackingProperty.analyticsEvents,
            @"attribution_data": BRZTrackingProperty.attributionData,
            @"country": BRZTrackingProperty.country,
            @"dob": BRZTrackingProperty.dateOfBirth,
            @"device_data": BRZTrackingProperty.deviceData,
            @"email": BRZTrackingProperty.email,
            @"email_subscription_state": BRZTrackingProperty.emailSubscriptionState,
            @"everything": BRZTrackingProperty.everything,
            @"first_name": BRZTrackingProperty.firstName,
            @"gender": BRZTrackingProperty.gender,
            @"home_city": BRZTrackingProperty.homeCity,
            @"language": BRZTrackingProperty.language,
            @"last_name": BRZTrackingProperty.lastName,
            @"notification_subscription_state": BRZTrackingProperty.notificationSubscriptionState,
            @"phone_number": BRZTrackingProperty.phoneNumber,
            @"push_token": BRZTrackingProperty.pushToken
        };
    });
    return trackingPropertyMap;
}

#pragma mark - Appboy

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

#pragma mark - Braze.User

void _setUserFirstName(const char* firstName) {
  [[AppboyUnityManager sharedInstance].braze.user setFirstName:GetStringParam(firstName)];
}

void _setUserLastName(const char* lastName) {
  [[AppboyUnityManager sharedInstance].braze.user setLastName:GetStringParam(lastName)];
}

void _setUserPhoneNumber(const char* phoneNumber) {
  [[AppboyUnityManager sharedInstance].braze.user setPhoneNumber:GetStringParam(phoneNumber)];
}

void _setUserLanguage(const char* language) {
  [[AppboyUnityManager sharedInstance].braze.user setLanguage:GetStringParam(language)];
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

void _setCustomUserAttributeObject(const char* key, const char* value, bool merge) {
  NSMutableDictionary *customAttributeObject = [NSMutableDictionary dictionaryWithCapacity:1];
  NSError *jsonError;
  NSData *objectData = [GetStringParam(value) dataUsingEncoding:NSUTF8StringEncoding];
  customAttributeObject = [NSJSONSerialization JSONObjectWithData:objectData
                                                    options:NSJSONReadingMutableContainers
                                                      error:&jsonError];
  [[AppboyUnityManager sharedInstance].braze.user setNestedCustomAttributeDictionaryWithKey:GetStringParam(key) value:(customAttributeObject) merge:(merge)];
}

void _setCustomUserAttributeObjectArray(const char* key, const char* value[], int size) {
  NSMutableArray *customAttributeObjectArray = [NSMutableArray arrayWithCapacity:size];
  for (int i = 0; i < size; i++) {
    NSMutableDictionary *customAttributeObject = [NSMutableDictionary dictionaryWithCapacity:1];
    NSError *jsonError;
    NSData *objectData = [GetStringParam(value[i]) dataUsingEncoding:NSUTF8StringEncoding];
    customAttributeObject = [NSJSONSerialization JSONObjectWithData:objectData
                                                      options:NSJSONReadingMutableContainers
                                                        error:&jsonError];
    [customAttributeObjectArray addObject:(customAttributeObject)];
  }
  [[AppboyUnityManager sharedInstance].braze.user setNestedCustomAttributeArrayWithKey:GetStringParam(key)
                                                                                value:customAttributeObjectArray];
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
  [[AppboyUnityManager sharedInstance].braze.user addToCustomAttributeStringArrayWithKey:GetStringParam(key)
                                                                             value:GetStringParam(value)];
}

void _removeFromCustomUserAttributeArray(const char* key, const char* value) {
  [[AppboyUnityManager sharedInstance].braze.user removeFromCustomAttributeStringArrayWithKey:GetStringParam(key)
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

#pragma mark - In-app messages

void _logInAppMessageImpression(const char* inAppMessageJSONString) {
  [[AppboyUnityManager sharedInstance] logInAppMessageImpression:GetStringParam(inAppMessageJSONString)];
}

void _logInAppMessageClicked(const char* inAppMessageJSONString) {
  [[AppboyUnityManager sharedInstance] logInAppMessageClicked:GetStringParam(inAppMessageJSONString)];
}

void _logInAppMessageButtonClicked(const char* inAppMessageJSONString, int buttonID) {
  [[AppboyUnityManager sharedInstance] logInAppMessageButtonClicked:GetStringParam(inAppMessageJSONString) withButtonID:buttonID];
}

void _displayNextInAppMessage() {
  [[AppboyUnityManager sharedInstance] displayNextInAppMessage];
}

void _hideCurrentInAppMessage() {
  [[AppboyUnityManager sharedInstance] hideCurrentInAppMessage];
}

void _setInAppMessageDisplayAction(int actionType) {
  [[AppboyUnityManager sharedInstance] setInAppMessageDisplayAction:actionType];
}

#pragma mark - News Feed

void _logCardImpression(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardImpression:GetStringParam(cardJSONString)];
}

void _logCardClicked(const char* cardJSONString) {
  [[AppboyUnityManager sharedInstance] logCardClicked:GetStringParam(cardJSONString)];
}

void _logFeedDisplayed() {
  NSLog(@"Logging the News Feed displayed event is not needed on iOS.");
}

void _requestFeedRefresh() {
  [[AppboyUnityManager sharedInstance] requestFeedRefresh];
}

void _requestFeedRefreshFromCache() {
  [[AppboyUnityManager sharedInstance] requestFeedFromCache:nil];
}

#pragma mark - Content Cards

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

void _requestContentCardsRefresh() {
  [[AppboyUnityManager sharedInstance] requestContentCardsRefresh];
}

void _requestContentCardsRefreshFromCache() {
  [[AppboyUnityManager sharedInstance] requestContentCardsFromCache:nil];
}

#pragma mark - Feature Flags

void _refreshFeatureFlags() {
  [[AppboyUnityManager sharedInstance] refreshFeatureFlags];
}

// Return Feature Flag in the form of a string, since `C` doesn't support objects
char* _getFeatureFlag(char* id) {
  NSString *flagStr = [[AppboyUnityManager sharedInstance] getFeatureFlag:GetStringParam(id)];
  return convertNSStringToCString(flagStr);
}

// Return Feature Flags in the form of a string, since `C` doesn't support objects
char* _getAllFeatureFlags() {
  NSString *flagStrArray = [[AppboyUnityManager sharedInstance] getAllFeatureFlags];
  return convertNSStringToCString(flagStrArray);
}

void _logFeatureFlagImpression(char* id) {
  [[AppboyUnityManager sharedInstance] logFeatureFlagImpression:GetStringParam(id)];
}

#pragma mark - Data management

void _wipeData() {
  [[AppboyUnityManager sharedInstance].braze wipeData];
}

void _enableSDK() {
  [AppboyUnityManager sharedInstance].braze.enabled = YES;
}

void _disableSDK() {
  [AppboyUnityManager sharedInstance].braze.enabled = NO;
}

#pragma mark - Push

void _registerAppboyPushMessages(const char* tokenBase64) {
  [[AppboyUnityManager sharedInstance] registerPushTokenBase64:GetStringParam(tokenBase64)];
}

void _promptUserForPushPermissions(bool provisional) {
  [[AppboyUnityManager sharedInstance] registerForRemoteNotificationsWithProvisional:provisional];
}

#pragma mark - Device Id

char* _getInstallTrackingId() {
  NSString* deviceId = [AppboyUnityManager sharedInstance].braze.deviceId;
  return convertNSStringToCString(deviceId);
}

#pragma mark - Privacy Tracking

void _setAdTrackingEnabled(bool adTrackingEnabled, const char* googleAdvertisingId) {
  // Ignore `googleAdvertisingId` - relevant only for Android.
  [[[AppboyUnityManager sharedInstance] braze] setAdTrackingEnabled:adTrackingEnabled];
  NSLog(@"Setting adTrackingEnabled to: %d", adTrackingEnabled);
}

void _updateTrackingPropertyAllowList(const char* allowListString) {
  NSMutableDictionary *allowList = [NSMutableDictionary dictionaryWithCapacity:1];

  if (allowListString != NULL && allowListString != nil) {
    NSError *jsonError;
    NSData *objectData = [GetStringParam(allowListString) dataUsingEncoding:NSUTF8StringEncoding];
    allowList = [NSJSONSerialization JSONObjectWithData:objectData
                                                options:NSJSONReadingMutableContainers
                                                  error:&jsonError];
    if (jsonError) {
      NSLog(@"JSON deserialization error: %@", jsonError.localizedDescription);
      return;
    }
  }

  NSArray<NSString *> *adding = allowList[@"adding"];
  NSArray<NSString *> *removing = allowList[@"removing"];
  NSArray<NSString *> *addingCustomEvents = allowList[@"addingCustomEvents"];
  NSArray<NSString *> *removingCustomEvents = allowList[@"removingCustomEvents"];
  NSArray<NSString *> *addingCustomAttributes = allowList[@"addingCustomAttributes"];
  NSArray<NSString *> *removingCustomAttributes = allowList[@"removingCustomAttributes"];

  NSMutableSet<BRZTrackingProperty *> *addingSet = [NSMutableSet set];
  NSMutableSet<BRZTrackingProperty *> *removingSet = [NSMutableSet set];
  NSString *addingSetString = @"";
  NSString *removingSetString = @"";

  if (adding && adding.count > 0) {
    for (NSString *propertyString in adding) {
      BRZTrackingProperty *property = convertTrackingProperty(propertyString);
      if (property) {
        [addingSet addObject:property];
        addingSetString = [addingSetString stringByAppendingString:[propertyString stringByAppendingString: @", "]];
      }
    }
  }
  if (removing && removing.count > 0) {
    for (NSString *propertyString in removing) {
      BRZTrackingProperty *property = convertTrackingProperty(propertyString);
      if (property) {
        [removingSet addObject:property];
        removingSetString = [removingSetString stringByAppendingString:[propertyString stringByAppendingString: @", "]];
      }
    }
  }

  // Parse custom strings
  if (addingCustomEvents && addingCustomEvents.count > 0) {
    NSSet<NSString *> *customEvents = [NSSet setWithArray:addingCustomEvents];
    BRZTrackingProperty *customEventProperty = [BRZTrackingProperty customEventWithEvents:customEvents];
    if (customEventProperty) {
      [addingSet addObject:customEventProperty];
      addingSetString = [addingSetString stringByAppendingString:[[addingCustomEvents componentsJoinedByString:@", "] stringByAppendingString: @", "]];
    }
  }
  if (removingCustomEvents && removingCustomEvents.count > 0) {
    NSSet<NSString *> *customEvents = [NSSet setWithArray:removingCustomEvents];
    BRZTrackingProperty *customEventProperty = [BRZTrackingProperty customAttributeWithAttributes:customEvents];
    if (customEventProperty) {
      [removingSet addObject:customEventProperty];
      removingSetString = [removingSetString stringByAppendingString:[[removingCustomEvents componentsJoinedByString:@", "] stringByAppendingString: @", "]];
    }
  }
  if (addingCustomAttributes && addingCustomAttributes.count > 0) {
    NSSet<NSString *> *customAttributes = [NSSet setWithArray:addingCustomAttributes];
    BRZTrackingProperty *customAttributeProperty = [BRZTrackingProperty customAttributeWithAttributes:customAttributes];
    if (customAttributeProperty) {
      [addingSet addObject:customAttributeProperty];
      addingSetString = [addingSetString stringByAppendingString:[[addingCustomAttributes componentsJoinedByString:@", "] stringByAppendingString: @", "]];
    }
  }
  if (removingCustomAttributes && removingCustomAttributes.count > 0) {
    NSSet<NSString *> *customAttributes = [NSSet setWithArray:removingCustomAttributes];
    BRZTrackingProperty *customAttributeProperty = [BRZTrackingProperty customAttributeWithAttributes:customAttributes];
    if (customAttributeProperty) {
      [removingSet addObject:customAttributeProperty];
      removingSetString = [removingSetString stringByAppendingString:[[removingCustomAttributes componentsJoinedByString:@", "] stringByAppendingString: @", "]];
    }
  }

  [[[AppboyUnityManager sharedInstance] braze] updateTrackingAllowListAdding:addingSet removing:removingSet];
  NSLog(@"Updating tracking allow list by adding: %@ and removing: %@", addingSetString, removingSetString);
}

#pragma mark - Gameobject callbacks

void _configureListener(int messageType, const char* gameobject, const char* method) {
  [[AppboyUnityManager sharedInstance] configureListenerFor:messageType withGameObject:GetStringParam(gameobject) withMethod:GetStringParam(method)];
}

#pragma mark - Internal

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

BRZTrackingProperty* convertTrackingProperty(NSString *propertyString) {
    BRZTrackingProperty *property = getTrackingPropertyMap()[propertyString];
    if (property) {
        return property;
    } else {
        NSLog(@"Invalid tracking property: %@", propertyString);
        return nil;
    }
}
