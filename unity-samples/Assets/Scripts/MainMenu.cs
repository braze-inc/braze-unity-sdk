using Appboy;
using Appboy.Models;
using UnityEngine;
using UnityEngine.SceneManagement;
using Utilities;
using System.Text;

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
    Appboy.AppboyBinding.RequestFeedRefresh();
    Appboy.AppboyBinding.RequestContentCardsRefresh();
  }

  public void OnWipeDataButtonClick() {
    Appboy.AppboyBinding.WipeData();
  }

  public void OnEnableSDKButtonClick() {
    Appboy.AppboyBinding.EnableSDK();
  }

  public void OnDisableSDKButtonClick() {
    Appboy.AppboyBinding.DisableSDK();
  }

  public void OnRequestFlushButtonClick() {
    Appboy.AppboyBinding.RequestImmediateDataFlush();
  }

  // Not connecting this to the main menu as setting a push token like that
  // would break push on the device.  But leaving here in case this method needs
  // to be tested again in the future.
  public void OnRegisterAppboyPushMessages() {
#if UNITY_ANDROID
    Appboy.AppboyBinding.RegisterAppboyPushMessages("testPushToken");
#elif UNITY_IOS
    // On iOS, the token comes as a byte array from Unity 
    Appboy.AppboyBinding.RegisterAppboyPushMessages(Encoding.UTF8.GetBytes("testPushToken"));
#endif
  }

  public void OnNullSocialDataTest() {
    Appboy.AppboyBinding.setUserFacebookData(null, null, null, null, null, null, null, null, null);
    Appboy.AppboyBinding.setUserTwitterData(null, null, null, null, null, null, null, null);
  }

  public void OnPresetUserDataClick() {
    Appboy.AppboyBinding.SetUserFirstName("jared");
    Appboy.AppboyBinding.SetUserLastName("contreras");
    Appboy.AppboyBinding.SetUserGender(Gender.PreferNotToSay);
    Appboy.AppboyBinding.SetUserEmail("unity@braze.com");
    Appboy.AppboyBinding.SetUserDateOfBirth(1994, 5, 2);
    Appboy.AppboyBinding.SetUserCountry("dominica");
    Appboy.AppboyBinding.SetUserHomeCity("Julian, CA");
    Appboy.AppboyBinding.SetUserEmailNotificationSubscriptionType(AppboyNotificationSubscriptionType.OPTED_IN);
    Appboy.AppboyBinding.SetUserPushNotificationSubscriptionType(AppboyNotificationSubscriptionType.SUBSCRIBED);
    Appboy.AppboyBinding.SetUserPhoneNumber("8675309");
    Appboy.AppboyBinding.SetCustomUserAttribute("funny", false);
    Appboy.AppboyBinding.SetCustomUserAttribute("times laughed", -1);
    Appboy.AppboyBinding.SetCustomUserAttribute("grins cracked", 0.5F);
    Appboy.AppboyBinding.SetCustomUserAttribute("knock knock", "who's there");

    Appboy.AppboyBinding.LogCustomEvent("union of unity uniters");
    Appboy.AppboyBinding.LogPurchase("dune", "USD", 1984, 1);
    Debug.Log("DeviceID: " + Appboy.AppboyBinding.GetInstallTrackingId());
  }
}
