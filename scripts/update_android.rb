#!/usr/bin/env ruby

require 'appboy_sdk_release_utils'
require 'pathname'

class ArtifactModulePair
  attr_accessor :modulePath, :moduleName

  def initialize(m, n)
      @modulePath, @moduleName = m, n
  end
end

ROOT_DIRECTORY = File.expand_path(File.join(Pathname.getwd().to_s(), ".."))
puts "ROOT_DIRECTORY #{ROOT_DIRECTORY}"

ANDROID_MODULES = [
  ArtifactModulePair.new("android-sdk-base", "appboy"),
  ArtifactModulePair.new("android-sdk-base-jetified", "appboy-jetified"),
  ArtifactModulePair.new("android-sdk-ui", "appboy-ui"),
  ArtifactModulePair.new("android-sdk-ui-jetified", "appboy-ui-jetified"),
  ArtifactModulePair.new("android-sdk-unity", "appboy-unity"),
  ArtifactModulePair.new("android-sdk-unity-jetified", "appboy-unity-jetified")
]

BUILD_DIR = File.join(ROOT_DIRECTORY, "scripts/build")

# AARs for the unitypackage
ANDROID_PLUGINS_DIRECTORY = File.join(ROOT_DIRECTORY, "Assets/Plugins/Android")

# Public artifact links
ANDROID_CHANGELOG_URL = "https://raw.githubusercontent.com/Appboy/appboy-android-sdk/master/CHANGELOG.md"
ARTIFACT_BASE_URL = "https://github.com/Appboy/appboy-android-sdk/blob/gh-pages/sdk/com/appboy"

# Assert our files and directories are where we expect it
unless (File.exists?(ANDROID_PLUGINS_DIRECTORY))
  puts "Expected #{ANDROID_PLUGINS_DIRECTORY} to exist. Exiting."
  exit()
end

unless Dir.exist?(BUILD_DIR)
  FileUtils.mkdir(BUILD_DIR)
end

# Get a file and return its path
def get_remote_file(url, dest_filename)
  output_file = File.join(BUILD_DIR, dest_filename)
  Dir.chdir(BUILD_DIR) do
    puts "Downloading #{url} to #{output_file} ..."
    puts `wget #{url} -O #{output_file}`
  end
  return output_file
end

def get_aar_file(module_name, output_filename, latest_sdk)
  # The URL paths look like:
  # https://github.com/Appboy/appboy-android-sdk/blob/gh-pages/sdk/com/appboy/android-sdk-base/8.0.1/android-sdk-base-8.0.1.aar?raw=true
  return get_remote_file("#{ARTIFACT_BASE_URL}/#{module_name}/#{latest_sdk}/#{module_name}-#{latest_sdk}.aar?raw=true", "#{output_filename}.aar")
end

# Simple pretty-printing that breaks up the quite large amount of text this script outputs
def puts_nicely(prefix_msg)
  puts " "
  puts "==========="
  puts prefix_msg.upcase
  puts "==========="
  puts " "
end

# Download the changelog and get the latest version number
def get_latest_android_sdk_version()
  changelogPath = get_remote_file(ANDROID_CHANGELOG_URL, "android_public_changelog.md")
  release_utils = AppboySDKReleaseUtils.new()
  return release_utils.get_version_number(changelogPath)
end

def replace_file(directory, file)
  # Overwrite the existing file
  FileUtils.cp(file, directory)
end

puts_nicely("Getting latest SDK version")
latest_sdk = get_latest_android_sdk_version()
puts "Latest Android SDK version #{latest_sdk}"

puts_nicely("Downloading artifacts")

# Loop over the modules and download each
ANDROID_MODULES.each { |module_pair|
  puts_nicely("Downloading and swapping artifact :#{module_pair.modulePath}")
  artifact = get_aar_file(module_pair.modulePath, module_pair.moduleName, latest_sdk)

  replace_file(ANDROID_PLUGINS_DIRECTORY, artifact)
}

puts_nicely("All done. Don't forget 'git add -A' to add the new artifacts!")
