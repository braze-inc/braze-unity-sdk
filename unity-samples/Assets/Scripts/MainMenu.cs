using UnityEngine;
using System.Collections;
using Appboy;
using Appboy.Models.InAppMessage;
using System.Collections.Generic;
using Utilities;
using Appboy.Models;


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
    Appboy.AppboyBinding.RequestFeedRefresh ();
  }

  // Not connecting this to the main menu as setting a push token like that
  // would break push on the device.  But leaving here in case this method needs
  // to be tested again in the future.
  public void OnRegisterAppboyAndroidPushMessages() {
#if UNITY_ANDROID
    Appboy.AppboyBinding.RegisterAppboyPushMessages("testPushToken");
#endif
  }

  public void OnSocialDataTest() {
#if (UNITY_ANDROID || UNITY_IOS)
    Appboy.AppboyBinding.setUserFacebookData("briancaw", "brian", "wheeler", "brian@tryappboy.com", "funny guy", "belmar", Gender.Male, 12, "09-09-1917");
    Appboy.AppboyBinding.setUserTwitterData(2342, "handle", "name", "description", 1, 2, 3, "https://www.gravatar.com/avatar/397167253b1109ef4da30c86eb7782f5?d=https://sweeney.appboy.com/assets/dashboard/profile-default.png");
#endif
  }

  public void OnNullSocialDataTest() {
    Appboy.AppboyBinding.setUserFacebookData(null, null, null, null, null, null, null, null, null);
    Appboy.AppboyBinding.setUserTwitterData(null, null, null, null, null, null, null, null);
  }
}
