using Appboy;
using Appboy.Utilities;
using System;
using System.Collections;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Networking;
using Utilities;

public class ChangeUser : MonoBehaviour {

  public InputField UserIDField;
  
  public void OnDoneButtonClicked() {
    Debug.Log(String.Format("Changing user ID to {0}", UserIDField.text));
    getTokenSetAndExit(UserIDField.text);
  }
  
  public void OnCancelButtonClicked() {
    Debug.Log(String.Format(Constants.ChangeUserCancelLog));
    SceneManager.LoadScene(Constants.MainMenuScene);
  }

  private void getTokenSetAndExit(string userId) {
    var token = "dummy_jwt_token";
    Appboy.AppboyBinding.ChangeUser(userId, token);
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
}
