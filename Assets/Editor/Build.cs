using UnityEngine;
using System.Collections;
using System.IO;
using UnityEditor;

namespace Appboy.Editor {
  public static class Build {
    private static string[] AssetPathNames = {
      "Assets/Plugins/Android",
      "Assets/Plugins/Appboy",
      "Assets/Plugins/iOS"
    };

    public static void ExportPackage() {
      Debug.Log("Exporting Appboy Unity Package...");
      System.IO.Directory.CreateDirectory("unity-package");
      AssetDatabase.ExportPackage(AssetPathNames, "unity-package/Appboy.unitypackage", ExportPackageOptions.Recurse);
    }

    public static void ExportPackageWithoutDependencies() {
      Debug.Log("Exporting Appboy Unity Package without dependencies...");
      System.IO.Directory.CreateDirectory("unity-package");
      AssetDatabase.ExportPackage(AssetPathNames, "unity-package/Appboy-nodeps.unitypackage", ExportPackageOptions.Recurse);
    }
  }
}