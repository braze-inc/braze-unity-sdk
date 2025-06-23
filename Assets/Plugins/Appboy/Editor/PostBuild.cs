#if UNITY_IOS
using System;
using System.IO;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.iOS.Xcode;
using UnityEditor.iOS.Xcode.Extensions;
#endif

namespace Appboy.Editor
{
#if UNITY_IOS
  public class PostBuild: IPostprocessBuildWithReport
#else
  public class PostBuild
#endif
  {
#if UNITY_IOS
    private const string AppboyAppDelegatePath = "Libraries/Plugins/iOS/AppboyAppDelegate.mm";
    private const string PlistSubpath = "/Info.plist";
    private const string MainTargetName = "Unity-iPhone";
    private const string AppleDeveloperTeamID = "5GLZKGNWQ3";
    private const string BrazeSampleAppBundleId = "com.appboy.unity.AppboySample";

    private const string BRZEndpointKey = "Endpoint";
    private const string BRZLogLevelKey = "LogLevel";
    private const string BRZUnitySdkAuthEnabledKey = "EnableSDKAuthentication";
    private const string BRZUnityApiKey = "ApiKey";
    private const string BRZUnityAutomaticPushIntegrationKey = "IntegratesPush";
    private const string BRZUnityDisableAutomaticPushRegistrationKey = "DisableAutomaticPushRegistration";
    private const string BRZUnityDisableProvisionalAuthKey = "DisableProvisionalAuth";
    private const string BRZUnityPushReceivedGameObjectKey = "PushReceivedGameObjectName";
    private const string BRZUnityPushReceivedCallbackKey = "PushReceivedCallbackMethodName";
    private const string BRZUnityPushOpenedGameObjectKey = "PushOpenedGameObjectName";
    private const string BRZUnityPushOpenedCallbackKey = "PushOpenedCallbackMethodName";
    private const string BRZUnityInAppMessageGameObjectKey = "InAppMessageGameObjectName";
    private const string BRZUnityInAppMessageCallbackKey = "InAppMessageCallbackMethodName";
    private const string BRZUnityInAppMessageInitialOperation = "InAppMessageInitialOperation";
    private const string BRZUnityFeedGameObjectKey = "FeedGameObjectName";
    private const string BRZUnityFeedCallbackKey = "FeedCallbackMethodName";
    private const string BRZUnityContentCardsGameObjectKey = "ContentCardsGameObjectName";
    private const string BRZUnityContentCardsCallbackKey = "ContentCardsCallbackMethodName";
    private const string BRZUnityHandleInAppMessageDisplayKey = "DisplayInAppMessages";
    private const string BRZUnitySdkAuthenticationFailureGameObjectKey = "SdkAuthFailureGameObjectName";
    private const string BRZUnitySdkAuthenticationFailureCallbackKey = "SdkAuthFailureCallbackMethodName";
    private const string BRZUnityFeatureFlagsGameObjectKey = "FeatureFlagsGameObjectName";
    private const string BRZUnityFeatureFlagsCallbackKey = "FeatureFlagsCallbackMethodName";

    public int callbackOrder 
    { 
      get { return 10000; } 
    }

    public void OnPostprocessBuild(BuildReport report)
    {
      if (report.summary.platform == BuildTarget.iOS) {
        ModifyPlist(report.summary.outputPath + PlistSubpath);
        ModifyProject(report.summary.outputPath);
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
        string mainTarget = project.GetUnityMainTargetGuid();

        // - Add Push entitlement
        if (AppboyConfig.IOSIntegratesPush && !AppboyConfig.IOSDisableAutomaticPushCapability) {
          AddPushEntitlement(
            path,
            project,
            mainTarget
          );
        }

        // - Use Braze's Apple Developer Team ID only for the sample app
        string releaseConfigGUID = project.BuildConfigByName(mainTarget, "Release");
        string bundleId = project.GetBuildPropertyForConfig(releaseConfigGUID, "PRODUCT_BUNDLE_IDENTIFIER");
        if (bundleId == BrazeSampleAppBundleId) {
          PlayerSettings.iOS.appleDeveloperTeamID = AppleDeveloperTeamID;
        }
        PlayerSettings.iOS.appleEnableAutomaticSigning = true;

        /****** Unity-iPhone (main target) ******/

        // - Add packages via SPM
        string brazeGUID = project.AddRemotePackageReferenceAtVersionUpToNextMinor("https://github.com/braze-inc/braze-swift-sdk-prebuilt-dynamic", "12.0.0");
        project.AddRemotePackageFrameworkToProject(mainTarget, "BrazeKit", brazeGUID, false);
        project.AddRemotePackageFrameworkToProject(mainTarget, "BrazeUI", brazeGUID, false);

        if (AppboyConfig.IOSImportDependencies) {
          // Third-party dependencies
          string SDWebImageGUID = project.AddRemotePackageReferenceAtVersionUpToNextMinor("https://github.com/SDWebImage/SDWebImage/", "5.19.7");
          project.AddRemotePackageFrameworkToProject(mainTarget, "SDWebImage", SDWebImageGUID, false);
        }

        // - Disabled to run on Xcode 14+
        project.SetBuildProperty(mainTarget, "ENABLE_BITCODE", "NO");

        /****** UnityFramework.framework ******/

        string unityFramework = project.GetUnityFrameworkTargetGuid();

        // - Add UserNotifications.framework
        project.AddFrameworkToProject(unityFramework, "UserNotifications.framework", false);

        // - Update main target's build settings
        project.SetBuildProperty(unityFramework, "CLANG_ENABLE_MODULES", "YES");
        project.SetBuildProperty(unityFramework, "ENABLE_BITCODE", "NO"); // Disabled to run on Xcode 14+
        project.AddBuildProperty(unityFramework, "OTHER_CPLUSPLUSFLAGS", "$(OTHER_CFLAGS)");
      }

      File.WriteAllText(projectPath, project.WriteToString());
    }

    /// Adds the Push entitlement to the host Unity iOS application
    private static void AddPushEntitlement(string path, PBXProject project, string target) {
      var entitlementsFilePath = AppboyConfig.IOSEntitlementsFilePath;
      if (string.IsNullOrEmpty(entitlementsFilePath)) {
        entitlementsFilePath = MainTargetName + ".entitlements";
      }
      var projectCapabilityManager = new ProjectCapabilityManager(PBXProject.GetPBXProjectPath(path), entitlementsFilePath, null, target);
      projectCapabilityManager.AddPushNotifications(true);
      projectCapabilityManager.WriteToFile();

      project.AddFile(entitlementsFilePath, Path.GetFileName(entitlementsFilePath));
      project.AddBuildProperty(target, "CODE_SIGN_ENTITLEMENTS", entitlementsFilePath);
    }

    /// Based on the properties set in `BrazeConfiguration` in the Unity UI, inserts relevant values
    /// into the Plist, to be read by the host Unity iOS application.
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

      // Add Braze Unity keys to Plist based on configuration in Unity UI
      if (AppboyConfig.IOSAutomatesIntegration) {
        // The Braze dictionary
        PlistElementDict brazeDict = (rootDict["Braze"] == null) ? rootDict.CreateDict("Braze") : rootDict["Braze"].AsDict();
        // The Braze["Unity"] dictionary
        PlistElementDict brazeUnityDict = brazeDict.CreateDict("Unity");

        // - Add the iOS Endpoint to Plist
        if (string.IsNullOrEmpty(AppboyConfig.IOSEndpoint.Trim())) {
          brazeDict.values.Remove(BRZEndpointKey);
        } else {
          brazeDict.SetString(BRZEndpointKey, AppboyConfig.IOSEndpoint.Trim());
        }
        // - Log level
        if (string.IsNullOrEmpty(AppboyConfig.IOSLogLevel.Trim())) {
          brazeDict.values.Remove(BRZLogLevelKey);
        } else {
          brazeDict.SetString(BRZLogLevelKey, AppboyConfig.IOSLogLevel.Trim());
        }
        brazeDict.SetBoolean(BRZUnitySdkAuthEnabledKey, AppboyConfig.IOSSdkAuthenticationEnabled);

        // - Add iOS automated integration build keys to Plist
        if (ValidateField(BRZUnityApiKey, AppboyConfig.IOSApiKey, "Appboy will not be initialized.")) {
          brazeUnityDict.SetString(BRZUnityApiKey, AppboyConfig.IOSApiKey.Trim());
        }
        brazeUnityDict.SetBoolean(BRZUnityAutomaticPushIntegrationKey, AppboyConfig.IOSIntegratesPush);
        brazeUnityDict.SetBoolean(BRZUnityDisableAutomaticPushRegistrationKey, AppboyConfig.IOSDisableAutomaticPushRegistration);
        if (AppboyConfig.IOSPushIsBackgroundEnabled) {
          PlistElementArray backgroundModes = (rootDict["UIBackgroundModes"] == null) ? rootDict.CreateArray("UIBackgroundModes") : rootDict["UIBackgroundModes"].AsArray();
          backgroundModes.AddString("remote-notification");
        }
        brazeUnityDict.SetBoolean(BRZUnityDisableProvisionalAuthKey, AppboyConfig.IOSDisableProvisionalAuth);

        // - Set push listeners
        if (ValidateListenerFields(BRZUnityPushReceivedGameObjectKey, AppboyConfig.IOSPushReceivedGameObjectName,
            BRZUnityPushReceivedCallbackKey, AppboyConfig.IOSPushReceivedCallbackMethodName)) {
          brazeUnityDict.SetString(BRZUnityPushReceivedGameObjectKey, AppboyConfig.IOSPushReceivedGameObjectName.Trim());
          brazeUnityDict.SetString(BRZUnityPushReceivedCallbackKey, AppboyConfig.IOSPushReceivedCallbackMethodName.Trim());
        }

        if (ValidateListenerFields(BRZUnityPushOpenedGameObjectKey, AppboyConfig.IOSPushOpenedGameObjectName,
            BRZUnityPushOpenedCallbackKey, AppboyConfig.IOSPushOpenedCallbackMethodName)) {
          brazeUnityDict.SetString(BRZUnityPushOpenedGameObjectKey, AppboyConfig.IOSPushOpenedGameObjectName.Trim());
          brazeUnityDict.SetString(BRZUnityPushOpenedCallbackKey, AppboyConfig.IOSPushOpenedCallbackMethodName.Trim());
        }

        // - Set in-app message listener
        if (ValidateListenerFields(BRZUnityInAppMessageGameObjectKey, AppboyConfig.IOSInAppMessageGameObjectName,
            BRZUnityInAppMessageCallbackKey, AppboyConfig.IOSInAppMessageCallbackMethodName)) {
          brazeUnityDict.SetString(BRZUnityInAppMessageGameObjectKey, AppboyConfig.IOSInAppMessageGameObjectName.Trim());
          brazeUnityDict.SetString(BRZUnityInAppMessageCallbackKey, AppboyConfig.IOSInAppMessageCallbackMethodName.Trim());
          brazeUnityDict.SetBoolean(BRZUnityHandleInAppMessageDisplayKey, AppboyConfig.IOSDisplayInAppMessages);
        }

        // - Set in-app message initial operation
        brazeUnityDict.SetInteger(BRZUnityInAppMessageInitialOperation, AppboyConfig.IOSInitialInAppMessageOperation);

        // - Set feed listener
        if (ValidateListenerFields(BRZUnityFeedGameObjectKey, AppboyConfig.IOSFeedGameObjectName,
            BRZUnityFeedCallbackKey, AppboyConfig.IOSFeedCallbackMethodName)) {
          brazeUnityDict.SetString(BRZUnityFeedGameObjectKey, AppboyConfig.IOSFeedGameObjectName.Trim());
          brazeUnityDict.SetString(BRZUnityFeedCallbackKey, AppboyConfig.IOSFeedCallbackMethodName.Trim());
        }

        // - Set content card listener
        if (ValidateListenerFields(BRZUnityContentCardsGameObjectKey, AppboyConfig.IOSContentCardsGameObjectName,
            BRZUnityContentCardsCallbackKey, AppboyConfig.IOSContentCardsCallbackMethodName)) {
          brazeUnityDict.SetString(BRZUnityContentCardsGameObjectKey, AppboyConfig.IOSContentCardsGameObjectName.Trim());
          brazeUnityDict.SetString(BRZUnityContentCardsCallbackKey, AppboyConfig.IOSContentCardsCallbackMethodName.Trim());
        }

        // - Set SDK Authentication Failure listener
        if (ValidateListenerFields(BRZUnitySdkAuthenticationFailureGameObjectKey, AppboyConfig.IOSSdkAuthenticationFailureGameObjectName,
            BRZUnitySdkAuthenticationFailureCallbackKey, AppboyConfig.IOSSdkAuthenticationFailureCallbackMethodName)) {
          brazeUnityDict.SetString(BRZUnitySdkAuthenticationFailureGameObjectKey, AppboyConfig.IOSSdkAuthenticationFailureGameObjectName.Trim());
          brazeUnityDict.SetString(BRZUnitySdkAuthenticationFailureCallbackKey, AppboyConfig.IOSSdkAuthenticationFailureCallbackMethodName.Trim());
        }

        // - Set Feature Flags Listener
        if (ValidateListenerFields(BRZUnityFeatureFlagsGameObjectKey, AppboyConfig.FeatureFlagsGameObjectName,
            BRZUnityFeatureFlagsCallbackKey, AppboyConfig.FeatureFlagsCallbackMethodName)) {
          brazeUnityDict.SetString(BRZUnityFeatureFlagsGameObjectKey, AppboyConfig.FeatureFlagsGameObjectName.Trim());
          brazeUnityDict.SetString(BRZUnityFeatureFlagsCallbackKey, AppboyConfig.FeatureFlagsCallbackMethodName.Trim());
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
