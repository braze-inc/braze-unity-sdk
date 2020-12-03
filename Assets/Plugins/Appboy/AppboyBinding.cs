// When developing, you can place #define UNITY_ANDROID or #define UNITY_IOS above this line
// in order to get correct syntax highlighting in the region you are working on.
using Appboy.Models;
using UnityEngine;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Appboy.Utilities;
using System;
using System.Text;

/// <summary>
/// These methods can be called by Unity applications using iOS or Android in order to report
/// events and set user attributes. Please see the Appboy Android JavaDocs for more
/// detailed guidance on usage (note that only a subset of the functions in the JavaDocs
/// are available in the Unity API):
/// http://appboy.github.io/appboy-android-sdk/javadocs/com/appboy/IAppboy.html
/// http://appboy.github.io/appboy-android-sdk/javadocs/index.html
/// </summary>

namespace Appboy {
  public class AppboyBinding : MonoBehaviour {
    // Overloads
    // These will call the associated binding method for the current live platform
    public static void LogPurchase(string productId, string currencyCode, decimal price) {
      LogPurchase(productId, currencyCode, price, 1);
    }

    public static void IncrementCustomUserAttribute(string key) {
      IncrementCustomUserAttribute(key, 1);
    }
    // End Overloads

#if UNITY_IOS
    void Start() {
      Debug.Log("Starting Appboy binding for iOS clients.");
    }

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logCustomEvent(string eventName, string properties);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _changeUser(string userId);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logPurchase(string productId, string currencyCode, string price, int quantity, string properties);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserFirstName(string firstName);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserLastName(string lastName);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserPhoneNumber(string phoneNumber);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserAvatarImageURL(string imageURL);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserGender(int gender);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserEmail(string email);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserDateOfBirth(int year, int month, int day);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserCountry(string country);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserHomeCity(string city);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserEmailNotificationSubscriptionType(int emailNotificationSubscriptionType);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserPushNotificationSubscriptionType(int pushNotificationSubscriptionType);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setCustomUserAttributeBool(string key, bool val);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setCustomUserAttributeInt(string key, int val);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setCustomUserAttributeFloat(string key, float val);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setCustomUserAttributeString(string key, string val);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setCustomUserAttributeToNow(string key);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setCustomUserAttributeToSecondsFromEpoch(string key, long seconds);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _unsetCustomUserAttribute(string key);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _incrementCustomUserAttribute(string key, int incrementValue);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setCustomUserAttributeArray(string key, string[] array, int size);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _addToCustomUserAttributeArray(string key, string value);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _removeFromCustomUserAttributeArray(string key, string value);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserFacebookData(string facebookId, string firstName, string lastName, string email, string bio, string cityName, int gender, int numberOfFriends, string birthday);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setUserTwitterData(int twitterUserId, string twitterHandle, string name, string description, int followerCount, int followingCount, int tweetCount, string profileImageUrl);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logInAppMessageClicked(string inAppMessageJSONString);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logInAppMessageImpression(string inAppMessageJSONString);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logCardImpression(string cardJSONString);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logCardClicked(string cardJSONString);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _requestFeedRefresh();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _requestFeedRefreshFromCache();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logFeedDisplayed();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logContentCardImpression(string cardJSONString);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logContentCardClicked(string cardJSONString);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logContentCardDismissed(string cardJSONString);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _requestContentCardsRefresh();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _requestContentCardsRefreshFromCache();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _logContentCardsDisplayed();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _displayNextInAppMessage(bool withDelegate);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _wipeData();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _enableSDK();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _disableSDK();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _setAttributionData(string network, string campaign, string adgroup, string creative);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _requestGeofences(decimal latitude, decimal longitude);

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _requestImmediateDataFlush();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern string _getInstallTrackingId();

    [System.Runtime.InteropServices.DllImport("__Internal")]
    private static extern void _registerAppboyPushMessages(string registrationTokenBase64);

    public static void LogCustomEvent(string eventName) {
      _logCustomEvent(eventName, null);
    }

    public static void LogCustomEvent(string eventName, Dictionary<string, object> properties) {
      var propertiesString = Json.Serialize(properties);
      _logCustomEvent(eventName, propertiesString);
    }

    public static void LogPurchase(string productId, string currencyCode, decimal price, int quantity) {
      _logPurchase(productId, currencyCode, price.ToString(), quantity, null);
    }

    public static void LogPurchase(string productId, string currencyCode, decimal price, int quantity, Dictionary<string, object> properties) {
      var propertiesString = Json.Serialize(properties);
      _logPurchase(productId, currencyCode, price.ToString(), quantity, propertiesString);
    }

    public static void ChangeUser(string userId) {
      _changeUser(userId);
    }

    public static void SetUserFirstName(string firstName) {
      _setUserFirstName(firstName);
    }

    public static void SetUserLastName(string lastName) {
      _setUserLastName(lastName);
    }

    public static void SetUserEmail(string email) {
      _setUserEmail(email);
    }

    public static void SetUserGender(Gender gender) {
      _setUserGender((int)gender);
    }

    public static void SetUserDateOfBirth(int year, int month, int day) {
      _setUserDateOfBirth(year, month, day);
    }

    public static void SetUserCountry(string country) {
      _setUserCountry(country);
    }

    public static void SetUserHomeCity(string city) {
      _setUserHomeCity(city);
    }

    public static void SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType emailNotificationSubscriptionType) {
      _setUserEmailNotificationSubscriptionType((int)emailNotificationSubscriptionType);
    }

    public static void SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType pushNotificationSubscriptionType) {
      _setUserPushNotificationSubscriptionType((int)pushNotificationSubscriptionType);
    }

    public static void SetUserPhoneNumber(string phoneNumber) {
      _setUserPhoneNumber(phoneNumber);
    }

    public static void SetUserAvatarImageURL(string imageURL) {
      _setUserAvatarImageURL(imageURL);
    }

    public static void SetCustomUserAttribute(string key, bool value) {
      _setCustomUserAttributeBool(key, value);
    }

    public static void SetCustomUserAttribute(string key, int value) {
      _setCustomUserAttributeInt(key, value);
    }

    public static void SetCustomUserAttribute(string key, float value) {
      _setCustomUserAttributeFloat(key, value);
    }

    public static void SetCustomUserAttribute(string key, string value) {
      _setCustomUserAttributeString(key, value);
    }

    public static void SetCustomUserAttributeToNow(string key) {
      _setCustomUserAttributeToNow(key);
    }

    public static void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
      _setCustomUserAttributeToSecondsFromEpoch(key, secondsFromEpoch);
    }

    public static void UnsetCustomUserAttribute(string key) {
      _unsetCustomUserAttribute(key);
    }

    public static void IncrementCustomUserAttribute(string key, int incrementValue) {
      _incrementCustomUserAttribute(key, incrementValue);
    }

    public static void SetCustomUserAttributeArray(string key, List<string> array, int size) {
      if (array == null) {
        _setCustomUserAttributeArray(key, null, size);
      } else {
        _setCustomUserAttributeArray(key, array.ToArray(), size);
      }
    }

    public static void AddToCustomUserAttributeArray(string key, string value) {
      _addToCustomUserAttributeArray(key, value);
    }

    public static void RemoveFromCustomUserAttributeArray(string key, string value) {
      _removeFromCustomUserAttributeArray(key, value);
    }

    public static void setUserFacebookData(string facebookId, string firstName, string lastName, string email, string bio, string cityName, Gender? gender, int? numberOfFriends, string birthday) {
      _setUserFacebookData(facebookId, firstName, lastName, email, bio, cityName, gender == null ? -1 : (int)gender, numberOfFriends == null ? -1 : (int)numberOfFriends, birthday);
    }

    public static void setUserTwitterData(int? twitterUserId, string twitterHandle, string name, string description, int? followerCount, int? followingCount, int? tweetCount, string profileImageUrl) {
      _setUserTwitterData(twitterUserId == null ? -1 : (int)twitterUserId, twitterHandle, name, description, followerCount == null ? -1 : (int)followerCount, followingCount == null ? -1 : (int)followingCount, tweetCount == null ? -1 : (int)tweetCount, profileImageUrl);
    }

    public static void DisplayNextInAppMessage(bool withDelegate) {
      _displayNextInAppMessage(withDelegate);
    }

    public static void LogInAppMessageClicked(string inAppMessageJSONString) {
      _logInAppMessageClicked(inAppMessageJSONString);
    }

    public static void LogInAppMessageImpression(string inAppMessageJSONString) {
      _logInAppMessageImpression(inAppMessageJSONString);
    }

    public static void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID) {
      _logInAppMessageButtonClicked(inAppMessageJSONString, buttonID);
    }

    public static void LogCardImpression(string cardJSONString) {
      _logCardImpression(cardJSONString);
    }

    public static void LogCardClicked(string cardJSONString) {
      _logCardClicked(cardJSONString);
    }

    public static void RequestFeedRefresh() {
      _requestFeedRefresh();
    }

    public static void RequestFeedRefreshFromCache() {
      _requestFeedRefreshFromCache();
    }

    public static void LogFeedDisplayed() {
      _logFeedDisplayed();
    }

    public static void LogContentCardImpression(string cardJSONString) {
      _logContentCardImpression(cardJSONString);
    }

    public static void LogContentCardClicked(string cardJSONString) {
      _logContentCardClicked(cardJSONString);
    }

    public static void LogContentCardDismissed(string cardJSONString) {
      _logContentCardDismissed(cardJSONString);
    }

    public static void RequestContentCardsRefresh() {
      _requestContentCardsRefresh();
    }

    public static void RequestContentCardsRefreshFromCache() {
      _requestContentCardsRefreshFromCache();
    }

    public static void LogContentCardsDisplayed() {
      _logContentCardsDisplayed();
    }

    public static void WipeData() {
      _wipeData();
    }

    public static void EnableSDK() {
      _enableSDK();
    }

    public static void DisableSDK() {
      _disableSDK();
    }

    public static string GetInstallTrackingId() {
      return _getInstallTrackingId();
    }

    public static void SetAttributionData(string network, string campaign, string adgroup, string creative) {
      _setAttributionData(network, campaign, adgroup, creative);
    }

    public static void RequestLocationInitialization() {
      // no-op
    }

    /// <summary>
    /// Registers a device token with Braze. See 
    /// https://docs.unity3d.com/2018.4/Documentation/ScriptReference/iOS.NotificationServices.RegisterForNotifications.html
    /// </summary>
    /// <param name='registrationDeviceToken'>
    /// https://docs.unity3d.com/2018.4/Documentation/ScriptReference/iOS.NotificationServices-deviceToken.html
    /// </param>
    /// </summary>
    public static void RegisterAppboyPushMessages(byte[] registrationDeviceToken) {
      string registrationTokenBase64 = Convert.ToBase64String(registrationDeviceToken);
      _registerAppboyPushMessages(registrationTokenBase64);
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
      _requestGeofences(latitude, longitude);
    }

    public static void RequestImmediateDataFlush() {
      _requestImmediateDataFlush();
    }

#elif UNITY_ANDROID
    private static AndroidJavaObject appboyUnityActivity;
    private static AndroidJavaObject inAppMessageUtils;
    private static AndroidJavaObject appboyLocationService;

    void Start() {
      Debug.Log("Starting Appboy binding for Android clients.");
    }

    #region Properties
    public static AndroidJavaObject AppboyUnityActivity {
      get {
        if (appboyUnityActivity == null) {
          using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
            appboyUnityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
          }
        }
        return appboyUnityActivity;
      }
    }

    public static AndroidJavaObject Appboy {
      get {
        using (var appboyClass = new AndroidJavaClass("com.appboy.Appboy")) {
          return appboyClass.CallStatic<AndroidJavaObject>("getInstance", AppboyUnityActivity);
        }
      }
    }

    public static AndroidJavaObject InAppMessageUtils {
      get {
        if (inAppMessageUtils == null) {
          inAppMessageUtils = new AndroidJavaClass("com.appboy.unity.utils.InAppMessageUtils");
        }
        return inAppMessageUtils;
      }
    }

    public static AndroidJavaObject AppboyLocationService {
      get {
        if (appboyLocationService == null) {
          appboyLocationService = new AndroidJavaClass("com.appboy.services.AppboyLocationService");
        }
        return appboyLocationService;
      }
    }

    #endregion

    private static AndroidJavaObject GetCurrentUser() {
      return Appboy.Call<AndroidJavaObject>("getCurrentUser");
    }

    public static void LogCustomEvent(string eventName) {
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
      AndroidJavaObject appboyProperties = ParsePropertiesToAppboyProperties(properties);
      Appboy.Call("logCustomEvent", eventName, appboyProperties);
    }

    public static void LogPurchase(string productId, string currencyCode, decimal price, int quantity) {
      var javaPrice = new AndroidJavaObject("java.math.BigDecimal", price.ToString());
      Appboy.Call("logPurchase", productId, currencyCode, javaPrice, quantity);
    }

    public static void LogPurchase(string productId, string currencyCode, decimal price, int quantity, Dictionary<string, object> properties) {
      var javaPrice = new AndroidJavaObject("java.math.BigDecimal", price.ToString());
      AndroidJavaObject appboyProperties = ParsePropertiesToAppboyProperties(properties);
      Appboy.Call("logPurchase", productId, currencyCode, javaPrice, quantity, appboyProperties);
    }

    public static void ChangeUser(string userId) {
      Appboy.Call("changeUser", userId);
    }

    public static void SetUserFirstName(string firstName) {
      GetCurrentUser().Call<bool>("setFirstName", firstName);
    }

    public static void SetUserLastName(string lastName) {
      GetCurrentUser().Call<bool>("setLastName", lastName);
    }

    public static void SetUserEmail(string email) {
      GetCurrentUser().Call<bool>("setEmail", email);
    }

    /// <summary>
    /// Sets the gender field for the current user.
    /// </summary>
    /// <param name='gender'>
    /// The gender of the user. See `Appboy/models/Gender.cs` for options.
    /// </param>
    public static void SetUserGender(Gender gender) {
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

    public static void SetUserCountry(string country) {
      GetCurrentUser().Call<bool>("setCountry", country);
    }

    public static void SetUserHomeCity(string city) {
      GetCurrentUser().Call<bool>("setHomeCity", city);
    }

    public static void SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType emailNotificationSubscriptionType) {
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

    public static void SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType pushNotificationSubscriptionType) {
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

    public static void SetUserPhoneNumber(string phoneNumber) {
      GetCurrentUser().Call<bool>("setPhoneNumber", phoneNumber);
    }

    public static void SetUserAvatarImageURL(string imageURL) {
      GetCurrentUser().Call<bool>("setAvatarImageUrl", imageURL);
    }

    public static void SetCustomUserAttribute(string key, bool value) {
      GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
    }

    public static void SetCustomUserAttribute(string key, int value) {
      GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
    }

    public static void SetCustomUserAttribute(string key, float value) {
      GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
    }

    public static void SetCustomUserAttribute(string key, string value) {
      GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
    }

    public static void SetCustomUserAttributeToNow(string key) {
      GetCurrentUser().Call<bool>("setCustomUserAttributeToNow", key);
    }

    public static void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
      GetCurrentUser().Call<bool>("setCustomUserAttributeToSecondsFromEpoch", key, secondsFromEpoch);
    }

    public static void UnsetCustomUserAttribute(string key) {
      GetCurrentUser().Call<bool>("unsetCustomUserAttribute", key);
    }

    public static void IncrementCustomUserAttribute(string key, int incrementValue) {
      GetCurrentUser().Call<bool>("incrementCustomUserAttribute", key, incrementValue);
    }

    public static void SetCustomUserAttributeArray(string key, List<string> array, int size) {
      if (array == null) {
        GetCurrentUser().Call<bool>("setCustomAttributeArray", key, null);
      } else {
        GetCurrentUser().Call<bool>("setCustomAttributeArray", key, array.ToArray());
      }
    }

    public static void AddToCustomUserAttributeArray(string key, string value) {
      GetCurrentUser().Call<bool>("addToCustomAttributeArray", key, value);
    }

    public static void setUserFacebookData(string facebookId, string firstName, string lastName, string email, string bio, string cityName, Gender? gender, int? numberOfFriends, string birthday) {
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

    public static void setUserTwitterData(int? twitterUserId, string twitterHandle, string name, string description, int? followerCount, int? followingCount, int? tweetCount, string profileImageUrl) {
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

    public static void RemoveFromCustomUserAttributeArray(string key, string value) {
      GetCurrentUser().Call<bool>("removeFromCustomAttributeArray", key, value);
    }

    public static void RegisterAppboyPushMessages(string registrationId) {
      Appboy.Call("registerAppboyPushMessages", new object[] { registrationId });
    }

    public static void LogInAppMessageClicked(string inAppMessageJSONString) {
      var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", appboyUnityActivity, inAppMessageJSONString);
      InAppMessageUtils.CallStatic("logInAppMessageClick", inAppMessage);
    }

    public static void LogInAppMessageImpression(string inAppMessageJSONString) {
      var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", appboyUnityActivity, inAppMessageJSONString);
      InAppMessageUtils.CallStatic("logInAppMessageImpression", inAppMessage);
    }

    public static void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID) {
      var inAppMessage = InAppMessageUtils.CallStatic<AndroidJavaObject>("inAppMessageFromString", appboyUnityActivity, inAppMessageJSONString);
      InAppMessageUtils.CallStatic("logInAppMessageButtonClick", inAppMessage, buttonID);
    }

    public static void RequestFeedRefresh() {
      Appboy.Call("requestFeedRefresh");
    }

    public static void RequestFeedRefreshFromCache() {
      Appboy.Call("requestFeedRefreshFromCache");
    }

    public static void LogFeedDisplayed() {
      Appboy.Call("logFeedDisplayed");
    }

    public static void LogContentCardImpression(string contentCardString) {
      var contentCard = Appboy.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
      contentCard.Call<bool>("logImpression");
    }

    public static void LogContentCardClicked(string contentCardString) {
      var contentCard = Appboy.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
      contentCard.Call<bool>("logClick");
    }

    public static void LogContentCardDismissed(string contentCardString) {
      var contentCard = Appboy.Call<AndroidJavaObject>("deserializeContentCard", contentCardString);
      contentCard.Call("setIsDismissed", true);
    }

    public static void LogContentCardsDisplayed() {
      Appboy.Call("logContentCardsDisplayed");
    }

    public static void RequestContentCardsRefresh() {
      Appboy.Call("requestContentCardsRefresh", false);
    }

    public static void RequestContentCardsRefreshFromCache() {
      Appboy.Call("requestContentCardsRefresh", true);
    }

    public static void WipeData() {
      Appboy.CallStatic("wipeData", appboyUnityActivity);
    }

    public static void EnableSDK() {
      Appboy.CallStatic("enableSdk", appboyUnityActivity);
    }

    public static void DisableSDK() {
      Appboy.CallStatic("disableSdk", appboyUnityActivity);
    }

    public static string GetInstallTrackingId() {
      return Appboy.Call<string>("getInstallTrackingId");
    }

    public static void SetAttributionData(string network, string campaign, string adgroup, string creative) {
      var attributionData = new AndroidJavaObject("com.appboy.models.outgoing.AttributionData", network, campaign, adgroup, creative);
      GetCurrentUser().Call<bool>("setAttributionData", attributionData);
    }

    /// <summary>
    /// When location permissions are granted, client app can call this method to request immediate
    /// initialization of Braze geofences and also request a single location update.
    /// </summary>
    public static void RequestLocationInitialization() {
      AppboyLocationService.CallStatic("requestInitialization", appboyUnityActivity);
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
      Appboy.Call("requestGeofences", latitude, longitude);
    }

    public static void RequestImmediateDataFlush() {
      Appboy.Call("requestImmediateDataFlush");
    }

#else

    // Empty implementations of the API, in case the application is being compiled for a platform other than iOS or Android.
    void Start() {
      Debug.Log("Starting no-op Appboy binding for non iOS/Android clients.");
    }

    public static void LogCustomEvent(string eventName) {
    }

    public static void LogCustomEvent(string eventName, Dictionary<string, object> properties) {
    }

    public static void LogPurchase(string productId, string currencyCode, decimal price, int quantity) {
    }

    public static void LogPurchase(string productId, string currencyCode, decimal price, int quantity, Dictionary<string, object> properties) {
    }

    public static void ChangeUser(string userId) {
    }

    public static void SetUserFirstName(string firstName) {
    }

    public static void SetUserLastName(string lastName) {
    }

    public static void SetUserEmail(string email) {
    }

    public static void SetUserBio(string bio) {
    }

    public static void SetUserGender(Gender gender) {
    }

    public static void SetUserDateOfBirth(int year, int month, int day) {
    }

    public static void SetUserCountry(string country) {
    }

    public static void SetUserHomeCity(string city) {
    }

    public static void SetUserIsSubscribedToEmails(bool isSubscribedToEmails) {
    }

    public static void SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType emailNotificationSubscriptionType) {
    }

    public static void SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType pushNotificationSubscriptionType) {
    }

    public static void SetUserPhoneNumber(string phoneNumber) {
    }

    public static void SetUserAvatarImageURL(string imageURL) {
    }

    public static void SetCustomUserAttribute(string key, bool value) {
    }

    public static void SetCustomUserAttribute(string key, int value) {
    }

    public static void SetCustomUserAttribute(string key, float value) {
    }

    public static void SetCustomUserAttribute(string key, string value) {
    }

    public static void SetCustomUserAttributeToNow(string key) {
    }

    public static void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
    }

    public static void UnsetCustomUserAttribute(string key) {
    }

    public static void IncrementCustomUserAttribute(string key, int incrementValue) {
    }

    public static void SetCustomUserAttributeArray(string key, List<string> array, int size) {
    }

    public static void AddToCustomUserAttributeArray(string key, string value) {
    }

    public static void setUserFacebookData(string facebookId, string firstName, string lastName, string email,
      string bio, string cityName, Gender? gender, int? numberOfFriends, string birthday) {}

    public static void setUserTwitterData(int? twitterUserId, string twitterHandle, string name, string description, int? followerCount,
      int? followingCount, int? tweetCount, string profileImageUrl) {}

    public static void RemoveFromCustomUserAttributeArray(string key, string value) {
    }

    public static void RegisterAppboyPushMessages(string registrationId) {
    }

    public static void LogInAppMessageClicked(string inAppMessageJSONString) {
    }

    public static void LogInAppMessageImpression(string inAppMessageJSONString) {
    }

    public static void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID) {
    }

    public static void RequestFeedRefresh() {
    }

    public static void RequestFeedRefreshFromCache() {
    }

    public static void LogFeedDisplayed() {
    }

    public static void RequestContentCardsRefresh() {
    }

    public static void RequestContentCardsRefreshFromCache() {
    }

    public static void LogContentCardsDisplayed() {
    }

    public static void LogContentCardClicked(string contentCardString) {
    }

    public static void LogContentCardImpression(string contentCardString) {
    }

    public static void LogContentCardDismissed(string contentCardString) {
    }

    public static void WipeData() {
    }

    public static void EnableSDK() {
    }

    public static void DisableSDK() {
    }

    public static string GetInstallTrackingId() {
      return null;
    }

    public static void SetAttributionData(string network, string campaign, string adgroup, string creative) {
    }

    public static void RequestLocationInitialization() {
    }

    public static void RequestGeofences(decimal latitude, decimal longitude) {
    }

    public static void RequestImmediateDataFlush() {
    }
#endif
  }
}
