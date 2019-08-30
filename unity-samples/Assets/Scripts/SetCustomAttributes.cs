using Appboy;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utilities;

public class SetCustomAttributes : MonoBehaviour {

  public InputField BoolKeyField;
  public Toggle BoolToggle;
  public InputField IntKeyField;
  public InputField IntValueField;
  public InputField FloatKeyField;
  public InputField FloatValueField;
  public InputField StringKeyField;
  public InputField StringValueField;
  public InputField DateKeyField;
  public Text DateSecondLabel;
  public InputField DateSecondValueField;
  public Toggle DateNowToggle;
  public InputField UnsetKeyField;
  
  public void OnBackButtonClick() {
    SceneManager.LoadScene(Constants.CustomAttributesSettingScene);
  }
  
  public void OnSetBoolButtonClick() {
    if (UtilityMethods.textIsValid(BoolKeyField.text)) {
      Debug.Log(String.Format("Setting bool custom attribute {0} to {1}", BoolKeyField.text, BoolToggle.isOn));
      Appboy.AppboyBinding.SetCustomUserAttribute(BoolKeyField.text, BoolToggle.isOn);
    }
  }
  
  public void OnSetIntButtonClick() {
    if (UtilityMethods.textIsValid(IntKeyField.text) && UtilityMethods.textIsValid(IntValueField.text)) {
      int value;
      if (UtilityMethods.ParseStringToInt(IntValueField.text, Constants.CustomAttributeIntParseErrorDescription, out value)) {
        Debug.Log(String.Format("Setting int custom attribute {0} to {1}", IntKeyField.text, IntValueField.text));     
        Appboy.AppboyBinding.SetCustomUserAttribute(IntKeyField.text, value);
      }
    }
  }
  
  public void OnSetFloatButtonClick() {
    if (UtilityMethods.textIsValid(FloatValueField.text) && UtilityMethods.textIsValid(FloatKeyField.text)) {
      float value;
      try {
        value = float.Parse(FloatValueField.text);
      } catch {
        Debug.Log(String.Format("The float custom attribute value {0} isn't valid", FloatValueField.text)); 
        return;   
      }
      Debug.Log(String.Format("Setting float custom attribute {0} to {1}", FloatKeyField.text, value));
      Appboy.AppboyBinding.SetCustomUserAttribute(FloatKeyField.text, value);
    }
  }
  
  public void OnSetStringButtonClick() {
    if (UtilityMethods.textIsValid(StringKeyField.text) && UtilityMethods.textIsValid(StringValueField.text)) {
      Debug.Log(String.Format("Setting float custom attribute {0} to {1}", StringKeyField.text, StringValueField.text));
      Appboy.AppboyBinding.SetCustomUserAttribute(StringKeyField.text, StringValueField.text);
    }
  }
  
  public void OnSetDateButtonClick() {
    if (UtilityMethods.textIsValid(DateKeyField.text)) {
      if (DateNowToggle.isOn) {
        Debug.Log(String.Format("Setting date custom attribute {0} to Now", DateKeyField.text));
        Appboy.AppboyBinding.SetCustomUserAttributeToNow(DateKeyField.text);
      } else {
        if (UtilityMethods.textIsValid(DateSecondValueField.text)) {
          long value;
          try {
            value = System.Convert.ToInt64(DateSecondValueField.text); 
          } catch {
            Debug.Log(String.Format("The date custom attribute value in second {0} isn't valid", DateSecondValueField.text)); 
            return;
          }
          Debug.Log(String.Format("Setting date custom attribute {0} to {1} seconds", DateKeyField.text, value));
          Appboy.AppboyBinding.SetCustomUserAttributeToSecondsFromEpoch(DateKeyField.text, value);
        }
      }
    }
  }
  
  public void OnUnsetButtonClick() {
    if (UtilityMethods.textIsValid(UnsetKeyField.text)) {
      Debug.Log(String.Format("Unsetting custom attribute {0}", UnsetKeyField.text));
      Appboy.AppboyBinding.UnsetCustomUserAttribute(UnsetKeyField.text);
    }
  }
  
  public void OnNowToggleValueChange() {
    DateSecondValueField.gameObject.SetActive(!DateNowToggle.isOn);
    DateSecondLabel.gameObject.SetActive(!DateNowToggle.isOn);
  }
}
