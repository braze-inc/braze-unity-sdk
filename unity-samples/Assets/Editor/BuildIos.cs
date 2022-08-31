using UnityEditor;

class BuildIos {
  static void PerformBuild () {
    string[] scenes = {
      "Assets/_Scenes/MiniGame.unity",
      "Assets/_Scenes/MainMenu.unity"
    };
    BuildPipeline.BuildPlayer (scenes, "iOS/Roll-A-Ball-Ios", BuildTarget.iOS, BuildOptions.None);
  }
}
