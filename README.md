This repository contains the the C# interface and native Unity functionality for the Unity plugins derived from the Braze Android, iOS, and Windows SDKs. Since version 1.5.0, Braze's Unity plugins require Unity 5. Unity 4 users may integrate Braze Unity SDK release 1.4.0, but full Braze functionality will not be supported. See the CHANGELOG for more information.

## Plugin Setup

Before you can start using Braze in Unity scripts, you'll need to import the plugin files to your Unity project.

**Recommended:** The Android and iOS plugins are bundled as a Unity package available for download from the [SDK release page][1].

**Manual Plugin Setup:** Alternatively, you can copy the plugins into your Unity project:
  1. First, clone this repo.
  2. If you're not using any other plugins, all you have to do is copy the `Plugins` directory from this repo into the `Assets` folder of your Unity project.
  3. If you already have a `/<your-project>/Assets/Plugins` directory (probably because you're using another plugin already), copy `Plugins/Appboy/AppboyBinding.cs`, `Plugins/WindowsPhone8UnityAdapter.dll` and `Plugins/WindowsUniversalUnityAdapter.dll` into `/<your-project>/Assets/Plugins`. Then copy the contents of `Plugins/iOS`, `Plugins/Android`, `Plugins/WP8`, and `Plugins/Metro`  from this repo into `/<your-project>/Assets/Plugins/iOS`, `/<your-project>/Assets/Plugins/Android`, `/<your-project>/Assets/Plugins/WP8`, and `/<your-project>/Assets/Plugins/Metro` respectively.

## Android Setup

To integrate Braze into your Android Unity application, complete our [Android Unity integration instructions][3].

## iOS Setup

To integrate Braze into your iOS Unity application, complete our [iOS Unity integration instructions][2].


## Windows Universal Setup

Once you have placed the plugin DLLs in the proper location in your Unity project, build your Windows Store or Phone 8.1 application from your Unity project.  You will then have a working XAML application with the required Braze plugin DLLs referenced from your project.  

You can then follow the normal integration instructions found [here][4].  


[1]: https://github.com/Appboy/appboy-unity-sdk/releases
[2]: https://www.braze.com/documentation/Unity/iOS/
[3]: https://documentation.braze.com/SDK_Integration/Unity/Android
[4]: https://documentation.braze.com/SDK_Integration/Windows/Universal
