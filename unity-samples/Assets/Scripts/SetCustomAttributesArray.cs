using UnityEngine;
using System.Collections;
using Appboy;
using System;
using System.Collections.Generic;
using System.Linq;
using Utilities;
using UnityEngine.UI;

public class SetCustomAttributesArray : MonoBehaviour {

  public InputField CustomArrayKeyField;
  public InputField CustomArrayField;
  public InputField AddStringToArrayKeyField;
  public InputField AddStringToArrayStringField;
  public InputField RemoveStringFromArrayKeyField;
  public InputField RemoveStringFromArrayStringField;

  public void OnBackButtonClick() {
    Application.LoadLevel(Constants.CustomAttributesSettingScene);
  }
  
  public void OnSetArrayButtonClick() {
    if (UtilityMethods.textIsValid(CustomArrayKeyField.text) && UtilityMethods.textIsValid(CustomArrayField.text)) {
      List<string> stringList = CustomArrayField.text.Split(',').ToList();
      Debug.Log(String.Format("Setting custom attribute array {0} with key {1}", 
      string.Join(",", stringList.ToArray()), CustomArrayKeyField.text));
      Appboy.AppboyBinding.SetCustomUserAttributeArray(CustomArrayKeyField.text, stringList, stringList.Count);
    }
  }
  
  public void OnAddStringButtonClick() {
    if (UtilityMethods.textIsValid(AddStringToArrayKeyField.text) && 
        UtilityMethods.textIsValid(AddStringToArrayStringField.text)) {
      Debug.Log(String.Format("Adding string {0} to array with key {1}", AddStringToArrayStringField.text, AddStringToArrayKeyField.text));
      Appboy.AppboyBinding.AddToCustomUserAttributeArray(AddStringToArrayKeyField.text, AddStringToArrayStringField.text);
    }
  }
  
  public void OnRemoveStringButtonClick() {
    if (UtilityMethods.textIsValid(RemoveStringFromArrayKeyField.text) && 
        UtilityMethods.textIsValid(RemoveStringFromArrayStringField.text)) {
      Debug.Log(String.Format("Removing string {0} from array with key {1}", 
      RemoveStringFromArrayStringField.text, RemoveStringFromArrayKeyField.text));
      Appboy.AppboyBinding.RemoveFromCustomUserAttributeArray(RemoveStringFromArrayKeyField.text, RemoveStringFromArrayStringField.text);
    }
  }
}
