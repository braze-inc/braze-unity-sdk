require 'fileutils'

class AppboyUnityReleaseHelper
  attr_accessor :libraries_directory
  attr_accessor :build_directory
  attr_accessor :appboy_ios_sdk_framework_name
  attr_accessor :sd_webimage_artifact_name
  attr_accessor :framework_unzip_directory
  attr_accessor :framework_lipo_removal_directory

  def initialize
    # Assumes this script is being ran from `./scripts/`
    # This gets the absolute path of the parent directory
    @unity_sdk_root_directory = File.expand_path("..", Dir.pwd)

    @build_directory = File.join(@unity_sdk_root_directory, "scripts/build")
    @libraries_directory = File.join(@unity_sdk_root_directory, "Libraries")
    
    # The framework name (pre .zip) as it appears on https://github.com/Appboy/appboy-ios-sdk/releases
    @appboy_ios_sdk_artifact_name = "Appboy_iOS_SDK"
    @sd_webimage_artifact_name = "SDWebImage"

    @appboy_ios_sdk_repo_slash_name = "Appboy/appboy-ios-sdk"
    @framework_unzip_directory = File.join(@build_directory, "unzipped_framework_files")
    @framework_lipo_removal_directory = File.join(@build_directory, "lipo_removed_frameworks")

    # Check if the current directory this scriptis running from is valid
    if !File.exist?(libraries_directory)
      abort("This script expects the libraries folder to be found at #{libraries_directory}")
    end

    create_build_directories()  
  end

  def pretty_puts(msg)
    puts(" ")
    puts("=======")
    puts(msg)
    puts("=======")
    puts(" ")
  end

  def create_build_directories()
    pretty_puts("deleting and recreating build directories")
    puts `rm -rf #{@build_directory}`
    FileUtils.mkdir_p(@build_directory)
    FileUtils.mkdir_p(@framework_unzip_directory)
    FileUtils.mkdir_p(@framework_lipo_removal_directory)
  end

  # Downloads the latest release artifact (like Appboy_iOS_SDK.framework) under the repo/name (i.e. Appboy/appboy-ios-sdk)
  # Then unzips the release artifact
  # Lastly returns the directory of the unzipped files
  # Generifies a command such as "curl -s https://api.github.com/repos/Appboy/appboy-ios-sdk/releases/latest | grep "browser_download_url.*Appboy_iOS_SDK.*zip" | cut -d '"' -f 4 | wget -O Appboy_iOS_SDK.framework.zip"
  def retrieve_latest_release_with_name(repo_name_slash_project, release_artifact_name)
    framework_zip_filename = "#{release_artifact_name}.framework.zip"

    puts "framework_zip_filename #{framework_zip_filename}"

    # Extracting the wget commands for readability
    curl_cmd = "curl -s https://api.github.com/repos/#{repo_name_slash_project}/releases/latest"
    grep_cmd = "grep \"browser_download_url.*#{framework_zip_filename}\""
    # Removes the quotes from the filename
    cut_cmd = "cut -d '\"' -f 4"
    wget_cmd = "wget -i - -O #{framework_zip_filename}"

    Dir.chdir(@build_directory) do
      # Delete our old framework zip
      puts "deleting framework zip at path #{framework_zip_filename}"
      puts `rm -rf #{framework_zip_filename}`

      full_cmd = "#{curl_cmd}|#{grep_cmd}|#{cut_cmd}|#{wget_cmd}"
      # Download a new framework zip
      puts "running #{full_cmd}"
      puts(`#{full_cmd}`)

      # Delete any existing framework zip files and unzip anew
      puts `rm -rf #{@framework_unzip_directory}`
      puts `mkdir #{@framework_unzip_directory}`
      puts `unzip #{framework_zip_filename} -d #{@framework_unzip_directory}`
    end

    return File.join(@framework_unzip_directory, "iOS")
  end

  # framework_name like Appboy_iOS_SDK
  # return the output framework path
  def remove_simulator_architecture(framework_name, framework_source_directory, output_directory)
    puts "Removing simulator architecture for #{framework_name} in source dir #{framework_source_directory} and outputting to #{output_directory}"
    # Like Appboy_iOS_SDK.framework but in another directory
    output_framework_folder = File.join(output_directory, "#{framework_name}.framework")

    # Copy the framework to the output directory
    puts `cp -r #{framework_source_directory}/#{framework_name}.framework/ #{output_framework_folder}/`

    # Lipo the simulator architectures and overwrite the executables in place
    puts `lipo -remove x86_64 #{output_framework_folder}/#{framework_name} -o #{output_framework_folder}/#{framework_name}`
    puts `lipo -remove i386 #{output_framework_folder}/#{framework_name} -o #{output_framework_folder}/#{framework_name}`

    # Print the lipo info on the frameworks after. If lipo failed, fail the entire script
    arch_list = `lipo -info #{output_framework_folder}/#{framework_name}`
    puts "contained architectures #{arch_list}"
    if (arch_list.include?("x86_64") || arch_list.include?("i386") || !arch_list.include?("armv7") || !arch_list.include?("arm64"))
      abort("Invalid architectures!")
    end

    return "#{output_framework_folder}/#{framework_name}"
  end

  def overwrite_framework(framework_name, framework_source_directory, framework_output_directory)
    puts "Overwriting framework #{framework_name} from source dir #{framework_source_directory} to output dir #{framework_output_directory}"
    puts `rm -rf #{framework_output_directory}/#{framework_name}.framework`
    puts `cp -r #{framework_source_directory}/#{framework_name}.framework/ #{framework_output_directory}/#{framework_name}.framework/`
  end

  def performUpdate()
    # Retrieve the files
    pretty_puts("retrieving the frameworks from the kit public release")
    framework_unzipped_directory = retrieve_latest_release_with_name(@appboy_ios_sdk_repo_slash_name, @appboy_ios_sdk_artifact_name)
    puts "framework_unzipped_directory unzipped from #{framework_unzipped_directory}"

    # Run lipo on the files
    pretty_puts("Running lipo on the downloaded frameworks")
    remove_simulator_architecture(@appboy_ios_sdk_artifact_name, framework_unzipped_directory, @framework_lipo_removal_directory)
    remove_simulator_architecture(@sd_webimage_artifact_name, framework_unzipped_directory, @framework_lipo_removal_directory)

    # Move the files over to the Libraries folder
    pretty_puts("Moving the lipo'd frameworks to the Libraries folder")
    overwrite_framework(@appboy_ios_sdk_artifact_name, @framework_lipo_removal_directory, @libraries_directory)
    overwrite_framework(@sd_webimage_artifact_name, @framework_lipo_removal_directory, @libraries_directory)
  end
end

release_helper = AppboyUnityReleaseHelper.new()
framework_unzipped_directory = release_helper.performUpdate()
