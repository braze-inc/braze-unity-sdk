using UnityEngine;
using System.Collections;

public class AppboyBindingTester : MonoBehaviour {

  // Use this for initialization
  void Start() {
    AppboyBinding.LogCustomEvent("Started Unity");
    AppboyBinding.LogPurchase("StartToken", 25);
    AppboyBinding.ChangeUser("Alyssa.P.Hacker@appboy.com");
    AppboyBinding.SetUserFirstName("Alyssa");
    AppboyBinding.SetUserLastName("Hacker");
    AppboyBinding.SetUserEmail("Alyssa.P.Hacker@appboy.com");
    AppboyBinding.SetUserBio("A wielder of elegant weapons, for a more civilized age.");
    AppboyBinding.SetUserGender(AppboyUser.Female);
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
  }
  
  // Update is called once per frame
  void Update() {
  }
}
