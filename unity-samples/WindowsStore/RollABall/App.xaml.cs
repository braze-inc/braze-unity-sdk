using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.ApplicationModel;
using Windows.ApplicationModel.Activation;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Core;
using Windows.UI.ViewManagement;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using Windows.UI.Xaml.Resources;
using AppboyUI.Universal.Assets.Localization;
using UnityPlayer;
using AppboyPlatform.Universal;
// The Blank Application template is documented at http://go.microsoft.com/fwlink/?LinkId=234227

namespace Template
{
	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	sealed partial class App : Application
	{
		private WinRTBridge.WinRTBridge _bridge;
		private AppCallbacks appCallbacks;
		/// <summary>
		/// Initializes the singleton application object.  This is the first line of authored code
		/// executed, and as such is the logical equivalent of main() or WinMain().
		/// </summary>
		public App()
		{
			this.InitializeComponent();
			appCallbacks = new AppCallbacks(false);
			appCallbacks.RenderingStarted += RemoveSplashScreen;
      CustomXamlResourceLoader.Current = new TranslationResourceProvider();
      // BASIC SLIDEUP INTEGRATION:
      // Assigns the default Appboy slideup factory. The slideup will be displayed with the default Appboy slideup UI. The 
      // default Appboy UI can be themed by editing the AppboyUI.Universal stylesheet.
      AppboyPlatform.Universal.Appboy.SharedInstance.SlideupManager.SlideupControlFactory = new AppboyUI.Universal.Factories.SlideupControlFactory();
      // Sets the feed modal that should be displayed when a slideup with ClickAction set to NEWS_FEED is clicked.
      AppboyPlatform.Universal.Appboy.SharedInstance.SlideupManager.FeedModal = new AppboyUI.Universal.Popups.FeedPopup();
		}

		/// <summary>
		/// Invoked when application is launched through protocol.
		/// Read more - http://msdn.microsoft.com/library/windows/apps/br224742
		/// </summary>
		/// <param name="args"></param>
		protected override void OnActivated(IActivatedEventArgs args)
		{
			string appArgs = "";
			Windows.ApplicationModel.Activation.SplashScreen splashScreen = null;
			switch (args.Kind)
			{
				case ActivationKind.Protocol:
					ProtocolActivatedEventArgs eventArgs = args as ProtocolActivatedEventArgs;
					splashScreen = eventArgs.SplashScreen;
					appArgs += string.Format("Uri={0}", eventArgs.Uri.AbsoluteUri);
					break;
			}
			InitializeUnity(appArgs, splashScreen);
      AppboyPlatform.Universal.Appboy.SharedInstance.OpenSession();
		}

		/// <summary>
		/// Invoked when the application is launched normally by the end user.  Other entry points
		/// will be used when the application is launched to open a specific file, to display
		/// search results, and so forth.
		/// </summary>
		/// <param name="args">Details about the launch request and process.</param>
		protected override void OnLaunched(LaunchActivatedEventArgs args)
		{
			InitializeUnity(args.Arguments, args.SplashScreen);
      AppboyPlatform.Universal.Appboy.SharedInstance.OpenSession();
		}

		private void InitializeUnity(string args, Windows.ApplicationModel.Activation.SplashScreen splashScreen)
		{
#if UNITY_WP_8_1
			ApplicationView.GetForCurrentView().SuppressSystemOverlays = true;
#pragma warning disable 4014
			StatusBar.GetForCurrentView().HideAsync();
#pragma warning restore 4014
#endif

			appCallbacks.SetAppArguments(args);
			Frame rootFrame = Window.Current.Content as Frame;

			// Do not repeat app initialization when the Window already has content,
			// just ensure that the window is active
			if (rootFrame == null && !appCallbacks.IsInitialized())
			{
				var mainPage = new MainPage(splashScreen);
				Window.Current.Content = mainPage;
				Window.Current.Activate();

				// Setup scripting bridge
				_bridge = new WinRTBridge.WinRTBridge();
				appCallbacks.SetBridge(_bridge);

#if !UNITY_WP_8_1
				appCallbacks.SetKeyboardTriggerControl(mainPage);
#endif

				appCallbacks.SetSwapChainPanel(mainPage.GetSwapChainPanel());
				appCallbacks.SetCoreWindowEvents(Window.Current.CoreWindow);
				appCallbacks.InitializeD3DXAML();
			}

			Window.Current.Activate();
			
#if UNITY_WP_8_1
			SetupLocationService();
#endif
		}

		private void RemoveSplashScreen()
		{
			// This will fail if you change main window class
			// Make sure to adjust accordingly if you do something like this
			MainPage page = (MainPage)Window.Current.Content;
			page.RemoveSplashScreen();
		}
		
#if UNITY_WP_8_1
		// This is the default setup to show location consent message box to the user
		// You can customize it to your needs, but do not remove it completely if your application
		// uses location services, as it is a requirement in Windows Store certification process
		private async void SetupLocationService()
		{
			if (!appCallbacks.IsLocationCapabilitySet())
			{
				return;
			}

			const string settingName = "LocationContent";
			bool userGaveConsent = false;

			object consent;
			var settings = Windows.Storage.ApplicationData.Current.LocalSettings;
			var userWasAskedBefore = settings.Values.TryGetValue(settingName, out consent);

			if (!userWasAskedBefore)
			{
				var messageDialog = new Windows.UI.Popups.MessageDialog("Can this application use your location?", "Location services");

				var acceptCommand = new Windows.UI.Popups.UICommand("Yes");
				var declineCommand = new Windows.UI.Popups.UICommand("No");

				messageDialog.Commands.Add(acceptCommand);
				messageDialog.Commands.Add(declineCommand);

				userGaveConsent = (await messageDialog.ShowAsync()) == acceptCommand;
				settings.Values.Add(settingName, userGaveConsent);
			}
			else
			{
				userGaveConsent = (bool)consent;
			}

			if (userGaveConsent)
			{	// Must be called from UI thread
				appCallbacks.SetupGeolocator();
			}
		}
#endif
	}
}