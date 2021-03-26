using UnityEngine;
using System.Collections;
using UnityEditor;
using System;

public class AppboySwitchPlatform : MonoBehaviour {

  static void SwitchToAndroid () {
    EditorUserBuildSettings.SwitchActiveBuildTarget (BuildTargetGroup.Android, BuildTarget.Android);
  }

  static void SwitchToIos () {
    EditorUserBuildSettings.SwitchActiveBuildTarget (BuildTargetGroup.iOS, BuildTarget.iOS);
  }
}
