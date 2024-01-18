using Appboy.Internal;
using Appboy.Models;
using Appboy.Utilities;
using Appboy;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

public interface BrazePlatform {
  void LogCustomEvent(string eventName);
  void LogCustomEvent(string eventName, Dictionary<string, object> properties);
  void LogPurchase(string productId, 
    string currencyCode, 
    decimal price, 
    int quantity
  );
  void LogPurchase(
    string productId, 
    string currencyCode, 
    decimal price, 
    int quantity, 
    Dictionary<string, object> properties
  );

  void ChangeUser(string userId, string sdkAuthSignature = null);
  void SetSdkAuthenticationSignature(string sdkAuthSignature);
 
  void SetUserFirstName(string firstName);
  void SetUserLastName(string lastName);
  void SetUserEmail(string email);
  void SetUserGender(Gender gender);
  void SetUserDateOfBirth(int year, int month, int day);
  void SetUserCountry(string country);
  void SetUserHomeCity(string city);
  void SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType emailNotificationSubscriptionType);
  void SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType pushNotificationSubscriptionType);
  void SetUserPhoneNumber(string phoneNumber);
  
  void SetCustomUserAttribute(string key, bool value);
  void SetCustomUserAttribute(string key, int value);
  void SetCustomUserAttribute(string key, float value);
  void SetCustomUserAttribute(string key, string value);
  void SetCustomUserAttribute(string key, Dictionary<string, object> value, bool merge);
  void SetCustomUserAttribute(string key, List<Dictionary<string, object>> value);
  void SetCustomUserAttributeToNow(string key);
  void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch);
  void UnsetCustomUserAttribute(string key);
  void IncrementCustomUserAttribute(string key, int incrementValue);
  void SetCustomUserAttributeArray(string key, List<string> array, int size);
  void AddToCustomUserAttributeArray(string key, string value);
  void RemoveFromCustomUserAttributeArray(string key, string value);

  void SetUserLastKnownLocation(
    double latitude,
    double longitude,
    double? altitude = null,
    double? accuracy = null,
    double? verticalAccuracy = null
  );

  #if UNITY_ANDROID
    void RegisterAppboyPushMessages(string registrationId);
  #elif UNITY_IOS
    void RegisterAppboyPushMessages(byte[] registrationDeviceToken);
  #endif
  void PromptUserForPushPermissions(bool provisional, PushPromptResponseReceived reponseDelegate = null);
  void SetPushTokenReceivedFromSystemDelegate(PushTokenReceivedFromSystem tokenDelegate);

  BrazeInAppMessageListener inAppMessageListener { get; set; }
  void LogInAppMessageClicked(string inAppMessageJSONString);
  void LogInAppMessageImpression(string inAppMessageJSONString);
  void LogInAppMessageButtonClicked(string inAppMessageJSONString, int buttonID);

  void RequestFeedRefresh();
  void RequestFeedRefreshFromCache();
  void LogFeedDisplayed();

  #if UNITY_ANDROID
    void LogCardImpression(string cardId);
    void LogCardClicked(string cardId);
  #elif UNITY_IOS
    void LogCardImpression(string cardJSONString);
    void LogCardClicked(string cardJSONString);
  #endif
  void RequestContentCardsRefresh();
  void RequestContentCardsRefreshFromCache();
  void LogContentCardClicked(string contentCardString);
  void LogContentCardImpression(string contentCardString);
  void LogContentCardDismissed(string contentCardString);

  void WipeData();
  void EnableSDK();
  void DisableSDK();

  string GetInstallTrackingId();
  void SetAttributionData(string network, string campaign, string adgroup, string creative);

  void RequestLocationInitialization();
  void RequestGeofences(decimal latitude, decimal longitude);

  void RequestImmediateDataFlush();
  void AddAlias(string alias, string label);
  void ConfigureListener(BrazeUnityMessageType messageType, string gameobject, string method);
  void SetInAppMessageDisplayAction(BrazeUnityInAppMessageDisplayActionType actionType);
  void DisplayNextInAppMessage();
  void DisplayContentCards();
  void AddToSubscriptionGroup(string id);
  void RemoveFromSubscriptionGroup(string id);
  void RefreshFeatureFlags();
  FeatureFlag? GetFeatureFlag(string id);
  List<FeatureFlag> GetAllFeatureFlags();
  void LogFeatureFlagImpression(string id);
}
