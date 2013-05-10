using UnityEngine;
using System.Collections;

/// <summary>
/// This is an optional class which binds Appboy's session management methods to the
/// appropriate Unity Lifecycle methods. If your AndroidManifest.xml specifies that your
/// main activity inherits from com.appboy.AppboyUnityActivity (the default), you will
/// not need to use this class. However, if you cannot inherit from AppboyUnityActivity,
/// you can alternatively add this script to the main camera in every one of your scenes.
/// </summary>
public class AppboyBehaviour : MonoBehaviour {
  private static void OpenSession() {
    using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
    using (var androidActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity"))
    using (var appboyClass = new AndroidJavaClass("com.appboy.Appboy")) {
      AppboyBinding.GetAppboy().Call<bool>("openSession", androidActivity);
    }
  }
  
  private static void CloseSession() {
    using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
    using (var androidActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity")) {
      AppboyBinding.GetAppboy().Call<bool>("closeSession", androidActivity);
    }
  }
 
  // Start, OnApplicationPause and OnApplicationQuit all have session open/close calls based on how they 
  // match up with the normal Android Activity Lifecycle.
  
  void Start() {
    Debug.Log("Using the AppboyBehaviour in lieu of overriding the Activity in the manifest.");
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
}

