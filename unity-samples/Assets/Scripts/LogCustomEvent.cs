using UnityEngine;
using UnityEngine.UI;
using Appboy;
using System;
using Utilities;

public class LogCustomEvent : MonoBehaviour {
  
  public InputField CustomEventField;
  
  public void OnDoneButtonClick() {
    Debug.Log(String.Format("Logging custom event {0}", CustomEventField.text));
    Appboy.AppboyBinding.LogCustomEvent(CustomEventField.text);
    Application.LoadLevel(Constants.MainMenuScene);
  }
  
  public void OnCancelButtonClick() {
    Debug.Log(String.Format(Constants.CustomEventCancelLog));
    Application.LoadLevel(Constants.MainMenuScene);
  }
}
