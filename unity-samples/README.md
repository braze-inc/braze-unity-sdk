unity-samples
=============

This sample app contains a Unity project that can build an Appboy-integrated iOS app and an Appboy-integrated Android app.

#### Build Process

You need to switch platforms to build iOS (append to the current project) or Android (which makes an APK).  Do this in the Build Settings menu.

To Run the Android apk on a device:

* How to install apk to device

`adb install /path/to/app.apk` (Device doesn't have the app installed)     

`adb install -r /path/to/app.apk` (Device already has the app installed)
