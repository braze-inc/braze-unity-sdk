This repository contains the wrapper code and binaries for the unity plugins derived from the Appboy Android and iOS SDKs.

## Plugin Setup

Before you can start using Appboy in your Unity scripts, you'll need to import the plugin files to your Unity project. First, clone this repo. If you're not using any other plugins, all you have to do is copy the `Plugins` directory from this repo into the `Assets` folder of your Unity project. 

If you already have a `/<your-project>/Assets/Plugins` directory (probably because you're using another plugin already), copy `Plugins/Appboy/AppboyBinding.cs`, `Plugins/WindowsPhone8UnityAdapter.dll` and `Plugins/WindowsUniversalUnityAdapter.dll` into `/<your-project>/Assets/Plugins`. Then copy the contents of `Plugins/iOS`, `Plugins/Android`, `Plugins/WP8`, and `Plugins/Metro`  from this repo into `/<your-project>/Assets/Plugins/iOS`, `/<your-project>/Assets/Plugins/Android`, `/<your-project>/Assets/Plugins/WP8`, and `/<your-project>/Assets/Plugins/Metro` respectively.

## iOS Setup Instructions

1. First, generate your Xcode project in Unity by clicking on "File" -> "Build Settings...", then selecting iOS as the platform and clicking "Build". You'll be prompted for a name/location to build the app in. Since you'll be modifying the built output, we recommend including the built app in your project's root Unity folder (the same place that you have your `Assets` directory).

2. Confirm that Unity has copied the files `AppboyBinding.m`, `AppboyUnityManager.h`, and `AppboyUnityManager.mm` to the "Libraries" directory of your generated project. Note that they will not be included in the XCode project, so you'll need to check for their presence manually. If Unity fails to copy the files automatically, manually copy them from this repo.

3. Include AppboyUnityManager.h in your Xcode project (even though the file itself is already in the Libraries directory) by right clicking on Classes and selecting "Add Files to ..."

4. Now, you will need to perform the first three normal integration steps for adding the Appboy SDK to an iOS project. These steps are documented under "Basic SDK Integration," "Add the iOS Libraries," and "Configure the Appboy Library and Framework" in our iOS Integration Instructions at: http://documentation.appboy.com/ios-sdk-integration.html#cloning-the-appboy-sdk

<b>Note:</b> As of version 2.3.1, the Appboy iOS SDK has split into two libraries, AppboyKit and AppboyKitWithoutFacebookSupport. More details of the split can found here (https://github.com/Appboy/appboy-ios-sdk and https://github.com/Appboy/appboy-ios-sdk/blob/master/CHANGELOG.md#231). Since the Unity platform provides Facebook support and therefore the AppboyKitWithoutFacebookSupport is the correct SDK to use in your Unity application. 

Next, we'll need to make some modifications to your generated `Classes\AppController.mm`. A version of these modifications is included at the bottom of the integration directions linked to in the previous step, the following are meant to replace those).

1. At the top of the file add the following import statements:
`#import "AppboyKit.h"`
`#import "AppboyUnityManager.h"`

2. In the method `applicationDidFinishLaunchingWithOptions`, add the following code block above the return statement, replacing "YOUR-API-KEY" with your Appboy API key:
```
[Appboy startWithApiKey:@"YOUR-API-KEY"
        inApplication:application
        withLaunchOptions:launchOptions];
[Appboy sharedInstance].slideupDelegate = [AppboyUnityManager sharedInstance];
```

3. If you want to fetch the slide up message from Appboy, add this line to `applicationDidFinishLaunchingWithOptions`:
```
[[AppboyUnityManager sharedInstance] addSlideupListenerWithObjectName:@"Your Unity Game Object Name" callbackMethodName:@"Your Unity Call Back Method Name"];
````

4. Replace @"Your Unity Game Object Name" with the unity object name you want to listen to the slide up message, and also change @"Your Unity Call Back Method Name" to the call back method name that handles the slide up message. Please make sure the call back method is in the unity object you just passed in as the first parameter. 

5. If you want to use push notifications, also add this code to `applicationDidFinishLaunchingWithOptions`:
```
[[UIApplication sharedApplication] registerForRemoteNotificationTypes: 
          (UIRemoteNotificationTypeAlert | 
           UIRemoteNotificationTypeBadge |     
           UIRemoteNotificationTypeSound)];
[[AppboyUnityManager sharedInstance] addPushReceivedListenerWithObjectName:@"Your Unity Game Object Name" callbackMethodName:@"Your Unity Call Back Method Name"];
[[AppboyUnityManager sharedInstance] addPushOpenedListenerWithObjectName:@"Your Unity Game Object Name" callbackMethodName:@"Your Unity Call Back Method Name"];
```

6. This line to `didRegisterForRemoteNotificationsWithDeviceToken`:
```
[[Appboy sharedInstance] registerPushToken:
                [NSString stringWithFormat:@"%@", deviceToken]];
```

7. And this line to `didReceiveRemoteNotification`:
```
[[AppboyUnityManager sharedInstance] registerApplication:application
                didReceiveRemoteNotification:userInfo];
```

8. To help verify the code modifications you made, there is an example modified AppController.mm generated by Unity 4.1.2 in Docs/iOS in this repo.

<b>Note:</b> If you're using push notifications you'll need to follow the standard setup for Apple push which you can find at https://appboy.zendesk.com/entries/23690991-iOS-Push-Notifications

As you make updates to your app from Unity, you should choose the same location to generate the Xcode project each time. Unity will prompt you to replace or append the existing folder. If you choose "Append," you shouldn't have to redo any of your Appboy setup in the future.

## Android Setup Instructions

1. Confirm that you've copied the plugin folder correctly and identify all of the locations where you'll need to insert configuration specific to your app. From the root of your Unity project, you should be able to run the following and find all of the locations that must be modified to fully setup Appboy for Android:

`grep -r REPLACE Assets/Plugins/`

The output should look something like this:
```
Android/AndroidManifest.xml:  package="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER" android:versionCode="1" android:versionName="0.0">
Android/AndroidManifest.xml:  <permission android:name="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER.permission.C2D_MESSAGE" android:protectionLevel="signature" />
Android/AndroidManifest.xml:  <uses-permission android:name="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER.permission.C2D_MESSAGE" />
Android/AndroidManifest.xml:  <permission android:name="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER.permission.RECEIVE_ADM_MESSAGE" android:protectionLevel="signature" />
Android/AndroidManifest.xml:  <uses-permission android:name="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER.permission.RECEIVE_ADM_MESSAGE" />
Android/AndroidManifest.xml:  <category android:name="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER" />
Android/AndroidManifest.xml:        <category android:name="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER" />
Android/AndroidManifest.xml:        <action android:name="REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER.intent.APPBOY_NOTIFICATION_OPENED" />
Android/res/values/appboy.xml:  <string name="com_appboy_api_key">REPLACE_WITH_YOUR_APPBOY_API_KEY</string>
Android/res/values/appboy.xml:  <string name="com_appboy_push_gcm_sender_id">REPLACE_WITH_YOUR_GOOGLE_API_PROJECT_NUMBER</string>  <!-- Replace with your Google API project number -->
```

2. Find your "Bundle Identifier" from Unity. This is available from the Android tab of the "Player Settings" pane (accessible by clicking the Player Settings button in File -> Build Settings).

In AndroidManifest.xml, replace all instances of `REPLACE_WITH_YOUR_BUNDLE_IDENTIFIER` with the Bundle Identifier you found in Step 2. Your Bundle Identifier is usually of the form "com.unity.appname".

3. Configure the plugin by replacing a few values in the Appboy configuration file (`Plugins/Android/res/values/appboy.xml`). Replace the text `REPLACE_WITH_YOUR_APPBOY_API_KEY` with your API key. If you don't have your API key, simply login to the Appboy dashboard. If you don't have an app or account yet, you'll need to create them by following the wizard. Once you've created an app, navigate to the "Settings" page by clicking the gear icon to the right of your app name in the top left of the Apps tab. 

4. To enable GCM push notifications, insert your GCM Sender ID from Google into the same appboy.xml configuration file. If you don't have a GCM Sender ID yet, you'll need to follow the GCM setup instructions from Google. Once you have the ID, change `REPLACE_WITH_YOUR_GOOGLE_API_PROJECT_NUMBER` to your GCM ID. Since the GCM ID is a number, you shouldn't surround the value with quotes. Your ID should look something like `134664038331`.

5. If you are integrating <a href="https://developer.amazon.com/public/apis/engage/device-messaging">Amazon ADM push</a> into your Unity app, create a file called `api_key.txt` containing your ADM api key and place it in the `Plugins/Android/assets/` folder.  For more information on integrating Amazon ADM, please visit our <a href="https://documentation.appboy.com/Enabling_Message_Channels/Push_Notifications/FireOS">ADM push integration instructions</a>.

6. At this point, you should be able to run the grep command from Step 1 and have no results. If there are any additional instances of `REPLACE` remaining, repeat these steps.

7. Configure push notifications on the Appboy <a href="http://dashboard.appboy.com">dashboard</a>. Navigate back to the "Settings" page by clicking the gear icon to the right of your app name. Under the Push Notifications section of the App Settings page, insert your GCM API key. This is different from your GCM Sender ID and can be found on the API Access page of your Google API project. Your Google Project API key should look something like `ABcdEfGHij1_klm2NOPQrwTuVWxyZ3A4bCDeF5g`. Please refer back to <a href="https://developers.google.com/cloud-messaging/registration">GCM setup instructions</a> for more help.

### Advanced Android Integration Options
The default AndroidManifest.xml file provided has one Activity class registered.  This class is integrated with the Appboy SDK, calling the necessary methods to collect analytics, provide support for programmatic sending of feedback, in-app message callbacks, push notification callbacks. 

`com.appboy.unity.AppboyUnityPlayerNativeActivity`

<b>Note:</b> All Activity classes registered in your AndroidManifest.xml file must be fully integrated with the Appboy 
Android SDK. If you add your own Activity class, you must follow these <a href="https://documentation.appboy.com/SDK_Integration/Android_and_FireOS">integration instructions</a> to ensure that analytics are being collected. 

### Prime 31 compatability
In order to use the Appboy Unity plugin with Prime31 plugins, edit the AndroidManifest.xml to use the Prime31 compatible Activity classes and GCM receiver. Change all references of 
`com.appboy.unity.AppboyUnityPlayerNativeActvity`
`com.appboy.unity.AppboyUnityGcmReceiver`

to 

`com.appboy.unity.prime31compatible.AppboyUnityPlayerNativeActivity`
`com.appboy.unity.prime31compatible.AppboyUnityGcmReceiver`

### Overriding Appboy's Native Unity Player

Appboy's native Unity player class, `AppboyUnityPlayerNativeActivity`, extends `UnityPlayerNativeActivity` with session handling, in-app message registration, push notification analytics logging, and more.  If you are creating your own custom `UnityPlayerNativeActivity` in a library or plugin project, you will need to extend Appboy's `AppboyUnityPlayerNativeActivity` to integrate your custom functionality with Appboy.

<b>Note:</b> Before beginning work on extending `AppboyUnityPlayerNativeActivity`, follow our instructions for integrating Appboy into your Unity project.

1. Add the Appboy Android SDK as a dependency to your library or plugin project as described in the first three steps of our <a href="https://documentation.appboy.com/SDK_Integration/Android_and_FireOS#integrate-with-android-studio">Android Studio integration instructions</a>.

2. Integrate our Unity `.aar`, which contains Appboy's Unity-specific functionality, to your Android library project you are building for Unity.  The `.aar` is available from our <a href="https://github.com/Appboy/appboy-unity-sdk/blob/master/Plugins/Android/libs/appboy-unity.aar">public repo</a>.  Once our Unity library is successfully integrated, modify your `UnityPlayerNativeActivity` to extend `AppboyUnityPlayerNativeActivity`.  

3. Export your library or plugin project and drop it into `/<your-project>/Assets/Plugins/Android` as normal.  Do not include any Appboy source code in your library or plugin as they will already be present in `/<your-project>/Assets/Plugins/Android`.

4. Edit your `/<your-project>/Assets/Plugins/Android/AndroidManifest.xml` to specify your `AppboyUnityPlayerNativeActivity` subclass as the main activity.

You should now be able to package an `.apk` from the Unity IDE that is fully integrated with Appboy and contains your custom `UnityPlayerNativeActivity` functionality.

## Windows Phone 8 Setup Instructions

Once you have placed the plugin DLLs in the proper location in your Unity project, build your Windows Phone 8 application from your Unity project.  You will then have a working Windows Phone 8 XAML application with the required Appboy plugin DLLs referenced from your project.  

You can then follow the normal integration instructions found <a href="https://documentation.appboy.com/SDK_Integration/Windows/Phone8">here</a>, with the following exception:  

<b>Note:</b> Unity does processing and modification of Windows Phone 8 plugin DLLs.  As a result, you must use the DLLs that are output from the Unity build; do not replace a DLL with a different version after you've built from Unity.  In particular, if you are using our UI library, you must modify the references to point at the DLLs unity outputs (not the ones found using Nuget).  If you need to update a DLL version, you can place it in the ```Plugins/WP8``` directory and then use the ones output from Unity.

## Windows Universal Setup Instructions

Once you have placed the plugin DLLs in the proper location in your Unity project, build your Windows Store or Phone 8.1 application from your Unity project.  You will then have a working XAML application with the required Appboy plugin DLLs referenced from your project.  

You can then follow the normal integration instructions found <a href="https://documentation.appboy.com/SDK_Integration/Windows/Universal">here</a>.  
