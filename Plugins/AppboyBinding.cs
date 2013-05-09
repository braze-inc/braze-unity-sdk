// When developing, you can place #define UNITY_ANDROID or #define UNITY_IPHONE above this line 
// in order to get correct syntax highlighting in the region you are working on.

using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

/// <summary>
/// These methods can be called by Unity applications using iOS or Android in order to report 
/// events and set user attributes. Please see the Appboy Android JavaDocs for more 
/// detailed guidance on usage (note that only a subset of the functions in the JavaDocs
/// are availabe in the Unity API):
/// http://appboy.github.io/appboy-android-sdk/javadocs/com/appboy/IAppboy.html
/// http://appboy.github.io/appboy-android-sdk/javadocs/index.html
/// </summary>
public class AppboyBinding : MonoBehaviour {
 
#if UNITY_IPHONE
  void Start() {
    Debug.Log("Starting Appboy binding for iOS clients.");
  }
  
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _logCustomEvent(string eventName);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _changeUser(string userId);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _logPurchase(string productId, int cents);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserFirstName(string firstName);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserLastName(string lastName);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserPhoneNumber(string phoneNumber);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserBio(string bio);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserGender(string gender);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserEmail(string email);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserDateOfBirth(int year, int month, int day);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserCountry(string country);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserHomeCity(string city);

  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setUserIsSubscribedToEmails(bool isSubscribedToEmails);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeBool(string key, bool val);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeInt(string key, int val);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeFloat(string key, float val);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeLong(string key, long val);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeString(string key, string val);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeToNow(string key);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _setCustomUserAttributeToSecondsFromEpoch(string key, long seconds);
	
  [System.Runtime.InteropServices.DllImport("__Internal")]
  private static extern void _unsetCustomUserAttribute(string key);

  public static void LogCustomEvent(string eventName) {
    _logCustomEvent(eventName);
  }
  
  public static void LogPurchase(string productId, int priceInCents) {
	_logPurchase(productId, priceInCents);
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

  public static void SetUserBio(string bio) {
	_setUserBio(bio);
  }
 
  public static void SetUserGender(string gender) {
	_setUserGender(gender);
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

  public static void SetUserIsSubscribedToEmails(bool isSubscribedToEmails) {
	_setUserIsSubscribedToEmails(isSubscribedToEmails);
  }

  public static void SetUserPhoneNumber(string phoneNumber) {
	_setUserPhoneNumber(phoneNumber);
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

  public static void SetCustomUserAttribute(string key, long value) {
	_setCustomUserAttributeLong(key, value);
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

#elif UNITY_ANDROID
  private static AndroidJavaObject sAppboy = null;
  
  void Start() {
    Debug.Log("Starting Appboy binding for Android clients.");
  }
  
  public static AndroidJavaObject GetAppboy() {
    if (sAppboy == null) {
      using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
      using (var androidActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity"))
      using (var appboyClass = new AndroidJavaClass("com.appboy.Appboy")) {
        sAppboy = appboyClass.CallStatic<AndroidJavaObject>("getInstance", androidActivity);
      }
    }
    return sAppboy;  
  }
  
  private static AndroidJavaObject GetCurrentUser() {
    return GetAppboy().Call<AndroidJavaObject>("getCurrentUser");
  }

  public static void LogCustomEvent(string eventName) {
    GetAppboy().Call<bool>("logCustomEvent", eventName);
  }
  
  public static void LogPurchase(string productId, int priceInCents) {
    GetAppboy().Call<bool>("logPurchase", productId, priceInCents);
  }
  
  public static void ChangeUser(string userId) {
    GetAppboy().Call<AndroidJavaObject>("changeUser", userId);
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

  public static void SetUserBio(string bio) {
    GetCurrentUser().Call<bool>("setBio", bio);
  }
 
  /// <summary>
  /// Sets the gender field for the current user.
  /// </summary>
  /// <param name='gender'>
  /// The gender of the user. Should be either 'M', 'F', 'MALE', or 'FEMALE'.
  /// </param>
  public static void SetUserGender(string gender) {
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

  public static void SetUserIsSubscribedToEmails(bool isSubscribedToEmails) {
    GetCurrentUser().Call<bool>("setIsSubscribedToEmails", isSubscribedToEmails);
  }

  public static void SetUserPhoneNumber(string phoneNumber) {
    GetCurrentUser().Call<bool>("setPhoneNumber", phoneNumber);
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

  public static void SetCustomUserAttribute(string key, long value) {
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

#else
  // Empty implementations of the API, in case the application is being compiled for a platform other than iOS or Android.
  void Start() {
    Debug.Log("Starting no-op Appboy binding for non iOS/Android clients.");
  }

  public static void LogCustomEvent(string eventName) {}

  public static void LogPurchase(string productId, int priceInCents) {}

  public static void ChangeUser(string userId) {}

  public static void SetUserFirstName(string firstName) {}  

  public static void SetUserLastName(string lastName) {}

  public static void SetUserEmail(string email) {}

  public static void SetUserBio(string bio) {}

  public static void SetUserGender(string gender) {}

  public static void SetUserDateOfBirth(int year, int month, int day) {}

  public static void SetUserCountry(string country) {}

  public static void SetUserHomeCity(string city) {}

  public static void SetUserIsSubscribedToEmails(bool isSubscribedToEmails) {}

  public static void SetUserPhoneNumber(string phoneNumber) {}

  public static void SetCustomUserAttribute(string key, bool value) {}

  public static void SetCustomUserAttribute(string key, int value) {}

  public static void SetCustomUserAttribute(string key, float value) {}

  public static void SetCustomUserAttribute(string key, long value) {}

  public static void SetCustomUserAttribute(string key, string value) {}

  public static void SetCustomUserAttributeToNow(string key) {}

  public static void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch) {}

  public static void UnsetCustomUserAttribute(string key) {}
#endif
}