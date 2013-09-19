using UnityEngine;
using System.Collections;

namespace Appboy {
  public class AppboyBindingTester : MonoBehaviour {
    void Start() {
      AppboyBinding.LogCustomEvent("Started Unity");
      AppboyBinding.LogPurchase("TestUnityPurchase", "USD", 0.99m);
      AppboyBinding.ChangeUser("Alyssa.P.Hacker@appboy.com");
      AppboyBinding.SetUserFirstName("Alyssa");
      AppboyBinding.SetUserLastName("Hacker");
      AppboyBinding.SetUserEmail("Alyssa.P.Hacker@appboy.com");
      AppboyBinding.SetUserBio("A wielder of elegant weapons, for a more civilized age.");
      AppboyBinding.SetUserGender(Gender.Female);
      AppboyBinding.SetUserDateOfBirth(1984, 3, 14);
      AppboyBinding.SetUserCountry("United States");
      AppboyBinding.SetUserHomeCity("Cambridge, MA");
      AppboyBinding.SetUserIsSubscribedToEmails(true);
      AppboyBinding.SetUserPhoneNumber("6173249135");
      AppboyBinding.SetCustomUserAttribute("knows_ben", true);
      AppboyBinding.SetCustomUserAttribute("cats_owned", 0);
      AppboyBinding.SetCustomUserAttribute("course", 6.001f);
      AppboyBinding.SetCustomUserAttribute("language", "lisp");
      AppboyBinding.SetCustomUserAttributeToSecondsFromEpoch("origin", 1);
      AppboyBinding.SetCustomUserAttributeToNow("last_used");
      AppboyBinding.UnsetCustomUserAttribute("cats_owned");
      AppboyBinding.SetCustomUserAttribute("even_prime", 2);						
      AppboyBinding.SetCustomUserAttribute("unity_test_device", true);
      AppboyBinding.SubmitFeedback("Alyssa.P.Hacker@appboy.com", "I love this app!", false);
    }
  
    void Update() {
    }

    void SlideupReceivedCallback(string message) {
	  JSONClass slideupJson = (JSONClass) JSON.Parse(message);
      Slideup slideup = new Slideup(slideupJson);
      Debug.Log("Slideup message: " + slideup);
    }
		
    void PushNotificationReceivedCallback(string message) {
      JSONClass pushNotificationJson = (JSONClass) JSON.Parse(message);
      PushNotification pushNotification = new PushNotification(pushNotificationJson);
      Debug.Log("Push Notification event: " + pushNotification);
      AppboyBinding.ClearPushMessage(pushNotification.AndroidNotificationId);      
    }
		
    void PushNotificationOpenedCallback(string message) {
      JSONClass pushNotificationJson = (JSONClass) JSON.Parse(message);
      PushNotification pushNotification = new PushNotification(pushNotificationJson);
      Debug.Log("Push Notification event: " + pushNotification);
    }
  }
}
