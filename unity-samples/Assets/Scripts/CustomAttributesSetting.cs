using UnityEngine;
using UnityEngine.UI;
using System;
using Utilities;
using Appboy;

public class CustomAttributesSetting : MonoBehaviour {
  
  public InputField IncrementKeyField;
  public InputField IncrementValueField;
  
  public void OnIncrementDoneButtonClick() {
    Debug.Log(String.Format("Increasing custom attribute {0} by {1}", IncrementKeyField.text, IncrementValueField.text));
    if (UtilityMethods.textIsValid(IncrementValueField.text) && 
        UtilityMethods.textIsValid(IncrementKeyField.text)) {
      int increment;
      if(UtilityMethods.ParseStringToInt(IncrementValueField.text, Constants.IncrementValueParseErrorDescription, out increment)) {
        Appboy.AppboyBinding.IncrementCustomUserAttribute(IncrementKeyField.text, increment);
        Application.LoadLevel(Constants.MainMenuScene);
      }      
    }
  }
  
  public void OnSetCustomAttributesButtonClick() {
    Application.LoadLevel(Constants.SetCustomAttributesScene);
  }
  
  public void OnSetCustomAttributesArrayButtonClick() {
    Application.LoadLevel(Constants.SetCustomAttributesArrayScene);
  }
  
  public void OnBackButtonClick() {
    Application.LoadLevel(Constants.MainMenuScene);
  }
}
