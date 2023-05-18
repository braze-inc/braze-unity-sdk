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

    // Automate Unity integrations
    [SerializeField]
    /// When disabled, it allows integrations that don't want to use the iOS macro
    /// `IMPL_APP_CONTROLLER_SUBCLASS`, which is used in our sample's AppDelegate
    private bool iOSAutomatesIntegration = false;
    [SerializeField]
    private bool androidAutomatesIntegration = false;

    // Connection Info
    // iOS
    // This field specifically is not prefixed with 'iOS' for backwards compatibility
    [SerializeField]
    private string ApiKey = string.Empty;
    [SerializeField]
    private string iOSEndpoint = string.Empty;
    [SerializeField]
    private bool iOSSdkAuthenticationEnabled = true;
    [SerializeField]
    private string iOSSdkAuthenticationFailedGameObjectName = string.Empty;
    [SerializeField]
    private string iOSSdkAuthenticationFailedCallbackMethodName = string.Empty;
    [SerializeField]
    private string iOSLogLevel = string.Empty;
    [SerializeField]
    private bool iOSImportDependencies = false;
    // Android
    [SerializeField]
    private string androidApiKey = string.Empty;
    [SerializeField]
    private string androidEndpoint = string.Empty;
    [SerializeField]
    private bool androidSdkAuthenticationEnabled = true;
    [SerializeField]
    private string androidSdkAuthenticationFailedGameObjectName = string.Empty;
    [SerializeField]
    private string androidSdkAuthenticationFailedCallbackMethodName = string.Empty;
    [SerializeField]
    private string androidLogLevel = string.Empty;
    [SerializeField]
    private string androidDeviceObjectWhitelist = string.Empty;
    [SerializeField]
    private bool androidDeviceObjectWhitelistEnabled = false;

    // Session Handling
    // Android
    [SerializeField]
    private string androidSessionTimeoutSeconds = string.Empty;
  
    // Push Notifications
    // iOS
    [SerializeField]
    private bool iOSIntegratesPush = false;
    [SerializeField]
    private bool iOSDisableAutomaticPushRegistration = false;
    [SerializeField]
    private bool iOSDisableProvisionalAuth = false;
    [SerializeField]
    private bool iOSDisableAutomaticPushCapability = false;
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
    // Android
    [SerializeField]
    private bool androidFirebaseCloudMessagingRegistrationEnabled = false;
    [SerializeField]
    private string androidFirebaseCloudMessagingSenderId = string.Empty;
    [SerializeField]
    private bool androidHandlePushDeepLinksAutomatically = true;
    [SerializeField]
    private bool androidAdmRegistrationEnabled = false;
    [SerializeField]
    private string androidPushReceivedGameObjectName = string.Empty;
    [SerializeField]
    private string androidPushReceivedCallbackMethodName = string.Empty;
    [SerializeField]
    private string androidPushOpenedGameObjectName = string.Empty;
    [SerializeField]
    private string androidPushOpenedCallbackMethodName = string.Empty;
    [SerializeField]
    private string androidPushDeletedGameObjectName = string.Empty;
    [SerializeField]
    private string androidPushDeletedCallbackMethodName = string.Empty;
    [SerializeField]
    private bool androidPushNotificationHtmlRenderingEnabled = false;
    [SerializeField]
    private String androidPushDefaultNotificationAccentColor = string.Empty;
    [SerializeField]
    private string androidPushDefaultNotificationChannelName = string.Empty;
    [SerializeField]
    private string androidPushDefaultNotificationChannelDescription = string.Empty;
    [SerializeField]
    private string androidPushSmallNotificationIcon = string.Empty;
    [SerializeField]
    private string androidPushLargeNotificationIcon = string.Empty;
    [SerializeField]
    private bool androidDelaySendingPushIntents = false;

    // In-App Messages
    // iOS
    [SerializeField]
    private string iOSInAppMessageGameObjectName = string.Empty;
    [SerializeField]
    private string iOSInAppMessageCallbackMethodName = string.Empty;
    [SerializeField]
    private bool iOSDisplayInAppMessages = false;
    // Android
    [SerializeField]
    private string androidInAppMessageListenerGameObjectName = string.Empty;
    [SerializeField]
    private string androidInAppMessageListenerCallbackMethodName = string.Empty;
    [SerializeField]
    private string androidTriggerActionMinimumTimeSeconds = string.Empty;
    [SerializeField]
    private bool androidDisplayInAppMessagesAutomatically = true;
    [SerializeField]
    private bool androidSetInAppMessageManagerListenerAutomatically = true;
    [SerializeField]
    private int androidInitialInAppMessageOperation = 0;

    // News Feed
    [SerializeField]
    private string iOSFeedGameObjectName = string.Empty;
    [SerializeField]
    private string iOSFeedCallbackMethodName = string.Empty;

    // Content Cards
    // iOS
    [SerializeField]
    private string iOSContentCardsGameObjectName = string.Empty;
    [SerializeField]
    private string iOSContentCardsCallbackMethodName = string.Empty;
    // Android
    [SerializeField]
    private string androidContentCardsUpdatedListenerGameObjectName = string.Empty;
    [SerializeField]
    private string androidContentCardsUpdatedListenerCallbackMethodName = string.Empty;
    [SerializeField]
    private bool androidContentCardsUnreadVisualIndicatorEnabled = true;

    // Feature Flags
    // Cross-platform
    [SerializeField]
    private string featureFlagsGameObjectName = string.Empty;
    [SerializeField]
    private string featureFlagsCallbackMethodName = string.Empty;

    // Location
    // Android
    [SerializeField]
    private bool androidLocationCollectionEnabled = false;
    [SerializeField]
    private bool androidGeofencesEnabled = false;
    [SerializeField]
    private bool androidAutomaticGeofenceRequestsEnabled = true;

    public static string FeatureFlagsGameObjectName {
      get { return Instance.featureFlagsGameObjectName; }
      set { SetProperty(ref Instance.featureFlagsGameObjectName, value); }
    }

    public static string FeatureFlagsCallbackMethodName {
      get { return Instance.featureFlagsCallbackMethodName; }
      set { SetProperty(ref Instance.featureFlagsCallbackMethodName, value); }
    }

    public static bool IOSAutomatesIntegration {
      get { return Instance.iOSAutomatesIntegration; }
      set { SetProperty(ref Instance.iOSAutomatesIntegration, value); }
    }

    public static string IOSApiKey {
      get { return Instance.ApiKey; }
      set { SetProperty(ref Instance.ApiKey, value); }
    }

    public static string IOSEndpoint {
      get { return Instance.iOSEndpoint; }
      set { SetProperty(ref Instance.iOSEndpoint, value); }
    }

    public static bool IOSSdkAuthenticationEnabled {
      get { return Instance.iOSSdkAuthenticationEnabled; }
      set { SetProperty(ref Instance.iOSSdkAuthenticationEnabled, value); }
    }

    public static string IOSSdkAuthenticationFailureGameObjectName {
      get { return Instance.iOSSdkAuthenticationFailedGameObjectName; }
      set { SetProperty(ref Instance.iOSSdkAuthenticationFailedGameObjectName, value); }
    }

    public static string IOSSdkAuthenticationFailureCallbackMethodName {
      get { return Instance.iOSSdkAuthenticationFailedCallbackMethodName; }
      set { SetProperty(ref Instance.iOSSdkAuthenticationFailedCallbackMethodName, value); }
    }

    public static string IOSLogLevel {
      get { return Instance.iOSLogLevel; }
      set { SetProperty(ref Instance.iOSLogLevel, value); }
    }

    public static bool IOSImportDependencies {
      get { return Instance.iOSImportDependencies; }
      set { SetProperty(ref Instance.iOSImportDependencies, value); }
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

    public static bool IOSDisableProvisionalAuth {
      get { return Instance.iOSDisableProvisionalAuth; }
      set { SetProperty(ref Instance.iOSDisableProvisionalAuth, value); }
    }

    public static bool IOSDisableAutomaticPushCapability {
      get { return Instance.iOSDisableAutomaticPushCapability; }
      set { SetProperty(ref Instance.iOSDisableAutomaticPushCapability, value); }
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

    // Android configuration

    public static bool AndroidAutomatesIntegration {
      get { return Instance.androidAutomatesIntegration; }
      set { SetProperty(ref Instance.androidAutomatesIntegration, value); }
    }

    // Connection Info
    public static string AndroidApiKey {
      get { return Instance.androidApiKey; }
      set { SetProperty(ref Instance.androidApiKey, value); }
    }

    public static string AndroidEndpoint {
      get { return Instance.androidEndpoint; }
      set { SetProperty(ref Instance.androidEndpoint, value); }
    }

    public static bool AndroidSdkAuthenticationEnabled {
      get { return Instance.androidSdkAuthenticationEnabled; }
      set { SetProperty(ref Instance.androidSdkAuthenticationEnabled, value); }
    }

    public static string AndroidSdkAuthenticationFailureGameObjectName {
      get { return Instance.androidSdkAuthenticationFailedGameObjectName; }
      set { SetProperty(ref Instance.androidSdkAuthenticationFailedGameObjectName, value); }
    }

    public static string AndroidSdkAuthenticationFailureCallbackMethodName {
      get { return Instance.androidSdkAuthenticationFailedCallbackMethodName; }
      set { SetProperty(ref Instance.androidSdkAuthenticationFailedCallbackMethodName, value); }
    }

    public static string AndroidLogLevel {
      get { return Instance.androidLogLevel; }
      set { SetProperty(ref Instance.androidLogLevel, value); }
    }

    public static string AndroidDeviceObjectWhitelist {
      get { return Instance.androidDeviceObjectWhitelist; }
      set { SetProperty(ref Instance.androidDeviceObjectWhitelist, value); }
    }

    public static bool AndroidDeviceObjectWhitelistEnabled {
      get { return Instance.androidDeviceObjectWhitelistEnabled; }
      set { SetProperty(ref Instance.androidDeviceObjectWhitelistEnabled, value); }
    }

    // Push Notifications
    public static bool AndroidFirebaseCloudMessagingRegistrationEnabled {
      get { return Instance.androidFirebaseCloudMessagingRegistrationEnabled; }
      set { SetProperty(ref Instance.androidFirebaseCloudMessagingRegistrationEnabled, value); }
    }

    public static string AndroidFirebaseCloudMessagingSenderId {
      get { return Instance.androidFirebaseCloudMessagingSenderId; }
      set { SetProperty(ref Instance.androidFirebaseCloudMessagingSenderId, value); }
    }

    public static bool AndroidHandlePushDeepLinksAutomatically {
      get { return Instance.androidHandlePushDeepLinksAutomatically; }
      set { SetProperty(ref Instance.androidHandlePushDeepLinksAutomatically, value); }
    }

    public static bool AndroidAdmRegistrationEnabled {
      get { return Instance.androidAdmRegistrationEnabled; }
      set { SetProperty(ref Instance.androidAdmRegistrationEnabled, value); }
    }

    public static string AndroidPushReceivedGameObjectName {
      get { return Instance.androidPushReceivedGameObjectName; }
      set { SetProperty(ref Instance.androidPushReceivedGameObjectName, value); }
    }

    public static string AndroidPushReceivedCallbackMethodName {
      get { return Instance.androidPushReceivedCallbackMethodName; }
      set { SetProperty(ref Instance.androidPushReceivedCallbackMethodName, value); }
    }

    public static string AndroidPushOpenedGameObjectName {
      get { return Instance.androidPushOpenedGameObjectName; }
      set { SetProperty(ref Instance.androidPushOpenedGameObjectName, value); }
    }

    public static string AndroidPushOpenedCallbackMethodName {
      get { return Instance.androidPushOpenedCallbackMethodName; }
      set { SetProperty(ref Instance.androidPushOpenedCallbackMethodName, value); }
    }

    public static string AndroidPushDeletedGameObjectName {
      get { return Instance.androidPushDeletedGameObjectName; }
      set { SetProperty(ref Instance.androidPushDeletedGameObjectName, value); }
    }

    public static string AndroidPushDeletedCallbackMethodName {
      get { return Instance.androidPushDeletedCallbackMethodName; }
      set { SetProperty(ref Instance.androidPushDeletedCallbackMethodName, value); }
    }

    public static bool AndroidPushNotificationHtmlRenderingEnabled {
      get { return Instance.androidPushNotificationHtmlRenderingEnabled; }
      set { SetProperty(ref Instance.androidPushNotificationHtmlRenderingEnabled, value); }
    }

    // Should be set as a hex string '0xFF0011BB', but not validated.
    public static string AndroidPushDefaultNotificationAccentColor {
      get { return Instance.androidPushDefaultNotificationAccentColor; }
      set { SetProperty(ref Instance.androidPushDefaultNotificationAccentColor, value); }
    }

    public static string AndroidPushDefaultNotificationChannelName {
      get { return Instance.androidPushDefaultNotificationChannelName; }
      set { SetProperty(ref Instance.androidPushDefaultNotificationChannelName, value); }
    }

    public static string AndroidPushDefaultNotificationChannelDescription {
      get { return Instance.androidPushDefaultNotificationChannelDescription; }
      set { SetProperty(ref Instance.androidPushDefaultNotificationChannelDescription, value); }
    }

    public static string AndroidPushSmallNotificationIcon {
      get { return Instance.androidPushSmallNotificationIcon; }
      set { SetProperty(ref Instance.androidPushSmallNotificationIcon, value); }
    }

    public static string AndroidPushLargeNotificationIcon {
      get { return Instance.androidPushLargeNotificationIcon; }
      set { SetProperty(ref Instance.androidPushLargeNotificationIcon, value); }
    }

    public static bool AndroidPushNotificationDelayedSendingEnabled {
      get { return Instance.androidDelaySendingPushIntents; }
      set { SetProperty(ref Instance.androidDelaySendingPushIntents, value); }
    }

    // In-App Messages
    public static string AndroidInAppMessageListenerGameObjectName {
      get { return Instance.androidInAppMessageListenerGameObjectName; }
      set { SetProperty(ref Instance.androidInAppMessageListenerGameObjectName, value); }
    }

    public static string AndroidInAppMessageListenerCallbackMethodName {
      get { return Instance.androidInAppMessageListenerCallbackMethodName; }
      set { SetProperty(ref Instance.androidInAppMessageListenerCallbackMethodName, value); }
    }

    public static string AndroidTriggerActionMinimumTimeSeconds {
      get { return Instance.androidTriggerActionMinimumTimeSeconds; }
      set { SetProperty(ref Instance.androidTriggerActionMinimumTimeSeconds, value); }
    }

    public static bool AndroidDisplayInAppMessagesAutomatically {
      get { return Instance.androidDisplayInAppMessagesAutomatically; }
      set { SetProperty(ref Instance.androidDisplayInAppMessagesAutomatically, value); }
    }
 
    public static bool AndroidSetInAppMessageManagerListenerAutomatically {
      get { return Instance.androidSetInAppMessageManagerListenerAutomatically; }
      set { SetProperty(ref Instance.androidSetInAppMessageManagerListenerAutomatically, value); }
    }

    public static int AndroidInitialInAppMessageOperation {
      get { return Instance.androidInitialInAppMessageOperation; }
      set { SetProperty(ref Instance.androidInitialInAppMessageOperation, value); }
    }

    // Content Cards
    public static string AndroidContentCardsUpdatedListenerGameObjectName {
      get { return Instance.androidContentCardsUpdatedListenerGameObjectName; }
      set { SetProperty(ref Instance.androidContentCardsUpdatedListenerGameObjectName, value); }
    }

    public static string AndroidContentCardsUpdatedListenerCallbackMethodName {
      get { return Instance.androidContentCardsUpdatedListenerCallbackMethodName; }
      set { SetProperty(ref Instance.androidContentCardsUpdatedListenerCallbackMethodName, value); }
    }

    public static bool AndroidContentCardsUnreadVisualIndicatorEnabled {
      get { return Instance.androidContentCardsUnreadVisualIndicatorEnabled; }
      set { SetProperty(ref Instance.androidContentCardsUnreadVisualIndicatorEnabled, value); }
    }

    // Session Handling
    public static string AndroidSessionTimeoutSeconds {
      get { return Instance.androidSessionTimeoutSeconds; }
      set { SetProperty(ref Instance.androidSessionTimeoutSeconds, value); }
    }

    // Location
    public static bool AndroidLocationCollectionEnabled {
      get { return Instance.androidLocationCollectionEnabled; }
      set { SetProperty(ref Instance.androidLocationCollectionEnabled, value); }
    }

    public static bool AndroidGeofencesEnabled {
      get { return Instance.androidGeofencesEnabled; }
      set { SetProperty(ref Instance.androidGeofencesEnabled, value); }
    }

    public static bool AndroidAutomaticGeofenceRequestsEnabled {
      get { return Instance.androidAutomaticGeofenceRequestsEnabled; }
      set { SetProperty(ref Instance.androidAutomaticGeofenceRequestsEnabled, value); }
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
