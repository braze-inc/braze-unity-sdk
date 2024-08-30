⚠️ In version 4.0.0, we changed the iOS bridge from AppboyKit, which is written in Objective-C, to the new [Swift SDK](https://github.com/braze-inc/braze-swift-sdk). If you are upgrading from a version below 4.0.0 to a version above 4.0.0, please read [the instructions](https://github.com/braze-inc/braze-unity-sdk/blob/master/CHANGELOG.md#400) to ensure a smooth transition and backward compatibility.

## 7.0.0

##### Breaking
- Updated the native Android bridge [from Braze Android SDK 30.3.0 to 32.1.0](https://github.com/braze-inc/braze-android-sdk/compare/v30.3.0...v32.1.0#diff-06572a96a58dc510037d5efa622f9bec8519bc1beab13c9f251e97e657a9d4ed).
- Updated the native iOS bridge [from Braze Swift SDK 9.0.0 to 10.1.0](https://github.com/braze-inc/braze-swift-sdk/compare/9.0.0...10.1.0#diff-06572a96a58dc510037d5efa622f9bec8519bc1beab13c9f251e97e657a9d4ed).

##### Fixed
- Fixed an issue on Android where the `AndroidPushReceivedTimestamp` of a `PushNotification` was incorrectly translated from a `long` to an `int`. The value received by the C# layer is now the same as the value sent in the JSON.

##### Added
- On the `FeatureFlag` object, added these APIs to get specific properties:
  - `featureFlag.GetTimestampProperty(string id)` for accessing Int Unix UTC millisecond timestamps as `long?`s.
  - `featureFlag.GetJSONProperty(string id)` for accessing JSON objects as `JSONObject?` types.
  - `featureFlag.GetImageProperty(string id)` for accessing image URLs as `string?`s.
- Updated the following APIs to use Pascal case and deprecated the previous variant:
  - `featureFlag.GetStringProperty(string id)`, replacing `getStringProperty`
  - `featureFlag.GetIntegerProperty(string id)`, replacing `getIntegerProperty`
  - `featureFlag.GetDoubleProperty(string id)`, replacing `getDoubleProperty`
  - `featureFlag.GetBooleanProperty(string id)`, replacing `getBooleanProperty`
- Added the method `AppboyBinding.SetUserLanguage(string)` for setting the language user attribute.
- Added the method `AppboyBinding.SetAdTrackingEnabled(bool adTrackingEnabled, string googleAdvertisingId)` to set the `adTrackingEnabled` flag on iOS and both the `adTrackingEnabled` flag and the `Google Advertising ID` on Android.
- Added support to modify the allow list for Braze tracking properties via the following C# properties and methods:
  - `TrackingProperty` class
  - `TrackingPropertyAllowList` class
  - `AppboyBinding.UpdateTrackingPropertyAllowList(TrackingPropertyAllowList)` to modify the allow list for Braze tracking properties.
  - For details, refer to the [Braze iOS Privacy Manifest documentation](https://www.braze.com/docs/developer_guide/platform_integration_guides/swift/privacy_manifest).
- Added the `InAppMessage.IsTestSend` property to indicate whether an in-app message was sent as a test send.
- Added the method `AppboyBinding.HideCurrentInAppMessage()` to hide the visible in-app message, if applicable.

## 6.0.0

##### Breaking
- Updated the native iOS bridge [from Braze Swift SDK 7.7.0 to 9.0.0](https://github.com/braze-inc/braze-swift-sdk/compare/7.7.0...9.0.0#diff-06572a96a58dc510037d5efa622f9bec8519bc1beab13c9f251e97e657a9d4ed).
- Updated the native Android bridge [from Braze Android SDK 29.0.1 to 30.3.0](https://github.com/braze-inc/braze-android-sdk/compare/v29.0.1...v30.3.0#diff-06572a96a58dc510037d5efa622f9bec8519bc1beab13c9f251e97e657a9d4ed).

##### Added
- Added iOS _In App Message Manager Initial Display Operation_ configuration setting.
  - This setting allows you to configure the initial display operation for in-app messages on iOS. For instance, set it to _Display Later_ to delay the initial display of in-app messages until after your game has finished loading, and use the `AppboyBinding.DisplayNextInAppMessage()` method to display it when ready.
- Added the _Entitlements File Path_ configuration setting.
  - This setting allows you to specify the path to an entitlements file to be used / modified by Braze in the Xcode project.
  - If left blank, the default entitlements file will be used / created.

## 5.2.1

##### Fixed
- Fixed an issue with calling `LogInAppMessageClicked()`, `LogInAppMessageImpression()`, `LogInAppMessageButtonClicked`, and `LogContentCardDismissed(card)` on Android.

## 5.2.0

##### Added
- Updated the native iOS bridge [from Braze Swift SDK 7.4.0 to 7.7.0](https://github.com/braze-inc/braze-swift-sdk/compare/7.4.0...7.7.0#diff-06572a96a58dc510037d5efa622f9bec8519bc1beab13c9f251e97e657a9d4ed).
- Updated the version of `SDWebImage` from 5.15.5 to [5.19.0](https://github.com/SDWebImage/SDWebImage/releases/tag/5.19.0) when automatically importing via "Braze Configuration".
  - This version of `SDWebImage` contains a Privacy Manifest file. See [Apple's documentation](https://developer.apple.com/documentation/bundleresources/privacy_manifest_files) for more information.

## 5.1.0

##### Added
- Added support for custom user attributes to be nested objects.
  - `AppboyBinding.SetCustomUserAttribute(string, Dictionary<string, object>);`
  - `AppboyBinding.SetCustomUserAttribute(string, List<Dictionary<string, object>>);`
  - You can specify that the Dictionary be merged with the existing value.
    - `AppboyBinding.SetCustomUserAttribute(string, Dictionary<string, object>, bool merge);`
  - See https://www.braze.com/docs/user_guide/data_and_analytics/custom_data/custom_attributes/nested_custom_attribute_support/ for more information.
- Added `AppboyBinding.LogFeatureFlagImpression(string id)` to log a Feature Flag impression.

## 5.0.0

#### Breaking
- Updated the native iOS bridge [from Braze Swift SDK 6.1.0 to 7.4.0](https://github.com/braze-inc/braze-swift-sdk/compare/6.1.0...7.4.0#diff-06572a96a58dc510037d5efa622f9bec8519bc1beab13c9f251e97e657a9d4ed).
  - The iOS repository link now points to the prebuilt dynamic XCFrameworks from this repo: `https://github.com/braze-inc/braze-swift-sdk-prebuilt-dynamic`.
- Updated the native Android bridge [from Braze Android SDK 27.0.1 to 29.0.1](https://github.com/braze-inc/braze-android-sdk/compare/v27.0.0...v29.0.1#diff-06572a96a58dc510037d5efa622f9bec8519bc1beab13c9f251e97e657a9d4ed).
- `AppboyBinding.GetFeatureFlag(string id)` will now return `null` if the Feature Flag does not exist.
- `FEATURE_FLAGS_UPDATED` will only trigger when a refresh request completes with success or failure, and upon initial subscription if there was previously cached data from the current session.

##### Fixed
- Fixed an issue introduced in `4.0.0` which prevented compilation on Xcode 14.3+.
  - The additional `-fcxx-modules` flag under "Other C++ Flags" has been removed from the build process.
  - The dependencies `BrazeKit` and `BrazeUI` now get directly linked to the main app's target, instead of being transitively linked via `UnityFramework`.
- Changed the iOS plugin to automatically update up to the next minor version, instead of up to the next major version.

## 4.3.0

> Starting with this release, this SDK will use [Semantic Versioning](https://semver.org/).

##### Added
- Updated the Android plugin to use [Braze Android SDK 27.0.1](https://github.com/braze-inc/braze-android-sdk/blob/master/CHANGELOG.md#2701).

## 4.2.0

#### Breaking
- Updated the Android plugin to use [Braze Android SDK 26.2.0](https://github.com/braze-inc/braze-android-sdk/blob/master/CHANGELOG.md#2620).

##### Fixed
- Fixed an issue on Android where In-App Message events would not properly get forwarded to the Unity layer.

## 4.1.1

##### Fixed
- Fixed the Braze iOS Push settings not being applied in the sample app code.

## 4.1.0

##### Added
- Added support for Feature Flags.
  - `AppboyBinding.GetFeatureFlag(string id)` - Get a single Feature Flag.
  - `AppboyBinding.GetAllFeatureFlags()` - Get all Feature Flags.
  - `AppboyBinding.RefreshFeatureFlags()` - Request a refresh of Feature Flags.
- Adds the ability to subscribe to Feature Flag updates.
  - Set the values for `Game Object Name` and `Callback Method Name` under "Braze Configuration" > "Feature Flags" to the corresponding values in your application.
- On `FeatureFlag` object, adds these APIs to get specific properties:
  - `featureFlag.getStringProperty(string id)`
  - `featureFlag.getIntegerProperty(string id)`
  - `featureFlag.getDoubleProperty(string id)`
  - `featureFlag.getBooleanProperty(string id)`
- Updated the iOS plugin to use the [Braze Swift SDK 6.1.0](https://github.com/braze-inc/braze-swift-sdk/blob/main/CHANGELOG.md#610).

## 4.0.0

#### Breaking
- Updated the Android plugin to use [Braze Android SDK 25.0.0](https://github.com/braze-inc/braze-android-sdk/blob/master/CHANGELOG.md#2500)
  - Update `com.appboy.unity.AppboyUnityPlayerActivity` references to `com.braze.unity.BrazeUnityPlayerActivity`.
- Updates the native iOS bridge to use the new [Swift SDK version 6.0.0](https://github.com/braze-inc/braze-swift-sdk/blob/main/CHANGELOG.md#600).
  - Replace any instances of `#import <Appboy_iOS_SDK/AppboyKit.h>` in your iOS native code with:
  ```
  @import BrazeKit;
  @import BrazeUI; // Only needed if you use the UI in the file
  ```
  - Replace the prefix `ABK` with `BRZ` for any of the constants found in [AppboyUnityManager.h](https://github.com/braze-inc/braze-unity-sdk/blob/master/Assets/Plugins/iOS/AppboyUnityManager.h).
  - Update your `AppDelegate` file with the code snippet below. Reference our [sample code here](https://github.com/braze-inc/braze-unity-sdk/blob/master/Assets/Plugins/iOS/AppboyAppDelegate.mm).
  ```
  BRZConfiguration *config = [[BRZConfiguration alloc] init];
  Braze *braze = [AppboyUnityManager initBraze:config];
  ```
  - This migration requires re-identifying users. To do so, you must call the `changeUser` method on the Braze instance for non-anonymous users. You can read more about it [here](https://braze-inc.github.io/braze-swift-sdk/documentation/braze/appboy-migration-guide/#Re-identify-users).
  - Reference [this Migration Guide](https://braze-inc.github.io/braze-swift-sdk/documentation/braze/appboy-migration-guide) and [this documentation](https://braze-inc.github.io/braze-swift-sdk/documentation/brazekit) for additional context around specific migration / integration steps.
- Requires Unity version [2020.3.42](https://unity.com/releases/editor/whats-new/2020.3.42) or newer.
- The following changes have been made to `AppboyUnityManager.h`:
  - Renames `addInAppMessageListenerWithObjectNameAndSetDelegate:callbackMethodName:` to `addInAppMessageListenerWithObjectName:callbackMethodName:`.
  - Renames `ABKUnityMessageType` to `BRZUnityMessageType`.
  - Removes `parsePlist` since it is implemented as a part of `initBraze:`.
- Removes `setFacebookData` and `setTwitterData` from `AppboyBinding.cs`.
- Removes the release asset `Appboy-nodeps.unitypackage` in favor of using the "Braze Configuration" option mentioned below.

##### Added
- Adds a configuration option under "Braze Configuration" which allows you to toggle between importing `SDWebImage` into your iOS application.
  - If checked, the build process will automatically add [SDWebImage version 5.15.5](https://github.com/SDWebImage/SDWebImage/releases/tag/5.15.5) to your project. If unchecked, it will be omitted.

## 3.11.0

##### Breaking
- Updated the Android plugin to use Braze Android SDK 23.3.0.
- Streamlined the integration required for handling push notifications on Android.
  - References to `AppboyUnityPushBroadcastReceiver` must be removed from your `AndroidManifest.xml` file.
  - Removed `binding.FlushAndroidPendingPushIntents()`.

## 3.10.0

##### Fixed
- Removed `AppboyBinding.LogContentCardsDisplayed()`.

## 3.9.0

##### Breaking
- Updated the Android plugin to use Braze Android SDK 23.1.0.
- Added the ability to request push notification permissions on Android 13+ devices via `Appboy.AppboyBinding.PromptUserForPushPermissions(false)`.
  - Either `true` or `false` result in the push prompt being shown, on Android. The parameter is unused.

##### Fixed
- Fixed an issue where `AppboyBinding.logPurchase()` calls could fail on Android based on the device locale.

## 3.8.1

##### Added
- Added Assembly Definitions for the SDK.
  - See [the Unity Asm Def docs](https://docs.unity3d.com/Manual/ScriptCompilationAssemblyDefinitionFiles.html) for more information.
  - Special thanks to @starikcetin!

## 3.8.0

##### Breaking
- Removed `AppboyBinding.SetUserAvatarImageURL()` from the binding.
- `Utilities/MiniJson.cs` now uses `InvariantCulture` during serialization.
- Updated the Android plugin to use [Braze Android SDK 21.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#2100)
  - This SDK version relies on `implementation "androidx.recyclerview:recyclerview:1.2.1` or higher.

##### Added
- Added `AppboyBinding.SetUserLastKnownLocation()` to manually set the last known location for the user.
- Added SDK Authentication Support.
  - Added `AppboyBinding.SetSdkAuthenticationSignature(sdkAuthSignature)` to set the signature only.
  - Added `AppboyBinding.ChangeUser(userId, sdkAuthSignature = null)` to optionally set the SDK Authentication signature when changing users.
  - Added SDK Authentication under "Braze Configuration". There are separate configurations for iOS and Android. If you want to configure at runtime, use:
    - `AppboyBinding.IOSSdkAuthenticationFailureGameObjectName`, `AppboyBinding.IOSSdkAuthenticationEnabled`, and `AppboyBinding.IOSSdkAuthenticationFailureCallbackMethodName` for iOS.
    - `AppboyBinding.AndroidSdkAuthenticationEnabled`, `AppboyBinding.AndroidSdkAuthenticationFailureGameObjectName`, and `AppboyBinding.AndroidSdkAuthenticationFailureCallbackMethodName` for Android.

##### Changed
- Updated the iOS plugin to use Braze iOS SDK 4.4.3.

## 3.7.1

##### Changed
- Updated the Android plugin to use Braze Android SDK 18.0.1.

## 3.7.0

##### Breaking
- Updated the Android plugin to use Braze Android SDK 18.0.0.
  - This SDK version requires a dependency on Kotlin coroutines. This can be added to your `mainTemplate.gradle` file via `implementation "org.jetbrains.kotlinx:kotlinx-coroutines-android:1.5.2"`

##### Fixed
- Fixed an issue where `AppboyUnityPlayerActivity` could not be extended on Android.

## 3.6.0

##### Breaking
- Updated the Android plugin to use Braze Android SDK 16.0.0.
  - This SDK version requires a dependency on Kotlin. This can be added to your `mainTemplate.gradle` file via `implementation "org.jetbrains.kotlin:kotlin-stdlib:1.5.21"`
  - This SDK version has removed a dependency on the `appcompat` library.

##### Added
- Added `AppboyBinding.AddToSubscriptionGroup()` and `AppboyBinding.RemoveFromSubscriptionGroup()` to the binding.
- Added the `DisplayNextInAppMessage()` method, available on both iOS and Android.
- Added the ability to receive in-app messages UI events via `AppboyBinding.inAppMessageListener`. See `BrazeInAppMessageListener` for more information.

##### Changed
- Updated the native iOS bridge to [Braze iOS SDK 4.3.3](https://github.com/Appboy/appboy-ios-sdk/releases/tag/4.3.3).
- Removed the iOS specific method `DisplayNextInAppMessage(bool withDelegate)`.

## 3.5.1

##### Fixed
- Fixed an issue where simulator architectures were included in the iOS framework.

## 3.5.0

##### Breaking
- Updated the Android plugin to use Braze Android SDK 15.0.0.

##### Changed
- Updated the native iOS bridge to [Braze iOS SDK 4.3.2](https://github.com/Appboy/appboy-ios-sdk/releases/tag/4.3.2).

## 3.4.0

##### Added
- Added the ability to change the display flow of In-App Messages directly from Unity code via `AppboyBinding.SetInAppMessageDisplayAction()`.
  - See the `BrazeUnityInAppMessageDisplayActionType` enum.
- Added the ability to open the default Content Cards UI via `DisplayContentCards()` on the binding.
  - For Android, this requires the following dependencies:  
    ```
    implementation "androidx.swiperefreshlayout:swiperefreshlayout:+"
    implementation "androidx.recyclerview:recyclerview:+"
    ```

## 3.3.0

##### Breaking
- Updated the Android plugin to use Braze Android SDK 14.0.0.

##### Added
- Added the ability to delay sending Android push notification data to the Unity layer until the native libraries have finished loading and any AppboyBinding method has been called.
  - Configured under "Braze Configuration -> Automate Unity Android Integration -> Push Configuration -> Delay Sending Push Notification Intents".
  - Pending Android push notification intents are flushed automatically after the first call to any method on the Android binding is made.
  - To optionally have finer control over when these push notification intents are flushed, call the following from Unity:
  ```
  #if UNITY_ANDROID
    BrazeAndroidPlatform binding = (BrazeAndroidPlatform) Appboy.AppboyBinding.mBinding;
    binding.FlushAndroidPendingPushIntents();
  #endif
  ```

## 3.2.0

##### Breaking
- Updated the Android plugin to use Braze Android SDK 14.0.0.1.

##### Fixed
- Fixed an issue introduced in 3.1.0 on Android where push opens could fail to launch the application on certain devices.
- Fixed an issue introduced in 3.0.0 in the iOS binding where `enableSDK()` and `disableSDK()` had swapped behaviors.
  
## 3.1.0

**Important:** This release has known issues with push notifications on Android. This is fixed in version 3.2.0.

##### Changed
- Updated the Android plugin to use [Braze Android SDK 13.1.2](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#1312).

## 3.0.0

##### Important
- This release contains several minor changes to our iOS push code. Most integrations will be unaffected, however, we recommend additional testing.

##### Breaking
- Updated the Android plugin to use [Braze Android SDK 13.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#1300).
- If automatic iOS push integration is enabled, Braze will now automatically add the Xcode Push Capability in `OnPostprocessBuild()`.
  - To disable this, check "Disable Automatic Push Capability" in the Braze configuration editor.
- In `AppboyUnityManager.mm`:
  - `registerForRemoteNotifications:` has been replaced with `registerForRemoteNotificationsWithProvisional:(BOOL)provisional`. If using this method, note that the new method calls Apple's APIs directly and does not respect Braze configuration's settings for automatic push integration and registration.
  - `registerApplication:didReceiveRemoteNotification:fetchCompletionHandler:` and `registerPushToken` have also been updated to no longer internally read Braze config.
  - Several obsolete methods were removed, including methods where the manager trivially wrapped the native `Appboy` instance.
  - Most integrations will not be affected by these changes.

##### Added
- Added the option to disable iOS provisional push authorization when automatic iOS push integration is enabled.
  - To use, check "Disable Provisional Authorization" in the Braze configuration editor.
  - When provisional push authorization is disabled, users will see the native push prompt dialog at app startup.
- Added `AppboyBinding.ConfigureListener()` as an alternative method for configuring GameObject listeners for push, in-app messages, Content Cards, and News Feed. Use the new `BrazeUnityMessageType` enum to specify the desired message type.
  - On iOS, to receive push opened and received callbacks, `Integrate Push With Braze` must be enabled.
- Added `AppboyBinding.PromptUserForPushPermissions(bool provisional)` to request authorization and register for push notifications on iOS.
  - Set `provisional` to `true` to request provisional authorization, or `false` to show the push prompt directly.
  - If you would like to read the user response, pass an instance of `PushPromptResponseReceived` into the method.
  - We recommend using this method with the following settings:
    - `Integrate Push With Braze` enabled.
    - `Disable Automatic Push Registration` enabled.
- Added `AppboyBinding.SetPushTokenReceivedFromSystemDelegate()` to receive push tokens Braze receives from the OS (iOS only).

##### Fixed
- Braze push delegates are no longer called automatically in fully manual integrations.
  - Automatic push integration must be enabled for Braze push delegates to function.

## 2.8.0

##### Breaking
- Updated the Android plugin to use [Braze Android SDK 12.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#1200).
- Updated the native iOS bridge to [Braze iOS SDK 3.31.2](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.31.2).

##### Added
- Added `AppboyBinding.AddAlias()` to the binding.

## 2.7.1

##### Fixed
- Fixed an issue where the return type for the Android implementation of `setIsDismissed` in `AppboyBinding` was incorrectly set to `bool`.
- Removed a deprecated usage of `PBXProject.GetUnityTargetName()`.

## 2.7.0

##### Breaking
- Updated the native iOS bridge to [Braze iOS SDK 3.29.1](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.29.1).
- Updated the Android plugin to use [Braze Android SDK 11.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#1100).

##### Fixed
- Fixed a metadata issue for Android artifacts.

## 2.6.0

##### Breaking
- Updated the Android plugin to use [Braze Android SDK 10.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#1000).
  - Note that this SDK release internally uses AndroidX depdendences. See the linked SDK changelog entry for more information.
  - All "jetified" packages are removed since the android artifacts are now fully on AndroidX.
- Removed `PushNotification.cs#CollapseKey`.

##### Changed
- Added `PushNotification.cs#RawJsonString`, `PushNotification.cs#AndroidPushReceivedTimestamp`.

##### Added
- Added Braze configuration option for Android to toggle automatically displaying In-App Messages.
  
##### Fixed
- Fixed push notification parsing for Android in `PushNotification.cs`.
- Fixed use of outdated `UNITY_IPHONE` directive in `Card.cs`.
  
## 2.5.0

##### Breaking
- Updated the native iOS bridge to [Braze iOS SDK 3.27.0](https://github.com/Appboy/appboy-ios-sdk/blob/master/CHANGELOG.md#3270). This release adds support for iOS 14 and requires XCode 12. Please read the Braze iOS SDK changelog for details.

## 2.4.0

##### Changed
- Updated the Android plugin to use [Braze Android SDK 8.1.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#810).
- Updated the native iOS bridge to [Braze iOS SDK 3.26.1](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.26.1).

##### Fixed
- Fixed return type of `AppboyBinding.RegisterAppboyPushMessages()` for iOS to be `void`.
- Fixed the automatic config for Android push icons to correctly used `drawable` instead of `string`.

## 2.3.0

##### Changed
- Updated the Android plugin to use [Braze Android SDK 8.0.1](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#801).
- Updated the native iOS bridge to [Braze iOS SDK 3.25.0](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.25.0).

##### Added
- Added functionality to apps using the UserNotification framework to forward via `UnitySendMessage` push notification opens to game object methods on iOS.

## 2.2.2

##### Added
- Added a method for manually providing a push registration token via `AppboyBinding.RegisterAppboyPushMessages()` for iOS.
  - Note that the Android implementation accepts `string`.
  - The iOS implementation accepts `byte[]`.
  
##### Fixed
- Fixed an issue which caused the extras dictionary to not be populated in JSON push payloads sent by the SDK to Unity listeners.

## 2.2.1

##### Added
- Added an implementation for `AppboyBinding.GetInstallTrackingId()` for iOS.

##### Changed
- Updated the Android plugin to use [Braze Android SDK 7.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#700).

## 2.1.0

##### ⚠ Breaking
- Removes the unused `CrossPromotionSmall.cs` News Feed model.

##### Added
- Added the ability to automatically integrate Unity builds on Android in the 'Braze Configuration' window. Using this option obviates the need for a manually created `appboy.xml` file to configure Android apps.
  - If enabled, an autogenerated config file will be generated at `/unity-android-resources/res/values/appboy-generated.xml` in your temp gradle out directory. If disabled, this auto-generated file will be deleted.
  - If already using an `appboy.xml` file, the values from that configuration should be transferred in order to prevent build resource XML conflicts. 
- Added `AppboyBinding.LogContentCardDismissed()` to log a Content Card dismissal.
- Added Other, Unknown, Not Applicable, and Prefer not to Say options for user gender.
- Added the ability to set the endpoint for iOS via the automatic config window `Braze Configuration`.
- Added support for `UserNotifications` Framework on iOS for push.

##### Changed
- Updated the Android plugin to use [Braze Android SDK 6.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#600).
- Removed root level `Libraries` folder. Now, iOS frameworks exclusively exist under `Assets/Plugins/iOS/`.

## 2.0.0

##### ⚠ Breaking
- The structure of the Android plugin (i.e. found under `Assets/Plugins/Android/`) has been changed to only include AAR artifacts. All other folders have been removed.
  - Additionally, depending on the `.unitypackage` chosen, you can import jetified Braze AAR artifacts. These artifacts were transformed using the [`jetifier`](https://developer.android.com/studio/command-line/jetifier) tool to be compatible with `androidX` support libraries instead of the `v4` support libraries. This is particularly relevant if you wish to update your [`unity firebase messaging`](https://firebase.google.com/docs/unity/setup) dependencies to the latest versions, which use and require `androidX` support libraries. Please see our documentation for more information.

##### Added
- Added `AppboyBinding.RequestImmediateDataFlush()` to immediately request a data flush.
- Added `AppboyBinding.RequestGeofences(latitude, longitude)` to manually request Braze Geofences.
- Adds an option to disable automatic geofence requests on session start. Note that this is required in order to manually request geofences.
  - iOS - You can do this in the plist by adding the Appboy dictionary to your Info.plist file. Inside the Appboy dictionary, add the `DisableAutomaticGeofenceRequests` boolean subentry and set the value to `YES`.
  - Android - You can do this by configuring the boolean value for `com_appboy_automatic_geofence_requests_enabled` to `false` in your `appboy.xml`.

##### Changed
- Updated the Android plugin to use [Braze Android SDK 5.0.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#500).
- Updated the native iOS bridge to [Braze iOS SDK 3.21.3](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.21.3).

## 1.22.0

##### Added
- Added the ability to receive Content Cards data within a Unity Game Object or method in C#.
  - On Android, set `com_appboy_content_cards_updated_listener_game_object_name` and `com_appboy_content_cards_updated_listener_callback_method_name` in your `appboy.xml` to set your Game Object and Callback Method for receiving Content Cards updates.
  - On iOS, set `ContentCardsCallbackMethodName` and `ContentCardsGameObjectName` inside of a dictionary named `Unity` set inside a dictionary named `Appboy` within your `Info.plist`. Alternatively, use the configuration UI under the `Braze` menu added when integrating the Braze Unity package.
  - Our [Callback example class](https://github.com/Appboy/appboy-unity-sdk/blob/master/Assets/Plugins/Appboy/Tests/AppboyBindingTester.cs) contains an example of parsing the received Content Cards json as well as using our provided convenience model class, `ContentCard.cs` to wrap the data and log analytics. Currently, `ContentCard.cs` supports logging clicks and impressions.

## 1.21.2

**Important:** This patch updates the Braze iOS SDK Dependency from 3.20.1 to 3.20.2, which contains important bugfixes. Integrators should upgrade to this patch version. Please see the [Braze iOS SDK Changelog](https://github.com/Appboy/appboy-ios-sdk/blob/master/CHANGELOG.md) for more information.

##### Changed
- Updated the native iOS bridge to [Braze iOS SDK 3.20.2](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.20.2).

## 1.21.1

**Important:** This release has known issues displaying HTML in-app messages. Do not upgrade to this version and upgrade to 1.21.2 and above instead. If you are using this version, you are strongly encouraged to upgrade to 1.21.2 or above if you make use of HTML in-app messages.

##### Changed
- Updated the native iOS bridge to [Braze iOS SDK 3.20.1](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.20.1).

## 1.21.0

**Important:** This release has known issues displaying HTML in-app messages. Do not upgrade to this version and upgrade to 1.21.2 and above instead. If you are using this version, you are strongly encouraged to upgrade to 1.21.2 or above if you make use of HTML in-app messages.

##### Breaking
- Updated the iOS plugin to use [Braze iOS SDK 3.20.0](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.20.0).
- **Important:** Braze iOS SDK 3.20.0 contains updated push token registration methods. We recommend upgrading to these methods as soon as possible to ensure a smooth transition as devices upgrade to iOS 13. In `application:didRegisterForRemoteNotificationsWithDeviceToken:`, replace
```
[[Appboy sharedInstance] registerPushToken:
                [NSString stringWithFormat:@"%@", deviceToken]];
```
with
```
[[Appboy sharedInstance] registerDeviceToken:deviceToken]];
```
- Updated the Android plugin to use [Braze Android SDK 3.7.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#370).
- Note: This Braze Unity SDK release updates to a Braze Android SDK dependency which no longer enables automatic Braze location collection by default. Please consult the changelogs for information on how to continue to enable automatic Braze location collection, as well as further information on breaking changes.
- Removes the Feedback feature and all associated methods, classes, and interfaces.

## 1.20.0

##### Breaking
- Updated the iOS plugin to use [Braze iOS SDK 3.18.0](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.18.0).
- Note: This Braze Unity SDK release updates to a Braze iOS SDK dependency which no longer enables automatic Braze location collection by default. Please consult the changelogs for information on how to continue to enable automatic Braze location collection, as well as further information on breaking changes.

##### Added
- Added `RequestLocationInitialization` to the Appboy interface for requesting Braze geofences and a single location update.

## 1.19.0

##### Breaking
- Updated the iOS plugin to use [Braze iOS SDK 3.16.0](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.16.0).

## 1.18.0

##### Breaking
- Updated the iOS plugin to use [Braze iOS SDK 3.14.0](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.14.0).

## 1.17.0

##### Breaking
- Updated the Android plugin to use [Braze Android SDK 3.2.1](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#321).
  - Added `AppboyFirebaseMessagingService` to directly use the Firebase messaging event `com.google.firebase.MESSAGING_EVENT`. This is now the recommended way to integrate Firebase push with Braze. The `AppboyFcmReceiver` should be removed from your `AndroidManifest` and replaced with the following:
    ```
    <service android:name="com.appboy.AppboyFirebaseMessagingService">
      <intent-filter>
        <action android:name="com.google.firebase.MESSAGING_EVENT" />
      </intent-filter>
    </service>
    ```
    - Also note that any `c2dm` related permissions should be removed from your manifest as Braze does not require any extra permissions for `AppboyFirebaseMessagingService` to work correctly.

## 1.16.0

##### Breaking
- Updated the iOS plugin to use [Braze iOS SDK 3.11.0](https://github.com/Appboy/appboy-ios-sdk/releases/tag/3.11.0).
- Updated the Android plugin to use [Braze Android SDK 3.1.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#310).

##### Fixed
- Fixed an issue where the binding would cache the Appboy singleton instance.
- Fixed `Card.cs` to always return `CardCategory.NO_CATEGORY` in all cases where no valid categories are found.
  - See https://github.com/Appboy/appboy-unity-sdk/pull/43. Thanks @Sencerd!

##### Changed
- Updated the Appboy configuration editor to use Braze branding.
- By default, native in-app messages on Android no longer show the status bar.

## 1.15.0

##### Breaking
- Updated the Android plugin to use [Braze Android SDK 2.7.0](https://github.com/Appboy/appboy-android-sdk/blob/master/CHANGELOG.md#270).
  - __Important:__ Note that in Braze Android SDK 2.7.0, `AppboyGcmReceiver` was renamed to `AppboyFcmReceiver`. This receiver is intended to be used for Firebase integrations. Please update the `AppboyGcmReceiver` declaration in your `AndroidManifest.xml` to reference `AppboyFcmReceiver` and remove the `com.google.android.c2dm.intent.REGISTRATION` intent filter action.

##### Added
- Added `SetAttributionData` to the Appboy interface.

## 1.14.0

##### Breaking
- Updated the iOS plugin to use Braze iOS SDK 3.7.1.
  - Updated the iOS plugin to use the Braze iOS SDK framework instead of local files.
  - As a result, imports using local file syntax (e.g. `"AppboyKit.h"`) must change to framework (e.g.`<Appboy_iOS_SDK/AppboyKit.h>`) syntax.
- Updates the Android plugin to use Braze Android SDK 2.6.0.
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
