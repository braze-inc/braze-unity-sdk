using UnityEngine;
using UnityEngine.UI;
using System;
using Appboy.Models;
using Utilities;

public class SetUserField : MonoBehaviour {

  public InputField FirstNameField;
  public InputField LastNameField;
  public InputField EmailField;
  public InputField BiolField;
  public InputField BirthdayMonthField;
  public InputField BirthdayDayField;
  public InputField BirthdayYearField;
  public InputField CountryField;
  public InputField HomeCityField;
  public InputField PhoneField;
  
  Gender gender;
  AppboyNotificationSubscriptionType emailSubscription = AppboyNotificationSubscriptionType.SUBSCRIBED;
  AppboyNotificationSubscriptionType pushSubscription = AppboyNotificationSubscriptionType.SUBSCRIBED;

  public void OnCancelButtonClick() {
    Application.LoadLevel(Constants.MainMenuScene);
  }
    
  public void OnDoneButtonClick() {
    Debug.Log(String.Format("Setting User Fields: First name:{0}, Last name:{1}, Email:{2}, Bio:{3}, Gender:{4}, " +
                            "Date of birth:{5}/{6}/{7}, Country:{8}, Home city:{9}, Email subscription:{10}, " +
                            "Push subscription:{11}, phone:{12}", FirstNameField.text, LastNameField.text, EmailField.text, 
                            BiolField.text, gender, BirthdayMonthField.text, BirthdayDayField.text, BirthdayYearField.text, 
                            CountryField.text, HomeCityField.text, emailSubscription, pushSubscription, PhoneField.text));
    
    if (UtilityMethods.textIsValid(FirstNameField.text)) {
      Appboy.AppboyBinding.SetUserFirstName(FirstNameField.text);
    }
    if (UtilityMethods.textIsValid(LastNameField.text)) {
      Appboy.AppboyBinding.SetUserLastName(LastNameField.text);
    }
    if (UtilityMethods.textIsValid(EmailField.text)) {
      Appboy.AppboyBinding.SetUserEmail(EmailField.text);
    }
    if (UtilityMethods.textIsValid(BiolField.text)) {
      Appboy.AppboyBinding.SetUserBio(BiolField.text);
    }
    Appboy.AppboyBinding.SetUserGender(gender);  
    if (UtilityMethods.textIsValid(BiolField.text)) {
      Appboy.AppboyBinding.SetUserBio(BiolField.text);
    }
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
    
    Application.LoadLevel(Constants.MainMenuScene);
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
