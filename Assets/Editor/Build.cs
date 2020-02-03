using UnityEngine;
using System.Collections;
using System.IO;
using UnityEditor;

namespace Appboy.Editor {
  public static class Build {
    public static void ExportAllPackages() {
      // Create all the unity packages in one go
      ExportPackage_NonJetified_AllIosDeps();
      ExportPackage_NonJetified_NoIosDeps();
      ExportPackage_Jetified_AllIosDeps();
      ExportPackage_Jetified_NoIosDeps();
    }

    private static void ExportPackage_NonJetified_AllIosDeps() {
      Debug.Log("Running ExportPackage_NonJetified_AllIosDeps");

      string[] AssetPathNames = {
        "Assets/Plugins/Android/appboy.aar",
        "Assets/Plugins/Android/appboy-ui.aar",
        "Assets/Plugins/Android/appboy-unity.aar",
        "Assets/Plugins/Appboy",
        "Assets/Plugins/iOS"
      };
      AssetDatabase.ExportPackage(AssetPathNames, "unity-package/Appboy.unitypackage", ExportPackageOptions.Recurse);
    }

    private static void ExportPackage_NonJetified_NoIosDeps() {
      Debug.Log("Running ExportPackage_NonJetified_NoIosDeps");

      string[] AssetPathNames = {
        "Assets/Plugins/Android/appboy.aar",
        "Assets/Plugins/Android/appboy-ui.aar",
        "Assets/Plugins/Android/appboy-unity.aar",
        "Assets/Plugins/Appboy",
        "Assets/Plugins/iOS/AppboyAppDelegate.mm",
        "Assets/Plugins/iOS/AppboyBinding.m",
        "Assets/Plugins/iOS/AppboyUnityManager.h",
        "Assets/Plugins/iOS/AppboyUnityManager.mm",
        "Assets/Plugins/iOS/Appboy_iOS_SDK.framework"
      };
      AssetDatabase.ExportPackage(AssetPathNames, "unity-package/Appboy-nodeps.unitypackage", ExportPackageOptions.Recurse);
    }

    private static void ExportPackage_Jetified_AllIosDeps() {
      Debug.Log("Running ExportPackage_Jetified_AllIosDeps");

      string[] AssetPathNames = {
        "Assets/Plugins/Android/appboy-jetified.aar",
        "Assets/Plugins/Android/appboy-ui-jetified.aar",
        "Assets/Plugins/Android/appboy-unity-jetified.aar",
        "Assets/Plugins/Appboy",
        "Assets/Plugins/iOS"
      };
      AssetDatabase.ExportPackage(AssetPathNames, "unity-package/Appboy-jetified.unitypackage", ExportPackageOptions.Recurse);
    }

    private static void ExportPackage_Jetified_NoIosDeps() {
      Debug.Log("Running ExportPackage_Jetified_NoIosDeps");

      string[] AssetPathNames = {
        "Assets/Plugins/Android/appboy-jetified.aar",
        "Assets/Plugins/Android/appboy-ui-jetified.aar",
        "Assets/Plugins/Android/appboy-unity-jetified.aar",
        "Assets/Plugins/Appboy",
        "Assets/Plugins/iOS/AppboyAppDelegate.mm",
        "Assets/Plugins/iOS/AppboyBinding.m",
        "Assets/Plugins/iOS/AppboyUnityManager.h",
        "Assets/Plugins/iOS/AppboyUnityManager.mm",
        "Assets/Plugins/iOS/Appboy_iOS_SDK.framework"
      };
      AssetDatabase.ExportPackage(AssetPathNames, "unity-package/Appboy-jetified-nodeps.unitypackage", ExportPackageOptions.Recurse);
    }
  }
}