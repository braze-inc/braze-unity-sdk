using Appboy;
using Appboy.Internal;
using Appboy.Models;
using Appboy.Utilities;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

#if UNITY_ANDROID

public class BrazeAndroidPlatform : BrazePlatform {
  private static AndroidJavaObject brazeUnityActivity;
  private static AndroidJavaObject inAppMessageUtils;
  private static AndroidJavaObject unityConfigurationProvider;

  public AndroidJavaObject BrazeUnityActivity {
    get {
      FlushAndroidPendingPushIntents();
      if (brazeUnityActivity == null) {
        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
          brazeUnityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        }
      }
      return brazeUnityActivity;
    }
  }

  public AndroidJavaObject Braze {
    get {
      FlushAndroidPendingPushIntents();
      using (var brazeClass = new AndroidJavaClass("com.braze.Braze")) {
        return brazeClass.CallStatic<AndroidJavaObject>("getInstance", BrazeUnityActivity);
      }
    }
  }

  public AndroidJavaObject BrazeInAppMessageManager {
    get {
      FlushAndroidPendingPushIntents();
      using (var managerClass = new AndroidJavaClass("com.braze.ui.inappmessage.BrazeInAppMessageManager")) {
        return managerClass.CallStatic<AndroidJavaObject>("getInstance");
      }
    }
  }

  public AndroidJavaObject InAppMessageUtils {
    get {
      FlushAndroidPendingPushIntents();
      if (inAppMessageUtils == null) {
        inAppMessageUtils = new AndroidJavaClass("com.appboy.unity.utils.InAppMessageUtils");
      }
      return inAppMessageUtils;
    }
  }

  public AndroidJavaObject UnityConfigurationProvider {
    get {
      FlushAndroidPendingPushIntents();
      if (unityConfigurationProvider == null) {
        unityConfigurationProvider = new AndroidJavaObject("com.appboy.unity.configuration.UnityConfigurationProvider", BrazeUnityActivity);
      }
      return unityConfigurationProvider;
    }
  }

  private AndroidJavaObject GetCurrentUser() {
    FlushAndroidPendingPushIntents();
    return Braze.Call<AndroidJavaObject>("getCurrentUser");
  }

  /// <summary>
  /// Informs the push broadcast receiver to flush any pending push intents
  /// </summary>
  public void FlushAndroidPendingPushIntents() {
    using (var receiverClass = new AndroidJavaClass("com.appboy.unity.AppboyUnityPushBroadcastReceiver")) {
      receiverClass.CallStatic("onBindingInitialized");
    }
  }

  public void LogCustomEvent(string eventName) {
    Braze.Call("logCustomEvent", eventName);
  }

  public static AndroidJavaObject ParsePropertiesToBrazeProperties(Dictionary<string, object> properties) {
    var jsonStr = Json.Serialize(properties);
    AndroidJavaObject jsonObj = new AndroidJavaObject("org.json.JSONObject", jsonStr);
    AndroidJavaObject props = new AndroidJavaObject("com.braze.models.outgoing.BrazeProperties", jsonObj);
    return props;
  }

  public void LogCustomEvent(string eventName, Dictionary<string, object> properties) {
    AndroidJavaObject brazeProperties = ParsePropertiesToBrazeProperties(properties);
    Braze.Call("logCustomEvent", eventName, brazeProperties);
  }

  public void LogPurchase(string productId, string currencyCode, decimal price, int quantity) {
    var javaPrice = new AndroidJavaObject("java.math.BigDecimal", price.ToString());
    Braze.Call("logPurchase", productId, currencyCode, javaPrice, quantity);
  }

  public void LogPurchase(string productId, string currencyCode, decimal price, int quantity, Dictionary<string, object> properties) {
    var javaPrice = new AndroidJavaObject("java.math.BigDecimal", price.ToString());
    AndroidJavaObject brazeProperties = ParsePropertiesToBrazeProperties(properties);
    Braze.Call("logPurchase", productId, currencyCode, javaPrice, quantity, brazeProperties);
  }

  public void ChangeUser(string userId) {
    Braze.Call("changeUser", userId);
  }

  public void SetUserFirstName(string firstName) {
    GetCurrentUser().Call<bool>("setFirstName", firstName);
  }

  public void SetUserLastName(string lastName) {
    GetCurrentUser().Call<bool>("setLastName", lastName);
  }

  public void SetUserEmail(string email) {
    GetCurrentUser().Call<bool>("setEmail", email);
  }

  public void SetUserGender(Gender gender) {
    using (var genderClass = new AndroidJavaClass("com.appboy.enums.Gender")) {
      switch (gender) {
        case Gender.Male:
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("MALE"));
          break;
        case Gender.Female:
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("FEMALE"));
          break;
        case Gender.Other:
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("OTHER"));
          break;
        case Gender.Unknown:
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("UNKNOWN"));
          break;
        case Gender.NotApplicable:
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("NOT_APPLICABLE"));
          break;
        case Gender.PreferNotToSay:
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("PREFER_NOT_TO_SAY"));
          break;
        default:
          Debug.Log("Unknown gender received: " + gender);
          break;
      }
    }
  }

  public void SetUserDateOfBirth(int year, int month, int day) {
    using (var monthClass = new AndroidJavaClass("com.appboy.enums.Month")) {
      AndroidJavaObject monthObject;
      switch (month) {
        case 1:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("JANUARY");
          break;
        case 2:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("FEBRUARY");
          break;
        case 3:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("MARCH");
          break;
        case 4:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("APRIL");
          break;
        case 5:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("MAY");
          break;
        case 6:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("JUNE");
          break;
        case 7:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("JULY");
          break;
        case 8:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("AUGUST");
          break;
        case 9:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("SEPTEMBER");
          break;
        case 10:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("OCTOBER");
          break;
        case 11:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("NOVEMBER");
          break;
        case 12:
          monthObject = monthClass.GetStatic<AndroidJavaObject>("DECEMBER");
          break;
        default:
          Debug.Log("Month must be in range from 1-12");
          return;
      }
      GetCurrentUser().Call<bool>("setDateOfBirth", year, monthObject, day);
    }
  }

  public void SetUserCountry(string country) {
    GetCurrentUser().Call<bool>("setCountry", country);
  }

  public void SetUserHomeCity(string city) {
    GetCurrentUser().Call<bool>("setHomeCity", city);
  }

  public void SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType emailNotificationSubscriptionType) {
    using (var notificationTypeClass = new AndroidJavaClass("com.appboy.enums.NotificationSubscriptionType")) {
      switch (emailNotificationSubscriptionType) {
        case AppboyNotificationSubscriptionType.OPTED_IN:
          GetCurrentUser().Call<bool>("setEmailNotificationSubscriptionType", notificationTypeClass.GetStatic<AndroidJavaObject>("OPTED_IN"));
          break;
        case AppboyNotificationSubscriptionType.SUBSCRIBED:
          GetCurrentUser().Call<bool>("setEmailNotificationSubscriptionType", notificationTypeClass.GetStatic<AndroidJavaObject>("SUBSCRIBED"));
          break;
        case AppboyNotificationSubscriptionType.UNSUBSCRIBED:
          GetCurrentUser().Call<bool>("setEmailNotificationSubscriptionType", notificationTypeClass.GetStatic<AndroidJavaObject>("UNSUBSCRIBED"));
          break;
        default:
          Debug.Log("Unknown notification subscription type received: " + emailNotificationSubscriptionType);
          break;
      }
    }
  }

  public void SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType pushNotificationSubscriptionType) {
    using (var notificationTypeClass = new AndroidJavaClass("com.appboy.enums.NotificationSubscriptionType")) {
      switch (pushNotificationSubscriptionType) {
        case AppboyNotificationSubscriptionType.OPTED_IN:
          GetCurrentUser().Call<bool>("setPushNotificationSubscriptionType", notificationTypeClass.GetStatic<AndroidJavaObject>("OPTED_IN"));
          break;
        case AppboyNotificationSubscriptionType.SUBSCRIBED:
          GetCurrentUser().Call<bool>("setPushNotificationSubscriptionType", notificationTypeClass.GetStatic<AndroidJavaObject>("SUBSCRIBED"));
          break;
        case AppboyNotificationSubscriptionType.UNSUBSCRIBED:
          GetCurrentUser().Call<bool>("setPushNotificationSubscriptionType", notificationTypeClass.GetStatic<AndroidJavaObject>("UNSUBSCRIBED"));
          break;
        default:
          Debug.Log("Unknown notification subscription type received: " + pushNotificationSubscriptionType);
          break;
      }
    }
  }

  public void SetUserPhoneNumber(string phoneNumber) {
    GetCurrentUser().Call<bool>("setPhoneNumber", phoneNumber);
  }

  public void SetUserAvatarImageURL(string imageURL) {
    GetCurrentUser().Call<bool>("setAvatarImageUrl", imageURL);
  }

  public void SetCustomUserAttribute(string key, bool value) {
    GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
  }

  public void SetCustomUserAttribute(string key, int value) {
    GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
  }

  public void SetCustomUserAttribute(string key, float value) {
    GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
  }

  public void SetCustomUserAttribute(string key, string value) {
    GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
  }

  public void SetCustomUserAttributeToNow(string key) {
    GetCurrentUser().Call<bool>("setCustomUserAttributeToNow", key);
  }

  public void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
    GetCurrentUser().Call<bool>("setCustomUserAttributeToSecondsFromEpoch", key, secondsFromEpoch);
  }

  public void UnsetCustomUserAttribute(string key) {
    GetCurrentUser().Call<bool>("unsetCustomUserAttribute", key);
  }

  public void IncrementCustomUserAttribute(string key, int incrementValue) {
    GetCurrentUser().Call<bool>("incrementCustomUserAttribute", key, incrementValue);
  }

  public void SetCustomUserAttributeArray(string key, List<string> array, int size) {
    if (array == null) {
      GetCurrentUser().Call<bool>("setCustomAttributeArray", key, null);
    } else {
      GetCurrentUser().Call<bool>("setCustomAttributeArray", key, array.ToArray());
    }
  }

  public void AddToCustomUserAttributeArray(string key, string value) {
    GetCurrentUser().Call<bool>("addToCustomAttributeArray", key, value);
  }

  public void setUserFacebookData(string facebookId, string firstName, string lastName, string email, string bio, string cityName, Gender? gender, int? numberOfFriends, string birthday) {
    var genderClass = new AndroidJavaClass("com.appboy.enums.Gender");
    AndroidJavaObject genderEnum = null;
    if (gender != null) {
      switch (gender) {
        case Gender.Male:
        genderEnum = genderClass.GetStatic<AndroidJavaObject>("MALE");
          break;
        case Gender.Female:
          genderEnum = genderClass.GetStatic<AndroidJavaObject>("FEMALE");
          break;
        default:
          Debug.Log("Unknown gender received: " + gender);
          break;
      }
    }

    var facebookUser = new AndroidJavaObject("com.appboy.models.outgoing.FacebookUser", new object[]
      {
      facebookId,
      firstName,
      lastName,
      email,
      bio,
      cityName,
      genderEnum,
      numberOfFriends == null ? null : new AndroidJavaObject("java.lang.Integer", numberOfFriends),
      null,
      birthday
      }
    );

    GetCurrentUser().Call<bool>("setFacebookData", facebookUser);
  }

  public void setUserTwitterData(int? twitterUserId, string twitterHandle, string name, string description, int? followerCount, int? followingCount, int? tweetCount, string profileImageUrl) {
    var twitterUser = new AndroidJavaObject("com.appboy.models.outgoing.TwitterUser", new object[]
      {
        twitterUserId == null ? null : new AndroidJavaObject("java.lang.Integer", twitterUserId),
        twitterHandle,
        name,
        description,
        twitterUserId == null ? null : new AndroidJavaObject("java.lang.Integer", followerCount),
        twitterUserId == null ? null : new AndroidJavaObject("java.lang.Integer", followingCount),
        twitterUserId == null ? null : new AndroidJavaObject("java.lang.Integer", tweetCount),
        profileImageUrl
      }
    );
    GetCurrentUser().Call<bool>("setTwitterData", twitterUser);
  }

  public void RemoveFromCustomUserAttributeArray(string key, string value) {
    GetCurrentUser().Call<bool>("removeFromCustomAttributeArray", key, value);
  }

  public void RegisterAppboyPushMessages(string registrationId) {
    Braze.Call("registerAppboyPushMessages", new object[] { registrationId });
  }

  /// <summary>
  /// No-op on Android.
  /// </summary>
  public void PromptUserForPushPermissions(bool provisional, PushPromptResponseReceived reponseDelegate = null) {}

  /// <summary>
  /// No-op on Android.
  /// </summary>
  /// <param name='tokenDelegate'>
  /// </param>
  public void SetPushTokenReceivedFromSystemDelegate(PushTokenReceivedFromSystem tokenDelegate) {}

  private BrazeInAppMessageListener _inAppMessageListener;
  public BrazeInAppMessageListener inAppMessageListener {
    get { return _inAppMessageListener; }
    set { SetInAppMessageListener(value); }
  }

  private void SetInAppMessageListener(BrazeInAppMessageListener listener) {
    _inAppMessageListener = listener;
    BrazeUnityActivity.Call("setInAppMessageListener");
    BrazeInternalGameObject.setInAppMessageListener(listener);
  }

  public void LogInAppMessageClicked(string inAppMessageJSONString) {
    var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", brazeUnityActivity, inAppMessageJSONString);
    InAppMessageUtils.CallStatic("logInAppMessageClick", inAppMessage);
  }

  public void LogInAppMessageImpression(string inAppMessageJSONString) {
    var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", brazeUnityActivity, inAppMessageJSONString);
    InAppMessageUtils.CallStatic("logInAppMessageImpression", inAppMessage);
  }

  public void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID) {
    var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", brazeUnityActivity, inAppMessageJSONString);
    InAppMessageUtils.CallStatic("logInAppMessageButtonClick", inAppMessage, buttonID);
  }

  public void RequestFeedRefresh() {
    Braze.Call("requestFeedRefresh");
  }

  public void RequestFeedRefreshFromCache() {
    Braze.Call("requestFeedRefreshFromCache");
  }

  public void LogFeedDisplayed() {
    Braze.Call("logFeedDisplayed");
  }

  public void LogCardImpression(string cardId) {
    Braze.Call("logFeedCardImpression", cardId);
  }

  public void LogCardClicked(string cardId) {
    Braze.Call("logFeedCardClick", cardId);
  }

  public void LogContentCardImpression(string contentCardString) {
    var contentCard = Braze.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
    contentCard.Call<bool>("logImpression");
  }

  public void LogContentCardClicked(string contentCardString) {
    var contentCard = Braze.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
    contentCard.Call<bool>("logClick");
  }

  public void LogContentCardDismissed(string contentCardString) {
    var contentCard = Braze.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
    contentCard.Call("setIsDismissed", true);
  }

  public void LogContentCardsDisplayed() {
    Braze.Call("logContentCardsDisplayed");
  }

  public void RequestContentCardsRefresh() {
    Braze.Call("requestContentCardsRefresh", false);
  }

  public void RequestContentCardsRefreshFromCache() {
    Braze.Call("requestContentCardsRefresh", true);
  }

  public void WipeData() {
    Braze.CallStatic("wipeData", brazeUnityActivity);
  }

  public void EnableSDK() {
    Braze.CallStatic("enableSdk", brazeUnityActivity);
  }

  public void DisableSDK() {
    Braze.CallStatic("disableSdk", brazeUnityActivity);
  }

  public string GetInstallTrackingId() {
    return Braze.Call<string>("getInstallTrackingId");
  }

  public void SetAttributionData(string network, string campaign, string adgroup, string creative) {
    var attributionData = new AndroidJavaObject("com.appboy.models.outgoing.AttributionData", network, campaign, adgroup, creative);
    GetCurrentUser().Call<bool>("setAttributionData", attributionData);
  }

  public void RequestLocationInitialization() {
    Braze.Call("requestLocationInitialization");
  }

  public void RequestGeofences(decimal latitude, decimal longitude) {
    Braze.Call("requestGeofences", latitude, longitude);
  }

  public void RequestImmediateDataFlush() {
    Braze.Call("requestImmediateDataFlush");
  }

  public void AddAlias(string alias, string label) {
    GetCurrentUser().Call<bool>("addAlias", alias, label);
  }

  public void ConfigureListener(BrazeUnityMessageType messageType, string gameobject, string method) {
    UnityConfigurationProvider.Call("configureListener", (int)messageType, gameobject, method);
  }

  public void SetInAppMessageDisplayAction(BrazeUnityInAppMessageDisplayActionType actionType) {
    BrazeUnityActivity.Call("onNewUnityInAppMessageManagerAction", (int)actionType);
  }

  public void DisplayNextInAppMessage() {
    BrazeInAppMessageManager.Call<bool>("requestDisplayInAppMessage");
  }

  public void DisplayContentCards() {
    BrazeUnityActivity.Call("launchContentCardsActivity");
  }

  public void AddToSubscriptionGroup(string id) {
    GetCurrentUser().Call<bool>("addToSubscriptionGroup", id);
  }

  public void RemoveFromSubscriptionGroup(string id) {
    GetCurrentUser().Call<bool>("removeFromSubscriptionGroup", id);
  }
}

#endif
