## 1.6.0
* Updates the Android plugin to use Appboy Android SDK 1.11.0.
* Updates the iOS plugin to use Appboy iOS SDK 2.17.0.

## 1.5.0
* Removes Froyo support, which was dropped in Unity 4.3. See https://unity3d.com/unity/whats-new/unity-4.3.
* Adds native Appboy ui capability to Android, including in-app messages, the News Feed, and Appboy's webview. Note: As a result of this change, in-app messages will display automatically with native Appboy layouts.  To disable this functionality, set com_appboy_inapp_show_inapp_messages_automatically to false in your Unity project's appboy.xml file.
* Updates the iOS plugin to use Appboy iOS SDK 2.12.1.
* Updates the Android plugin to use Appboy Android SDK 1.8.0.

## 1.4.0
* Adds new in-app message models for the Modal and Full screen types added in Android 1.7 and iOS 2.11.
* Updates the iOS plugin to use Appboy iOS SDK 2.11.2.
* Updates the Android plugin to use Appboy Android SDK 1.7.2.
* Adds a sample Unity application that uses the Appboy plugin.

## 1.3.1
* Updates the Android plugin to use Appboy Android SDK 1.6.1.

## 1.3.0
* Adds plugins for Windows Phone 8 and Windows Universal apps.
* Updates the Android plugin to use Appboy Android SDK 1.6.0.
* Fixes the corrupted support-v4 jar in the Android plugin.
* Updates the iOS plugin to use Appboy iOS SDK 2.9.3.

## 1.2.2
* Updates the Android plugin to use Appboy Android SDK 1.5.2.
* Adds logFeedDisplayed, logFeedbackDisplayed, SetUserAvatarImageURL, IncrementCustomUserAttribute; updates email and push notification subscription types to current options supported in the Android and iOS SDKs (OPTED_IN, SUBSCRIBED, or UNSUBSCRIBED).

## 1.2.1
* Updates the plugin libraries to Appboy Android SDK 1.5.1 and Appboy iOS SDK 2.9.1 (without Facebook iOS SDK Support).
* Adds quantity parameter as an option when logging purchase. The quantity should be an unsigned interger greater than 0 and no larger than 100. 
* New Custom Attribute Data Type (Array): Appboy now supports custom attributes which contain an array of string elements. In addition, we also provide methods for adding or removing an string element from an array type custom attribute.

## 1.2
* Updates the plugin libraries to Appboy Android SDK 1.4.3 and Appboy iOS SDK 2.8 (without Facebook iOS SDK Support).
* Adds SlideFrom, ClickAction, DismissType and Uri to Slideup; added logging slideup impressions and clicks.
* Exposes the card models from Appboy to Unity; adds methods for requesting feed from Appboy server or cache; adds logging impressions and clicks.
* In Android SDK, changes the device identifier from the device persistent ANDROID_ID to a non device persistent identifier for compliance with the new Google Play Terms of Service.

## 1.1
* Updates the plugin libraries to Appboy Android SDK 1.2.1 and Appboy iOS SDK 2.3.1 (without Facebook iOS SDK Support).
* Adds Prime31 plugin compatibility.

## 1.0
* Initial release