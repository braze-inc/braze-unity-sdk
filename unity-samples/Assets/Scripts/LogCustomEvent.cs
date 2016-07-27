using UnityEngine;
using UnityEngine.UI;
using Appboy;
using System;
using Utilities;
using System.Collections.Generic;

public class LogCustomEvent : MonoBehaviour {
  
  public InputField CustomEventField;
  public InputField CustomEventPropertiesKeyField;
  public InputField CustomEventPropertiesValueField;
  public Dictionary<string, object> CustomEventProperties;
  
  public void OnDoneButtonClick() {
    Debug.Log(String.Format("Logging custom event {0}", CustomEventField.text));
    if (CustomEventProperties == null) {
      Appboy.AppboyBinding.LogCustomEvent(CustomEventField.text);
    } else {
      #if (UNITY_IOS || UNITY_ANDROID)
      Appboy.AppboyBinding.LogCustomEvent(CustomEventField.text, CustomEventProperties);
      #endif
    }
    Application.LoadLevel(Constants.MainMenuScene);
  }
  
  public void OnCancelButtonClick() {
    Debug.Log(String.Format(Constants.CustomEventCancelLog));
    Application.LoadLevel(Constants.MainMenuScene);
  }

  public void AddTestPropertiesButtonClick() {
    if (CustomEventProperties == null) {
      CustomEventProperties = new Dictionary<string, object> ();
    }

    CustomEventProperties["intprop"] = 1;
    CustomEventProperties["doubleprop"] = 1.2D;
    CustomEventProperties["floatprop"] = 1.2F;
    CustomEventProperties["testcoercion"] = "11";
    CustomEventProperties["dateprop"] = DateTime.Today;
    CustomEventProperties["boolprop"] = true;
    CustomEventProperties["nullprop"] = null;
    CustomEventProperties["objprop"] = new object();
  }

  public void AddPropertyButtonClick() {
    if (!UtilityMethods.textIsValid (CustomEventPropertiesKeyField.text) ||
        !UtilityMethods.textIsValid (CustomEventPropertiesValueField.text)) {
      Debug.Log ("Key and value must be valid strings.");
      return;
    }
    Debug.Log(String.Format("Add Property {0} : {1}", CustomEventPropertiesKeyField.text, CustomEventPropertiesValueField.text));
    if (CustomEventProperties == null) {
      CustomEventProperties = new Dictionary<string, object> ();
    }
    CustomEventProperties.Add(CustomEventPropertiesKeyField.text, CustomEventPropertiesValueField.text);
  }
}
