using UnityEngine;
using System.Collections;
using Appboy;
using Appboy.Models.InAppMessage;
using System.Collections.Generic;
using Utilities;

public class MainMenu : MonoBehaviour {

  public void OnChangeUserButtonClick() {
    Application.LoadLevel(Constants.ChangeUserScene);
  }
  
  public void OnLogCustomEventButtonClick() {
    Application.LoadLevel(Constants.LogCustomEventScene);
  }
  
  public void OnLogPurchaseButtonClick() {
    Application.LoadLevel(Constants.LogPurchaseScene);
  }
  
  public void OnSetUserFieldsButtonClick() {
    Application.LoadLevel(Constants.SetUserFieldScene);
  }
  
  public void OnSetCustomAttributeButtonClick() {
    Application.LoadLevel(Constants.CustomAttributesSettingScene);
  }
  
  public void OnSubmitFeedbackButtonClick() {
    Application.LoadLevel(Constants.SubmitFeedbackScene);
  }
  
  public void OnRequestInAppMessageButtonClick() {
    Appboy.AppboyBinding.RequestInAppMessage();
  }
}
