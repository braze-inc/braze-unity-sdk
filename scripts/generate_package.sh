#!/bin/bash

APPBOY_IOS_SDK="Appboy_iOS_SDK.framework"
SD_WEB_IMAGE="SDWebImage.framework"
PROJECT_ROOT=$( cd "$( dirname "${BASH_SOURCE[0]}" )/.." && pwd )
LIBRARIES_PATH=$PROJECT_ROOT/Libraries
IOS_PLUGINS_PATH=$PROJECT_ROOT/Assets/Plugins/iOS

UNITY_PATH="/Applications/Unity/Unity.app/Contents/MacOS/Unity"
# 64 bit Windows - "C:\Program Files\Unity\Editor\Unity.exe"
# 32 bit Windows - "C:\Program Files (x86)\Unity\Editor\Unity.exe"

EXCLUDE_DEPENDENCIES=false # Include dependencies from the Appboy iOS SDK in Unity package
if [[ $1 = "--nodeps" ]]; then
  EXCLUDE_DEPENDENCIES=true
fi

echo "Deleting iOS libraries from Assets/Plugins/iOS/"
[ -e $IOS_PLUGINS_PATH/$APPBOY_IOS_SDK ] && rm -rf $IOS_PLUGINS_PATH/$APPBOY_IOS_SDK*
[ -e $IOS_PLUGINS_PATH/$SD_WEB_IMAGE ] && rm -rf $IOS_PLUGINS_PATH/$SD_WEB_IMAGE*


echo "Copying iOS libraries from Libraries/ to Assets/Plugins/iOS/"
cp -R $LIBRARIES_PATH/$APPBOY_IOS_SDK/ $IOS_PLUGINS_PATH/$APPBOY_IOS_SDK/ &
if [ "$EXCLUDE_DEPENDENCIES" = false ]; then
  cp -R $LIBRARIES_PATH/$SD_WEB_IMAGE $IOS_PLUGINS_PATH/$SD_WEB_IMAGE
fi &
wait

echo "Generating Unity package..."
if [ "$EXCLUDE_DEPENDENCIES" = false ]; then
	$UNITY_PATH -batchmode -nographics -projectPath $PROJECT_ROOT -executeMethod Appboy.Editor.Build.ExportPackage -quit && echo "Unity Package exported to $PROJECT_ROOT/unity-package/Appboy.unity-package" || echo "Failed to export package"
else
	$UNITY_PATH -batchmode -nographics -projectPath $PROJECT_ROOT -executeMethod Appboy.Editor.Build.ExportPackageWithoutDependencies -quit && echo "Unity Package exported to $PROJECT_ROOT/unity-package/Appboy-nodeps.unity-package" || echo "Failed to export package"
fi
