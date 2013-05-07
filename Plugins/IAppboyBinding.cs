using System;

/// <summary>
/// These methods can be called by Unity applications using any platform in order to report 
/// events and set user attributes. Please see the Appboy Android JavaDocs for more 
/// detailed guidance on usage (note that only a subset of the functions in the JavaDocs
/// are availabe in the Unity API):
/// http://appboy.github.io/appboy-android-sdk/javadocs/com/appboy/IAppboy.html
/// http://appboy.github.io/appboy-android-sdk/javadocs/index.html
/// </summary>
public interface IAppboyBinding {
  void LogCustomEvent(string eventName);
  
  void LogPurchase(string productId, int priceInCents);
  
  void ChangeUserId(string userId);
  
  void SetFirstName(string firstName);  
  
  void SetLastName(string lastName);
 
  void SetEmail(string email);

  void SetBio(string bio);
 
  /// <summary>
  /// Sets the gender.
  /// </summary>
  /// <param name='gender'>
  /// The gender of the user. Should be either 'M', 'F', 'MALE', or 'FEMALE'.
  /// </param>
  void SetGender(string gender);
 
  /// <summary>
  /// Sets the date of birth.
  /// </summary>
  /// <param name='year'>
  /// Ordinal for the year of birth in the Gregorian calendar.
  /// </param>
  /// <param name='month'>
  /// Ordinal for the month of the year with January = 1 and December = 12.
  /// </param>
  /// <param name='day'>
  /// Ordinal for the day of the month.
  /// </param>
  void SetDateOfBirth(int year, int month, int day);

  void SetCountry(string country);

  void SetHomeCity(string city);

  void SetIsSubscribedToEmails(bool isSubscribedToEmails);

  void SetPhoneNumber(string phoneNumber);

  void SetCustomUserAttribute(string key, bool value);

  void SetCustomUserAttribute(string key, int value);

  void SetCustomUserAttribute(string key, float value);

  void SetCustomUserAttribute(string key, long value);

  void SetCustomUserAttribute(string key, string value);
  
  void SetCustomUserAttributeToSecondsFromEpoch(string key, long secondsFromEpoch);
  
  void UnsetCustomUserAttribute(string key);
}

