using Appboy;
using Appboy.Models;
using UnityEngine;
using UnityEngine.SceneManagement;
using Utilities;


public class MainMenu : MonoBehaviour {

  public void OnChangeUserButtonClick() {
    SceneManager.LoadScene(Constants.ChangeUserScene);
  }
  
  public void OnLogCustomEventButtonClick() {
    SceneManager.LoadScene(Constants.LogCustomEventScene);
  }
  
  public void OnLogPurchaseButtonClick() {
    SceneManager.LoadScene(Constants.LogPurchaseScene);
  }
  
  public void OnSetUserFieldsButtonClick() {
    SceneManager.LoadScene(Constants.SetUserFieldScene);
  }
  
  public void OnSetCustomAttributeButtonClick() {
    SceneManager.LoadScene(Constants.CustomAttributesSettingScene);
  }
  
  public void OnRequestInAppMessageButtonClick() {
    Appboy.AppboyBinding.RequestFeedRefresh ();
    Appboy.AppboyBinding.RequestContentCardsRefresh ();
  }

  public void OnWipeDataButtonClick() {
    Appboy.AppboyBinding.WipeData ();
  }

  public void OnEnableSDKButtonClick() {
    Appboy.AppboyBinding.EnableSDK ();
  }

  public void OnDisableSDKButtonClick() {
    Appboy.AppboyBinding.DisableSDK ();
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
    Appboy.AppboyBinding.setUserFacebookData("briancaw", "brian", "wheeler", "brian@tryappboy.com", "funny guy", "belmar", Gender.Male, 12, "09-09-1917");
    Appboy.AppboyBinding.setUserTwitterData(2342, "handle", "name", "description", 1, 2, 3, "https://www.gravatar.com/avatar/397167253b1109ef4da30c86eb7782f5?d=https://sweeney.appboy.com/assets/dashboard/profile-default.png");
  }

  public void OnNullSocialDataTest() {
    Appboy.AppboyBinding.setUserFacebookData(null, null, null, null, null, null, null, null, null);
    Appboy.AppboyBinding.setUserTwitterData(null, null, null, null, null, null, null, null);
  }
}
