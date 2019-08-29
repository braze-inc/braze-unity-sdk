using Appboy;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utilities;

public class ChangeUser : MonoBehaviour {

  public InputField UserIDField;
  
  public void OnDoneButtonClicked() {
    Debug.Log(String.Format("Changing user ID to {0}", UserIDField.text));
    Appboy.AppboyBinding.ChangeUser(UserIDField.text);
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
  
  public void OnCancelButtonClicked() {
    Debug.Log(String.Format(Constants.ChangeUserCancelLog));
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
}
