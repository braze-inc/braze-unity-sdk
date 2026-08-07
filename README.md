<p align="center">
  <img width="480" alt="Braze Logo" src=".github/assets/logo-light.png#gh-light-mode-only" />
  <img width="480" alt="Braze Logo" src=".github/assets/logo-dark.png#gh-dark-mode-only" />
</p>

# Braze Unity SDK [![latest](https://img.shields.io/github/v/tag/braze-inc/braze-unity-sdk?label=latest%20release&color=300266)](https://github.com/braze-inc/braze-unity-sdk/releases) 

To learn more, see the following resources:

- [Braze User Guide](https://www.braze.com/docs/user_guide/introduction/ "Braze User Guide")
- [Braze Developer Guide](https://www.braze.com/docs/developer_guide/sdk_integration/?sdktab=unity "Braze Developer Guide")

This repository contains the C# interface and native Unity functionality for Unity plugins derived from the Braze Android and iOS SDKs. Since version 1.5.0, Braze Unity plugins require Unity 5. For more information, see the [CHANGELOG](https://github.com/braze-inc/braze-unity-sdk/blob/master/CHANGELOG.md).

## Plugin setup

Before you can start using Braze in Unity scripts, you'll need to import the plugin files to your Unity project.

**Recommended:** The Android and iOS plugins are bundled as a Unity package available for download from the [SDK release page][1].

**Manual Plugin Setup:** Alternatively, you can copy the plugins into your Unity project:
  1. First, clone this repo.
  2. If you're not using any other plugins, all you have to do is copy the `Plugins` directory from this repo into the `Assets` folder of your Unity project.
  3. If you already have a `/<your-project>/Assets/Plugins` directory (probably because you're using another plugin already), copy `Plugins/Appboy/AppboyBinding.cs` into `/<your-project>/Assets/Plugins`. Then copy the contents of `Plugins/iOS` and `Plugins/Android` from this repo into `/<your-project>/Assets/Plugins/iOS` and `/<your-project>/Assets/Plugins/Android` respectively.

## Integration Setup

To integrate Braze into your Unity application, complete the instructions in [Integrating the Braze Unity SDK][2].

[1]: https://github.com/braze-inc/braze-unity-sdk/releases
[2]: https://www.braze.com/docs/developer_guide/sdk_integration?sdktab=unity

## Contact

For questions, contact Braze Technical Support for assistance.
