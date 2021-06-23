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
  private static AndroidJavaObject appboyUnityActivity;
  private static AndroidJavaObject inAppMessageUtils;
  private static AndroidJavaObject unityConfigurationProvider;

  public AndroidJavaObject AppboyUnityActivity {
    get {
      FlushAndroidPendingPushIntents();
      if (appboyUnityActivity == null) {
        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
          appboyUnityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        }
      }
      return appboyUnityActivity;
    }
  }

  public AndroidJavaObject Appboy {
    get {
      FlushAndroidPendingPushIntents();
      using (var appboyClass = new AndroidJavaClass("com.appboy.Appboy")) {
        return appboyClass.CallStatic<AndroidJavaObject>("getInstance", AppboyUnityActivity);
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
        unityConfigurationProvider = new AndroidJavaObject("com.appboy.unity.configuration.UnityConfigurationProvider", AppboyUnityActivity);
      }
      return unityConfigurationProvider;
    }
  }

  private AndroidJavaObject GetCurrentUser() {
    FlushAndroidPendingPushIntents();
    return Appboy.Call<AndroidJavaObject>("getCurrentUser");
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
    Appboy.Call("logCustomEvent", eventName);
  }

  public static AndroidJavaObject ParsePropertiesToAppboyProperties(Dictionary<string, object> properties) {
    AndroidJavaObject appboyProperties = new AndroidJavaObject("com.appboy.models.outgoing.AppboyProperties");
    if (properties != null && properties.Count > 0) {
      foreach (KeyValuePair<string, object> entry in properties) {
        if (entry.Value == null) {
          continue;
        }

        // Public API only supports int/string/double/bool/DateTime.  Other values can't get mapped
        // to Android AppboyProperty methods without casting.
        if (entry.Value.GetType() == typeof(int) || entry.Value.GetType() == typeof(string) ||
            entry.Value.GetType() == typeof(double) || entry.Value.GetType() == typeof(bool)) {
          appboyProperties.Call<AndroidJavaObject>("addProperty", entry.Key, entry.Value);
        } else {
          appboyProperties.Call<AndroidJavaObject>("addProperty", entry.Key, entry.Value.ToString());
        }
      }
    }
    return appboyProperties;
  }

  public void LogCustomEvent(string eventName, Dictionary<string, object> properties) {
    AndroidJavaObject appboyProperties = ParsePropertiesToAppboyProperties(properties);
    Appboy.Call("logCustomEvent", eventName, appboyProperties);
  }

  public void LogPurchase(string productId, string currencyCode, decimal price, int quantity) {
    var javaPrice = new AndroidJavaObject("java.math.BigDecimal", price.ToString());
    Appboy.Call("logPurchase", productId, currencyCode, javaPrice, quantity);
  }

  public void LogPurchase(string productId, string currencyCode, decimal price, int quantity, Dictionary<string, object> properties) {
    var javaPrice = new AndroidJavaObject("java.math.BigDecimal", price.ToString());
    AndroidJavaObject appboyProperties = ParsePropertiesToAppboyProperties(properties);
    Appboy.Call("logPurchase", productId, currencyCode, javaPrice, quantity, appboyProperties);
  }

  public void ChangeUser(string userId) {
    Appboy.Call("changeUser", userId);
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
    Appboy.Call("registerAppboyPushMessages", new object[] { registrationId });
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

  public void LogInAppMessageClicked(string inAppMessageJSONString) {
    var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", appboyUnityActivity, inAppMessageJSONString);
    InAppMessageUtils.CallStatic("logInAppMessageClick", inAppMessage);
  }

  public void LogInAppMessageImpression(string inAppMessageJSONString) {
    var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", appboyUnityActivity, inAppMessageJSONString);
    InAppMessageUtils.CallStatic("logInAppMessageImpression", inAppMessage);
  }

  public void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID) {
    var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", appboyUnityActivity, inAppMessageJSONString);
    InAppMessageUtils.CallStatic("logInAppMessageButtonClick", inAppMessage, buttonID);
  }

  public void RequestFeedRefresh() {
    Appboy.Call("requestFeedRefresh");
  }

  public void RequestFeedRefreshFromCache() {
    Appboy.Call("requestFeedRefreshFromCache");
  }

  public void LogFeedDisplayed() {
    Appboy.Call("logFeedDisplayed");
  }

  public void LogCardImpression(string cardId) {
    Appboy.Call("logFeedCardImpression", cardId);
  }

  public void LogCardClicked(string cardId) {
    Appboy.Call("logFeedCardClick", cardId);
  }

  public void LogContentCardImpression(string contentCardString) {
    var contentCard = Appboy.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
    contentCard.Call<bool>("logImpression");
  }

  public void LogContentCardClicked(string contentCardString) {
    var contentCard = Appboy.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
    contentCard.Call<bool>("logClick");
  }

  public void LogContentCardDismissed(string contentCardString) {
    var contentCard = Appboy.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
    contentCard.Call("setIsDismissed", true);
  }

  public void LogContentCardsDisplayed() {
    Appboy.Call("logContentCardsDisplayed");
  }

  public void RequestContentCardsRefresh() {
    Appboy.Call("requestContentCardsRefresh", false);
  }

  public void RequestContentCardsRefreshFromCache() {
    Appboy.Call("requestContentCardsRefresh", true);
  }

  public void WipeData() {
    Appboy.CallStatic("wipeData", appboyUnityActivity);
  }

  public void EnableSDK() {
    Appboy.CallStatic("enableSdk", appboyUnityActivity);
  }

  public void DisableSDK() {
    Appboy.CallStatic("disableSdk", appboyUnityActivity);
  }

  public string GetInstallTrackingId() {
    return Appboy.Call<string>("getInstallTrackingId");
  }

  public void SetAttributionData(string network, string campaign, string adgroup, string creative) {
    var attributionData = new AndroidJavaObject("com.appboy.models.outgoing.AttributionData", network, campaign, adgroup, creative);
    GetCurrentUser().Call<bool>("setAttributionData", attributionData);
  }

  public void RequestLocationInitialization() {
    Appboy.Call("requestLocationInitialization");
  }

  public void RequestGeofences(decimal latitude, decimal longitude) {
    Appboy.Call("requestGeofences", latitude, longitude);
  }

  public void RequestImmediateDataFlush() {
    Appboy.Call("requestImmediateDataFlush");
  }

  public void AddAlias(string alias, string label) {
    GetCurrentUser().Call<bool>("addAlias", alias, label);
  }

  public void ConfigureListener(BrazeUnityMessageType messageType, string gameobject, string method) {
    UnityConfigurationProvider.Call("configureListener", (int)messageType, gameobject, method);
  }

  public void SetInAppMessageDisplayAction(BrazeUnityInAppMessageDisplayActionType actionType) {
    AppboyUnityActivity.Call("onNewUnityInAppMessageManagerAction", (int)actionType);
  }

  public void DisplayContentCards() {
    AppboyUnityActivity.Call("launchContentCardsActivity");
  }
}

#endif
