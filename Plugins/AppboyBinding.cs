// When developing, you can place #define UNITY_ANDROID or #define UNITY_IPHONE above this line 
// in order to get correct syntax highlighting in the region you are working on.

using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class AppboyBinding : MonoBehaviour, IAppboyBinding {
 
#if UNITY_IPHONE
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _logAppEvent(string eventName);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _changeUserId(string userId);

  public void LogCustomEvent(string eventName) {
    _logAppEvent(eventName);
  }
  
  public void LogPurchase(string productId, int priceInCents) {
  }
  
  public void ChangeUserId(string userId) {
    _changeUserId(userId);
  }
  
  public void SetFirstName(string firstName) {
  }  
  
  public void SetLastName(string lastName) {
  }
 
  public void SetEmail(string email) {
  }

  public void SetBio(string bio) {
  }
 
  public void SetGender(string gender) {
  }
 
  public void SetDateOfBirth(int year, int month, int day) {
  }

  public void SetCountry(string country) {
  }

  public void SetHomeCity(string city) {
  }

  public void SetIsSubscribedToEmails(bool isSubscribedToEmails) {
  }

  public void SetPhoneNumber(string phoneNumber) {
  }

  public void SetCustomUserAttribute(string key, bool value) {
  }

  public void SetCustomUserAttribute(string key, int value) {
  }

  public void SetCustomUserAttribute(string key, float value) {
  }

  public void SetCustomUserAttribute(string key, long value) {
  }

  public void SetCustomUserAttribute(string key, string value) {
  }
  
  public void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
  }
  
  public void UnsetCustomUserAttribute(string key) {
  }

#elif UNITY_ANDROID
  private static AndroidJavaObject sAppboy = null;
  
  private AndroidJavaObject GetAppboy() {
    if (sAppboy == null) {
      using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
      using (var androidActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity"))
      using (var appboyClass = new AndroidJavaClass("com.appboy.Appboy")) {
        sAppboy = appboyClass.CallStatic<AndroidJavaObject>("getInstance", androidActivity);
      }
    }
    return sAppboy;  
  }
  
  private AndroidJavaObject GetCurrentUser() {
    return GetAppboy().Call<AndroidJavaObject>("getCurrentUser");
  }
  
  private void OpenSession() {
    using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
    using (var androidActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity"))
    using (var appboyClass = new AndroidJavaClass("com.appboy.Appboy")) {
      GetAppboy().Call<bool>("openSession", androidActivity);
    }
  }
  
  private void CloseSession() {
    using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
    using (var androidActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity")) {
      GetAppboy().Call<bool>("closeSession", androidActivity);
    }
  }
 
  // Start, OnApplicationPause and OnApplicationQuit all have session open/close calls based on how they 
  // match up with the normal Android Activity Lifecycle.
  
  void Start() {
    Debug.Log("Starting Appboy binding for Android clients.");
    OpenSession();
  }
  
  void OnApplicationPause(bool pauseStatus) {
    if (pauseStatus) {
      CloseSession();
    } else {
      OpenSession();
    }
  }
  
  void OnApplicationQuit() {
    CloseSession();
  }
  
  public void LogCustomEvent(string eventName) {
    GetAppboy().Call<bool>("logCustomEvent", eventName);
  }
  
  public void LogPurchase(string productId, int priceInCents) {
    GetAppboy().Call<bool>("logPurchase", productId, priceInCents);
  }
  
  public void ChangeUserId(string userId) {
    GetAppboy();
  }
  
  public void SetFirstName(string firstName) {
    GetCurrentUser().Call<bool>("setFirstName", firstName);
  }  
  
  public void SetLastName(string lastName) {
    GetCurrentUser().Call<bool>("setLastName", lastName);
  }
 
  public void SetEmail(string email) {
    GetCurrentUser().Call<bool>("setEmail", email);
  }

  public void SetBio(string bio) {
    GetCurrentUser().Call<bool>("setBio", bio);
  }

  public void SetGender(string gender) {
    using (var genderClass = new AndroidJavaClass("com.appboy.enums.Gender")) {
      switch (gender.ToLowerInvariant()) {
        case "m":
        case "male":
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("MALE"));
          break;
        case "f":
        case "female":
          GetCurrentUser().Call<bool>("setGender", genderClass.GetStatic<AndroidJavaObject>("FEMALE"));
          break;
        default:
          Debug.Log("Unknown gender received: " + gender);
          break;
      }
    }
  }

  public void SetDateOfBirth(int year, int month, int day) {
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

  public void SetCountry(string country) {
    GetCurrentUser().Call<bool>("setCountry", country);
  }

  public void SetHomeCity(string city) {
    GetCurrentUser().Call<bool>("setHomeCity", city);
  }

  public void SetIsSubscribedToEmails(bool isSubscribedToEmails) {
    GetCurrentUser().Call<bool>("setIsSubscribedToEmails", isSubscribedToEmails);
  }

  public void SetPhoneNumber(string phoneNumber) {
    GetCurrentUser().Call<bool>("setPhoneNumber", phoneNumber);
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

  public void SetCustomUserAttribute(string key, long value) {
    GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
  }

  public void SetCustomUserAttribute(string key, string value) {
    GetCurrentUser().Call<bool>("setCustomUserAttribute", key, value);
  }
  
  public void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {
    GetCurrentUser().Call<bool>("setCustomUserAttributeToSecondsFromEpoch", key, secondsFromEpoch);
  }
  
  public void UnsetCustomUserAttribute(string key) {
    GetCurrentUser().Call<bool>("unsetCustomUserAttribute", key);
  }

#else
  // Empty implementations of the API, in case the application is being compiled for a platform other than iOS or Android.
  void Start() {
    Debug.Log("Starting no-op Appboy binding for non iOS/Android clients.");
  }
  
  public void LogCustomEvent(string eventName) {}
  
  public void LogPurchase(string productId, int priceInCents) {}
  
  public void ChangeUserId(string userId) {}
  
  public void SetFirstName(string firstName) {}  
  
  public void SetLastName(string lastName) {}
 
  public void SetEmail(string email) {}

  public void SetBio(string bio) {}
 
  public void SetGender(string gender) {}
 
  public void SetDateOfBirth(int year, int month, int day) {}

  public void SetCountry(string country) {}

  public void SetHomeCity(string city) {}

  public void SetIsSubscribedToEmails(bool isSubscribedToEmails) {}

  public void SetPhoneNumber(string phoneNumber) {}

  public void SetCustomUserAttribute(string key, bool value) {}

  public void SetCustomUserAttribute(string key, int value) {}

  public void SetCustomUserAttribute(string key, float value) {}

  public void SetCustomUserAttribute(string key, long value) {}

  public void SetCustomUserAttribute(string key, string value) {}
  
  public void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {}
  
  public void UnsetCustomUserAttribute(string key) {}
#endif
}