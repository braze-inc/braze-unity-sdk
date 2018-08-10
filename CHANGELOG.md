## 1.14.0

##### Breaking
- Updates the iOS plugin to use Braze iOS SDK 3.7.1.
  - Updates the iOS plugin to use the Braze iOS SDK framework instead of local files.
  - As a result, imports using local file syntax (e.g. `"AppboyKit.h"`) must change to framework (e.g.`<Appboy_iOS_SDK/AppboyKit.h>`) syntax.
- Updates the Android plugin to use Braze Android SDK 2.5.1.
- Removes Android Support Library artifacts from the Braze Unity Plugin. This is to avoid duplicating the Android Support Library artifacts that are automatically included as part of the Firebase Unity SDK, our recommended push integration. Integrators not using Firebase or importing Android Support Library artifacts through another SDK must include the Android Support Library manually (v4 only).

##### Fixed
- Fixed an issue that required manual import of non-xib Braze iOS SDK resources into Unity-generated Xcode projects.

##### Added
- Added `GetInstallTrackingId` to the Appboy interface. This method is currently only implemented on Android and is a no-op on iOS.
- Updated the Unity Samples sample app to use FCM instead of GCM.

##### Changed
- In-app message analytics events on the Appboy interface no longer require using an Appboy Unity player subclass.
  - See https://github.com/Appboy/appboy-unity-sdk/pull/38/files. Thanks @MartinGonzalez!

##### Removed
- Removes `showStreamView:` from the `AppboyUnityManager.h` interface.

## 1.13.0

##### Breaking
- Updates the iOS plugin to use Braze iOS SDK 3.4.0.
- Updates the Android plugin to use Braze Android SDK 2.3.0.
- Removes Windows support.
- Removes `LogSlideupImpression` and `LogSlideupClicked` from the Appboy interface.

##### Added
- `PostBuild.cs` now adds SDWebImage and FLAnimatedImage to XCode embedded binaries automatically.
  - See https://github.com/Appboy/appboy-unity-sdk/pull/35. Thanks @nlattessi!
- `PostBuild.cs` may now run in Unity environments without Unity iOS Build Support.
  - See https://github.com/Appboy/appboy-unity-sdk/pull/36. Thanks @Sencerd!
- Added support for wiping all customer data created by the Braze SDK via `Appboy.AppboyBinding.wipeData()`.
  - Note that on iOS, `wipeData()` will disable the SDK for the remainder of the app run. For more information, see our iOS SDK's documentation for [`disableSDK`](http://appboy.github.io/appboy-ios-sdk/docs/interface_appboy.html#a8d3b78a98420713d8590ed63c9172733).
- Added `Appboy.AppboyBinding.disableSDK()` to disable the Braze SDK immediately.
- Added `Appboy.AppboyBinding.enableSDK()` to re-enable the SDK after a call to `Appboy.AppboyBinding.disableSDK()`.
  - Note that on iOS, `enableSDK()` will not enable the SDK immediately. For more information, see our iOS SDK's documentation for [`requestEnableSDKOnNextAppRun`](http://appboy.github.io/appboy-ios-sdk/docs/interface_appboy.html#a781078a40a3db0de64ac82dcae3b595b).

## 1.12.0

##### Breaking
- Updates the iOS plugin to use Braze iOS SDK 3.3.1.
- Updates the Android plugin to use Braze Android SDK 2.2.2.
- Removes methods `RequestInAppMessage` and `RequestSlideup` as they are removed in the Braze native SDKs.

## 1.11.0

##### Breaking
- Updates the iOS plugin to use Braze iOS SDK 2.29.0, which drops support for iOS 7.
- Updates the Android plugin to use Braze Android SDK 2.0.0.
- Removes methods `SetUserIsSubscribedToEmails` and `SetUserBio` as they are removed in the Braze native SDKs.

## 1.10.0

##### Breaking
- Updates the Android plugin to use Braze Android SDK 1.18.0.
- Updates the iOS plugin to use Braze iOS SDK 2.25.0.

##### Added
- Adds a new method `DisplayNextInAppMessage(bool withDelegate)` in iOS plugin to display next in-app message from the in-app message stack, if there is one.
  - When the withDelegate is false, the in-app message will be displayed in Braze's default UI. Otherwise, it will follow the normal in-app message displaying path by going through the `- (ABKInAppMessageDisplayChoice)beforeInAppMessageDisplayed:(ABKInAppMessage *)inAppMessage withKeyboardIsUp:(BOOL)keyboardIsUp` in `AppboyUnityManager.m`.
- Updates the SDK to be compatible with Unity 5.5+.

## 1.9.0

##### Breaking
- Updates the SDK to require XCode 8.
- Updates the iOS plugin to use Braze iOS SDK 2.24.0, which supports iOS 10 and has the new in-app message V2 feature. The new in-app message V2 feature includes new in-app message UI change, event property trigger and templated in-app message.
- Updates the Android plugin to use Braze Android SDK 1.15.0 with the new triggered in-app message feature.

## 1.8.2

##### Added
- Updates the SDK to be compatible with Unity 5.4+.  In 5.4.0 Unity stopped implementing push delegates in UnityAppController in certain conditions, causing a crash when the Braze SDK tried to call them.

## 1.8.1

##### Fixed
- Updates SDK to modify delegate usage to fix an issue with push-click handling introduced in iOS 10 - see https://github.com/Appboy/appboy-ios-sdk/blob/master/CHANGELOG.md for details.

## 1.8.0

##### Breaking
- Updates the iOS plugin to use Braze iOS SDK 2.21.0, which drops support for iOS 6.
- Updates the Android plugin to use Braze Android SDK 1.13.5.
- Drops support for Windows Phone 8.

##### Added
- Adds support for passing triggered in-app messages to Unity.
- Bundles the Android and iOS plugins, along with Braze's native Unity functionality, as a Unity package.
- Adds a native Unity solution for automating the iOS SDK integration.
- Adds object handling for custom event and purchase properties.
- Exposes the extras on the News Feed Card model in Unity.
- Updates the Unity sample project to Unity v.5.3.5.

## 1.7.0

##### Breaking
- Updates the Android plugin to use Braze Android SDK 1.13.2.
- Updates the iOS plugin to use Braze iOS SDK 2.19.1.

##### Added
- Adds binding methods for setting user's Facebook and Twitter data (Android/iOS).
- Adds binding method to set the GCM registrationId (Android).
- Adds overloads to the binding methods for `logCustomEvent` and `logPurchase` that include properties (Android/iOS).

## 1.6.0

##### Breaking
- Updates the Android plugin to use Braze Android SDK 1.11.0.
- Updates the iOS plugin to use Braze iOS SDK 2.17.0.

## 1.5.0

##### Breaking
- Removes Unity 4 support. Unity 5 or higher is required to use this and future versions of the Braze Unity SDK. Unity 4 users may integrate Braze Unity SDK release 1.4.0, which includes analytics and push functionality but does not include native in-app messages on Android; however, upgrading to Unity 5 and using the latest Braze Unity SDK is recommended.
- Removes Froyo support, which was dropped in Unity 4.3. See https://unity3d.com/unity/whats-new/unity-4.3.
- Updates the iOS plugin to use Braze iOS SDK 2.12.1.
- Updates the Android plugin to use Braze Android SDK 1.8.0.

##### Added
- Adds native Braze ui capability to Android, including in-app messages, the News Feed, and Braze's webview. Note: As a result of this change, in-app messages will display automatically with native Braze layouts.  To disable this functionality, set com_appboy_inapp_show_inapp_messages_automatically to false in your Unity project's appboy.xml file.

## 1.4.0

##### Breaking
- Updates the iOS plugin to use Braze iOS SDK 2.11.2.
- Updates the Android plugin to use Braze Android SDK 1.7.2.

##### Added
- Adds a sample Unity application that uses the Braze plugin.
- Adds new in-app message models for the Modal and Full screen types added in Android 1.7 and iOS 2.11.

## 1.3.1

##### Breaking
- Updates the Android plugin to use Braze Android SDK 1.6.1.

## 1.3.0

##### Breaking
- Updates the Android plugin to use Braze Android SDK 1.6.0.
- Updates the iOS plugin to use Braze iOS SDK 2.9.3.

##### Added
- Adds plugins for Windows Phone 8 and Windows Universal apps.

##### Fixed
- Fixes the corrupted support-v4 jar in the Android plugin.

## 1.2.2

##### Breaking
- Updates the Android plugin to use Braze Android SDK 1.5.2.

##### Added
- Adds logFeedDisplayed, logFeedbackDisplayed, SetUserAvatarImageURL, IncrementCustomUserAttribute; updates email and push notification subscription types to current options supported in the Android and iOS SDKs (OPTED_IN, SUBSCRIBED, or UNSUBSCRIBED).

## 1.2.1

##### Breaking
- Updates the plugin libraries to Braze Android SDK 1.5.1 and Braze iOS SDK 2.9.1 (without Facebook iOS SDK Support).

##### Added
- Adds quantity parameter as an option when logging purchase. The quantity should be an unsigned interger greater than 0 and no larger than 100.
- New Custom Attribute Data Type (Array): Braze now supports custom attributes which contain an array of string elements. In addition, we also provide methods for adding or removing an string element from an array type custom attribute.

## 1.2

##### Breaking
- Updates the plugin libraries to Braze Android SDK 1.4.3 and Braze iOS SDK 2.8 (without Facebook iOS SDK Support).

##### Added
- Adds SlideFrom, ClickAction, DismissType and Uri to Slideup; added logging slideup impressions and clicks.
- Exposes the card models from Braze to Unity; adds methods for requesting feed from Braze server or cache; adds logging impressions and clicks.

##### Changed
- In Android SDK, changes the device identifier from the device persistent ANDROID_ID to a non device persistent identifier for compliance with the new Google Play Terms of Service.

## 1.1

##### Breaking
- Updates the plugin libraries to Braze Android SDK 1.2.1 and Braze iOS SDK 2.3.1 (without Facebook iOS SDK Support).

##### Added
- Adds Prime31 plugin compatibility.

## 1.0

##### Added
- Initial release
