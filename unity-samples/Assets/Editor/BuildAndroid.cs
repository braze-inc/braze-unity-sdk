using UnityEditor;

class BuildAndroid {
  static void PerformBuild () {
    string[] scenes = {
      "Assets/_Scenes/MiniGame.unity",
      "Assets/_Scenes/MainMenu.unity"
    };
    BuildPipeline.BuildPlayer (scenes, "Roll-A-Ball-Android.apk", BuildTarget.Android, BuildOptions.None);
  }
}
