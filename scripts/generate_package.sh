#!/bin/bash

PROJECT_ROOT=$( cd "$( dirname "${BASH_SOURCE[0]}" )/.." && pwd )

# https://unix.stackexchange.com/questions/196690/best-and-short-way-to-run-a-program-if-another-is-not-installed
function unity_app_cmd {
  # Ask MacOS for the path of the currently running Unity process
  RUNNING_UNITY_APP="$(osascript -e 'tell application "System Events" to POSIX path of (file of process "Unity" as alias)')/Contents/MacOS/Unity"
  UNITY_HUB="/Applications/Unity/Hub/Editor/2019.2.20f1/Unity.app/Contents/MacOS/Unity"
  UNITY_STANDALONE="/Applications/Unity/Unity.app/Contents/MacOS/Unity"

  if [ -f $RUNNING_UNITY_APP ]
  then
    echo "Using Unity $RUNNING_UNITY_APP"
    $RUNNING_UNITY_APP "$@"

  elif [ -f $UNITY_HUB ]
  then
    echo "Using Unity $UNITY_HUB"
    $UNITY_HUB "$@"

  else 
    echo "Using Unity $UNITY_STANDALONE"
    $UNITY_STANDALONE "$@"
  fi
}

rm -rf ../unity-package
mkdir ../unity-package

unity_app_cmd -batchmode -nographics -projectPath $PROJECT_ROOT -executeMethod Appboy.Editor.Build.ExportAllPackages -quit \
  && echo "Unity Packages exported to $PROJECT_ROOT/unity-package/" || echo "Failed to export package. Please have your Unity instance running next time!"
