using UnityEngine;
using System.Collections;
using System.IO;
using UnityEditor;

namespace Appboy.Editor {
  public static class Build {
    public static void ExportAllPackages() {
      // Create all the unity packages in one go
      ExportPackage_AllIosDeps();
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
  }
}
