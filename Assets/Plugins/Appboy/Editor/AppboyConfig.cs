using System;
using System.IO;
using UnityEngine;
using UnityEditor;

namespace Appboy.Editor {
  [Serializable]
  public class AppboyConfig : ScriptableObject {
    private const string AssetName = "AppboyConfig";
    private const string AssetPath = "Resources";
    private const string AssetExtension = ".asset";

    // Singleton instance
    private static AppboyConfig instance;

    // Automate Unity iOS integration
    [SerializeField]
    private bool iOSAutomatesIntegration = false;

    // App Startup
    [SerializeField]
    private string apiKey = string.Empty;

    // Push Notifications
    [SerializeField]
    private bool iOSIntegratesPush = false;
    [SerializeField]
    private bool iOSDisableAutomaticPushRegistration = false;
    [SerializeField]
    private bool iOSPushIsBackgroundEnabled = false;
    [SerializeField]
    private string iOSPushReceivedGameObjectName = string.Empty;
    [SerializeField]
    private string iOSPushReceivedCallbackMethodName = string.Empty;
    [SerializeField]
    private string iOSPushOpenedGameObjectName = string.Empty;
    [SerializeField]
    private string iOSPushOpenedCallbackMethodName = string.Empty;
    
    // In-App Messages
    [SerializeField]
    private string iOSInAppMessageGameObjectName = string.Empty;
    [SerializeField]
    private string iOSInAppMessageCallbackMethodName = string.Empty;
    [SerializeField]
    private bool iOSDisplayInAppMessages = false;

    // News Feed
    [SerializeField]
    private string iOSFeedGameObjectName = string.Empty;
    [SerializeField]
    private string iOSFeedCallbackMethodName = string.Empty;

    // Content Cards
    [SerializeField]
    private string iOSContentCardsGameObjectName = string.Empty;
    [SerializeField]
    private string iOSContentCardsCallbackMethodName = string.Empty;

    public static bool IOSAutomatesIntegration {
      get { return Instance.iOSAutomatesIntegration; }
      set { SetProperty(ref Instance.iOSAutomatesIntegration, value); }
    }

    public static string ApiKey {
      get { return Instance.apiKey; }
      set { SetProperty(ref Instance.apiKey, value); }
    }

    // Push
    public static bool IOSIntegratesPush {
      get { return Instance.iOSIntegratesPush; }
      set { SetProperty(ref Instance.iOSIntegratesPush, value); }
    }
    
    public static bool IOSDisableAutomaticPushRegistration {
      get { return Instance.iOSDisableAutomaticPushRegistration; }
      set { SetProperty(ref Instance.iOSDisableAutomaticPushRegistration, value); }
    }

    public static string IOSPushReceivedGameObjectName {
      get { return Instance.iOSPushReceivedGameObjectName; }
      set { SetProperty(ref Instance.iOSPushReceivedGameObjectName, value); }
    }

    public static string IOSPushReceivedCallbackMethodName {
      get { return Instance.iOSPushReceivedCallbackMethodName; }
      set { SetProperty(ref Instance.iOSPushReceivedCallbackMethodName, value); }
    }

    public static string IOSPushOpenedGameObjectName {
      get { return Instance.iOSPushOpenedGameObjectName; }
      set { SetProperty(ref Instance.iOSPushOpenedGameObjectName, value); }
    }

    public static string IOSPushOpenedCallbackMethodName {
      get { return Instance.iOSPushOpenedCallbackMethodName; }
      set { SetProperty(ref Instance.iOSPushOpenedCallbackMethodName, value); }
    }

    public static bool IOSPushIsBackgroundEnabled {
      get { return Instance.iOSPushIsBackgroundEnabled; }
      set { SetProperty(ref Instance.iOSPushIsBackgroundEnabled, value); }
    }

    // In-App Messages
    public static string IOSInAppMessageGameObjectName {
      get { return Instance.iOSInAppMessageGameObjectName; }
      set { SetProperty(ref Instance.iOSInAppMessageGameObjectName, value); }
    }
    
    public static string IOSInAppMessageCallbackMethodName {
      get { return Instance.iOSInAppMessageCallbackMethodName; }
      set { SetProperty(ref Instance.iOSInAppMessageCallbackMethodName, value); }
    }

    public static bool IOSDisplayInAppMessages {
      get { return Instance.iOSDisplayInAppMessages; }
      set { SetProperty(ref Instance.iOSDisplayInAppMessages, value); }
    }

    // News Feed
    public static string IOSFeedGameObjectName {
      get { return Instance.iOSFeedGameObjectName; }
      set { SetProperty(ref Instance.iOSFeedGameObjectName, value); }
    }

    public static string IOSFeedCallbackMethodName {
      get { return Instance.iOSFeedCallbackMethodName; }
      set { SetProperty(ref Instance.iOSFeedCallbackMethodName, value); }
    }

    // Content Cards
    public static string IOSContentCardsGameObjectName {
      get { return Instance.iOSContentCardsGameObjectName; }
      set { SetProperty(ref Instance.iOSContentCardsGameObjectName, value); }
    }

    public static string IOSContentCardsCallbackMethodName {
      get { return Instance.iOSContentCardsCallbackMethodName; }
      set { SetProperty(ref Instance.iOSContentCardsCallbackMethodName, value); }
    }

    // Setter utility method
    private static void SetProperty<T>(ref T oldValue, T newValue) {
      if (!Equals(oldValue, newValue)) {
        oldValue = newValue;
        // Tell Unity to save asset changes
        EditorUtility.SetDirty(Instance);
      }
    }

    private static AppboyConfig Instance {
      get  {
        if (!instance) {
          // Try to load from assets
          instance = Resources.Load(AssetName) as AppboyConfig;

          if (!instance) {
            // Instantiate an instance
            instance = ScriptableObject.CreateInstance<AppboyConfig>();
            string directoryPath = Path.Combine(Application.dataPath, AssetPath);
            if (!Directory.Exists(directoryPath)) {
              Directory.CreateDirectory(directoryPath);
            }
            string fullAssetPath = Path.Combine("Assets", Path.Combine(AssetPath, AssetName + AssetExtension));
            AssetDatabase.CreateAsset(instance, fullAssetPath);
            AssetDatabase.SaveAssets();
          }
        }
        return instance;
      }
    }
  }
}