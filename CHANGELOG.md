## 1.4.0
* Adds new in-app message models for the Modal and Full screen types added in Android 1.7 and iOS 2.11.
* Updated the iOS plugin to use Appboy iOS SDK v2.11.2.
* Updated the Android plugin to use Appboy Android SDK v1.7.2.
* Added a sample Unity application that uses the Appboy plugin.

## 1.3.1
* Updated the Android plugin to use Appboy Android SDK v1.6.1.

## 1.3.0
* Adds plugins for Windows Phone 8 and Windows Universal apps.
* Updated the Android plugin to use Appboy Android SDK v1.6.0.
* Fixes the corrupted support-v4 jar in the Android plugin.
* Updated the iOS plugin to use Appboy iOS SDK v2.9.3.

## 1.2.2
* Updated the Android plugin to use Appboy Android SDK v1.5.2.
* Added logFeedDisplayed, logFeedbackDisplayed, SetUserAvatarImageURL, IncrementCustomUserAttribute; updated email and push notification subscription types to current options supported in the Android and iOS SDKs (OPTED_IN, SUBSCRIBED, or UNSUBSCRIBED).

## 1.2.1
* Updated the plugin libraries to use the Appboy Android SDK v1.5.1 and Appboy iOS SDK v2.9.1 (without Facebook iOS SDK Support) libraries
* Added quantity parameter as an option when logging purchase. The quantity should be an unsigned interger greater than 0 and no larger than 100. 
* New Custom Attribute Data Type (Array): Appboy now supports custom attributes which contain an array of string elements. In addition, we also provide methods for adding or removing an string element from an array type custom attribute.

## 1.2
* Updated the plugin libraries to use the Appboy Android SDK v1.4.3 and Appboy iOS SDK v2.8 (without Facebook iOS SDK Support) libraries
* Added SlideFrom, ClickAction, DismissType and Uri to Slideup; added logging slideup impressions and clicks.
* Exposed the card models from Appboy to Unity; added methods for requesting feed from Appboy server or cache; added logging impressions and clicks
* In Android SDK, changed the device identifier from the device persistent ANDROID_ID to a non device persistent identifier for compliance with the new Google Play Terms of Service.

## 1.1
* Updating the plugin libraries to the Appboy Android SDK v1.2.1 and Appboy iOS SDK v2.3.1 (without Facebook iOS SDK Support) libraries 
* Makes compatible with Prime31 plugins

## 1.0
* Initial release
