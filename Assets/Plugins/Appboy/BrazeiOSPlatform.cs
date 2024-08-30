using Appboy;
using Appboy.Internal;
using Appboy.Models;
using Appboy.Utilities;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

#if UNITY_IOS

public class BrazeiOSPlatform : BrazePlatform {

  /***** Method Declarations to the binding layer in `C` *****/

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _logCustomEvent(string eventName, string properties);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _changeUser(string userId, string sdkAuthSignature);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setSdkAuthenticationSignature(string sdkAuthSignature);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _logPurchase(string productId, string currencyCode, string price, int quantity, string properties);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserFirstName(string firstName);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserLastName(string lastName);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserPhoneNumber(string phoneNumber);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserLanguage(string language);

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
  private static extern void _setCustomUserAttributeObject(string key, string value, bool merge);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeObjectArray(string key, string[] value, int size);

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
  private static extern void _setUserLastKnownLocation(double latitude, double longitude, double altitude, double accuracy, double verticalAccuracy);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserLastKnownLocationSimple(double latitude, double longitude, double accuracy);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setInAppMessageDisplayAction(int actionType);

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
  private static extern void _displayContentCards();

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _displayNextInAppMessage();

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _hideCurrentInAppMessage();

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
  private static extern void _setAdTrackingEnabled(bool adTrackingEnabled, string googleAdvertisingId);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _updateTrackingPropertyAllowList(string allowList);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _registerAppboyPushMessages(string registrationTokenBase64);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _promptUserForPushPermissions(bool provisional);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _addAlias(string label, string alias);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _configureListener(int messageType, string gameobject, string method);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _configureInternalListener(int messageType);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _addToSubscriptionGroup(string id);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _removeFromSubscriptionGroup(string id);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _refreshFeatureFlags();

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern string _getFeatureFlag(string id);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern string _getAllFeatureFlags();

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _logFeatureFlagImpression(string id);

  /***** `BrazePlatform` method implementations *****/

  public void LogCustomEvent(string eventName) {
    _logCustomEvent(eventName, null);
  }

  public void LogCustomEvent(string eventName, Dictionary<string, object> properties) {
    var propertiesString = Json.Serialize(properties);
    _logCustomEvent(eventName, propertiesString);
  }

  public void LogPurchase(string productId, string currencyCode, decimal price, int quantity) {
    _logPurchase(productId, currencyCode, price.ToString(), quantity, null);
  }

  public void LogPurchase(string productId, string currencyCode, decimal price, int quantity, Dictionary<string, object> properties) {
    var propertiesString = Json.Serialize(properties);
    _logPurchase(productId, currencyCode, price.ToString(), quantity, propertiesString);
  }

  public void ChangeUser(string userId, string sdkAuthSignature) {
    _changeUser(userId, sdkAuthSignature);
  }

  public void SetSdkAuthenticationSignature(string sdkAuthSignature) {
    _setSdkAuthenticationSignature(sdkAuthSignature); 
  }

  public void SetUserFirstName(string firstName) {
    _setUserFirstName(firstName);
  }

  public void SetUserLastName(string lastName) {
    _setUserLastName(lastName);
  }

  public void SetUserEmail(string email) {
    _setUserEmail(email);
  }

  public void SetUserGender(Gender gender) {
    _setUserGender((int)gender);
  }

  public void SetUserDateOfBirth(int year, int month, int day) {
    _setUserDateOfBirth(year, month, day);
  }

  public void SetUserCountry(string country) {
    _setUserCountry(country);
  }

  public void SetUserHomeCity(string city) {
    _setUserHomeCity(city);
  }

  public void SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType emailNotificationSubscriptionType) {
    _setUserEmailNotificationSubscriptionType((int)emailNotificationSubscriptionType);
  }

  public void SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType pushNotificationSubscriptionType) {
    _setUserPushNotificationSubscriptionType((int)pushNotificationSubscriptionType);
  }

  public void SetUserPhoneNumber(string phoneNumber) {
    _setUserPhoneNumber(phoneNumber);
  }

  public void SetUserLanguage(string language) {
    _setUserLanguage(language);
  }

  public void SetCustomUserAttribute(string key, bool value) {
    _setCustomUserAttributeBool(key, value);
  }

  public void SetCustomUserAttribute(string key, int value) {
    _setCustomUserAttributeInt(key, value);
  }

  public void SetCustomUserAttribute(string key, float value) {
    _setCustomUserAttributeFloat(key, value);
  }

  public void SetCustomUserAttribute(string key, string value) {
    _setCustomUserAttributeString(key, value);
  }

  public void SetCustomUserAttribute(string key, Dictionary<string, object> value, bool merge) {
    if (value != null) {
      var valueString = Json.Serialize(value);
      _setCustomUserAttributeObject(key, valueString, merge);
    }
  }

  public void SetCustomUserAttribute(string key, List<Dictionary<string, object>> value) {
    if (value != null) {
      List<string> objStringList = new List<string>();
      foreach (Dictionary<string, object> obj in value) {
        var objString = Json.Serialize(obj);
        objStringList.Add(objString);
      }
      _setCustomUserAttributeObjectArray(key, objStringList.ToArray(), objStringList.Count);
    }
  }

  public void SetCustomUserAttributeToNow(string key) {
    _setCustomUserAttributeToNow(key);
  }

  public void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
    _setCustomUserAttributeToSecondsFromEpoch(key, secondsFromEpoch);
  }

  public void UnsetCustomUserAttribute(string key) {
    _unsetCustomUserAttribute(key);
  }

  public void IncrementCustomUserAttribute(string key, int incrementValue) {
    _incrementCustomUserAttribute(key, incrementValue);
  }

  public void SetCustomUserAttributeArray(string key, List<string> array, int size) {
    if (array == null) {
      _setCustomUserAttributeArray(key, null, size);
    } else {
      _setCustomUserAttributeArray(key, array.ToArray(), size);
    }
  }

  public void AddToCustomUserAttributeArray(string key, string value) {
    _addToCustomUserAttributeArray(key, value);
  }

  public void RemoveFromCustomUserAttributeArray(string key, string value) {
    _removeFromCustomUserAttributeArray(key, value);
  }

  public void SetUserLastKnownLocation(
    double latitude,
    double longitude,
    double? altitude,
    double? accuracy,
    double? verticalAccuracy
  ) {
    var newAltitude = (altitude == null) ? 0.0 : (double)altitude;
    var newAccuracy = (accuracy == null) ? 0.0 : (double)accuracy;
    var newVerticalAccuracy = (verticalAccuracy == null) ? 0.0 : (double)verticalAccuracy;

    if (altitude != null && (verticalAccuracy != null && verticalAccuracy > 0.0)) {
      _setUserLastKnownLocation(latitude, longitude, newAltitude, newAccuracy, newVerticalAccuracy);
    } else {
      _setUserLastKnownLocationSimple(latitude, longitude, newAccuracy);
    }
  }

  private BrazeInAppMessageListener _inAppMessageListener;
  public BrazeInAppMessageListener inAppMessageListener {
    get { return _inAppMessageListener; }
    set { SetInAppMessageListener(value); }
  }

  private void SetInAppMessageListener(BrazeInAppMessageListener listener) {
    _inAppMessageListener = listener;
    BrazeInternalGameObject.setInAppMessageListener(listener);
  }

  public void DisplayNextInAppMessage() {
    _displayNextInAppMessage();
  }

  public void HideCurrentInAppMessage() {
    _hideCurrentInAppMessage();
  }

  public void SetInAppMessageDisplayAction(BrazeUnityInAppMessageDisplayActionType actionType) {
    _setInAppMessageDisplayAction((int)actionType);
  }

  public void LogInAppMessageClicked(string inAppMessageJSONString) {
    _logInAppMessageClicked(inAppMessageJSONString);
  }

  public void LogInAppMessageImpression(string inAppMessageJSONString) {
    _logInAppMessageImpression(inAppMessageJSONString);
  }

  public void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID) {
    _logInAppMessageButtonClicked(inAppMessageJSONString, buttonID);
  }

  public void LogCardImpression(string cardJSONString) {
    _logCardImpression(cardJSONString);
  }

  public void LogCardClicked(string cardJSONString) {
    _logCardClicked(cardJSONString);
  }

  public void RequestFeedRefresh() {
    _requestFeedRefresh();
  }

  public void RequestFeedRefreshFromCache() {
    _requestFeedRefreshFromCache();
  }

  public void LogFeedDisplayed() {
    _logFeedDisplayed();
  }

  public void LogContentCardImpression(string cardJSONString) {
    _logContentCardImpression(cardJSONString);
  }

  public void LogContentCardClicked(string cardJSONString) {
    _logContentCardClicked(cardJSONString);
  }

  public void LogContentCardDismissed(string cardJSONString) {
    _logContentCardDismissed(cardJSONString);
  }

  public void RequestContentCardsRefresh() {
    _requestContentCardsRefresh();
  }

  public void RequestContentCardsRefreshFromCache() {
    _requestContentCardsRefreshFromCache();
  }

  public void DisplayContentCards() {
    _displayContentCards();
  }

  public void WipeData() {
    _wipeData();
  }

  public void EnableSDK() {
    _enableSDK();
  }

  public void DisableSDK() {
    _disableSDK();
  }

  public string GetInstallTrackingId() {
    return _getInstallTrackingId();
  }

  public void SetAdTrackingEnabled(bool adTrackingEnabled, string googleAdvertisingId) {
    _setAdTrackingEnabled(adTrackingEnabled, googleAdvertisingId);
  }

  public void UpdateTrackingPropertyAllowList(TrackingPropertyAllowList allowList) {
    var allowListString = Json.Serialize(allowList.ToDictionary());
    _updateTrackingPropertyAllowList(allowListString);
  }

  public void SetAttributionData(string network, string campaign, string adgroup, string creative) {
    _setAttributionData(network, campaign, adgroup, creative);
  }

  public void RequestLocationInitialization() {
    // no-op
  }

  public void RegisterAppboyPushMessages(byte[] registrationDeviceToken) {
    string registrationTokenBase64 = Convert.ToBase64String(registrationDeviceToken);
    _registerAppboyPushMessages(registrationTokenBase64);
  }

  public void PromptUserForPushPermissions(bool provisional, PushPromptResponseReceived reponseDelegate = null) {
    if (reponseDelegate != null) {
      _configureInternalListener((int)BrazeUnityMessageType.PUSH_PERMISSIONS_PROMPT_RESPONSE);
      BrazeInternalGameObject.setPushPromptResponseReceivedDelegate(reponseDelegate);
    }
    _promptUserForPushPermissions(provisional);
  }

  public void SetPushTokenReceivedFromSystemDelegate(PushTokenReceivedFromSystem tokenDelegate) {
    if (tokenDelegate == null) {
      return;
    }
    BrazeInternalGameObject.setPushTokenReceivedFromSystemDelegate(tokenDelegate);
    _configureInternalListener((int)BrazeUnityMessageType.PUSH_TOKEN_RECEIVED_FROM_SYSTEM);
  }

  public void RequestGeofences(decimal latitude, decimal longitude) {
    _requestGeofences(latitude, longitude);
  }

  public void RequestImmediateDataFlush() {
    _requestImmediateDataFlush();
  }

  public void AddAlias(string alias, string label) {
    _addAlias(alias, label);
  }

  public void ConfigureListener(BrazeUnityMessageType messageType, string gameobject, string method) {
    _configureListener((int)messageType, gameobject, method);
  }

  public void AddToSubscriptionGroup(string id) {
    _addToSubscriptionGroup(id);
  }

  public void RemoveFromSubscriptionGroup(string id) {
    _removeFromSubscriptionGroup(id);
  }

  public void RefreshFeatureFlags() {
    _refreshFeatureFlags();
  }

#nullable enable
  public FeatureFlag? GetFeatureFlag(string id) {
#nullable disable
    string jsonStr = _getFeatureFlag(id);
    if (jsonStr == null) {
      return null;
    }
    FeatureFlag flag = new FeatureFlag((JSONObject)JSON.Parse(jsonStr));
    return flag;
  }

  public List<FeatureFlag> GetAllFeatureFlags() {
    List<FeatureFlag> featureFlags = new List<FeatureFlag>();

    // Receive a JSON array of strings from the iOS layer
    string jsonStrArray = _getAllFeatureFlags();
    JSONArray jsonArray = (JSONArray)JSON.Parse(jsonStrArray);

    // Iterate through the array and convert the strings to FeatureFlag objects in C#
    foreach (JSONString flagJsonStr in jsonArray) {
      FeatureFlag flag = new FeatureFlag((JSONObject)JSON.Parse(flagJsonStr));
      featureFlags.Add(flag);
    }

    return featureFlags;
  }

  public void LogFeatureFlagImpression(string id) {
    _logFeatureFlagImpression(id);
  }

}

#endif
