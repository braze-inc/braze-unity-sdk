#import "AppboyUnityManager.h"
#import <UserNotifications/UserNotifications.h>

// Plist entry keys
static NSString *const BRZBrazeKey = @"Braze";
static NSString *const BRZUnityKey = @"Unity";
static NSString *const BRZEndpointKey = @"Endpoint";
static NSString *const BRZLogLevelKey = @"LogLevel";

// Unity message keys
static NSString *const BRZInternalCallback = @"BrazeInternalCallback";

// - Push Notifications
static NSString *const BRZInternalPushPermissionsPromptResponse = @"onPushPromptResponseReceived";
static NSString *const BRZInternalPushTokenReceivedFromSystem = @"onPushTokenReceivedFromSystem";

// - In-app message UI keys
static NSString *const BRZInternalIAMDisplay = @"beforeInAppMessageDisplayed";
static NSString *const BRZInternalIAMDismissed = @"onInAppMessageDismissed";
static NSString *const BRZInternalIAMClicked = @"onInAppMessageClicked";
static NSString *const BRZInternalIAMButtonClicked = @"onInAppMessageButtonClicked";
static NSString *const BRZInternalIAMHTMLClicked = @"onInAppMessageHTMLClicked";

// - Feature Flags keys
static NSString *const BRZInternalFeatureFlagsGet = @"getFeatureFlag";
static NSString *const BRZInternalFeatureFlagsGetAll = @"getAllFeatureFlags";

@interface AppboyUnityManager ()

@property (strong, nonatomic) BRZCancellable *featureFlagsSubscription;

@end

@implementation AppboyUnityManager

AppboyUnityManager *sharedInstance;
Braze* braze;
NSDictionary *brazeUnityPlist;

+ (AppboyUnityManager *)sharedInstance {
  if (!sharedInstance) {
    sharedInstance = [[AppboyUnityManager alloc] init];
    sharedInstance.brazeUnityPlist = brazeUnityPlist;
  }

  if (braze == nil) {
    NSLog(@"\n"
      "     ********************************************\n"
      "     **             !! WARNING !!              **\n"
      "     **   [AppboyUnityManager sharedInstance]  **\n"
      "     **    called before `braze` instance was  **\n"
      "     **     set. Please make sure you call     **\n"
      "     **     [AppboyUnityManager initBraze]     **\n"
      "     **  before accessing the sharedInstance.  **\n"
      "     ********************************************\n");
  } else {
    sharedInstance.braze = braze;
  }

  return sharedInstance;
}

#pragma mark - Init

+ (Braze *)initBraze:(BRZConfiguration *)configuration {
  // Outer Braze dictionary
  NSDictionary *brazePlist = [[NSBundle mainBundle] infoDictionary][BRZBrazeKey];
  configuration.api.endpoint = brazePlist[BRZEndpointKey];
  configuration.logger.level =
      [AppboyUnityManager getLogLevelForInt:[brazePlist[BRZLogLevelKey] integerValue]];

  // Inner Braze["Unity"] dictionary
  brazeUnityPlist = brazePlist[BRZUnityKey];
  configuration.api.key = brazeUnityPlist[BRZUnityApiKey];

  // Additional config setup
  [configuration.api addSDKMetadata:@[BRZSDKMetadata.unity]];
  configuration.api.sdkFlavor = BRZSDKFlavorUnity;
  if (brazePlist[BRZUnitySdkAuthEnabledKey]) {
    configuration.api.sdkAuthentication = brazePlist[BRZUnitySdkAuthEnabledKey];
  }

  braze = [[Braze alloc] initWithConfiguration:configuration];
  return braze;
}

- (instancetype)init {
  self = [super init];
  if (self) {
    self.displayAction = BRZInAppMessageUIDisplayChoiceNow;

    // Set in-app message UI
    BrazeInAppMessageUI *inAppMessageUI = [[BrazeInAppMessageUI alloc] init];
    inAppMessageUI.delegate = self;
    braze.inAppMessagePresenter = inAppMessageUI;

    // Set SDK Auth delegate in case it is enabled
    braze.sdkAuthDelegate = self;
  }
  return self;
}

+ (BRZLoggerLevel)getLogLevelForInt:(NSInteger)integer {
  switch (integer) {
    case 0:
    case 1:
      return BRZLoggerLevelDebug;
    case 2:
      return BRZLoggerLevelInfo;
    case 4:
      return BRZLoggerLevelError;
    case 8:
      return BRZLoggerLevelDisabled;
    default:
      return BRZLoggerLevelDebug;
  }
}

#pragma mark - SDK Authentication

- (void)braze:(Braze * _Nonnull)braze
  sdkAuthenticationFailedWithError:(BRZSDKAuthenticationError * _Nonnull)error {
  NSLog(@"Invalid SDK Authentication signature.");

  NSDictionary *sdkAuthFailDictionary = @{@"code" : [NSNumber numberWithInteger:error.code],
                                        @"reason" : error.reason ?: @"",
                                        @"userId" : error.userId ?: @"",
                                     @"signature" : error.signature ?: @""
  };
  NSError *decodingError;
  NSData *sdkAuthFailData = [NSJSONSerialization dataWithJSONObject:sdkAuthFailDictionary
                                                            options:0
                                                              error:&decodingError];
  if (!sdkAuthFailData || decodingError != nil) {
    NSLog(@"Error parsing SDK Authentication Failed Event to json: %@", decodingError);
    return;
  }
  NSString *sdkAuthFailedString = [[NSString alloc] initWithData:sdkAuthFailData
                                                        encoding:NSUTF8StringEncoding];
  if (sdkAuthFailedString == nil) {
    NSLog(@"Error parsing SDK Authentication Failed json to string");
    return;
  }

  if (self.unitySdkAuthFailureGameObjectName != nil
      && self.unitySdkAuthFailureCallbackFunctionName != nil) {
    NSLog(@"Using configured game object for SDK Authentication failure handling.");
    [self unitySendMessageTo:self.unitySdkAuthFailureGameObjectName
                  withMethod:self.unitySdkAuthFailureCallbackFunctionName
                 withMessage:sdkAuthFailedString];
  } else {
    NSLog(@"No game object is configured for SDK Authentication failure handling - Doing nothing.");
  }
}

#pragma mark - In-App Messages

- (void)logInAppMessageImpression:(NSString *)inAppMessageJSONString {
  BRZInAppMessageRaw *inAppMessage = [self getInAppMessageFromString:inAppMessageJSONString
                                                               braze:braze];
  if (inAppMessage) {
    [inAppMessage logImpressionUsing:braze];
  }
}

- (void)logInAppMessageClicked:(NSString *)inAppMessageJSONString {
  BRZInAppMessageRaw *inAppMessage = [self getInAppMessageFromString:inAppMessageJSONString
                                                               braze:braze];
  if (inAppMessage) {
    [inAppMessage logClickWithButtonId:nil using:braze];
  }
}

- (void)logInAppMessageButtonClicked:(NSString *)inAppMessageJSONString
                        withButtonID:(NSInteger)buttonId {
  BRZInAppMessageRaw *inAppMessage = [self getInAppMessageFromString:inAppMessageJSONString
                                                               braze:braze];
  if (inAppMessage) {
    [inAppMessage logClickWithButtonId:[@(buttonId) stringValue] using:braze];
  }
}

/// Returns the in-app message for the JSON string. If the JSON fails decoding, returns nil.
- (BRZInAppMessageRaw *)getInAppMessageFromString:(NSString *)inAppMessageJSONString
                                            braze:(Braze *)braze {
  NSData *inAppMessageData = [inAppMessageJSONString dataUsingEncoding:NSUTF8StringEncoding];
  BRZInAppMessageRaw *message = [BRZInAppMessageRaw decodingWithJson:inAppMessageData];
  if (message) {
    return message;
  }
  NSLog(@"Unable to parse in-app message from string: %@", inAppMessageJSONString);
  return nil;
}

- (void)displayNextInAppMessage {
   BRZInAppMessageUIDisplayChoice currentDisplayAction = self.displayAction;
   self.displayAction = BRZInAppMessageUIDisplayChoiceNow;

  // Downcast from protocol to class
  [(BrazeInAppMessageUI *)braze.inAppMessagePresenter presentNext];
   self.displayAction = currentDisplayAction;
}

/**
 * @discussion Stores the display action for when a game object receives an in-app message.
 */
- (void)setInAppMessageDisplayAction:(int)actionType {
  BRZInAppMessageUIDisplayChoice displayAction = (BRZInAppMessageUIDisplayChoice)actionType;
  if (displayAction > BRZInAppMessageUIDisplayChoiceDiscard) {
    NSLog(@"Unknown in-app message display action type received, value: %ld", (long)displayAction);
    return;
  }

  NSLog(@"Setting in-app message display action to: %ld", (long)displayAction);
  self.displayAction = displayAction;
}

#pragma mark - News Feed

- (void)logCardImpression:(NSString *)cardJSONString {
  BRZNewsFeedCard *newsFeedCard = [self getNewsFeedCardFromString:cardJSONString
                                                            braze:braze];
  if (newsFeedCard) {
    [newsFeedCard logImpressionUsing:braze];
  }
}

- (void)logCardClicked:(NSString *)cardJSONString {
  BRZNewsFeedCard *newsFeedCard = [self getNewsFeedCardFromString:cardJSONString
                                                            braze:braze];
  if (newsFeedCard) {
    [newsFeedCard logClickUsing:braze];
  }
}

/// Returns the news feed card for the JSON string. If the JSON fails decoding, returns nil.
- (BRZNewsFeedCard *)getNewsFeedCardFromString:(NSString *)newsFeedCardJSONString
                                         braze:(Braze *)braze {


  NSData *newsFeedCardData = [newsFeedCardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  BRZNewsFeedCard *card = [BRZNewsFeedCard decodingWithJson:newsFeedCardData];
  if (card) {
    return card;
  }
  NSLog(@"Unable to parse News Feed card from string: %@", newsFeedCardJSONString);
  return nil;
}

- (void)requestFeedRefresh {
  [braze.newsFeed requestRefreshWithCompletion:^(NSArray<BRZNewsFeedCard *> *_Nullable newCards,
                                                 NSError *_Nullable refreshError) {
    if (refreshError) {
      NSLog(@"News Feed refresh error: %@", refreshError);
      return;
    }
    [self sendMessageWithNewsFeedCards:newCards fromCache:NO];
  }];
}

- (void)requestFeedFromCache:(NSNotification *)notification {
  [self sendMessageWithNewsFeedCards:braze.newsFeed.cards fromCache:YES];
}

/// Encodes the news feed cards and sends them via a Unity message
- (void)sendMessageWithNewsFeedCards:(NSArray<BRZNewsFeedCard *> *)newsFeedCards
                           fromCache:(BOOL)fromCache {
  if (self.unityFeedCallbackFunctionName == nil || self.unityFeedGameObjectName == nil) {
    NSLog(@"No properly configured game object. Not forwarding News Feed message.");
    return;
  }

  NSMutableArray *cardsJSONArray = [NSMutableArray array];
  for (BRZNewsFeedCard *card in newsFeedCards) {
    NSData *cardData = [card json];
    NSError *error;
    NSDictionary *newsFeedCardJSON = [NSJSONSerialization JSONObjectWithData:cardData
                                                                     options:NSJSONReadingMutableContainers
                                                                       error:&error];
    if (error != nil) {
        NSLog(@"Error creating news feed card JSON: %@", error);
    }
    [cardsJSONArray addObject:newsFeedCardJSON];
  }

  NSTimeInterval timestamp = [braze.newsFeed.lastUpdate timeIntervalSince1970];
  NSDictionary *feedDictionary = @{
    @"mFeedCards" : cardsJSONArray,
    @"mTimestamp" : [NSNumber numberWithDouble:timestamp],
    @"mFromOfflineStorage" : [NSNumber numberWithBool:fromCache]
  };
  NSError *error;
  NSData *feedData = [NSJSONSerialization dataWithJSONObject:feedDictionary
                                                     options:0
                                                       error:&error];
  if (!feedData || error != nil) {
    NSLog(@"Error parsing News Feed to json: %@", error);
    return;
  }
  NSString *feedString = [[NSString alloc] initWithData:feedData encoding:NSUTF8StringEncoding];
  if (feedString == nil) {
    NSLog(@"Error parsing News Feed json to string");
    return;
  }
  [self unitySendMessageTo:self.unityFeedGameObjectName
                withMethod:self.unityFeedCallbackFunctionName
               withMessage:feedString];
}

#pragma mark - Content Cards

- (void)logContentCardImpression:(NSString *)cardJSONString {
  BRZContentCardRaw *contentCard = [self getContentCardFromString:cardJSONString
                                                            braze:braze];
  if (contentCard) {
    [contentCard logImpressionUsing:braze];
  }
}

- (void)logContentCardClicked:(NSString *)cardJSONString {
  BRZContentCardRaw *contentCard = [self getContentCardFromString:cardJSONString
                                                            braze:braze];
  if (contentCard) {
    [contentCard logClickUsing:braze];
  }
}

- (void)logContentCardDismissed:(NSString *)cardJSONString {
  BRZContentCardRaw *contentCard = [self getContentCardFromString:cardJSONString
                                                            braze:braze];
  if (contentCard) {
    [contentCard logDismissedUsing:braze];
  }
}

/// Returns the content card for the JSON string. If the JSON fails decoding, returns nil.
- (BRZContentCardRaw *)getContentCardFromString:(NSString *)contentCardJSONString
                                          braze:(Braze *)braze {

  NSData *contentCardData = [contentCardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  BRZContentCardRaw *card = [BRZContentCardRaw decodingWithJson:contentCardData];
  if (card) {
    return card;
  }
  NSLog(@"Unable to parse Content Card from string: %@", contentCardJSONString);
  return nil;
}

- (void)requestContentCardsRefresh {
  [braze.contentCards requestRefreshWithCompletion:^(NSArray<BRZContentCardRaw *> *_Nullable newCards,
                                                     NSError *_Nullable refreshError) {
    if (refreshError) {
      NSLog(@"Content Card refresh error: %@", refreshError);
      return;
    }
    [self sendMessageWithContentCards:newCards fromCache:NO];
  }];
}

- (void)requestContentCardsFromCache:(NSNotification *)notification {
  [self sendMessageWithContentCards:braze.contentCards.cards fromCache:YES];
}

/// Encodes the content cards and sends them via a Unity message
- (void)sendMessageWithContentCards:(NSArray<BRZContentCardRaw *> *)contentCards
                          fromCache:(BOOL)fromCache {
  if (self.unityContentCardsCallbackFunctionName == nil
      || self.unityContentCardsGameObjectName == nil) {
    NSLog(@"No properly configured game object. Not forwarding Content Cards message.");
    return;
  }

  NSMutableArray *cardsJSONArray = [NSMutableArray array];
  for (BRZContentCardRaw *card in contentCards) {
    NSData *cardData = [card json];
    NSError *error;
    NSDictionary *cardJSON = [NSJSONSerialization JSONObjectWithData:cardData
                                                             options:NSJSONReadingMutableContainers
                                                               error:&error];
    if (error != nil) {
        NSLog(@"Error creating content card JSON: %@", error);
    }
    [cardsJSONArray addObject:cardJSON];
  }

  NSTimeInterval timestamp = [braze.contentCards.lastUpdate timeIntervalSince1970];
  NSDictionary *contentCardsDictionary = @{
    @"mContentCards" : cardsJSONArray,
    @"mTimestamp" : [NSNumber numberWithDouble:timestamp],
    @"mFromOfflineStorage" : [NSNumber numberWithBool:fromCache]
  };
  NSError *error;
  NSData *contentCardsData = [NSJSONSerialization dataWithJSONObject:contentCardsDictionary
                                                     options:0
                                                       error:&error];
  if (!contentCardsData || error != nil) {
    NSLog(@"Error parsing Content Cards to json: %@", error);
    return;
  }
  NSString *contentCardsString = [[NSString alloc] initWithData:contentCardsData
                                                       encoding:NSUTF8StringEncoding];
  if (contentCardsString == nil) {
    NSLog(@"Error parsing Content Cards json to string");
    return;
  }
  [self unitySendMessageTo:self.unityContentCardsGameObjectName
                withMethod:self.unityContentCardsCallbackFunctionName
               withMessage:contentCardsString];
}

- (void)displayContentCards {
  BRZContentCardUIModalViewController *contentCardsModal = [[BRZContentCardUIModalViewController alloc] initWithBraze:braze];
  contentCardsModal.navigationItem.title = @"Content Cards";
  UIWindow *keyWindow = [[UIApplication sharedApplication] keyWindow];
  UIViewController *mainViewController = keyWindow.rootViewController;
  [mainViewController presentViewController:contentCardsModal animated:YES completion:nil];
}

#pragma mark - Push Notifications

- (void)registerPushToken:(NSData *)data {
  [braze.notifications registerDeviceToken:data];

  NSString *token = [AppboyUnityManager hexStringFromNSData:data];
  if (self.unityPushTokenReceivedFromSystemGameObjectName != nil && self.unityPushTokenReceivedFromSystemFunctionName != nil) {
    [self unitySendMessageTo:self.unityPushTokenReceivedFromSystemGameObjectName
                  withMethod:self.unityPushTokenReceivedFromSystemFunctionName
                 withMessage:token];
  }
  if (self.sendPushTokenReceivedFromSystem) {
    [self unitySendMessageTo:BRZInternalCallback
                  withMethod:BRZInternalPushTokenReceivedFromSystem
                 withMessage:token];
  }
}

- (void)registerPushTokenBase64:(NSString *)deviceTokenBase64 {
  NSData *data = [[NSData alloc] initWithBase64EncodedString:deviceTokenBase64 options:0];
  [self registerPushToken:data];
}

+ (NSString *)hexStringFromNSData:(NSData *)data {
  NSUInteger dataLength = data.length;
  if (dataLength == 0) {
    return nil;
  }

  const unsigned char *dataBuffer = (const unsigned char *)data.bytes;
  NSMutableString *hexString  = [NSMutableString stringWithCapacity:(dataLength * 2)];
  for (int i = 0; i < dataLength; ++i) {
    [hexString appendFormat:@"%02.2hhx", dataBuffer[i]];
  }
  return [hexString copy];
}

- (void)registerForRemoteNotificationsWithProvisional:(BOOL)provisional {
  UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
  center.delegate = self;
  UNAuthorizationOptions options = UNAuthorizationOptionAlert | UNAuthorizationOptionSound | UNAuthorizationOptionBadge;
  if (@available(iOS 12.0, *)) {
    if (provisional) {
      options = options | UNAuthorizationOptionProvisional;
    }
  }
  [center requestAuthorizationWithOptions:options
                        completionHandler:^(BOOL granted, NSError *_Nullable error) {
    if (self.unityPushPermissionsPromptResponseGameObjectName != nil && self.unityPushPermissionsPromptResponseFunctionName != nil) {
      [self unitySendMessageTo:self.unityPushPermissionsPromptResponseGameObjectName
                    withMethod:self.unityPushPermissionsPromptResponseFunctionName
                   withMessage:(granted ? @"true" : @"false")];
    }
    if (self.sendInternalPushPermissionsPromptResponse) {
      [self unitySendMessageTo:BRZInternalCallback
                    withMethod:BRZInternalPushPermissionsPromptResponse
                   withMessage:(granted ? @"true" : @"false")];
    }
  }];
  [[UIApplication sharedApplication] registerForRemoteNotifications];
}

/// Rearrange the notification dictionary and propogate it to any of the callbacks set in the Unity UI
- (void)forwardNotification:(NSDictionary *)notification {
  // Generate a new dictionary that rearrange the notification elements
  NSMutableDictionary *aps = [NSMutableDictionary dictionaryWithDictionary:[notification objectForKey:@"aps"]];

  // Check if the object for key alert is a string; if it is, then convert it to a dictionary
  id alert = [aps objectForKey:@"alert"];
  if ([alert isKindOfClass:[NSString class]]) {
    NSDictionary *alertDictionary = [NSDictionary dictionaryWithObject:alert forKey:@"body"];
    [aps setObject:alertDictionary forKey:@"alert"];
  }

  // Move all other dictionaries other than aps in payload to key extra in aps dictionary
  NSMutableDictionary *extraDictionary = [NSMutableDictionary dictionaryWithDictionary:notification];
  [extraDictionary removeObjectForKey:@"aps"];
  if ([extraDictionary count] > 0) {
    [aps setObject:extraDictionary forKey:@"extra"];
  }

  if (![NSJSONSerialization isValidJSONObject:aps]) {
    NSLog(@"Invalid json received. Not forwarding push message.");
    return;
  }

  NSError *error = nil;
  NSData *data = [NSJSONSerialization dataWithJSONObject:aps options:0 error:&error];
  if (error != nil) {
    NSLog(@"Error serializing json. Not forwarding push message: %@", [error localizedDescription]);
  }

  NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];

  // Send the notification data to the callback set in the Unity UI
  UIApplication *application = [UIApplication sharedApplication];
  if (application.applicationState == UIApplicationStateActive) {
    if (self.unityPushReceivedGameObjectName == nil || self.unityPushReceivedCallbackFunctionName == nil) {
      NSLog(@"No properly configured game object. Not forwarding push received message.");
      return;
    }
    [self unitySendMessageTo:self.unityPushReceivedGameObjectName
                  withMethod:self.unityPushReceivedCallbackFunctionName \
                 withMessage:dataString];
  } else {
    if (self.unityPushOpenedGameObjectName == nil || self.unityPushOpenedCallbackFunctionName == nil) {
      NSLog(@"No properly configured game object. Not forwarding push opened message.");
      return;
    }
    [self unitySendMessageTo:self.unityPushOpenedGameObjectName
                  withMethod:self.unityPushOpenedCallbackFunctionName
                 withMessage:dataString];
  }
}

#pragma mark - Feature Flags

- (void)refreshFeatureFlags {
  [braze.featureFlags requestRefreshWithCompletion:^(NSArray<BRZFeatureFlag *> * _Nullable featureFlags,
                                                     NSError * _Nullable refreshError) {
    if (refreshError) {
      NSLog(@"Feature Flags refresh error: %@", refreshError);
      return;
    }
    [self sendMessageWithFeatureFlags:featureFlags];
  }];
}

/// Returns the JSON string of the Feature Flag. If there is no Feature Flag with that ID, returns nil.
- (NSString *)getFeatureFlag:(NSString *)identifier {
  BRZFeatureFlag *featureFlag = [braze.featureFlags featureFlagWithId:identifier];
  if (!featureFlag) {
    return nil;
  }
  NSData *data = [featureFlag json];
  return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}

- (NSString *)getAllFeatureFlags {
  return [self formattedFeatureFlags:braze.featureFlags.featureFlags];
}

/// Converts an array of FeatureFlag objects into a JSON representation of strings
- (NSString *)formattedFeatureFlags:(NSArray<BRZFeatureFlag *> *)featureFlags {
  NSMutableArray<NSString *> *featureFlagStrings = [NSMutableArray array];

  // - Convert FeatureFlags into strings and put into an array
  [featureFlags enumerateObjectsUsingBlock:^(BRZFeatureFlag *featureFlag, NSUInteger idx, BOOL *stop) {
    NSData *data = [featureFlag json];
    NSString *jsonString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    [featureFlagStrings addObject:jsonString];
  }];

  // - Serialize array and then convert into a string to pass to Unity layer
  NSError *error;
  NSData *data = [NSJSONSerialization dataWithJSONObject:featureFlagStrings
                                                 options:kNilOptions
                                                   error:&error];
  if (error != nil) {
    NSLog(@"Error serializing json for featureFlags: %@, error: %@", featureFlags, [error localizedDescription]);
  }

  return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}

- (void)sendMessageWithFeatureFlags:(NSArray<BRZFeatureFlag *> *)featureFlags {
  if (self.unityFeatureFlagsGameObjectName == nil
      || self.unityFeatureFlagsCallbackFunctionName == nil) {
    NSLog(@"No properly configured game object. Not forwarding Feature Flags message.");
    return;
  }

  NSString *dataString = [self formattedFeatureFlags:featureFlags];
  [self unitySendMessageTo:self.unityFeatureFlagsGameObjectName
                withMethod:self.unityFeatureFlagsCallbackFunctionName
               withMessage:dataString];
}

#pragma mark - Gameobject callbacks

- (void)configureListenerFor:(NSInteger)messageType
              withGameObject:(NSString *)gameobject
                  withMethod:(NSString *)method {
  switch ((BRZUnityMessageType)messageType) {
    case BRZPushPermissionsPromptResponse:
      NSLog(@"Setting push permissions prompt response listener to object %@, method %@", gameobject, method);
      self.unityPushPermissionsPromptResponseGameObjectName = gameobject;
      self.unityPushPermissionsPromptResponseFunctionName = method;
      break;
    case BRZPushTokenReceivedFromSystem:
      NSLog(@"Setting push token received from system listener to object %@, method %@", gameobject, method);
      self.unityPushTokenReceivedFromSystemGameObjectName = gameobject;
      self.unityPushTokenReceivedFromSystemFunctionName = method;
      break;
    case BRZPushReceived:
      NSLog(@"Setting push received listener to object %@, method %@", gameobject, method);
      [self addPushReceivedListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case BRZPushOpened:
      NSLog(@"Setting push opened listener to object %@, method %@", gameobject, method);
      [self addPushOpenedListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case BRZPushDeleted:
      NSLog(@"Push deleted not supported.");
      break;
    case BRZInAppMessageReceived:
      NSLog(@"Setting in-app message received listener to object %@, method %@", gameobject, method);
      [self addInAppMessageListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case BRZNewsFeedUpdated:
      NSLog(@"Setting News Feed updated listener to object %@, method %@", gameobject, method);
      [self addFeedListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case BRZContentCardsUpdated:
      NSLog(@"Setting Content Cards updated listener to object %@, method %@", gameobject, method);
      [self addContentCardsListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case BRZSDKAuthFailed:
      NSLog(@"Setting SDK Authentication Failure listener to object %@, method %@", gameobject, method);
      [self addSdkAuthFailureListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case BRZFeatureFlagsUpdated:
      NSLog(@"Setting Feature Flags listener to object %@, method %@", gameobject, method);
      [self addFeatureFlagsListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    default:
      NSLog(@"Unknown message type received.");
      return;
  }
}

- (void)setListenersFromPList {
  // Push
  [self addPushReceivedListenerWithObjectName:self.brazeUnityPlist[BRZUnityPushReceivedGameObjectKey]
                           callbackMethodName:self.brazeUnityPlist[BRZUnityPushReceivedCallbackKey]];
  [self addPushOpenedListenerWithObjectName:self.brazeUnityPlist[BRZUnityPushOpenedGameObjectKey]
                         callbackMethodName:self.brazeUnityPlist[BRZUnityPushOpenedCallbackKey]];

  // In-app messages, Content Cards, News Feed
  [self addInAppMessageListenerWithObjectName:self.brazeUnityPlist[BRZUnityInAppMessageGameObjectKey]
                           callbackMethodName:self.brazeUnityPlist[BRZUnityInAppMessageCallbackKey]];
  [self addContentCardsListenerWithObjectName:self.brazeUnityPlist[BRZUnityContentCardsGameObjectKey]
                           callbackMethodName:self.brazeUnityPlist[BRZUnityContentCardsCallbackKey]];
  [self addFeedListenerWithObjectName:self.brazeUnityPlist[BRZUnityFeedGameObjectKey]
                   callbackMethodName:self.brazeUnityPlist[BRZUnityFeedCallbackKey]];

  // SDK Auth
  [self addSdkAuthFailureListenerWithObjectName:self.brazeUnityPlist[BRZUnitySdkAuthenticationFailureGameObjectKey]
                             callbackMethodName:self.brazeUnityPlist[BRZUnitySdkAuthenticationFailureCallbackKey]];

  // Feature Flags
  [self addFeatureFlagsListenerWithObjectName:self.brazeUnityPlist[BRZUnityFeatureFlagsGameObjectKey]
                           callbackMethodName:self.brazeUnityPlist[BRZUnityFeatureFlagsCallbackKey]];
}

- (void)addInAppMessageListenerWithObjectName:(NSString *)gameObject
                           callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    self.unityInAppMessageGameObjectName = gameObject;
    self.unityInAppMessageCallbackFunctionName = callbackMethod;
  }
}

- (void)addFeedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    self.unityFeedGameObjectName = gameObject;
    self.unityFeedCallbackFunctionName = callbackMethod;
  }
}

- (void)addSdkAuthFailureListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    self.unitySdkAuthFailureGameObjectName = gameObject;
    self.unitySdkAuthFailureCallbackFunctionName = callbackMethod;
  }
}

- (void)addContentCardsListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    self.unityContentCardsGameObjectName = gameObject;
    self.unityContentCardsCallbackFunctionName = callbackMethod;
  }
}

- (void)addPushReceivedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    self.unityPushReceivedGameObjectName = gameObject;
    self.unityPushReceivedCallbackFunctionName = callbackMethod;
  }
}

- (void)addPushOpenedListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    self.unityPushOpenedGameObjectName = gameObject;
    self.unityPushOpenedCallbackFunctionName = callbackMethod;
  }
}

- (void)addFeatureFlagsListenerWithObjectName:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    self.unityFeatureFlagsGameObjectName = gameObject;
    self.unityFeatureFlagsCallbackFunctionName = callbackMethod;

    self.featureFlagsSubscription = [braze.featureFlags subscribeToUpdates:^(NSArray<BRZFeatureFlag *> * _Nonnull featureFlags) {
      [self sendMessageWithFeatureFlags:featureFlags];
    }];
  }
}

#pragma mark - UIApplicationDelegate

- (void)registerApplication:(UIApplication *)application
         didReceiveRemoteNotification:(NSDictionary *)userInfo
         fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler {
  (void)[braze.notifications handleBackgroundNotificationWithUserInfo:userInfo
                                               fetchCompletionHandler:completionHandler];
  [self forwardNotification:userInfo];
}

#pragma mark - UNUserNotificationCenterDelegate

- (void)userNotificationCenter:(UNUserNotificationCenter *)center
         didReceiveNotificationResponse:(UNNotificationResponse *)response
         withCompletionHandler:(void (^)(void))completionHandler {
  if (completionHandler) {
    completionHandler();
  }

  if ([self.brazeUnityPlist[BRZUnityAutomaticPushIntegrationKey] boolValue]) {
    (void)[braze.notifications handleUserNotificationWithResponse:response
                                            withCompletionHandler:completionHandler];
    [self forwardNotification:response.notification.request.content.userInfo];
  }
}

#pragma mark - BrazeInAppMessageUIDelegate

/**
 * Uses the stored displayAction to determine whether or not to display the received
 * in-app message.
 *
 * If a callback function is set up for the game object, this also sends the in-app message
 * JSON to the callback function.
 */
- (enum BRZInAppMessageUIDisplayChoice)inAppMessage:(BrazeInAppMessageUI *)ui
                            displayChoiceForMessage:(BRZInAppMessageRaw *)message {
  BRZInAppMessageUIDisplayChoice displayAction = self.displayAction;
  NSData *inAppMessageData = [message json];
  NSString *dataString = [[NSString alloc] initWithData:inAppMessageData encoding:NSUTF8StringEncoding];

  if (self.unityInAppMessageCallbackFunctionName != nil && self.unityInAppMessageGameObjectName != nil) {
    [self unitySendMessageTo:self.unityInAppMessageGameObjectName
                  withMethod:self.unityInAppMessageCallbackFunctionName
                withMessage:dataString];

    if ([self.brazeUnityPlist[BRZUnityHandleInAppMessageDisplayKey] boolValue]) {
      NSLog(@"Braze configured to display in-app messages despite presence of game object listener. Using display action: %ld.", (long)self.displayAction);
    } else {
      displayAction = BRZInAppMessageUIDisplayChoiceDiscard;
    }
  }

  if (displayAction == BRZInAppMessageUIDisplayChoiceNow) {
    [self unitySendMessageTo:BRZInternalCallback
                  withMethod:BRZInternalIAMDisplay
                withMessage:dataString];
  }

  return displayAction;
}

- (void)inAppMessage:(BrazeInAppMessageUI *)ui
         didDismiss:(BRZInAppMessageRaw *)message
               view:(UIView *)view {
  NSData *data = [message json];
  NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
  [self unitySendMessageTo:BRZInternalCallback
                withMethod:BRZInternalIAMDismissed
               withMessage:dataString];
}

/**
 * Process the in-app message click for HTML or non-HTML in-app messages.
 *
 * Sends the in-app message JSON and other relevant info to the internal
 * callback methods to be processed.
 */
- (BOOL)inAppMessage:(BrazeInAppMessageUI *)ui
       shouldProcess:(enum BRZInAppMessageRawClickAction)clickAction
                 url:(NSURL *)url
            buttonId:(NSString *)buttonId
             message:(BRZInAppMessageRaw *)message
                view:(UIView *)view {
  NSData *data = [message json];
  NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];

  BOOL isHtmlMessage = message.type == BRZInAppMessageRawTypeHtml
                       || message.type == BRZInAppMessageRawTypeHtmlFull;

  if (isHtmlMessage) {
    // HTML click
    id urlEncoded = url ? url.absoluteString : [NSNull null];
    NSError *error = nil;
    NSData *argv = [NSJSONSerialization dataWithJSONObject:@[dataString, urlEncoded]
                                                   options:0
                                                     error:&error];
    if (error != nil) {
      NSLog(@"Error serializing json for string: %@, error: %@", dataString, [error localizedDescription]);
    }
    NSString *argvString = [[NSString alloc] initWithData:argv encoding:NSUTF8StringEncoding];
    [self unitySendMessageTo:BRZInternalCallback
                  withMethod:BRZInternalIAMHTMLClicked
                 withMessage:argvString];

  } else if (buttonId != nil) {
    // Non-HTML button click
    NSError *error = nil;
    NSData *argv = [NSJSONSerialization dataWithJSONObject:@[dataString, buttonId]
                                                   options:0
                                                     error:&error];
    if (error != nil) {
      NSLog(@"Error serializing json for string: %@, error: %@", dataString, [error localizedDescription]);
    }
    NSString *argvString = [[NSString alloc] initWithData:argv encoding:NSUTF8StringEncoding];

    [self unitySendMessageTo:BRZInternalCallback
                  withMethod:BRZInternalIAMButtonClicked
                 withMessage:argvString];

  } else {
    // Non-HTML body click
    [self unitySendMessageTo:BRZInternalCallback
                  withMethod:BRZInternalIAMClicked
                 withMessage:dataString];

  }
  return YES;
}

#pragma mark - Internal Communication

- (void)unitySendMessageTo:(NSString *)gameObjectName withMethod:(NSString *)methodName withMessage:(NSString *)message {
  NSLog(@"Sending message to %@:%@.", gameObjectName, methodName);
  UnitySendMessage([gameObjectName UTF8String],
                   [methodName UTF8String],
                   [message UTF8String]);
}

- (void)configureInternalListenerFor:(NSInteger)messageType {
  switch ((BRZUnityMessageType)messageType) {
    case BRZPushPermissionsPromptResponse:
      NSLog(@"Enabling internal push permissions prompt response listener.");
      self.sendInternalPushPermissionsPromptResponse = YES;
      break;
    case BRZPushTokenReceivedFromSystem:
      NSLog(@"Enabling push token received from system listener.");
      self.sendPushTokenReceivedFromSystem = YES;
      break;
    default:
      NSLog(@"Unknown internal message type received.");
      return;
  }
}

@end
