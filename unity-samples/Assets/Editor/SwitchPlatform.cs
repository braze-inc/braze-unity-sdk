using UnityEngine;
using System.Collections;
using UnityEditor;
using System;

public class AppboySwitchPlatform : MonoBehaviour {

  static void SwitchToAndroid () {
    EditorUserBuildSettings.SwitchActiveBuildTarget (BuildTarget.Android);
  }

  static void SwitchToIos () {
    EditorUserBuildSettings.SwitchActiveBuildTarget (BuildTarget.iOS);
  }
}
