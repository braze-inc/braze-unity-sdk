#if UNITY_ANDROID
using System;
using System.IO;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEditor.Android;
using UnityEngine;

// Moves config into a special xml file in the resources
namespace Appboy.Editor {
  class AndroidPreBuildProcessor : IPostGenerateGradleAndroidProject {
    private const string BuildResourcesDirectorySubpath = "/src/main/res/values/";
    private const string GeneratedXmlFilename = "appboy-generated.xml";

    public int callbackOrder { get { return 0; } }

    public void OnPostGenerateGradleAndroidProject(string path) {
      Debug.Log("Appboy.Editor.AndroidPreBuildProcessor.OnPostGenerateGradleAndroidProject at path " + path);

      string configFileParentDirectory = path + BuildResourcesDirectorySubpath;
      System.IO.Directory.CreateDirectory(configFileParentDirectory);
      string configFilePath = configFileParentDirectory + GeneratedXmlFilename;
      Debug.Log("configFilePath: " + configFilePath);
      if (AppboyConfig.AndroidAutomatesIntegration) {
        Debug.Log("Generating Braze Android config file.");
        File.WriteAllText(configFilePath, GenerateConfigFile());
      } else {
        Debug.Log("Braze Android integration automation disabled. Deleting auto generated config file.");
        File.Delete(configFilePath);
      }
    }

    // Generates the `appboy.xml` file contents
    private static string GenerateConfigFile() {
      string cfg = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<resources>";

      // Connection Info
      cfg = AddStringKey(cfg, "com_appboy_api_key", AppboyConfig.AndroidApiKey);
      cfg = AddStringKey(cfg, "com_appboy_custom_endpoint", AppboyConfig.AndroidEndpoint);
      cfg = AddBooleanKey(cfg, "com_appboy_device_object_whitelisting_enabled", AppboyConfig.AndroidDeviceObjectWhitelistEnabled);
      if (AppboyConfig.AndroidDeviceObjectWhitelistEnabled) {
        cfg = AddStringSetKey(cfg, "com_appboy_device_object_whitelist", AppboyConfig.AndroidDeviceObjectWhitelist);
      }
      
      // Push notifications
      cfg = AddBooleanKey(cfg, "com_appboy_firebase_cloud_messaging_registration_enabled", AppboyConfig.AndroidFirebaseCloudMessagingRegistrationEnabled);
      cfg = AddStringKey(cfg, "com_appboy_firebase_cloud_messaging_sender_id", AppboyConfig.AndroidFirebaseCloudMessagingSenderId);
      cfg = AddBooleanKey(cfg, "com_appboy_handle_push_deep_links_automatically", AppboyConfig.AndroidHandlePushDeepLinksAutomatically);
      cfg = AddBooleanKey(cfg, "com_appboy_push_adm_messaging_registration_enabled", AppboyConfig.AndroidAdmRegistrationEnabled);
      cfg = AddStringKey(cfg, "com_appboy_push_received_game_object_name", AppboyConfig.AndroidPushReceivedGameObjectName);
      cfg = AddStringKey(cfg, "com_appboy_push_received_callback_method_name", AppboyConfig.AndroidPushReceivedCallbackMethodName);
      cfg = AddStringKey(cfg, "com_appboy_push_opened_game_object_name", AppboyConfig.AndroidPushOpenedGameObjectName);
      cfg = AddStringKey(cfg, "com_appboy_push_opened_callback_method_name", AppboyConfig.AndroidPushOpenedCallbackMethodName);
      cfg = AddStringKey(cfg, "com_appboy_push_deleted_game_object_name", AppboyConfig.AndroidPushDeletedGameObjectName);
      cfg = AddStringKey(cfg, "com_appboy_push_deleted_callback_method_name", AppboyConfig.AndroidPushDeletedCallbackMethodName);
      cfg = AddBooleanKey(cfg, "com_appboy_push_notification_html_rendering_enabled", AppboyConfig.AndroidPushNotificationHtmlRenderingEnabled);
      cfg = AddHexColorIntegerKey(cfg, "com_appboy_default_notification_accent_color", AppboyConfig.AndroidPushDefaultNotificationAccentColor);
      cfg = AddStringKey(cfg, "com_appboy_default_notification_channel_name", AppboyConfig.AndroidPushDefaultNotificationChannelName);
      cfg = AddStringKey(cfg, "com_appboy_default_notification_channel_description", AppboyConfig.AndroidPushDefaultNotificationChannelDescription);
      cfg = AddStringKey(cfg, "com_appboy_push_small_notification_icon", AppboyConfig.AndroidPushSmallNotificationIcon);
      cfg = AddStringKey(cfg, "com_appboy_push_large_notification_icon", AppboyConfig.AndroidPushLargeNotificationIcon);

      // In App Messages
      cfg = AddStringKey(cfg, "com_appboy_inapp_listener_game_object_name", AppboyConfig.AndroidInAppMessageListenerGameObjectName);
      cfg = AddStringKey(cfg, "com_appboy_inapp_listener_callback_method_name", AppboyConfig.AndroidInAppMessageListenerCallbackMethodName);
      cfg = AddIntegerKey(cfg, "com_appboy_trigger_action_minimum_time_interval_seconds", AppboyConfig.AndroidTriggerActionMinimumTimeSeconds);

      // Content Cards
      cfg = AddStringKey(cfg, "com_appboy_content_cards_updated_listener_game_object_name", AppboyConfig.AndroidContentCardsUpdatedListenerGameObjectName);
      cfg = AddStringKey(cfg, "com_appboy_content_cards_updated_listener_callback_method_name", AppboyConfig.AndroidContentCardsUpdatedListenerCallbackMethodName);
      cfg = AddBooleanKey(cfg, "com_appboy_content_cards_unread_visual_indicator_enabled", AppboyConfig.AndroidContentCardsUnreadVisualIndicatorEnabled);

      // Session Handling
      cfg = AddIntegerKey(cfg, "com_appboy_session_timeout", AppboyConfig.AndroidSessionTimeoutSeconds);

      // Location
      cfg = AddBooleanKey(cfg, "com_appboy_enable_location_collection", AppboyConfig.AndroidLocationCollectionEnabled);
      cfg = AddBooleanKey(cfg, "com_appboy_geofences_enabled", AppboyConfig.AndroidGeofencesEnabled);
      cfg = AddBooleanKey(cfg, "com_appboy_automatic_geofence_requests_enabled", AppboyConfig.AndroidAutomaticGeofenceRequestsEnabled);

      // Debugging
      cfg = AddIntegerKey(cfg, "com_appboy_logger_initial_log_level", AppboyConfig.AndroidLogLevel);

      // SDK Flavor config. Not overridable
      cfg = AddStringKey(cfg, "com_appboy_sdk_flavor", "UNITY");
      cfg += "\n</resources>\n";
      return cfg;
    }

    // Assumes that 'value' is a set of values delimited on the space character
    private static string AddStringSetKey(string buffer, string key, string value) {
      if (!string.IsNullOrEmpty(value.Trim())) {
        string[] parts = value.Split(' ');
        buffer += "\n  <string-array translatable=\"false\" name=\"" + key + "\">";
        foreach (var part in parts) {
          buffer += "\n    <item>" + part + "</item>";
        }
        buffer += "\n  </string-array>";
      }
      return buffer;
    }

    private static string AddStringKey(string buffer, string key, string value) {
      if (!string.IsNullOrEmpty(value.Trim())) {
        buffer += "\n  <string translatable=\"false\" name=\"" + key + "\">" + value + "</string>";
      }
      return buffer;
    }

    private static string AddBooleanKey(string buffer, string key, bool value) {
      buffer += "\n  <bool name=\"" + key + "\">" + value.ToString().ToLower() + "</bool>";
      return buffer;
    }

    private static string AddIntegerKey(string buffer, string key, string value) {
      if (!string.IsNullOrEmpty(value.Trim())) {
        return AddIntegerKey(buffer, key, Int32.Parse(value));
      } else {
        return buffer;
      }
    }

    private static string AddIntegerKey(string buffer, string key, int value) {
      buffer += "\n  <integer name=\"" + key + "\">" + value.ToString() + "</integer>";
      return buffer;
    }

    // A color int, but in hex "0xFF113377" format
    private static string AddHexColorIntegerKey(string buffer, string key, string value) {
      if (!string.IsNullOrEmpty(value.Trim())) {
        buffer += "\n  <integer name=\"" + key + "\">" + value + "</integer>";
      }
      return buffer;
    }
  }
}
#endif