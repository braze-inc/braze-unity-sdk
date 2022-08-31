using Appboy;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utilities;

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
        SceneManager.LoadScene(Constants.MainMenuScene);
      }
    }
  }
  
  public void OnSetCustomAttributesButtonClick() {
    SceneManager.LoadScene(Constants.SetCustomAttributesScene);
  }
  
  public void OnSetCustomAttributesArrayButtonClick() {
    SceneManager.LoadScene(Constants.SetCustomAttributesArrayScene);
  }
  
  public void OnBackButtonClick() {
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
}
