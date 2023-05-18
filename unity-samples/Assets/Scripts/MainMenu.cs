using Appboy;
using Appboy.Models;
using UnityEngine;
using UnityEngine.SceneManagement;
using Utilities;
using System.Collections.Generic;
using System.Text;

public class MainMenu : MonoBehaviour {

  public void OnChangeUserButtonClick() {
    SceneManager.LoadScene(Constants.ChangeUserScene);
  }
  
  public void OnLogCustomEventButtonClick() {
    SceneManager.LoadScene(Constants.LogCustomEventScene);
  }
  
  public void OnLogPurchaseButtonClick() {
    SceneManager.LoadScene(Constants.LogPurchaseScene);
  }
  
  public void OnSetUserFieldsButtonClick() {
    SceneManager.LoadScene(Constants.SetUserFieldScene);
  }
  
  public void OnSetCustomAttributeButtonClick() {
    SceneManager.LoadScene(Constants.CustomAttributesSettingScene);
  }
  
  public void OnRequestFeedsRefresh() {
    Debug.Log("Requesting Content Card & News Feed refreshes (not from cache).");
    Appboy.AppboyBinding.RequestFeedRefresh();
    Appboy.AppboyBinding.RequestContentCardsRefresh();
  }

  public void OnWipeDataButtonClick() {
    Appboy.AppboyBinding.WipeData();
  }

  public void OnEnableSDKButtonClick() {
    Appboy.AppboyBinding.EnableSDK();
  }

  public void OnDisableSDKButtonClick() {
    Appboy.AppboyBinding.DisableSDK();
  }

  public void OnRequestFlushButtonClick() {
    Appboy.AppboyBinding.RequestImmediateDataFlush();
  }

  public void OnLaunchContentCardsButtonClick() {
    Appboy.AppboyBinding.DisplayContentCards();
  }

  public void OnFeatureFlagsButtonClick() {
    SceneManager.LoadScene(Constants.FeatureFlagScene);
  }

  // Not connecting this to the main menu as setting a push token like that
  // would break push on the device.  But leaving here in case this method needs
  // to be tested again in the future.
  public void OnRegisterAppboyPushMessages() {
#if UNITY_ANDROID
    Appboy.AppboyBinding.RegisterAppboyPushMessages("testPushToken");
#elif UNITY_IOS
    // On iOS, the token comes as a byte array from Unity 
    Appboy.AppboyBinding.RegisterAppboyPushMessages(Encoding.UTF8.GetBytes("testPushToken"));
#endif
  }

  public void OnPromptUserForPushPermissions() {
    Appboy.AppboyBinding.PromptUserForPushPermissions(false);
  }

  public void OnDisplayNextInAppMessage() {
    Appboy.AppboyBinding.DisplayNextInAppMessage();
  }

  public void OnPresetUserDataClick() {
    Appboy.AppboyBinding.SetUserFirstName("jared");
    Appboy.AppboyBinding.SetUserLastName("contreras");
    Appboy.AppboyBinding.SetUserGender(Gender.PreferNotToSay);
    Appboy.AppboyBinding.SetUserEmail("unity@braze.com");
    Appboy.AppboyBinding.SetUserDateOfBirth(1994, 5, 2);
    Appboy.AppboyBinding.SetUserCountry("dominica");
    Appboy.AppboyBinding.SetUserHomeCity("Julian, CA");
    Appboy.AppboyBinding.SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType.OPTED_IN);
    Appboy.AppboyBinding.SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType.SUBSCRIBED);
    Appboy.AppboyBinding.SetUserPhoneNumber("8675309");
    Appboy.AppboyBinding.SetCustomUserAttribute("funny", false);
    Appboy.AppboyBinding.SetCustomUserAttribute("times laughed", -1);
    Appboy.AppboyBinding.SetCustomUserAttribute("grins cracked", 0.5F);
    Appboy.AppboyBinding.SetCustomUserAttribute("knock knock", "who's there");
    Appboy.AppboyBinding.SetUserLastKnownLocation(37.4992819D, -97.4115505D);

    Dictionary<string, object> properties = new Dictionary<string, object>();
    properties.Add("key int", 2);
    properties.Add("key string", "second value");
    properties.Add("key bool", true);
    properties.Add("key float", 20.2);
    Appboy.AppboyBinding.LogCustomEvent("union of unity uniters");
    Appboy.AppboyBinding.LogCustomEvent("DeviceID: " + Appboy.AppboyBinding.GetInstallTrackingId());
    Appboy.AppboyBinding.LogCustomEvent("custom event with properties", properties);
    Appboy.AppboyBinding.LogPurchase("dune", "USD", 1984, 1);
    Appboy.AppboyBinding.LogPurchase("purchase with properties", "USD", 20.21m, 1, properties);
    Appboy.AppboyBinding.AddAlias("aliasHere", "labelHere");
    Debug.Log("DeviceID: " + Appboy.AppboyBinding.GetInstallTrackingId());
    Appboy.AppboyBinding.ConfigureListener(Appboy.BrazeUnityMessageType.PUSH_RECEIVED, "BrazeCallback", "PushNotificationReceivedRuntimeCallback");
    Appboy.AppboyBinding.AddToSubscriptionGroup("added subscription group");
    Appboy.AppboyBinding.RemoveFromSubscriptionGroup("removed subscription group");
    Appboy.AppboyBinding.DisplayNextInAppMessage();
    Appboy.AppboyBinding.PromptUserForPushPermissions(false);
  }

  void PushNotificationReceivedCallback(string message) {
#if UNITY_ANDROID
    Debug.Log("PushNotificationReceivedCallback message: " + message);
    PushNotification pushNotification = new PushNotification(message);
    Debug.Log("Push Notification received: " + pushNotification);   
#elif UNITY_IOS
    ApplePushNotification pushNotification = new ApplePushNotification(message);
    Debug.Log("Push received Notification event: " + pushNotification);   
#endif  
  }

  void PushNotificationOpenedCallback(string message) {
#if UNITY_ANDROID
    Debug.Log("PushNotificationOpenedCallback message: " + message);
    PushNotification pushNotification = new PushNotification(message);
    Debug.Log("Push Notification opened: " + pushNotification);  
#elif UNITY_IOS
    ApplePushNotification pushNotification = new ApplePushNotification(message);
    Debug.Log("Push opened Notification event: " + pushNotification);   
#endif  
  }

  void PushNotificationDeletedCallback(string message) {
#if UNITY_ANDROID
    Debug.Log("PushNotificationDeletedCallback message: " + message);
    PushNotification pushNotification = new PushNotification(message);
    Debug.Log("Push Notification dismissed: " + pushNotification);  
#endif
  }

  void PushNotificationReceivedRuntimeCallback(string message) {
    Debug.Log("Runtime push received callback called " + message);

#if UNITY_ANDROID
    Debug.Log("PushNotificationOpenedCallback message: " + message);
    PushNotification pushNotification = new PushNotification(message);
    Debug.Log("Push Notification received: " + pushNotification);  
#elif UNITY_IOS
    ApplePushNotification pushNotification = new ApplePushNotification(message);
    Debug.Log("Push received Notification event: " + pushNotification);   
#endif  
  }
}
