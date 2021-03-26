#!/bin/bash

VERSION=$1

cp ~/.m2/repository/com/appboy/android-sdk-base/$VERSION/android-sdk-base-$VERSION.aar ../Assets/Plugins/Android/appboy.aar
cp ~/.m2/repository/com/appboy/android-sdk-ui/$VERSION/android-sdk-ui-$VERSION.aar ../Assets/Plugins/Android/appboy-ui.aar
cp ~/.m2/repository/com/appboy/android-sdk-unity/$VERSION/android-sdk-unity-$VERSION.aar ../Assets/Plugins/Android/appboy-unity.aar
