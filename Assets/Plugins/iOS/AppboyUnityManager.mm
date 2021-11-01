#import "AppboyUnityManager.h"
#import <UserNotifications/UserNotifications.h>
#import <Appboy_iOS_SDK/AppboyKit.h>
#import <Appboy_iOS_SDK/ABKCard.h>
#import <Appboy_iOS_SDK/ABKFacebookUser.h>
#import <Appboy_iOS_SDK/ABKTwitterUser.h>
#import <Appboy_iOS_SDK/ABKContentCardsViewController.h>
#import <Appboy_iOS_SDK/ABKUIUtils.h>

static NSString *const ABKInternalCallback = @"BrazeInternalCallback";
static NSString *const ABKInternalPushPermissionsPromptResponse = @"onPushPromptResponseReceived";
static NSString *const ABKInternalPushTokenReceivedFromSystem = @"onPushTokenReceivedFromSystem";

// In-app message UI
static NSString *const ABKInternalIAMDisplay = @"beforeInAppMessageDisplayed";
static NSString *const ABKInternalIAMDismissed = @"onInAppMessageDismissed";
static NSString *const ABKInternalIAMClicked = @"onInAppMessageClicked";
static NSString *const ABKInternalIAMButtonClicked = @"onInAppMessageButtonClicked";
static NSString *const ABKInternalIAMHTMLClicked = @"onInAppMessageHTMLClicked";

@interface ABKCard(proxy)
- (NSMutableDictionary *)proxyForJson;
@end

@interface ABKInAppMessage(proxy)
- (NSMutableDictionary *)proxyForJson;
@end

@interface AppboyUnityManager()
+ (NSString *)hexStringFromNSData:(NSData *)data;
@end

@implementation AppboyUnityManager

+ (AppboyUnityManager*)sharedInstance {
  static AppboyUnityManager *sharedInstance = nil;

  if(!sharedInstance)
    sharedInstance = [[AppboyUnityManager alloc] init];

  return sharedInstance;
}

# pragma mark - Init

- (instancetype)init {
  self = [super init];
  if (self) {
    self.displayAction = ABKDisplayInAppMessageNow;
  }
  return self;
}

# pragma mark - Config

- (NSString *)getApiKeyFromUnity {
  return self.brazeUnityPlist[ABKUnityApiKey];
}

- (NSDictionary *)parsePlist {
  NSDictionary* brazeUnityPlist = [[NSBundle mainBundle] infoDictionary][@"Braze"][@"Unity"];
  self.brazeUnityPlist = brazeUnityPlist;
  return brazeUnityPlist;
}

# pragma mark - Social Media

- (void)setUserFacebookData:(NSString *)facebookId firstName:(NSString *)firstName lastName:(NSString *)lastName email:(NSString *)email bio:(NSString *)bio cityName:(NSString *)cityName  gender:(NSInteger)gender numberOfFriends:(NSInteger)numberOfFriends birthday:(NSString *)birthday {
  NSMutableDictionary *facebookData = [NSMutableDictionary dictionary];
  facebookData[@"id"] = facebookId;
  facebookData[@"first_name"] = firstName;
  facebookData[@"last_name"] = lastName;
  facebookData[@"email"] = email;
  facebookData[@"bio"] = bio;
  facebookData[@"location"] = @{@"name":cityName};
  if (gender >= 0) {
    if (gender == ABKUserGenderMale) {
      facebookData[@"gender"] = @"m";
    }
    if (gender == ABKUserGenderFemale) {
      facebookData[@"gender"] = @"f";
    }
  }
  if (numberOfFriends >= 0) {
    facebookData[@"num_friends"] = @(numberOfFriends);
  }
  facebookData[@"birthday"] = birthday;
  ABKFacebookUser *facebookUser = [[ABKFacebookUser alloc] initWithFacebookUserDictionary:facebookData numberOfFriends:numberOfFriends likes:nil];
  [Appboy sharedInstance].user.facebookUser = facebookUser;
}

- (void)setUserTwitterData:(NSInteger)twitterUserId twitterHandle:(NSString *)twitterHandle name:(NSString *)name description:(NSString *)description followerCount:(NSInteger)followerCount followingCount:(NSInteger)followingCount tweetCount:(NSInteger)tweetCount profileImageUrl:(NSString *)profileImageUrl {
  ABKTwitterUser *twitterUser = [[ABKTwitterUser alloc] init];
  twitterUser.userDescription = description;
  if (twitterUserId > 0) {
    twitterUser.twitterID = (long) twitterUserId;
  }
  twitterUser.twitterName = name;
  twitterUser.profileImageUrl = profileImageUrl;
  if (followingCount >= 0) {
    twitterUser.friendsCount = followingCount;
  }
  if (followerCount >= 0) {
    twitterUser.followersCount = followerCount;
  }
  twitterUser.screenName = twitterHandle;
  if (tweetCount >= 0) {
    twitterUser.statusesCount = tweetCount;
  }
  [Appboy sharedInstance].user.twitterUser = twitterUser;
}

# pragma mark - In-app message analytics

- (void)logInAppMessageImpression:(NSString *)inAppMessageJSONString {
  ABKInAppMessage *inAppMessage = [[ABKInAppMessage alloc] init];
  [self getInAppMessageFromString:inAppMessageJSONString withInAppMessage:inAppMessage];
  [inAppMessage logInAppMessageImpression];
}

- (void)logInAppMessageClicked:(NSString *)inAppMessageJSONString {
  ABKInAppMessage *inAppMessage = [[ABKInAppMessage alloc] init];
  [self getInAppMessageFromString:inAppMessageJSONString withInAppMessage:inAppMessage];
  [inAppMessage logInAppMessageClicked];
}

- (void)logInAppMessageButtonClicked:(NSString *)inAppMessageJSONString withButtonID:(NSInteger)buttonID {
  ABKInAppMessageImmersive *inAppMessageImmersive = [[ABKInAppMessageImmersive alloc] init];
  [self getInAppMessageFromString:inAppMessageJSONString withInAppMessage:inAppMessageImmersive];
  [inAppMessageImmersive logInAppMessageClickedWithButtonID:buttonID];
}

- (void)getInAppMessageFromString:(NSString *)inAppMessageJSONString withInAppMessage:(ABKInAppMessage *)inAppMessage {
  NSData *inAppMessageData = [inAppMessageJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedInAppMessageDict = [NSJSONSerialization JSONObjectWithData:inAppMessageData options:NSJSONReadingMutableContainers error:&e];
  [inAppMessage setValuesForKeysWithDictionary:deserializedInAppMessageDict];
}

# pragma mark - In-app message display

- (void)displayNextInAppMessage {
  ABKInAppMessageDisplayChoice currentDisplayChoice = self.displayAction;
  self.displayAction = ABKDisplayInAppMessageNow;
  [[Appboy sharedInstance].inAppMessageController displayNextInAppMessage];
  self.displayAction = currentDisplayChoice;
}

- (void)setInAppMessageDisplayAction:(int)actionType {
  [Appboy sharedInstance].inAppMessageController.delegate = self;
  switch ((ABKUnityInAppMessageDisplayActionType)actionType) {
    case ABKIAMDisplayNow:
      NSLog(@"Setting in-app message display action to ABKDisplayInAppMessageNow.");
      self.displayAction = ABKDisplayInAppMessageNow;
      break;
    case ABKIAMDisplayLater:
      NSLog(@"Setting in-app message display action to ABKDisplayInAppMessageLater.");
      self.displayAction = ABKDisplayInAppMessageLater;
      break;
    case ABKIAMDiscard:
      NSLog(@"Setting in-app message display action to ABKIAMDiscard.");
      self.displayAction = ABKDiscardInAppMessage;
      break;
    case ABKIAMRequestIAMDisplay:
      // FIXME: Blocked by SDK-1596
      NSLog(@"Requesting in-app message display (currently unimplemented).");
      // [[Appboy sharedInstance].inAppMessageController displayNextInAppMessageWithDelegate:nil];
      break;
    default:
      NSLog(@"Unknown in-app message display action type received.");
      return;
  }
}

- (void)setInAppMessageDelegatesEnabled:(BOOL)enabled {
  id delegate = enabled ? self : nil;
  [[Appboy sharedInstance].inAppMessageController.inAppMessageUIController setInAppMessageUIDelegate:delegate];

  // Controller delegate cannot be disabled as it may be currently used for other features.
  if (enabled) {
    [Appboy sharedInstance].inAppMessageController.delegate = self;
  }
}

# pragma mark - News Feed analytics

- (void)logCardImpression:(NSString *)cardJSONString {
  NSData *cardData = [cardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedCardDict = [NSJSONSerialization JSONObjectWithData:cardData options:NSJSONReadingMutableContainers error:&e];
  ABKCard *card = [ABKCard deserializeCardFromDictionary:deserializedCardDict];
  [card logCardImpression];
}

- (void)logCardClicked:(NSString *)cardJSONString {
  NSData *cardData = [cardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedCardDict = [NSJSONSerialization JSONObjectWithData:cardData options:NSJSONReadingMutableContainers error:&e];
  ABKCard *card = [ABKCard deserializeCardFromDictionary:deserializedCardDict];
  [card logCardClicked];
}

# pragma mark - News Feed refresh

- (void)requestFeedRefresh {
  [[NSNotificationCenter defaultCenter] addObserver:self
                                           selector:@selector(requestFeedFromCache:)
                                               name:ABKFeedUpdatedNotification
                                             object:nil];
  [[Appboy sharedInstance] requestFeedRefresh];
}

- (void)requestFeedFromCache:(NSNotification *)notification {
  BOOL fromOfflineStorage = YES;
  if (notification != nil) {
    [[NSNotificationCenter defaultCenter] removeObserver:self name:ABKFeedUpdatedNotification object:nil];
    fromOfflineStorage = NO;
  }
  if (self.unityFeedCallbackFunctionName == nil || self.unityFeedGameObjectName == nil) {
    NSLog(@"No properly configured game object. Not forwarding News Feed message.");
    return;
  }

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
  NSData *feedData = [NSJSONSerialization dataWithJSONObject:feedDictionary
                                                     options:0
                                                       error:&error];
  if (!feedData) {
    NSLog(@"Error parsing News Feed to json: %@", error);
    return;
  }
  NSString *feedString = [[NSString alloc] initWithData:feedData encoding:NSUTF8StringEncoding];
  if (feedString == nil) {
    NSLog(@"Error parsing News Feed json to string");
    return;
  }
  [self unitySendMessageTo:self.unityFeedGameObjectName withMethod:self.unityFeedCallbackFunctionName withMessage:feedString];
}

# pragma mark - Content Card analytics

- (void)logContentCardImpression:(NSString *)cardJSONString {
  NSData *cardData = [cardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedCardDict = [NSJSONSerialization JSONObjectWithData:cardData options:NSJSONReadingMutableContainers error:&e];
  ABKContentCard *card = [ABKContentCard deserializeCardFromDictionary:deserializedCardDict];
  [card logContentCardImpression];
}

- (void)logContentCardClicked:(NSString *)cardJSONString {
  NSData *cardData = [cardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedCardDict = [NSJSONSerialization JSONObjectWithData:cardData options:NSJSONReadingMutableContainers error:&e];
  ABKContentCard *card = [ABKContentCard deserializeCardFromDictionary:deserializedCardDict];
  [card logContentCardClicked];
}

- (void)logContentCardDismissed:(NSString *)cardJSONString {
  NSData *cardData = [cardJSONString dataUsingEncoding:NSUTF8StringEncoding];
  NSError *e = nil;
  id deserializedCardDict = [NSJSONSerialization JSONObjectWithData:cardData options:NSJSONReadingMutableContainers error:&e];
  ABKContentCard *card = [ABKContentCard deserializeCardFromDictionary:deserializedCardDict];
  [card logContentCardDismissed];
}

# pragma mark - Content Card refresh

- (void)requestContentCardsRefresh {
  [[NSNotificationCenter defaultCenter] addObserver:self
                                           selector:@selector(requestContentCardsFromCache:)
                                               name:ABKContentCardsProcessedNotification
                                             object:nil];
  [[Appboy sharedInstance] requestContentCardsRefresh];
}

- (void)requestContentCardsFromCache:(NSNotification *)notification {
  BOOL fromOfflineStorage = YES;
  if (notification != nil) {
    [[NSNotificationCenter defaultCenter] removeObserver:self name:ABKContentCardsProcessedNotification object:nil];
    fromOfflineStorage = NO;
  }
  if (self.unityContentCardsCallbackFunctionName == nil || self.unityContentCardsGameObjectName == nil) {
    NSLog(@"No properly configured game object. Not forwarding Content Cards message.");
    return;
  }

  NSMutableArray *cardsDictionaryArray = [NSMutableArray arrayWithCapacity:1];
  NSArray *cards = [[Appboy sharedInstance].contentCardsController getContentCards];
  for (ABKCard *card in cards) {
    NSMutableDictionary *cardDictionary = [card proxyForJson];
    [cardsDictionaryArray addObject:cardDictionary];
  }

  NSTimeInterval timestamp = [[Appboy sharedInstance].contentCardsController.lastUpdate timeIntervalSince1970];
  NSDictionary *contentCardsDictionary = @{@"mContentCards" : cardsDictionaryArray,
                                   @"mTimestamp" : [NSNumber numberWithDouble:timestamp],
                                   @"mFromOfflineStorage" : [NSNumber numberWithBool:fromOfflineStorage]};
  NSError *error;
  NSData *contentCardsData = [NSJSONSerialization dataWithJSONObject:contentCardsDictionary
                                                     options:0
                                                       error:&error];
  if (!contentCardsData) {
    NSLog(@"Error parsing Content Cards to json: %@", error);
    return;
  }
  NSString *contentCardsString = [[NSString alloc] initWithData:contentCardsData encoding:NSUTF8StringEncoding];
  if (contentCardsString == nil) {
    NSLog(@"Error parsing Content Cards json to string");
    return;
  }
  [self unitySendMessageTo:self.unityContentCardsGameObjectName withMethod:self.unityContentCardsCallbackFunctionName withMessage:contentCardsString];
}

# pragma mark - Content Card UI

- (void)displayContentCards {
  ABKContentCardsViewController *contentCards = [[ABKContentCardsViewController alloc] init];
  [ABKUIUtils.activeApplicationViewController presentViewController:contentCards
                                                           animated:YES
                                                         completion:nil];
}

# pragma mark - Push

- (void)registerPushToken:(NSData *)data {
  [[Appboy sharedInstance] registerDeviceToken:data];
  NSString *token = [AppboyUnityManager hexStringFromNSData:data];
  if (self.unityPushTokenReceivedFromSystemGameObjectName != nil && self.unityPushTokenReceivedFromSystemFunctionName != nil) {
    [self unitySendMessageTo:self.unityPushTokenReceivedFromSystemGameObjectName withMethod:self.unityPushTokenReceivedFromSystemFunctionName withMessage:token];
  }
  if (self.sendPushTokenReceivedFromSystem) {
    [self unitySendMessageTo:ABKInternalCallback withMethod:ABKInternalPushTokenReceivedFromSystem withMessage:token];
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
    [[Appboy sharedInstance] pushAuthorizationFromUserNotificationCenter:granted];
    if (self.unityPushPermissionsPromptResponseGameObjectName != nil && self.unityPushPermissionsPromptResponseFunctionName != nil) {
      [self unitySendMessageTo:self.unityPushPermissionsPromptResponseGameObjectName withMethod:self.unityPushPermissionsPromptResponseFunctionName withMessage:(granted ? @"true" : @"false")];
    }
    if (self.sendInternalPushPermissionsPromptResponse) {
      [self unitySendMessageTo:ABKInternalCallback withMethod:ABKInternalPushPermissionsPromptResponse withMessage:(granted ? @"true" : @"false")];
    }
  }];
  [[UIApplication sharedApplication] registerForRemoteNotifications];
}

- (void)forwardNotification:(NSDictionary *)notification {
  // generate a new dictionary that rearrange the notification elements
  NSMutableDictionary *aps = [NSMutableDictionary dictionaryWithDictionary:[notification objectForKey:@"aps"]];

  // check if the object for key alert is a string; if it is, then convert it to a dictionary
  id alert = [aps objectForKey:@"alert"];
  if ([alert isKindOfClass:[NSString class]]) {
    NSDictionary *alertDictionary = [NSDictionary dictionaryWithObject:alert forKey:@"body"];
    [aps setObject:alertDictionary forKey:@"alert"];
  }

  // move all other dictionaries other than aps in payload to key extra in aps dictionary
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

  UIApplication *application = [UIApplication sharedApplication];
  if (application.applicationState == UIApplicationStateActive) {
    if (self.unityPushReceivedGameObjectName == nil || self.unityPushReceivedCallbackFunctionName == nil) {
      NSLog(@"No properly configured game object. Not forwarding push received message.");
      return;
    }
    [self unitySendMessageTo:self.unityPushReceivedGameObjectName withMethod:self.unityPushReceivedCallbackFunctionName withMessage:dataString];
  } else {
    if (self.unityPushOpenedGameObjectName == nil || self.unityPushOpenedCallbackFunctionName == nil) {
      NSLog(@"No properly configured game object. Not forwarding push opened message.");
      return;
    }
    [self unitySendMessageTo:self.unityPushOpenedGameObjectName withMethod:self.unityPushOpenedCallbackFunctionName withMessage:dataString];
  }
}

# pragma mark - Gameobject callbacks

- (void)configureListenerFor:(NSInteger)messageType withGameObject:(NSString *)gameobject withMethod:(NSString *)method {
  switch ((ABKUnityMessageType)messageType) {
    case ABKPushPermissionsPromptResponse:
      NSLog(@"Setting push permissions prompt response listener to object %@, method %@", gameobject, method);
      self.unityPushPermissionsPromptResponseGameObjectName = gameobject;
      self.unityPushPermissionsPromptResponseFunctionName = method;
      break;
    case ABKPushTokenReceivedFromSystem:
      NSLog(@"Setting push token received from system listener to object %@, method %@", gameobject, method);
      self.unityPushTokenReceivedFromSystemGameObjectName = gameobject;
      self.unityPushTokenReceivedFromSystemFunctionName = method;
      break;
    case ABKPushReceived:
      NSLog(@"Setting push received listener to object %@, method %@", gameobject, method);
      [self addPushReceivedListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case ABKPushOpened:
      NSLog(@"Setting push opened listener to object %@, method %@", gameobject, method);
      [self addPushOpenedListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case ABKPushDeleted:
      NSLog(@"Push opened not supported.");
      break;
    case ABKInAppMessageReceived:
      NSLog(@"Setting in-app message received listener to object %@, method %@", gameobject, method);
      [self addInAppMessageListenerWithObjectNameAndSetDelegate:gameobject callbackMethodName:method];
      break;
    case ABKNewsFeedUpdated:
      NSLog(@"Setting News Feed updated listener to object %@, method %@", gameobject, method);
      [self addFeedListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    case ABKContentCardsUpdated:
      NSLog(@"Setting Content Cards updated listener to object %@, method %@", gameobject, method);
      [self addContentCardsListenerWithObjectName:gameobject callbackMethodName:method];
      break;
    default:
      NSLog(@"Unknown message type received.");
      return;
  }
}

- (void)setListenersFromPList {
  [self addPushReceivedListenerWithObjectName:self.brazeUnityPlist[ABKUnityPushReceivedGameObjectKey] callbackMethodName:self.brazeUnityPlist[ABKUnityPushReceivedCallbackKey]];
  [self addPushOpenedListenerWithObjectName:self.brazeUnityPlist[ABKUnityPushOpenedGameObjectKey] callbackMethodName:self.brazeUnityPlist[ABKUnityPushOpenedCallbackKey]];
  [self addInAppMessageListenerWithObjectNameAndSetDelegate:self.brazeUnityPlist[ABKUnityInAppMessageGameObjectKey] callbackMethodName:self.brazeUnityPlist[ABKUnityInAppMessageCallbackKey]];
  [self addContentCardsListenerWithObjectName:self.brazeUnityPlist[ABKUnityContentCardsGameObjectKey] callbackMethodName:self.brazeUnityPlist[ABKUnityContentCardsCallbackKey]];
  [self addFeedListenerWithObjectName:self.brazeUnityPlist[ABKUnityFeedGameObjectKey] callbackMethodName:self.brazeUnityPlist[ABKUnityFeedCallbackKey]];
}

- (void)addInAppMessageListenerWithObjectNameAndSetDelegate:(NSString *)gameObject callbackMethodName:(NSString *)callbackMethod {
  if (gameObject != nil && callbackMethod != nil) {
    [Appboy sharedInstance].inAppMessageController.delegate = [AppboyUnityManager sharedInstance];
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

# pragma mark - UIApplicationDelegate

- (void)registerApplication:(UIApplication *)application
         didReceiveRemoteNotification:(NSDictionary *)notification
         fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler {
  [[Appboy sharedInstance] registerApplication:application didReceiveRemoteNotification:notification fetchCompletionHandler:completionHandler];
  [self forwardNotification:notification];
}

# pragma mark - UNUserNotificationCenterDelegate

- (void)userNotificationCenter:(UNUserNotificationCenter *)center
         didReceiveNotificationResponse:(UNNotificationResponse *)response
         withCompletionHandler:(void (^)(void))completionHandler {
  if (completionHandler) {
    completionHandler();
  }

  if ([self.brazeUnityPlist[ABKUnityAutomaticPushIntegrationKey] boolValue]) {
    [[Appboy sharedInstance] userNotificationCenter:center didReceiveNotificationResponse:response withCompletionHandler:completionHandler];
    [self forwardNotification:response.notification.request.content.userInfo];
  }
}

# pragma mark - ABKInAppMessageControllerDelegate

/**
 * @discussion Set on the shared Appboy instance when a game object is configured to receive in-app messages.
 */
- (ABKInAppMessageDisplayChoice)beforeInAppMessageDisplayed:(ABKInAppMessage *)inAppMessage {
  ABKInAppMessageDisplayChoice displayAction = self.displayAction;

  NSData *inAppMessageData = [inAppMessage serializeToData];
  NSString *dataString = [[NSString alloc] initWithData:inAppMessageData encoding:NSUTF8StringEncoding];

  if (self.unityInAppMessageCallbackFunctionName != nil && self.unityInAppMessageGameObjectName != nil) {
    NSLog(@"Using configured game object for in-app message handing.");
    [self unitySendMessageTo:self.unityInAppMessageGameObjectName
                  withMethod:self.unityInAppMessageCallbackFunctionName
                 withMessage:dataString];

    if ([self.brazeUnityPlist[ABKUnityHandleInAppMessageDisplayKey] boolValue]) {
      NSLog(@"Braze configured to display in-app messages despite presence of game object listener. Using display action: %ld.", (long)self.displayAction);
    } else {
      displayAction = ABKDiscardInAppMessage;
    }
  }

  if (displayAction == ABKDisplayInAppMessageNow) {
    [self unitySendMessageTo:ABKInternalCallback
                  withMethod:ABKInternalIAMDisplay
                 withMessage:dataString];
  }

  return displayAction;
}

# pragma mark - ABKInAppMessageUIDelegate

- (void)onInAppMessageDismissed:(ABKInAppMessage *)inAppMessage {
  NSData *data = [inAppMessage serializeToData];
  NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
  [self unitySendMessageTo:ABKInternalCallback
                withMethod:ABKInternalIAMDismissed
               withMessage:dataString];
}

- (BOOL)onInAppMessageClicked:(ABKInAppMessage *)inAppMessage {
  NSData *data = [inAppMessage serializeToData];
  NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
  [self unitySendMessageTo:ABKInternalCallback
                withMethod:ABKInternalIAMClicked
               withMessage:dataString];
  return NO;
}

- (BOOL)onInAppMessageButtonClicked:(ABKInAppMessageImmersive *)inAppMessage
                             button:(ABKInAppMessageButton *)button {
  NSData *data = [inAppMessage serializeToData];
  NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
  NSInteger buttonId = button.buttonID;

  NSData *argv = [NSJSONSerialization dataWithJSONObject:@[dataString, @(buttonId)]
                                                 options:0
                                                   error:nil];
  NSString *argvString = [[NSString alloc] initWithData:argv encoding:NSUTF8StringEncoding];
  [self unitySendMessageTo:ABKInternalCallback
                withMethod:ABKInternalIAMButtonClicked
               withMessage:argvString];
  return NO;
}

- (BOOL)onInAppMessageHTMLButtonClicked:(ABKInAppMessageHTMLBase *)inAppMessage
                             clickedURL:(NSURL *)clickedURL
                               buttonID:(NSString *)buttonId {
  NSData *data = [inAppMessage serializeToData];
  NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
  id url = clickedURL ? clickedURL.absoluteString : [NSNull null];

  NSData *argv = [NSJSONSerialization dataWithJSONObject:@[dataString, url]
                                                 options:0
                                                   error:nil];
  NSString *argvString = [[NSString alloc] initWithData:argv encoding:NSUTF8StringEncoding];
  [self unitySendMessageTo:ABKInternalCallback
                withMethod:ABKInternalIAMHTMLClicked
               withMessage:argvString];
  return NO;
}

# pragma mark - Internal Communication

- (void)unitySendMessageTo:(NSString *)gameObjectName withMethod:(NSString *)methodName withMessage:(NSString *)message {
  NSLog(@"Sending message to %@:%@.", gameObjectName, methodName);
  UnitySendMessage([gameObjectName UTF8String],
                   [methodName UTF8String],
                   [message UTF8String]);
}

- (void)configureInternalListenerFor:(NSInteger)messageType {
  switch ((ABKUnityMessageType)messageType) {
    case ABKPushPermissionsPromptResponse:
      NSLog(@"Enabling internal push permissions prompt response listener.");
      self.sendInternalPushPermissionsPromptResponse = YES;
      break;
    case ABKPushTokenReceivedFromSystem:
      NSLog(@"Enabling push token received from system listener.");
      self.sendPushTokenReceivedFromSystem = YES;
      break;
    default:
      NSLog(@"Unknown internal message type received.");
      return;
  }
}

@end
