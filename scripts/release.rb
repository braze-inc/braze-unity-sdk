require 'pathname'
require 'tempfile'
require 'nokogiri'

ROOT_DIRECTORY = Pathname.getwd().to_s()
SCRIPTS_DIRECTORY = File.join(ROOT_DIRECTORY, "scripts")
puts SCRIPTS_DIRECTORY

TMP_STAGING_DIRECTORY = File.join(Dir.tmpdir, "appboy-unity-sdk")

def check_and_remove_directory(directory)
	if File.exists?(directory)
    `rm -rf #{directory}`
  end
end

def get_release_directory
	return "#{ROOT_DIRECTORY}/Public"
end

def get_version_number
	changelog_filepath = File.join(ROOT_DIRECTORY, "Public/CHANGELOG.md")
	puts("Getting the version number from CHANGELOG.md")
	version_number = (File.readlines(changelog_filepath))[0]
	version_number.tr!('## ', '')
  version_number.strip!()
	return version_number
end

def pretty_puts(msg)
  puts(" ")
  puts("=======")
  puts(msg)
  puts("=======")
  puts(" ")
end

# Assert our files and directories are where we expect it
unless (File.exists?(SCRIPTS_DIRECTORY) && File.exists?(get_release_directory()))
  puts "Expected #{SCRIPTS_DIRECTORY} and #{get_release_directory()} to exist. Exiting."
  exit()
end

pretty_puts("Release directory #{get_release_directory()}")

stage_repo = false
push_to_public_repo = false
show_help = false
argument_array = Array.new(ARGV)

ARGV.each do |a|
  argument_array.shift
  case a
    when '--stage-repo'
      stage_repo = true
    when '--push-dangerous'
      push_to_public_repo = true
    when '--help'
      show_help = true
  end
end

if ARGV.empty?
  show_help = true
end

# Display help and exit if necessary
if show_help
  puts("Appboy Unity SDK release script. This SDK copies the Plugins and the sample app to the release directory.")
  puts("Run this file from the git clone root of unity-sdk.")
  puts("")
  puts("Usage: ./release.rb [options]")
  puts("Options:")
  puts("\t--help\tThe message you're seeing now.")
  puts("\t--stage-repo\tPush the SDK and sample app project changes to a local appboy-unity-sdk repo for staging.")
  puts("\t--push-dangerous\tActually push the SDK changes in the staged repo to the public repo - you probably should do this manually.")
  exit(0)
end

pretty_puts("Clean up the Public folder before copying files in")
check_and_remove_directory("Public/unity-samples")
check_and_remove_directory("Public/Libraries")
check_and_remove_directory("Public/Plugins")
check_and_remove_directory("Public/Assets")
check_and_remove_directory("Public/scripts")
check_and_remove_directory("unity-samples/build")

pretty_puts("Copying sample app, scripts and Assets folder into Public")
puts `cp -vR "Assets" "Public"`
puts `cp -vR "unity-samples" "Public"`
puts `cp -vR "scripts" "Public"`
puts `cp -v ".gitignore" "Public"`

if stage_repo
  pretty_puts("Cloning the public repo and adding changes.")
  pretty_puts("the appboy-unity-sdk path is #{TMP_STAGING_DIRECTORY}")
  if File.exists?(TMP_STAGING_DIRECTORY)
    FileUtils.rm_rf(TMP_STAGING_DIRECTORY)
  end
  puts `git clone git@github.com:Appboy/appboy-unity-sdk.git #{TMP_STAGING_DIRECTORY}`
  Dir.chdir(TMP_STAGING_DIRECTORY)
  pretty_puts("Removing old directories.")
  puts `git rm -rf #{TMP_STAGING_DIRECTORY}/*`
  pretty_puts("Copying directories from Public. #{get_release_directory()} to #{TMP_STAGING_DIRECTORY}")
  puts `cp -vR #{get_release_directory()}/ #{TMP_STAGING_DIRECTORY}`
  puts `git add .`
  puts `git add -u .`

  puts `open #{TMP_STAGING_DIRECTORY}`
  puts("Please check the diff on the public repo at #{TMP_STAGING_DIRECTORY}. \t Please type \"continue\" when you finish to commit your changes.")
  STDOUT.flush  
  arguments = STDIN.gets.chomp
  if arguments != 'continue'
    exit(0)
  end
  pretty_puts("Adding to git and committing")
  puts `git commit -am "Updating Unity plugins for version #{get_version_number()}"`
  puts `git tag -a "#{get_version_number()}" -m "SDK version #{get_version_number()}"`

  if push_to_public_repo
    pretty_puts("Publishing changes to the public github repo.")
    puts `git push origin master`
 
    # Push the release tags
    puts `git push --tags`
  else
    puts("Not pushing changes to the public repo. To do so manually, run \"git push origin master;git push --tags\" and tag the release.")
  end

  # Return back to the original working directory
  Dir.chdir(ROOT_DIRECTORY)
end

pretty_puts("Generating Unity packages")

Dir.chdir(SCRIPTS_DIRECTORY) do
  puts `./generate_package.sh`
end
puts("Remember to upload the packages to the public release using the github UI.")

pretty_puts("Release complete! Staging directory: #{TMP_STAGING_DIRECTORY}.")
puts("If manually releasing, run -> \"cd #{TMP_STAGING_DIRECTORY};git push origin master;git push --tags\"")
