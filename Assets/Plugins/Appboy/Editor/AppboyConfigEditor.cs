using System;
using UnityEditor;
using UnityEngine;

namespace Appboy.Editor {
  public class AppboyConfigEditor : EditorWindow {
    private AppboyConfig instance;
    private Vector2 scrollPosition;
    private GUILayoutOption[] buttonGuiStyle = new GUILayoutOption[] { GUILayout.ExpandWidth(true) };
    // https://appboy.github.io/appboy-android-sdk/kdoc/braze-android-sdk/com.braze.ui.inappmessage/-in-app-message-operation/index.html
    private string[] ANDROID_IAM_OPERATIONS = new string[] {"Display Now", "Display Later", "Discard"};

    // Cross-platform settings
    private bool generalShowAllSettings = true;
    private bool showFeatureFlagSettings = true;

    // iOS fields
    private bool iosShowAllSettings = true;
    private bool showPushOpenedListener = true;
    private bool showPushReceivedListener = true;
    private bool showInAppMessageListener = true;
    private bool showFeedListener = true;
    private bool showContentCardsListener = true;

    // Android fields
    private bool androidShowAllSettings = true;
    private bool androidShowDeviceObjectWhitelistSettings = false;
    private bool androidShowFirebasePushSettings = true;
    private bool androidShowADMPushSettings = false;
    private bool androidShowPushConfigurationSettings = false;
    private bool androidShowPushReceivedListener = true;
    private bool androidShowPushOpenedListener = true;
    private bool androidShowPushDeletedListener = true;
    private bool androidShowInAppMessageListener = true;
    private bool androidShowContentCardsUpdatedListener = true;

    [MenuItem("Braze/Braze Configuration")]
    static void Init() {
      AppboyConfigEditor editor = (AppboyConfigEditor)EditorWindow.GetWindow(typeof (AppboyConfigEditor));
      editor.Show();
    }

    void OnGUI() {
      EditorGUIUtility.labelWidth = 400;
      scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);
      EditorGUIUtility.fieldWidth = 800;

      // Cross-platform
      generalShowAllSettings = EditorGUILayout.Foldout(generalShowAllSettings, "Show Braze General Settings");
      if (generalShowAllSettings) {
        GeneralBuildGUI();
      }
      EditorGUILayout.Separator();

      // iOS
      iosShowAllSettings = EditorGUILayout.Foldout(iosShowAllSettings, "Show Braze iOS Settings");
      if (iosShowAllSettings) {
        IOSBuildGUI();
      }
      EditorGUILayout.Separator();

      // Android
      androidShowAllSettings = EditorGUILayout.Foldout(androidShowAllSettings, "Show Braze Android Settings");
      if (androidShowAllSettings) {
        AndroidBuildGUI();
      }
      EditorGUILayout.Separator();
      EditorGUILayout.EndScrollView();
    }


    private void GeneralBuildGUI() {
      EditorGUI.indentLevel++;
      // Feature Flags
      EditorGUILayout.LabelField("Feature Flags", EditorStyles.boldLabel);
      EditorGUI.indentLevel++;
      showFeatureFlagSettings = EditorGUILayout.Foldout(showFeatureFlagSettings, "Set Feature Flags Listener");
      if (showFeatureFlagSettings) {
        EditorGUI.indentLevel++;
        AppboyConfig.FeatureFlagsGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.FeatureFlagsGameObjectName);
        AppboyConfig.FeatureFlagsCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.FeatureFlagsCallbackMethodName);
        EditorGUI.indentLevel--;
      }
      EditorGUI.indentLevel--;
      EditorGUILayout.Separator();
      EditorGUI.indentLevel--;
    }

    private void IOSBuildGUI() {
      AppboyConfig.IOSAutomatesIntegration = EditorGUILayout.ToggleLeft(" Automate Unity iOS Integration", AppboyConfig.IOSAutomatesIntegration, EditorStyles.boldLabel);
      EditorGUILayout.Separator();

      EditorGUI.indentLevel++;
      if (AppboyConfig.IOSAutomatesIntegration) {
        // API Key and Endpoint
        EditorGUILayout.LabelField("Connection Info", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AppboyConfig.IOSApiKey = EditorGUILayout.TextField("Braze API Key", AppboyConfig.IOSApiKey);
        AppboyConfig.IOSEndpoint = EditorGUILayout.TextField("Braze SDK Endpoint", AppboyConfig.IOSEndpoint);
        EditorGUILayout.LabelField("If you are on the default Braze SDK Endpoint, you can leave this blank.", EditorStyles.wordWrappedMiniLabel);
        AppboyConfig.IOSSdkAuthenticationEnabled = EditorGUILayout.ToggleLeft(" SDK Authentication Enabled", AppboyConfig.IOSSdkAuthenticationEnabled);
        if (AppboyConfig.IOSSdkAuthenticationEnabled) {
          EditorGUI.indentLevel++;
          AppboyConfig.IOSSdkAuthenticationFailureGameObjectName = EditorGUILayout.TextField("SDK Authentication Failure Game Object Name", AppboyConfig.IOSSdkAuthenticationFailureGameObjectName);
          AppboyConfig.IOSSdkAuthenticationFailureCallbackMethodName = EditorGUILayout.TextField("SDK Authentication Failure Callback Method Name", AppboyConfig.IOSSdkAuthenticationFailureCallbackMethodName);
          EditorGUI.indentLevel--;
        }
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // Dependencies
        EditorGUILayout.LabelField("Dependencies", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AppboyConfig.IOSImportDependencies = EditorGUILayout.ToggleLeft("Import SDWebImage dependency (GIF support)", AppboyConfig.IOSImportDependencies, EditorStyles.boldLabel);
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // Push Notifications
        EditorGUILayout.BeginVertical();
        EditorGUILayout.LabelField("Push Notifications", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        IOSBuildGUIPush();
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // In-App Messages
        EditorGUILayout.LabelField("In-App Messages", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        showInAppMessageListener = EditorGUILayout.Foldout(showInAppMessageListener, "Set In-App Message Listener");
        if (showInAppMessageListener) {
          EditorGUI.indentLevel++;
          AppboyConfig.IOSInAppMessageGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.IOSInAppMessageGameObjectName);
          AppboyConfig.IOSInAppMessageCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.IOSInAppMessageCallbackMethodName);
          if (!String.IsNullOrEmpty(AppboyConfig.IOSInAppMessageGameObjectName.Trim()) && !String.IsNullOrEmpty(AppboyConfig.IOSInAppMessageCallbackMethodName.Trim())) {
            AppboyConfig.IOSDisplayInAppMessages = EditorGUILayout.ToggleLeft(" Braze Displays In-App Messages", AppboyConfig.IOSDisplayInAppMessages);
          }
          EditorGUI.indentLevel--;
        }
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // News Feed
        EditorGUILayout.LabelField("News Feed", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        showFeedListener = EditorGUILayout.Foldout(showFeedListener, "Set News Feed Listener");
        if (showFeedListener) {
          EditorGUI.indentLevel++;
          AppboyConfig.IOSFeedGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.IOSFeedGameObjectName);
          AppboyConfig.IOSFeedCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.IOSFeedCallbackMethodName);
          EditorGUI.indentLevel--;
        }
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // Content Cards
        EditorGUILayout.LabelField("Content Cards", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        showContentCardsListener = EditorGUILayout.Foldout(showContentCardsListener, "Set Content Cards Listener");
        if (showContentCardsListener) {
          EditorGUI.indentLevel++;
          AppboyConfig.IOSContentCardsGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.IOSContentCardsGameObjectName);
          AppboyConfig.IOSContentCardsCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.IOSContentCardsCallbackMethodName);
          EditorGUI.indentLevel--;
        }
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // SDK Debugging
        EditorGUILayout.LabelField("SDK Debugging", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AppboyConfig.IOSLogLevel = EditorGUILayout.TextField("SDK Log Level", AppboyConfig.IOSLogLevel);
        EditorGUILayout.LabelField("Leaving this blank will use the default log level. Setting it to \"0\" will enable verbose logging.", EditorStyles.wordWrappedMiniLabel);
        EditorGUI.indentLevel--;
      }
      EditorGUI.indentLevel--;
    }

    private void IOSBuildGUIPush() {
      AppboyConfig.IOSIntegratesPush = EditorGUILayout.ToggleLeft(" Integrate Push With Braze", AppboyConfig.IOSIntegratesPush);
      EditorGUILayout.LabelField("Registers users for push notifications, passes push tokens to Braze and tracks push opens.", EditorStyles.wordWrappedMiniLabel);

      AppboyConfig.IOSDisableAutomaticPushRegistration = EditorGUILayout.ToggleLeft(" Disable Automatic Push Registration", AppboyConfig.IOSDisableAutomaticPushRegistration);
      if (AppboyConfig.IOSDisableAutomaticPushRegistration) {
        EditorGUILayout.LabelField("You will need to manually prompt users for push registration.", EditorStyles.miniBoldLabel);
      } else {
        EditorGUILayout.LabelField("Disables automatic user registration for push notifications upon app startup.", EditorStyles.wordWrappedMiniLabel);
      }

      AppboyConfig.IOSDisableProvisionalAuth = EditorGUILayout.ToggleLeft(" Disable Provisional Authorization", AppboyConfig.IOSDisableProvisionalAuth);
      if (AppboyConfig.IOSDisableProvisionalAuth) {
        EditorGUILayout.LabelField("Users will see the native push prompt dialog at app startup.", EditorStyles.miniBoldLabel);
      } else {
        EditorGUILayout.LabelField("Disables provisional (quiet) authorization. If disabled, users will see the native push prompt dialog at app startup.", EditorStyles.wordWrappedMiniLabel);
      }

      AppboyConfig.IOSDisableAutomaticPushCapability = EditorGUILayout.ToggleLeft(" Disable Automatic Push Capability", AppboyConfig.IOSDisableAutomaticPushCapability);
      if (AppboyConfig.IOSDisableAutomaticPushCapability) {
        EditorGUILayout.LabelField("You will need to manually add the Push Capability to your Xcode project.", EditorStyles.miniBoldLabel);
      } else {
        EditorGUILayout.LabelField("Disables adding the Xcode Push Capability automatically.", EditorStyles.wordWrappedMiniLabel);
      }

      AppboyConfig.IOSPushIsBackgroundEnabled = EditorGUILayout.ToggleLeft(" Enable Background Push", AppboyConfig.IOSPushIsBackgroundEnabled);
      EditorGUILayout.LabelField("Allows the system to wake your app from suspension when a push notification arrives.", EditorStyles.wordWrappedMiniLabel);

      showPushReceivedListener = EditorGUILayout.Foldout(showPushReceivedListener, "Set Push Received Listener");
      if (showPushReceivedListener) {
        EditorGUI.indentLevel++;
        AppboyConfig.IOSPushReceivedGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.IOSPushReceivedGameObjectName);
        AppboyConfig.IOSPushReceivedCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.IOSPushReceivedCallbackMethodName);
        EditorGUI.indentLevel--;
      }

      showPushOpenedListener = EditorGUILayout.Foldout(showPushOpenedListener, "Set Push Opened Listener");
      if (showPushOpenedListener) {
        EditorGUI.indentLevel++;
        AppboyConfig.IOSPushOpenedGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.IOSPushOpenedGameObjectName);
        AppboyConfig.IOSPushOpenedCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.IOSPushOpenedCallbackMethodName);
        EditorGUI.indentLevel--;
      }
    }

    private void AndroidBuildGUI() {
      AppboyConfig.AndroidAutomatesIntegration = EditorGUILayout.ToggleLeft(" Automate Unity Android Integration", AppboyConfig.AndroidAutomatesIntegration, EditorStyles.boldLabel);
      EditorGUILayout.Separator();

      EditorGUI.indentLevel++;
      if (AppboyConfig.AndroidAutomatesIntegration) {

        // API Key and Endpoint
        EditorGUILayout.LabelField("Connection Info", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AndroidBuildGUIConnectionInfo();
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // Push Notifications
        EditorGUILayout.LabelField("Push Notifications", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AndroidBuildGUIPush();
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // In App Messages
        EditorGUILayout.LabelField("In App Messages", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AndroidBuildGUIInAppMessages();
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // Content Cards
        EditorGUILayout.LabelField("Content Cards", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AndroidBuildGUIContentCards();
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // Session Handling
        EditorGUILayout.LabelField("Session Handling", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AndroidBuildGUISessionHandling();
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // Location
        EditorGUILayout.LabelField("Location", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AndroidBuildGUILocation();
        EditorGUI.indentLevel--;
        EditorGUILayout.Separator();

        // SDK Debugging
        EditorGUILayout.LabelField("SDK Debugging", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidLogLevel = EditorGUILayout.TextField("SDK Log Level", AppboyConfig.AndroidLogLevel);
        EditorGUILayout.LabelField("Leaving this blank will use the default log level. Setting it to \"0\" will enable verbose logging.", EditorStyles.wordWrappedMiniLabel);
        EditorGUI.indentLevel--;
      }
      EditorGUI.indentLevel--;
    }

    private void AndroidBuildGUIConnectionInfo() {
      AppboyConfig.AndroidApiKey = EditorGUILayout.TextField("Braze API Key", AppboyConfig.AndroidApiKey);
      AppboyConfig.AndroidEndpoint = EditorGUILayout.TextField("Braze SDK Endpoint", AppboyConfig.AndroidEndpoint);
      EditorGUILayout.LabelField("If you are on the default Braze SDK Endpoint, you can leave this blank.", EditorStyles.wordWrappedMiniLabel);
      AppboyConfig.AndroidSdkAuthenticationEnabled = EditorGUILayout.ToggleLeft("SDK Authentication Enabled", AppboyConfig.AndroidSdkAuthenticationEnabled);

      if (AppboyConfig.AndroidSdkAuthenticationEnabled) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidSdkAuthenticationFailureGameObjectName = EditorGUILayout.TextField("SDK Authentication Failure Game Object Name", AppboyConfig.AndroidSdkAuthenticationFailureGameObjectName);
        AppboyConfig.AndroidSdkAuthenticationFailureCallbackMethodName = EditorGUILayout.TextField("SDK Authentication Failure Callback Method Name", AppboyConfig.AndroidSdkAuthenticationFailureCallbackMethodName);
        EditorGUI.indentLevel--;
      }
       
      androidShowDeviceObjectWhitelistSettings = EditorGUILayout.Foldout(androidShowDeviceObjectWhitelistSettings, "Device Object Whitelist");
      if (androidShowDeviceObjectWhitelistSettings) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidDeviceObjectWhitelistEnabled = EditorGUILayout.ToggleLeft("Device Object Whitelist Enabled", AppboyConfig.AndroidDeviceObjectWhitelistEnabled);
        AppboyConfig.AndroidDeviceObjectWhitelist = EditorGUILayout.TextField("Device Object Whitelist", AppboyConfig.AndroidDeviceObjectWhitelist);

        GUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Space separated, capitalized DEVICE_KEY enum values.", EditorStyles.wordWrappedMiniLabel);
        if (GUILayout.Button("DEVICE_KEY enums", buttonGuiStyle)) {
          Application.OpenURL("https://appboy.github.io/appboy-android-sdk/javadocs/com/appboy/enums/DeviceKey.html");
        }     
        GUILayout.EndHorizontal();   
        EditorGUI.indentLevel--;
      }
    }

    private void AndroidBuildGUILocation() {
      AppboyConfig.AndroidLocationCollectionEnabled = EditorGUILayout.ToggleLeft("Location Collection Enabled", AppboyConfig.AndroidLocationCollectionEnabled);
      EditorGUILayout.LabelField(" Sets whether Braze should automatically collect location (if the user permits). If set to true, location data will be collected once at the start of each session. If not specified or set to false, all automatic location collection will be disabled.", EditorStyles.wordWrappedMiniLabel);

      AppboyConfig.AndroidGeofencesEnabled = EditorGUILayout.ToggleLeft("Geofences Enabled", AppboyConfig.AndroidGeofencesEnabled);
      EditorGUILayout.LabelField(" Gets whether the Braze Geofences feature is enabled. Note that if this field is not set, location collection being enabled/disabled will determine whether Braze Geofences are enabled.");

      AppboyConfig.AndroidAutomaticGeofenceRequestsEnabled = EditorGUILayout.ToggleLeft("Automatic Geofence Requests Enabled", AppboyConfig.AndroidAutomaticGeofenceRequestsEnabled);
      EditorGUILayout.LabelField(" Sets whether Braze Geofences are automatically requested by the Braze SDK. This defaults to true.");
    }

    private void AndroidBuildGUISessionHandling() {
      AppboyConfig.AndroidSessionTimeoutSeconds = EditorGUILayout.TextField("Session Timeout (seconds)", AppboyConfig.AndroidSessionTimeoutSeconds);
    }

    private void AndroidBuildGUIContentCards() {
      androidShowContentCardsUpdatedListener = EditorGUILayout.Foldout(androidShowContentCardsUpdatedListener, "Set Content Cards Updated Listener");
      if (androidShowContentCardsUpdatedListener) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidContentCardsUpdatedListenerGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.AndroidContentCardsUpdatedListenerGameObjectName);
        AppboyConfig.AndroidContentCardsUpdatedListenerCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.AndroidContentCardsUpdatedListenerCallbackMethodName);
        EditorGUI.indentLevel--;
      }

      AppboyConfig.AndroidContentCardsUnreadVisualIndicatorEnabled = EditorGUILayout.ToggleLeft("Unread Visual Indicator Enabled", AppboyConfig.AndroidContentCardsUnreadVisualIndicatorEnabled);
      EditorGUILayout.LabelField(" Used with the default ContentCardsFragment only.", EditorStyles.wordWrappedMiniLabel);
    }

    private void AndroidBuildGUIInAppMessages() {
      AppboyConfig.AndroidDisplayInAppMessagesAutomatically = EditorGUILayout.ToggleLeft(" Automatically Display In-App Messages", AppboyConfig.AndroidDisplayInAppMessagesAutomatically);
      AppboyConfig.AndroidSetInAppMessageManagerListenerAutomatically = EditorGUILayout.ToggleLeft(" Automatically Set In-App Message Manager Listener", AppboyConfig.AndroidSetInAppMessageManagerListenerAutomatically);
      androidShowInAppMessageListener = EditorGUILayout.Foldout(androidShowInAppMessageListener, "Set In App Message Listener");
      if (androidShowInAppMessageListener) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidInAppMessageListenerGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.AndroidInAppMessageListenerGameObjectName);
        AppboyConfig.AndroidInAppMessageListenerCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.AndroidInAppMessageListenerCallbackMethodName);
        EditorGUI.indentLevel--;
      }
      
      AppboyConfig.AndroidInitialInAppMessageOperation = EditorGUILayout.Popup("In App Message Manager Initial Display Operation", AppboyConfig.AndroidInitialInAppMessageOperation, ANDROID_IAM_OPERATIONS);
      AppboyConfig.AndroidTriggerActionMinimumTimeSeconds = EditorGUILayout.TextField("Trigger Action Minimum Time (seconds)", AppboyConfig.AndroidTriggerActionMinimumTimeSeconds);
    }

    private void AndroidBuildGUIPush() {
      // Firebase
      androidShowFirebasePushSettings = EditorGUILayout.Foldout(androidShowFirebasePushSettings, "Firebase Push");
      if (androidShowFirebasePushSettings) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidFirebaseCloudMessagingRegistrationEnabled = 
          EditorGUILayout.ToggleLeft(" Automatic Firebase Cloud Messaging Registration Enabled", AppboyConfig.AndroidFirebaseCloudMessagingRegistrationEnabled);
        AppboyConfig.AndroidFirebaseCloudMessagingSenderId = EditorGUILayout.TextField("Firebase Cloud Messaging Sender ID", AppboyConfig.AndroidFirebaseCloudMessagingSenderId);
        EditorGUI.indentLevel--;
      }

      // ADM
      androidShowADMPushSettings = EditorGUILayout.Foldout(androidShowADMPushSettings, "Amazon Device Messaging");
      if (androidShowADMPushSettings) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidAdmRegistrationEnabled = EditorGUILayout.ToggleLeft(" Automatic ADM Registration Enabled", AppboyConfig.AndroidAdmRegistrationEnabled);
        EditorGUI.indentLevel--;
      }

      // Configuration
      androidShowPushConfigurationSettings = EditorGUILayout.Foldout(androidShowPushConfigurationSettings, "Push Configuration");
      if (androidShowPushConfigurationSettings) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidHandlePushDeepLinksAutomatically = EditorGUILayout.ToggleLeft(" Handle Push Deeplinks Automatically", AppboyConfig.AndroidHandlePushDeepLinksAutomatically);
        AppboyConfig.AndroidPushNotificationHtmlRenderingEnabled = EditorGUILayout.ToggleLeft(" Push Notification HTML Rendering Enabled", AppboyConfig.AndroidPushNotificationHtmlRenderingEnabled);

        AppboyConfig.AndroidPushDefaultNotificationChannelName = EditorGUILayout.TextField(" Default Notification Channel Name", AppboyConfig.AndroidPushDefaultNotificationChannelName);
        AppboyConfig.AndroidPushDefaultNotificationChannelDescription = EditorGUILayout.TextField(" Default Notification Channel Description", AppboyConfig.AndroidPushDefaultNotificationChannelDescription);

        AppboyConfig.AndroidPushSmallNotificationIcon = EditorGUILayout.TextField(" Small Notification Icon Drawable", AppboyConfig.AndroidPushSmallNotificationIcon);
        AppboyConfig.AndroidPushLargeNotificationIcon = EditorGUILayout.TextField(" Large Notification Icon Drawable", AppboyConfig.AndroidPushLargeNotificationIcon);

        AppboyConfig.AndroidPushDefaultNotificationAccentColor = EditorGUILayout.TextField(" Default Notification Accent Color", AppboyConfig.AndroidPushDefaultNotificationAccentColor);
        EditorGUILayout.LabelField(" Enter a valid hex value, e.g. \"0xFF00FF00\"", EditorStyles.wordWrappedMiniLabel);

        AppboyConfig.AndroidPushNotificationDelayedSendingEnabled = EditorGUILayout.ToggleLeft(" Delay Sending Push Notification Intents", AppboyConfig.AndroidPushNotificationDelayedSendingEnabled);
        EditorGUILayout.LabelField(" Delay sending push notification data until the Unity native libraries have finished loading", EditorStyles.wordWrappedMiniLabel);

        EditorGUI.indentLevel--;
      }

      // Listeners
      androidShowPushReceivedListener = EditorGUILayout.Foldout(androidShowPushReceivedListener, "Set Push Received Listener");
      if (androidShowPushReceivedListener) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidPushReceivedGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.AndroidPushReceivedGameObjectName);
        AppboyConfig.AndroidPushReceivedCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.AndroidPushReceivedCallbackMethodName);
        EditorGUI.indentLevel--;
      }
      androidShowPushOpenedListener = EditorGUILayout.Foldout(androidShowPushOpenedListener, "Set Push Opened Listener");
      if (androidShowPushOpenedListener) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidPushOpenedGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.AndroidPushOpenedGameObjectName);
        AppboyConfig.AndroidPushOpenedCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.AndroidPushOpenedCallbackMethodName);
        EditorGUI.indentLevel--;
      }
      androidShowPushDeletedListener = EditorGUILayout.Foldout(androidShowPushDeletedListener, "Set Push Deleted Listener");
      if (androidShowPushDeletedListener) {
        EditorGUI.indentLevel++;
        AppboyConfig.AndroidPushDeletedGameObjectName = EditorGUILayout.TextField("Game Object Name", AppboyConfig.AndroidPushDeletedGameObjectName);
        AppboyConfig.AndroidPushDeletedCallbackMethodName = EditorGUILayout.TextField("Callback Method Name", AppboyConfig.AndroidPushDeletedCallbackMethodName);
        EditorGUI.indentLevel--;
      }
    }
  }
}
