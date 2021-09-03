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
    private const string AppboyAppDelegatePath = "Libraries/Plugins/iOS/AppboyAppDelegate.mm";
    private const string PlistSubpath = "/Info.plist";
    private const string MainTargetName = "Unity-iPhone";

    private const string ABKEndpointKey = "Endpoint";
    private const string ABKLogLevelKey = "LogLevel";
    private const string ABKUnityApiKey = "ApiKey";
    private const string ABKUnityAutomaticPushIntegrationKey = "IntegratesPush";
    private const string ABKUnityDisableAutomaticPushRegistrationKey = "DisableAutomaticPushRegistration";
    private const string ABKUnityDisableProvisionalAuthKey = "DisableProvisionalAuth";
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
    public static void OnPostprocessBuild(BuildTarget target, string path) {
      if (target == BuildTarget.iOS) {
        ModifyPlist(path + PlistSubpath);
        ModifyProject(path);
      }
    }

    private static void ModifyProject(string path) {
      var projectPath = PBXProject.GetPBXProjectPath(path);
      PBXProject project = new PBXProject();
      project.ReadFromString(File.ReadAllText(projectPath));

      if (!AppboyConfig.IOSAutomatesIntegration) {
        // Remove AppboyAppDelegate.mm from PBXProject
        Debug.Log("Removing AppboyAppDelegate.mm from " + AppboyAppDelegatePath);
        string appboyAppDelegateGuid = project.FindFileGuidByProjectPath(AppboyAppDelegatePath);
        project.RemoveFile(appboyAppDelegateGuid);
      } else {
        // Get project targets using Unity's default app target names
#if UNITY_2019_3_OR_NEWER
        string[] targets = {
          project.GetUnityMainTargetGuid(),
          project.TargetGuidByName(PBXProject.GetUnityTestTargetName())
        };
#else
        string[] targets = {
          project.TargetGuidByName(PBXProject.GetUnityTargetName()),
          project.TargetGuidByName(PBXProject.GetUnityTestTargetName())
        };
#endif

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

          // Note: Remove once Unity supports xcframeworks (SDK-1767).
          project.SetBuildProperty(target, "VALIDATE_WORKSPACE", "Yes");

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

        if (AppboyConfig.IOSIntegratesPush && !AppboyConfig.IOSDisableAutomaticPushCapability) {
          AddPushEntitlement(
            path,
            project,
            targets[0] // the main target
          );
        }

        // Force add UserNotifications.framework to UnityFramework target
        string unityFramework = project.GetUnityFrameworkTargetGuid();
        project.AddFrameworkToProject(unityFramework, "UserNotifications.framework", false);
      }

      File.WriteAllText(projectPath, project.WriteToString());
    }

    private static void AddPushEntitlement(string path, PBXProject project, string target) {
      var entitlements = new PlistDocument();

      string entitlementsFilename = MainTargetName + ".entitlements";
      string entitlementsRelativePath = MainTargetName + "/" + entitlementsFilename;
      string entitlementsPath = path + "/" + entitlementsRelativePath;

      if (File.Exists(entitlementsPath)) {
        entitlements.ReadFromFile(entitlementsPath);
      }

      if (entitlements.root["aps-environment"] != null) {
        return;
      } else {
        entitlements.root.SetString("aps-environment", "development");
      }

      project.AddFile(entitlementsRelativePath, entitlementsFilename);
      entitlements.WriteToFile(entitlementsPath);

      project.AddBuildProperty(target, "CODE_SIGN_ENTITLEMENTS", entitlementsRelativePath);
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

      // Migrate to Braze Unity dictionary if needed
      if (rootDict["Appboy"] != null) {
        rootDict["Braze"] = rootDict["Appboy"];
        rootDict["Appboy"] = null;
      }

      // Clear existing Braze Unity dictionary
      if (rootDict["Braze"] != null) {
        rootDict["Braze"]["Unity"] = null;
      }

      // Add Braze Unity keys to Plist
      if (AppboyConfig.IOSAutomatesIntegration) {
        // The Braze dictionary
        PlistElementDict brazeDict = (rootDict["Braze"] == null) ? rootDict.CreateDict("Braze") : rootDict["Braze"].AsDict();
        // The Braze Unity dictionary under the Braze dictionary
        PlistElementDict brazeUnityDict = brazeDict.CreateDict("Unity");

        // Add the iOS Endpoint to Plist
        if (string.IsNullOrEmpty(AppboyConfig.IOSEndpoint.Trim())) {
          brazeDict.values.Remove(ABKEndpointKey);
        } else {
          brazeDict.SetString(ABKEndpointKey, AppboyConfig.IOSEndpoint.Trim());
        }
        if (string.IsNullOrEmpty(AppboyConfig.IOSLogLevel.Trim())) {
          brazeDict.values.Remove(ABKLogLevelKey);
        } else {
          brazeDict.SetString(ABKLogLevelKey, AppboyConfig.IOSLogLevel.Trim());
        }

        // Add iOS automated integration build keys to Plist
        if (ValidateField(ABKUnityApiKey, AppboyConfig.IOSApiKey, "Appboy will not be initialized.")) {
          brazeUnityDict.SetString(ABKUnityApiKey, AppboyConfig.IOSApiKey.Trim());
        }
        brazeUnityDict.SetBoolean(ABKUnityAutomaticPushIntegrationKey, AppboyConfig.IOSIntegratesPush);
        brazeUnityDict.SetBoolean(ABKUnityDisableAutomaticPushRegistrationKey, AppboyConfig.IOSDisableAutomaticPushRegistration);
        if (AppboyConfig.IOSPushIsBackgroundEnabled) {
          PlistElementArray backgroundModes = (rootDict["UIBackgroundModes"] == null) ? rootDict.CreateArray("UIBackgroundModes") : rootDict["UIBackgroundModes"].AsArray();
          backgroundModes.AddString("remote-notification");
        }
        brazeUnityDict.SetBoolean(ABKUnityDisableProvisionalAuthKey, AppboyConfig.IOSDisableProvisionalAuth);

        // Set push listeners
        if (ValidateListenerFields(ABKUnityPushReceivedGameObjectKey, AppboyConfig.IOSPushReceivedGameObjectName,
          ABKUnityPushReceivedCallbackKey, AppboyConfig.IOSPushReceivedCallbackMethodName)) {
          brazeUnityDict.SetString(ABKUnityPushReceivedGameObjectKey, AppboyConfig.IOSPushReceivedGameObjectName.Trim());
          brazeUnityDict.SetString(ABKUnityPushReceivedCallbackKey, AppboyConfig.IOSPushReceivedCallbackMethodName.Trim());
        }

        if (ValidateListenerFields(ABKUnityPushOpenedGameObjectKey, AppboyConfig.IOSPushOpenedGameObjectName,
          ABKUnityPushOpenedCallbackKey, AppboyConfig.IOSPushOpenedCallbackMethodName)) {
          brazeUnityDict.SetString(ABKUnityPushOpenedGameObjectKey, AppboyConfig.IOSPushOpenedGameObjectName.Trim());
          brazeUnityDict.SetString(ABKUnityPushOpenedCallbackKey, AppboyConfig.IOSPushOpenedCallbackMethodName.Trim());
        }

        // Set in-app message listener
        if (ValidateListenerFields(ABKUnityInAppMessageGameObjectKey, AppboyConfig.IOSInAppMessageGameObjectName,
          ABKUnityInAppMessageCallbackKey, AppboyConfig.IOSInAppMessageCallbackMethodName)) {
          brazeUnityDict.SetString(ABKUnityInAppMessageGameObjectKey, AppboyConfig.IOSInAppMessageGameObjectName.Trim());
          brazeUnityDict.SetString(ABKUnityInAppMessageCallbackKey, AppboyConfig.IOSInAppMessageCallbackMethodName.Trim());
          brazeUnityDict.SetBoolean(ABKUnityHandleInAppMessageDisplayKey, AppboyConfig.IOSDisplayInAppMessages);
        }

        // Set feed listener
        if (ValidateListenerFields(ABKUnityFeedGameObjectKey, AppboyConfig.IOSFeedGameObjectName,
          ABKUnityFeedCallbackKey, AppboyConfig.IOSFeedCallbackMethodName)) {
          brazeUnityDict.SetString(ABKUnityFeedGameObjectKey, AppboyConfig.IOSFeedGameObjectName.Trim());
          brazeUnityDict.SetString(ABKUnityFeedCallbackKey, AppboyConfig.IOSFeedCallbackMethodName.Trim());
        }

        // Set content card listener
        if (ValidateListenerFields(ABKUnityContentCardsGameObjectKey, AppboyConfig.IOSContentCardsGameObjectName,
          ABKUnityContentCardsCallbackKey, AppboyConfig.IOSContentCardsCallbackMethodName)) {
          brazeUnityDict.SetString(ABKUnityContentCardsGameObjectKey, AppboyConfig.IOSContentCardsGameObjectName.Trim());
          brazeUnityDict.SetString(ABKUnityContentCardsCallbackKey, AppboyConfig.IOSContentCardsCallbackMethodName.Trim());
        }
      }

      // Write changes to XCode project and Info.plist
      File.WriteAllText(plistPath, plist.WriteToString());
    }

    private static void DisplayInvalidSettingsWarning(string key, string details) {
      EditorUtility.DisplayDialog("Invalid Braze Settings", "The " + Regex.Replace(key, @"\B[A-Z]", " $0") + " is blank. " + details + " Set this field in Braze > Braze Configuration.", "OK");
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
