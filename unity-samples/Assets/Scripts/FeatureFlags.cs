using Appboy;
using Appboy.Models;
using Appboy.Utilities;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utilities;
using UnityEngine.Networking;
using System.Text;
using System.Threading.Tasks;

using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class FeatureFlags : MonoBehaviour {

  public InputField UserIDField;
  
  public void OnRetrieveButtonClicked() {
    Console.WriteLine(String.Format("Getting FF for {0}", UserIDField.text));
    getFeatureFlag(UserIDField.text);
  }

  public void OnGetAllButtonClicked() {
    List<FeatureFlag> ffList = Appboy.AppboyBinding.GetAllFeatureFlags();
    Console.WriteLine("Showing All " + ffList.Count + " Feature Flags");
    foreach (FeatureFlag ff in ffList) {
      Console.WriteLine(ff.ToString());
    }
    Console.WriteLine("Done Showing All Feature Flags");
  }

  public void OnRefreshFeatureFlagsButtonClicked() {
    Console.WriteLine("Refreshing Feature Flags");
    Appboy.AppboyBinding.RefreshFeatureFlags();
  }

  public void OnCancelButtonClicked() {
    Debug.Log(String.Format(Constants.ChangeUserCancelLog));
    SceneManager.LoadScene(Constants.MainMenuScene);
  }

  private async void getFeatureFlag(string ffId) {
    var ff = Appboy.AppboyBinding.GetFeatureFlag(ffId);
    Debug.Log(ff.ToString());

    // Print out each of the properties via convenience getter methods
    foreach(var entry in ff.Properties) {
      var type = entry.Value.type;
      if (type.Equals("string")) {
        Debug.Log($"- String property: {ff.getStringProperty(entry.Key)}, key: \"{entry.Key}\"");
      } else if (type.Equals("number")) {
        Debug.Log($"- Number property as integer: {ff.getIntegerProperty(entry.Key)}, key: \"{entry.Key}\"");
        Debug.Log($"- Number property as double: {ff.getDoubleProperty(entry.Key)}, key: \"{entry.Key}\"");
      } else if (type.Equals("boolean")) {
        Debug.Log($"- Boolean property: {ff.getBooleanProperty(entry.Key)}, key: \"{entry.Key}\"");
      } else {
        Debug.Log("Skipping invalid type: " + type);
      }
    }
  }
}
