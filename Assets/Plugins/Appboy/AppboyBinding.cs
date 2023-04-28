// https://docs.unity3d.com/Manual/PlatformDependentCompilation.html
#if !UNITY_EDITOR && (UNITY_ANDROID || UNITY_IOS)
  #define HAS_BRAZE_SDK
#endif

using Appboy.Internal;
using Appboy.Models;
using Appboy.Utilities;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

/// <summary>
/// These methods can be called by Unity applications on supported platforms in order to report
/// events, set user attributes, and control messaging
/// </summary>
namespace Appboy {
  /// <summary>
  /// Types of messages that Braze can be configured to send to a GameObject method at runtime.
  ///
  /// Use <see cref="ConfigureListener"/> to set up a listener.
  /// </summary>
  public enum BrazeUnityMessageType {
    /// <summary>
    /// Sent when Braze receives a response from the user after displaying a push prompt via
    /// <see cref="PromptUserForPushPermissions"/>, or if Braze is automatically configured
    /// to register for push. Currently only sent for iOS.
    /// </summary>
    PUSH_PERMISSIONS_PROMPT_RESPONSE = 0,

    /// <summary>
    /// Sent when Braze receives a push token from the OS. Currently only sent for iOS.
    ///
    /// On iOS, only sent if Braze is configured to automatically integrate push.
    /// </summary>
    PUSH_TOKEN_RECEIVED_FROM_SYSTEM = 1,

    /// <summary>
    /// Sent when the user receives a push notification.
    ///
    /// On iOS, only sent if Braze is configured to automatically integrate push. On iOS, we recommend
    /// configuring this value before application:didFinishLaunchingWithOptions: returns to ensure your
    /// callback is set before iOS push delegates are called.
    /// </summary>
    PUSH_RECEIVED = 2,

    /// <summary>
    /// Sent when the user opens a push notification.
    ///
    /// On iOS, only sent if Braze is configured to automatically integrate push. On iOS, we recommend
    /// configuring this value before application:didFinishLaunchingWithOptions: returns to ensure your
    /// callback is set before iOS push delegates are called.
    /// </summary>
    PUSH_OPENED = 3,

    /// <summary>
    /// Sent when the user has swiped away a push notification. Currently only sent for Android.
    /// </summary>
    PUSH_DELETED = 4,

    /// <summary>
    /// Sent when the SDK has a new In-App Message.
    /// </summary>
    IN_APP_MESSAGE = 5,

    /// <summary>
    /// Sent when the SDK has an update for the News Feed.
    /// </summary>
    NEWS_FEED_UPDATED = 6,

    /// <summary>
    /// Sent when the SDK has an update for Content Cards.
    /// </summary>
    CONTENT_CARDS_UPDATED = 7,

    /// <summary>
    /// Sent after an SDK Authentication error event.
    /// </summary>
    SDK_AUTHORIZATION_FAILED = 8
  }

  public enum BrazeUnityInAppMessageDisplayActionType {
    /// <summary>
    /// Sets In-App Messages to display immediately when triggered.
    /// </summary>
    IAM_DISPLAY_NOW = 0,
    /// <summary>
    /// Sets In-App Messages to display at a later time and be saved in a stack.
    /// Call DisplayNextInAppMessage() once ready to display the message at the
    /// top of the stack.
    /// </summary>
    IAM_DISPLAY_LATER = 1,
    /// <summary>
    /// Sets In-App Messages to be discarded after being triggered.
    /// </summary>
    IAM_DISCARD = 2
  }

  public delegate void PushPromptResponseReceived(bool granted);
  public delegate void PushTokenReceivedFromSystem(string token);

  public class AppboyBinding : MonoBehaviour {

    private static BrazePlatform _mBinding;
    public static BrazePlatform mBinding {
      get {
        if (_mBinding != null) {
          return _mBinding;
        }
        #if UNITY_ANDROID
          _mBinding = new BrazeAndroidPlatform();
        #elif UNITY_IOS
          _mBinding = new BrazeiOSPlatform();
        #endif
        return _mBinding;
      }
    }

    public static void LogCustomEvent(string eventName) {
      #if HAS_BRAZE_SDK
        mBinding.LogCustomEvent(eventName);
      #endif
    }

    /// <summary>
    /// Logs a custom event for the user with the given properties.
    /// </summary>
    /// <param name='eventName'>
    /// The name of the custom event.
    /// </param>
    /// <param name='properties'>
    /// A properties dictionary.  Values that are int/string/double/bool/DateTime will be passed to Android
    /// and mapped to java types.  All other values will be passed as strings.
    /// </param>
    public static void LogCustomEvent(string eventName, Dictionary<string, object> properties) {
      #if HAS_BRAZE_SDK
        mBinding.LogCustomEvent(eventName, properties);
      #endif
    }

    // Overload
    public static void LogPurchase(string productId, string currencyCode, decimal price) {
      LogPurchase(productId, currencyCode, price, 1);
    }

    public static void LogPurchase(string productId, string currencyCode, decimal price, int quantity) {
      #if HAS_BRAZE_SDK
        mBinding.LogPurchase(productId, currencyCode, price, quantity);
      #endif
    }

    public static void LogPurchase(
      string productId, 
      string currencyCode, 
      decimal price, 
      int quantity, 
      Dictionary<string, object> properties
    ) {
      #if HAS_BRAZE_SDK
        mBinding.LogPurchase(productId, currencyCode, price, quantity, properties);
      #endif  
    }

    /// <summary>
    /// When you first start using Braze on a device, the user is considered "anonymous". You can use this
    /// method to optionally identify a user with a unique ID.
    /// </summary>
    /// <param name="userId"></param>
    public static void ChangeUser(string userId, string sdkAuthSignature = null) {
      #if HAS_BRAZE_SDK
        mBinding.ChangeUser(userId, sdkAuthSignature);
      #endif  
    }

    public static void SetSdkAuthenticationSignature(string sdkAuthSignature) {
      #if HAS_BRAZE_SDK
        mBinding.SetSdkAuthenticationSignature(sdkAuthSignature);
      #endif  
    }

    public static void SetUserFirstName(string firstName) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserFirstName(firstName);
      #endif  
    }

    public static void SetUserLastName(string lastName) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserLastName(lastName);
      #endif 
    }

    public static void SetUserEmail(string email) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserEmail(email);
      #endif 
    }

    /// <summary>
    /// Sets the gender field for the current user.
    /// </summary>
    /// <param name='gender'>
    /// The gender of the user. See `Appboy/models/Gender.cs` for options.
    /// </param>
    public static void SetUserGender(Gender gender) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserGender(gender);
      #endif 
    }


    /// <summary>
    /// Sets the date of birth for the current user.
    /// </summary>
    /// <param name='year'>
    /// Ordinal for the year of birth in the Gregorian calendar.
    /// </param>
    /// <param name='month'>
    /// Ordinal for the month of the year with January = 1 and December = 12.
    /// </param>
    /// <param name='day'>
    /// Ordinal for the day of the month.
    /// </param>
    public static void SetUserDateOfBirth(int year, int month, int day) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserDateOfBirth(year, month, day);
      #endif 
    }

    public static void SetUserCountry(string country) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserCountry(country);
      #endif 
    }

    public static void SetUserHomeCity(string city) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserHomeCity(city);
      #endif 
    }

    /// <summary>
    /// Configures the user's opt-in status for email within Braze.
    /// </summary>
    /// <param name="emailNotificationSubscriptionType"></param>
    public static void SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType emailNotificationSubscriptionType) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserEmailNotificationSubscriptionType(emailNotificationSubscriptionType);
      #endif 
    }

    /// <summary>
    /// Configures the user's opt-in status for push within Braze.
    /// </summary>
    /// <param name="pushNotificationSubscriptionType"></param>
    public static void SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType pushNotificationSubscriptionType) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserPushNotificationSubscriptionType(pushNotificationSubscriptionType);
      #endif 
    }

    public static void SetUserPhoneNumber(string phoneNumber) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserPhoneNumber(phoneNumber);
      #endif 
    }

    public static void SetCustomUserAttribute(string key, bool value) {
      #if HAS_BRAZE_SDK
        mBinding.SetCustomUserAttribute(key, value);
      #endif 
    }

    public static void SetCustomUserAttribute(string key, int value) {
      #if HAS_BRAZE_SDK
        mBinding.SetCustomUserAttribute(key, value);
      #endif 
    }

    public static void SetCustomUserAttribute(string key, float value) {
      #if HAS_BRAZE_SDK
        mBinding.SetCustomUserAttribute(key, value);
      #endif 
    }

    public static void SetCustomUserAttribute(string key, string value) {
      #if HAS_BRAZE_SDK
        mBinding.SetCustomUserAttribute(key, value);
      #endif 
    }

    public static void SetCustomUserAttributeToNow(string key) {
      #if HAS_BRAZE_SDK
        mBinding.SetCustomUserAttributeToNow(key);
      #endif 
    }

    public static void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
      #if HAS_BRAZE_SDK
        mBinding.SetCustomUserAttributeToSecondsFromEpoch(key, secondsFromEpoch);
      #endif 
    }

    public static void UnsetCustomUserAttribute(string key) {
      #if HAS_BRAZE_SDK
        mBinding.UnsetCustomUserAttribute(key);
      #endif 
    }

    // Overload
    public static void IncrementCustomUserAttribute(string key) {
      IncrementCustomUserAttribute(key, 1);
    }

    public static void IncrementCustomUserAttribute(string key, int incrementValue) {
      #if HAS_BRAZE_SDK
        mBinding.IncrementCustomUserAttribute(key, incrementValue);
      #endif 
    }

    public static void SetCustomUserAttributeArray(string key, List<string> array, int size) {
      #if HAS_BRAZE_SDK
        mBinding.SetCustomUserAttributeArray(key, array, size);
      #endif 
    }

    public static void AddToCustomUserAttributeArray(string key, string value) {
      #if HAS_BRAZE_SDK
        mBinding.AddToCustomUserAttributeArray(key, value);
      #endif 
    }

    public static void RemoveFromCustomUserAttributeArray(string key, string value) {
      #if HAS_BRAZE_SDK
        mBinding.RemoveFromCustomUserAttributeArray(key, value);
      #endif 
    }

    public static void SetUserLastKnownLocation(
      double latitude,
      double longitude,
      double? altitude = null,
      double? accuracy = null,
      double? verticalAccuracy = null
    ) {
      #if HAS_BRAZE_SDK
        mBinding.SetUserLastKnownLocation(latitude, longitude, altitude, accuracy, verticalAccuracy);
      #endif
    }

    #if UNITY_ANDROID

      /// <summary>
      /// Registers a push token with Braze.
      /// </summary>
      /// <param name='registrationId'>
      /// The push token
      /// </param>
      public static void RegisterAppboyPushMessages(string registrationId) {
        #if UNITY_ANDROID
          mBinding.RegisterAppboyPushMessages(registrationId);
        #endif 
      }

    #elif UNITY_IOS

      /// <summary>
      /// Registers a push token with Braze.
      /// </summary>
      /// <param name='registrationDeviceToken'>
      /// The push token
      /// </param>
      public static void RegisterAppboyPushMessages(byte[] registrationDeviceToken) {
        #if UNITY_IOS
          mBinding.RegisterAppboyPushMessages(registrationDeviceToken);
        #endif 
      }

    #endif

    /// <summary>
    /// Prompts the user for push permissions and registers the user to receive push notifications.
    /// 
    /// To subscribe to the result, set a Game Object to listen for 
    /// <see cref="BrazeUnityMessageType.PUSH_PERMISSIONS_PROMPT_RESPONSE"/> events using 
    /// <see cref="ConfigureListener"/>, or pass in a delegate instance of <see cref="PushPromptResponseReceived"/>.
    /// </summary>
    /// <param name='provisional'>
    /// If set to true, on iOS 12 and above, the user will be provisionally (silently) authorized 
    /// to receive quiet push.
    /// Otherwise, the user will be shown the native push prompt.
    /// </param>
    /// <param name='reponseDelegate'>
    /// An optional delegate instance to receive the user's response to the prompt.
    /// </param>
    public static void PromptUserForPushPermissions(bool provisional, PushPromptResponseReceived responseDelegate = null) {
      #if HAS_BRAZE_SDK
        mBinding.PromptUserForPushPermissions(provisional, responseDelegate);
      #endif 
    }

    /// <summary>
    /// Configures Braze to send push tokens from the OS to the provided delegate. Braze will only listen for push tokens
    /// from the OS if automatic push registration is enabled.
    ///
    /// Tokens passed to Braze via <see cref="RegisterAppboyPushMessages"/> will also cause the delegate to be called.
    /// </param>
    /// <param name='tokenDelegate'>
    /// A delegate instance to receive push tokens.
    /// </param>
    public static void SetPushTokenReceivedFromSystemDelegate(PushTokenReceivedFromSystem tokenDelegate) {
      #if HAS_BRAZE_SDK
        mBinding.SetPushTokenReceivedFromSystemDelegate(tokenDelegate);
      #endif 
    }

    public static void LogInAppMessageClicked(string inAppMessageJSONString) {
      #if HAS_BRAZE_SDK
        mBinding.LogInAppMessageClicked(inAppMessageJSONString);
      #endif 
    }

    public static void LogInAppMessageImpression(string inAppMessageJSONString) {
      #if HAS_BRAZE_SDK
        mBinding.LogInAppMessageImpression(inAppMessageJSONString);
      #endif 
    }

    public static void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID) {
      #if HAS_BRAZE_SDK
        mBinding.LogInAppMessageButtonClicked(inAppMessageJSONString, buttonID);
      #endif 
    }

    public static void RequestFeedRefresh() {
      #if HAS_BRAZE_SDK
        mBinding.RequestFeedRefresh();
      #endif 
    }

    public static void RequestFeedRefreshFromCache() {
      #if HAS_BRAZE_SDK
        mBinding.RequestFeedRefreshFromCache();
      #endif 
    }

    public static void LogFeedDisplayed() {
      #if HAS_BRAZE_SDK
        mBinding.LogFeedDisplayed();
      #endif 
    }

    #if UNITY_ANDROID

      public static void LogCardImpression(string cardId) {
        #if HAS_BRAZE_SDK
          mBinding.LogCardImpression(cardId);
        #endif 
      }

      public static void LogCardClicked(string cardId) {
        #if HAS_BRAZE_SDK
          mBinding.LogCardClicked(cardId);
        #endif 
      }

    #elif UNITY_IOS

      public static void LogCardImpression(string cardJSONString) {
        #if HAS_BRAZE_SDK
          mBinding.LogCardImpression(cardJSONString);
        #endif 
      }

      public static void LogCardClicked(string cardJSONString) {
        #if HAS_BRAZE_SDK
          mBinding.LogCardClicked(cardJSONString);
        #endif 
      }

    #endif

    public static void RequestContentCardsRefresh() {
      #if HAS_BRAZE_SDK
        mBinding.RequestContentCardsRefresh();
      #endif 
    }

    public static void RequestContentCardsRefreshFromCache() {
      #if HAS_BRAZE_SDK
        mBinding.RequestContentCardsRefreshFromCache();
      #endif 
    }

    public static void LogContentCardClicked(string contentCardString) {
      #if HAS_BRAZE_SDK
        mBinding.LogContentCardClicked(contentCardString);
      #endif 
    }

    public static void LogContentCardImpression(string contentCardString) { 
      #if HAS_BRAZE_SDK
        mBinding.LogContentCardImpression(contentCardString);
      #endif 
    }

    public static void LogContentCardDismissed(string contentCardString) { 
      #if HAS_BRAZE_SDK
        mBinding.LogContentCardDismissed(contentCardString);
      #endif 
    }

    public static void WipeData() {
      #if HAS_BRAZE_SDK
        mBinding.WipeData();
      #endif 
    }

    public static void EnableSDK() {
      #if HAS_BRAZE_SDK
        mBinding.EnableSDK();
      #endif 
    }

    public static void DisableSDK() {
      #if HAS_BRAZE_SDK
        mBinding.DisableSDK();
      #endif 
    }

    public static string GetInstallTrackingId() {
      #if HAS_BRAZE_SDK
        return mBinding.GetInstallTrackingId();
      #else
        return null;
      #endif 
    }

    public static void SetAttributionData(string network, string campaign, string adgroup, string creative) {
      #if HAS_BRAZE_SDK
        mBinding.SetAttributionData(network, campaign, adgroup, creative);
      #endif 
    }

    /// <summary>
    /// When location permissions are granted, client app can call this method to request immediate
    /// initialization of Braze geofences and also request a single location update.
    /// </summary>
    public static void RequestLocationInitialization() {
      #if HAS_BRAZE_SDK
        mBinding.RequestLocationInitialization();
      #endif 
    }

    /// <summary>
    /// Requests a refresh of Braze Geofences for the specified GPS coordinate.
    /// </summary>
    /// <param name='latitude'>
    /// A valid GPS latitude in range (-90, 90).
    /// </param>
    /// <param name='longitude'>
    /// A valid GPS longitude in range (-180, 180).
    /// </param>
    /// </summary>
    public static void RequestGeofences(decimal latitude, decimal longitude) {
      #if HAS_BRAZE_SDK
        mBinding.RequestGeofences(latitude, longitude);
      #endif 
    }

    public static void RequestImmediateDataFlush() {
      #if HAS_BRAZE_SDK
        mBinding.RequestImmediateDataFlush();
      #endif 
    }

    public static void AddAlias(string alias, string label) {
      #if HAS_BRAZE_SDK
        mBinding.AddAlias(alias, label);
      #endif 
    }

    /// <summary>
    /// Used to configure Braze to send messages to GameObjects based
    /// on lifecycle events. See <see cref="BrazeUnityMessageType"/> for
    /// available message types.
    /// </summary>
    /// <param name="messageType">
    /// The type of message to send to the target GameObject.
    /// </param>
    /// <param name="gameobject">
    /// The target GameObject.
    /// </param>
    /// <param name="method">
    /// The script method to call on the GameObject.
    /// </param>
    public static void ConfigureListener(BrazeUnityMessageType messageType, string gameobject, string method) {
      #if HAS_BRAZE_SDK
        mBinding.ConfigureListener(messageType, gameobject, method);
      #endif
    }

    /// <summary>
    /// Sets the default action taken by the Braze SDK when an In-App Message is
    /// ready to be displayed.
    /// </summary>
    /// <param name="actionType">
    /// The action taken.
    /// </param>
    public static void SetInAppMessageDisplayAction(BrazeUnityInAppMessageDisplayActionType actionType) {
      #if HAS_BRAZE_SDK
        mBinding.SetInAppMessageDisplayAction(actionType);
      #endif 
    }

    /// <summary>
    /// Displays the next available In-App Message in the In-App Messages stack.
    ///
    /// Use it alongside <see cref="SetInAppMessageDisplayAction"/> to customize
    /// when an In-App Message is displayed.
    /// </summary>
    public static void DisplayNextInAppMessage() {
      #if HAS_BRAZE_SDK
        mBinding.DisplayNextInAppMessage();
      #endif 
    }

    public static void DisplayContentCards() {
      #if HAS_BRAZE_SDK
        mBinding.DisplayContentCards();
      #endif 
    }

    /// <summary>
    /// Adds the user to the subscription group.
    /// </summary>
    /// <param name="subscriptionGroupId">
    /// The subscription group ID that the user will be added to.
    /// </param>
    public static void AddToSubscriptionGroup(string id) {
      #if HAS_BRAZE_SDK
        mBinding.AddToSubscriptionGroup(id);
      #endif 
    }

    /// <summary>
    /// Removes the user from the subscription group.
    /// </summary>
    /// <param name="subscriptionGroupId">
    /// The subscription group ID that the user will be removed from.
    /// </param>
    public static void RemoveFromSubscriptionGroup(string id) {
      #if HAS_BRAZE_SDK
        mBinding.RemoveFromSubscriptionGroup(id);
      #endif 
    }

    /// <summary>
    /// Set this value to a valid BrazeInAppMessageListener instance to 
    /// register for in-app messages related UI events.
    /// </summary>
    /// <seealso cref="BrazeInAppMessageListener">
    /// <value>Listener for in-app messages UI events.</value>
    public static BrazeInAppMessageListener inAppMessageListener {
      get {
        #if HAS_BRAZE_SDK
          return mBinding.inAppMessageListener;
        #else
          return null; 
        #endif
      }
      set {
        #if HAS_BRAZE_SDK
          mBinding.inAppMessageListener = value;
        #endif
      }
    }
  }
}
