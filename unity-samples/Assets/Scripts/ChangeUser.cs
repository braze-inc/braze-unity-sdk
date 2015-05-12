using Appboy;
using Utilities;
using System;
using UnityEngine;
using UnityEngine.UI;

public class ChangeUser : MonoBehaviour {

  public InputField UserIDField;
  
  public void OnDoneButtonClicked() {
    Debug.Log(String.Format("Changing user ID to {0}", UserIDField.text));
    Appboy.AppboyBinding.ChangeUser(UserIDField.text);
    Application.LoadLevel(Constants.MainMenuScene);
  }
  
  public void OnCancelButtonClicked() {
    Debug.Log(String.Format(Constants.ChangeUserCancelLog));
    Application.LoadLevel(Constants.MainMenuScene);
  }
}
