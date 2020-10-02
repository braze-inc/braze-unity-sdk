using UnityEngine;
using System.Collections;
using System.IO;
using UnityEditor;

namespace Appboy.Editor {
  public static class Build {
    public static void ExportAllPackages() {
      // Create all the unity packages in one go
      ExportPackage_AllIosDeps();
      ExportPackage_NoIosDeps();
    }

    private static void ExportPackage_AllIosDeps() {
      Debug.Log("Running ExportPackage_AllIosDeps");

      string[] AssetPathNames = {
        "Assets/Plugins/Android/appboy.aar",
        "Assets/Plugins/Android/appboy-ui.aar",
        "Assets/Plugins/Android/appboy-unity.aar",
        "Assets/Plugins/Appboy",
        "Assets/Plugins/iOS"
      };
      AssetDatabase.ExportPackage(AssetPathNames, "unity-package/Appboy.unitypackage", ExportPackageOptions.Recurse);
    }

    private static void ExportPackage_NoIosDeps() {
      Debug.Log("Running ExportPackage_NoIosDeps");

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
  }
}