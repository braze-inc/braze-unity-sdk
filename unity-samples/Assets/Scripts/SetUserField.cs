using Appboy;
using System;
using Appboy.Models;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Utilities;

public class SetUserField : MonoBehaviour {

  public InputField FirstNameField;
  public InputField LastNameField;
  public InputField EmailField;
  public InputField BirthdayMonthField;
  public InputField BirthdayDayField;
  public InputField BirthdayYearField;
  public InputField CountryField;
  public InputField HomeCityField;
  public InputField PhoneField;
  public InputField LanguageField;
  
  Gender gender;
  AppboyNotificationSubscriptionType emailSubscription = AppboyNotificationSubscriptionType.SUBSCRIBED;
  AppboyNotificationSubscriptionType pushSubscription = AppboyNotificationSubscriptionType.SUBSCRIBED;

  public void OnCancelButtonClick() {
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
    
  public void OnDoneButtonClick() {
    Debug.Log(String.Format("Setting User Fields: First name:{0}, Last name:{1}, Email:{2}, Gender:{3}, " +
                            "Date of birth:{4}/{5}/{6}, Country:{7}, Home city:{8}, Email subscription:{9}, " +
                            "Push subscription:{10}, phone:{11}, language:{12}", FirstNameField.text, LastNameField.text, EmailField.text, 
                            gender, BirthdayMonthField.text, BirthdayDayField.text, BirthdayYearField.text, 
                            CountryField.text, HomeCityField.text, emailSubscription, pushSubscription, PhoneField.text, LanguageField.text));
    
    if (UtilityMethods.textIsValid(FirstNameField.text)) {
      Appboy.AppboyBinding.SetUserFirstName(FirstNameField.text);
    }
    if (UtilityMethods.textIsValid(LastNameField.text)) {
      Appboy.AppboyBinding.SetUserLastName(LastNameField.text);
    }
    if (UtilityMethods.textIsValid(EmailField.text)) {
      Appboy.AppboyBinding.SetUserEmail(EmailField.text);
    }
    Appboy.AppboyBinding.SetUserGender(gender);  
    if (UtilityMethods.textIsValid(BirthdayDayField.text) && 
        UtilityMethods.textIsValid(BirthdayMonthField.text) && 
        UtilityMethods.textIsValid(BirthdayYearField.text)) {
      int month, day, year;
      if (UtilityMethods.ParseStringToInt(BirthdayMonthField.text, Constants.BirthdayMonthParseErrorDescription, out month) &&
          UtilityMethods.ParseStringToInt(BirthdayDayField.text, Constants.BirthdayDayParseErrorDescription, out day) &&
          UtilityMethods.ParseStringToInt(BirthdayYearField.text, Constants.BirthdayYearParseErrorDescription, out year)) {
        Appboy.AppboyBinding.SetUserDateOfBirth(year, month, day);  
      }
    }
    if (UtilityMethods.textIsValid(CountryField.text)) {
      Appboy.AppboyBinding.SetUserCountry(CountryField.text);
    }
    if (UtilityMethods.textIsValid(HomeCityField.text)) {
      Appboy.AppboyBinding.SetUserHomeCity(HomeCityField.text);
    }
    Appboy.AppboyBinding.SetUserEmailNotificationSubscriptionType(emailSubscription);
    Appboy.AppboyBinding.SetUserPushNotificationSubscriptionType(pushSubscription);
    if (UtilityMethods.textIsValid(PhoneField.text)) {
      Appboy.AppboyBinding.SetUserPhoneNumber(PhoneField.text);
    }
    if (UtilityMethods.textIsValid(LanguageField.text)) {
      Appboy.AppboyBinding.SetUserLanguage(LanguageField.text);
    }
    
    SceneManager.LoadScene(Constants.MainMenuScene);
  }
  
  public void OnMaleToggleValueChange(bool IsOn) {
    if (IsOn) {
      gender = Gender.Male;
    }
  }
  
  public void OnFemaleToggleValueChange(bool IsOn) {
    if (IsOn) {
      gender = Gender.Female;
    }
  }
  
  public void OnEmailOPTToggleValueChange(bool IsOn) {
    if (IsOn) {
      emailSubscription = AppboyNotificationSubscriptionType.OPTED_IN;
    }
  }
  
  public void OnEmailSubToggleValueChange(bool IsOn) {
    if (IsOn) {
      emailSubscription = AppboyNotificationSubscriptionType.SUBSCRIBED;
    }
  }
  
  public void OnEmailUnsubToggleValueChange(bool IsOn) {
    if (IsOn) {
      emailSubscription = AppboyNotificationSubscriptionType.UNSUBSCRIBED;
    }
  }
  
  public void OnPushOPTToggleValueChange(bool IsOn) {
    if (IsOn) {
      pushSubscription = AppboyNotificationSubscriptionType.OPTED_IN;
    }
  }
  
  public void OnPushSubToggleValueChange(bool IsOn) {
    if (IsOn) {
      pushSubscription = AppboyNotificationSubscriptionType.SUBSCRIBED;
    }
  }
  
  public void OnPushUnsubToggleValueChange(bool IsOn) {
    if (IsOn) {
      pushSubscription = AppboyNotificationSubscriptionType.UNSUBSCRIBED;
    }
  }


}
