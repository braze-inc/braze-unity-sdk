#if UNITY_IOS
using System;
using System.IO;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using UnityEditor.iOS.Xcode.Extensions;
#endif

namespace Appboy.Editor {
  public class PostBuild {
#if UNITY_IOS
    private const string ProjectSubpath = "/Unity-iPhone.xcodeproj/project.pbxproj";
    private const string AppboyAppDelegatePath = "Libraries/Plugins/iOS/AppboyAppDelegate.mm";
    private const string PlistSubpath = "/Info.plist";

    private const string ABKEndpointKey = "Endpoint";
    private const string ABKLogLevelKey = "LogLevel";
    private const string ABKUnityApiKey = "ApiKey";
    private const string ABKUnityAutomaticPushIntegrationKey = "IntegratesPush";
    private const string ABKUnityDisableAutomaticPushRegistrationKey = "DisableAutomaticPushRegistration";
    private const string ABKUnitySetPushListenerKey = "SetPushListener";
    private const string ABKUnityPushReceivedGameObjectKey = "PushReceivedGameObjectName";
    private const string ABKUnityPushReceivedCallbackKey = "PushReceivedCallbackMethodName";
    private const string ABKUnityPushOpenedGameObjectKey = "PushOpenedGameObjectName";
    private const string ABKUnityPushOpenedCallbackKey = "PushOpenedCallbackMethodName";
    private const string ABKUnityInAppMessageGameObjectKey = "InAppMessageGameObjectName";
    private const string ABKUnityInAppMessageCallbackKey = "InAppMessageCallbackMethodName";
    private const string ABKUnityFeedGameObjectKey = "FeedGameObjectName";
    private const string ABKUnityFeedCallbackKey = "FeedCallbackMethodName";
    private const string ABKUnityContentCardsGameObjectKey = "ContentCardsGameObjectName";
    private const string ABKUnityContentCardsCallbackKey = "ContentCardsCallbackMethodName";
    private const string ABKUnityHandleInAppMessageDisplayKey = "DisplayInAppMessages";

    [PostProcessBuildAttribute(1)]
    public static void OnPostprocessBuild(BuildTarget target, string buildPath) {
      if (target == BuildTarget.iOS) {
        ModifyProject(buildPath + ProjectSubpath);
        ModifyPlist(buildPath + PlistSubpath);
      }
    }

    private static void ModifyProject(string projectPath) {
      // Create PBXProject
      PBXProject project = new PBXProject();
      project.ReadFromString(File.ReadAllText(projectPath));

      if (!AppboyConfig.IOSAutomatesIntegration) {
        // Remove AppboyAppDelegate.mm from PBXProject
        Debug.Log("Removing AppboyAppDelegate.mm from " + AppboyAppDelegatePath);
        string appboyAppDelegateGuid = project.FindFileGuidByProjectPath(AppboyAppDelegatePath);
        project.RemoveFile(appboyAppDelegateGuid);
      } else {
        // Get project targets using Unity's default app target names
        string[] targets = {
          project.TargetGuidByName(PBXProject.GetUnityTargetName()),
          project.TargetGuidByName(PBXProject.GetUnityTestTargetName())
        };

        string[] requiredFrameworks = {
          "SystemConfiguration.framework",
          "QuartzCore.framework",
          "libz.tbd",
          "CoreImage.framework",
          "CoreText.framework",
          "WebKit.framework"
        };

        string[] optionalFrameworks = {
          "CoreTelephony.framework",
          "Social.framework",
          "Accounts.framework",
          "AdSupport.framework",
          "StoreKit.framework",
          "CoreLocation.framework", // optional for location tracking
          "ImageIO.framework", // required by SDWebImage
          "MobileCoreServices.framework", // required by FLAnimatedImage
          "CoreGraphics.framework" // required by FLAnimatedImage
        };

        foreach (string target in targets) {
          // Modify build properties
          project.AddBuildProperty(target, "OTHER_LDFLAGS", "-ObjC");
          project.AddBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "./Frameworks/Plugins/iOS");
          project.AddBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "./Libraries/Plugins/iOS");
          project.AddBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "./Libraries");
          project.SetBuildProperty(target, "GCC_ENABLE_OBJC_EXCEPTIONS", "Yes");

          // Add required frameworks
          // Note: Unity's documentation for PBXProject.AddFrameworkToProject says that the boolean parameter
          // should be true if required and false if optional, but actual behavior appears to be the exact opposite.
          foreach (string framework in requiredFrameworks) {
            project.AddFrameworkToProject(target, framework, false);
          }

          foreach (string framework in optionalFrameworks) {
            project.AddFrameworkToProject(target, framework, true);
          }

          AddFileToEmbedFrameworks(project, target, Application.dataPath + "/Plugins/iOS/SDWebImage.framework", "Frameworks/Plugins/iOS/SDWebImage.framework");
          AddFileToEmbedFrameworks(project, target, Application.dataPath + "/Plugins/iOS/Appboy_iOS_SDK.framework", "Frameworks/Plugins/iOS/Appboy_iOS_SDK.framework");

          project.AddBuildProperty(target, "LD_RUNPATH_SEARCH_PATHS", "@executable_path/Frameworks");
        }
      }

      // Write changes to XCode project
      File.WriteAllText(projectPath, project.WriteToString());
    }

    private static void AddFileToEmbedFrameworks(PBXProject project, string target, string unityPath, string xcodePath) {
      string frameworkPath = project.AddFile(unityPath, xcodePath, PBXSourceTree.Source);
      project.AddFileToBuild(target, frameworkPath);
      project.AddFileToEmbedFrameworks(target, frameworkPath);
    }

    private static void ModifyPlist(string plistPath) {
      // Create PlistDocument
      PlistDocument plist = new PlistDocument();
      plist.ReadFromString(File.ReadAllText(plistPath));
      PlistElementDict rootDict = plist.root;

      // Clear existing Appboy Unity dictionary
      if (rootDict["Appboy"] != null) {
        rootDict["Appboy"]["Unity"] = null;
      }

      // Add Appboy Unity keys to Plist
      if (AppboyConfig.IOSAutomatesIntegration) {
        // The Appboy dictionary
        PlistElementDict appboyDict = (rootDict["Appboy"] == null) ? rootDict.CreateDict("Appboy") : rootDict["Appboy"].AsDict();
        // The Appboy Unity dictionary under the Appboy dictionary
        PlistElementDict appboyUnityDict = appboyDict.CreateDict("Unity");

        // Add the iOS Endpoint to Plist
        if (string.IsNullOrEmpty(AppboyConfig.IOSEndpoint.Trim())) {
          appboyDict.values.Remove(ABKEndpointKey);
        } else {
          appboyDict.SetString(ABKEndpointKey, AppboyConfig.IOSEndpoint.Trim());
        }
        if (string.IsNullOrEmpty(AppboyConfig.IOSLogLevel.Trim())) {
          appboyDict.values.Remove(ABKLogLevelKey);
        } else {
          appboyDict.SetString(ABKLogLevelKey, AppboyConfig.IOSLogLevel.Trim());
        }

        // Add iOS automated integration build keys to Plist
        if (ValidateField(ABKUnityApiKey, AppboyConfig.IOSApiKey, "Appboy will not be initialized.")) {
          appboyUnityDict.SetString(ABKUnityApiKey, AppboyConfig.IOSApiKey.Trim());
        }
        appboyUnityDict.SetBoolean(ABKUnityAutomaticPushIntegrationKey, AppboyConfig.IOSIntegratesPush);
        appboyUnityDict.SetBoolean(ABKUnityDisableAutomaticPushRegistrationKey, AppboyConfig.IOSDisableAutomaticPushRegistration);
        if (AppboyConfig.IOSPushIsBackgroundEnabled) {
          PlistElementArray backgroundModes = (rootDict["UIBackgroundModes"] == null) ? rootDict.CreateArray("UIBackgroundModes") : rootDict["UIBackgroundModes"].AsArray();
          backgroundModes.AddString("remote-notification");
        }

        // Set push listeners
        if (ValidateListenerFields(ABKUnityPushReceivedGameObjectKey, AppboyConfig.IOSPushReceivedGameObjectName,
          ABKUnityPushReceivedCallbackKey, AppboyConfig.IOSPushReceivedCallbackMethodName)) {
          appboyUnityDict.SetString(ABKUnityPushReceivedGameObjectKey, AppboyConfig.IOSPushReceivedGameObjectName.Trim());
          appboyUnityDict.SetString(ABKUnityPushReceivedCallbackKey, AppboyConfig.IOSPushReceivedCallbackMethodName.Trim());
        }

        if (ValidateListenerFields(ABKUnityPushOpenedGameObjectKey, AppboyConfig.IOSPushOpenedGameObjectName,
          ABKUnityPushOpenedCallbackKey, AppboyConfig.IOSPushOpenedCallbackMethodName)) {
          appboyUnityDict.SetString(ABKUnityPushOpenedGameObjectKey, AppboyConfig.IOSPushOpenedGameObjectName.Trim());
          appboyUnityDict.SetString(ABKUnityPushOpenedCallbackKey, AppboyConfig.IOSPushOpenedCallbackMethodName.Trim());
        }

        // Set in-app message listener
        if (ValidateListenerFields(ABKUnityInAppMessageGameObjectKey, AppboyConfig.IOSInAppMessageGameObjectName,
          ABKUnityInAppMessageCallbackKey, AppboyConfig.IOSInAppMessageCallbackMethodName)) {
          appboyUnityDict.SetString(ABKUnityInAppMessageGameObjectKey, AppboyConfig.IOSInAppMessageGameObjectName.Trim());
          appboyUnityDict.SetString(ABKUnityInAppMessageCallbackKey, AppboyConfig.IOSInAppMessageCallbackMethodName.Trim());
          appboyUnityDict.SetBoolean(ABKUnityHandleInAppMessageDisplayKey, AppboyConfig.IOSDisplayInAppMessages);
        }

        // Set feed listener
        if (ValidateListenerFields(ABKUnityFeedGameObjectKey, AppboyConfig.IOSFeedGameObjectName,
          ABKUnityFeedCallbackKey, AppboyConfig.IOSFeedCallbackMethodName)) {
          appboyUnityDict.SetString(ABKUnityFeedGameObjectKey, AppboyConfig.IOSFeedGameObjectName.Trim());
          appboyUnityDict.SetString(ABKUnityFeedCallbackKey, AppboyConfig.IOSFeedCallbackMethodName.Trim());
        }

        // Set content card listener
        if (ValidateListenerFields(ABKUnityContentCardsGameObjectKey, AppboyConfig.IOSContentCardsGameObjectName,
          ABKUnityContentCardsCallbackKey, AppboyConfig.IOSContentCardsCallbackMethodName)) {
          appboyUnityDict.SetString(ABKUnityContentCardsGameObjectKey, AppboyConfig.IOSContentCardsGameObjectName.Trim());
          appboyUnityDict.SetString(ABKUnityContentCardsCallbackKey, AppboyConfig.IOSContentCardsCallbackMethodName.Trim());
        }
      }

      // Write changes to XCode project and Info.plist
      File.WriteAllText(plistPath, plist.WriteToString());
    }

    private static void DisplayInvalidSettingsWarning(string key, string details) {
      EditorUtility.DisplayDialog("Invalid Appboy Settings", "The " + Regex.Replace(key, @"\B[A-Z]", " $0") + " is blank. " + details + " Set this field in Braze > Braze Configuration.", "OK");
    }

    private static bool ValidateField(string key, string value, string errorDetails) {
      if (String.IsNullOrEmpty(value.Trim())) {
        DisplayInvalidSettingsWarning(key, errorDetails);
        return false;
      }
      return true;
    }

    private static bool ValidateListenerFields(string key1, string value1, string key2, string value2) {
      bool value1isValid = !String.IsNullOrEmpty(value1.Trim());
      bool value2isValid = !String.IsNullOrEmpty(value2.Trim());
      string invalidKey;
      if (value1isValid && value2isValid) {
        return true;
      } else if (value1isValid || value2isValid) {
        // Display invalid listener field alert
        invalidKey = value1isValid ? key2 : key1;
        DisplayInvalidSettingsWarning(invalidKey, "Listener will not be set.");
      }
      return false;
    }
#endif
  }
}
