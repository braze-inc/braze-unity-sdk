#!/bin/bash

RUNNING_UNITY_APP="$(osascript -e 'tell application "System Events" to POSIX path of (file of process "Unity" as alias)')"
echo $RUNNING_UNITY_APP