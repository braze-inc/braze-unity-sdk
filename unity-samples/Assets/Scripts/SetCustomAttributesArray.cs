using Appboy;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utilities;

public class SetCustomAttributesArray : MonoBehaviour {

  public InputField CustomArrayKeyField;
  public InputField CustomArrayField;
  public InputField AddStringToArrayKeyField;
  public InputField AddStringToArrayStringField;
  public InputField RemoveStringFromArrayKeyField;
  public InputField RemoveStringFromArrayStringField;
  public InputField NestedArrayKeyField;
  

  public void OnBackButtonClick() {
    SceneManager.LoadScene(Constants.CustomAttributesSettingScene);
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

  public void OnCreateNestedArrayButtonClick() {
    if (UtilityMethods.textIsValid(NestedArrayKeyField.text)) {
      Dictionary<string, object> object1 = new Dictionary<string, object>();
      object1.Add("key int", 2);
      object1.Add("key string", "first value");
      object1.Add("key bool", true);
      object1.Add("key float", 20.2);

      Dictionary<string, object> object2 = new Dictionary<string, object>();
      object2.Add("key int", 3);
      object2.Add("key string", "second value");
      object2.Add("key bool", false);
      object2.Add("key float", 23.2);

      List<Dictionary<String, object>> listOfStuff = new List<Dictionary<String, object>>();
      listOfStuff.Add(object1);
      listOfStuff.Add(object2);

      Debug.Log(String.Format("Creating Nested Array {0}", NestedArrayKeyField.text));
      Appboy.AppboyBinding.SetCustomUserAttribute(NestedArrayKeyField.text, listOfStuff);
    }
  }
}
