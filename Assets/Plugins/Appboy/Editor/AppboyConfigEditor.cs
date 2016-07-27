using System;
using UnityEditor;
using UnityEngine;

namespace Appboy.Editor {
  public class AppboyConfigEditor : EditorWindow {
    private AppboyConfig instance;
    private bool showPushOpenedListener = true;
    private bool showPushReceivedListener = true;
    private bool showInAppMessageListener = true;
    private bool showFeedListener = true;
    private Vector2 scrollPosition;
    
    [MenuItem("Appboy/Appboy Configuration")]
    static void Init() {
      AppboyConfigEditor editor = (AppboyConfigEditor)EditorWindow.GetWindow(typeof (AppboyConfigEditor));
      editor.Show();
    }

    void OnGUI() {
      EditorGUIUtility.labelWidth = 175;
      scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);
      IOSBuildGUI();
      EditorGUILayout.EndScrollView();
    }

    private void ApiKeyGUI() {
      EditorGUILayout.BeginVertical();
      AppboyConfig.ApiKey = EditorGUILayout.TextField("Appboy API Key", AppboyConfig.ApiKey);
      EditorGUILayout.EndVertical();
    }

    private void IOSBuildGUI() {
      AppboyConfig.IOSAutomatesIntegration = EditorGUILayout.ToggleLeft(" Automate Unity iOS Integration", AppboyConfig.IOSAutomatesIntegration, EditorStyles.boldLabel);
      EditorGUILayout.Separator();

      if (AppboyConfig.IOSAutomatesIntegration) {
        EditorGUI.indentLevel++;
        
        // API Key
        ApiKeyGUI();
        EditorGUILayout.Separator();

        // Push Notifications
        EditorGUILayout.BeginVertical();
        EditorGUILayout.LabelField("Push Notifications", EditorStyles.boldLabel);
        EditorGUI.indentLevel++;

        AppboyConfig.IOSIntegratesPush = EditorGUILayout.ToggleLeft(" Integrate Push With Appboy", AppboyConfig.IOSIntegratesPush);
        EditorGUILayout.LabelField("Registers users for push notifications, passes push tokens to Appboy and tracks push opens.", EditorStyles.wordWrappedMiniLabel);

        AppboyConfig.IOSDisableAutomaticPushRegistration = EditorGUILayout.ToggleLeft(" Disable Automatic Push Registration", AppboyConfig.IOSDisableAutomaticPushRegistration);
        if (AppboyConfig.IOSDisableAutomaticPushRegistration) {
          EditorGUILayout.LabelField("You will need to manually prompt users for push registration.", EditorStyles.miniBoldLabel);
        } else {
          EditorGUILayout.LabelField("Disables automatic user registration for push notifications upon app startup.", EditorStyles.wordWrappedMiniLabel);
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
            AppboyConfig.IOSDisplayInAppMessages = EditorGUILayout.ToggleLeft(" Appboy Displays In-App Messages", AppboyConfig.IOSDisplayInAppMessages);
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
        EditorGUILayout.EndVertical();      
      }
    }
  }
}