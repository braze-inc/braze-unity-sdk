using System;
using Appboy.Models.InAppMessage;

namespace Appboy {

  /// <summary>
  /// A listener for in-app messages UI events.
  /// In order to receive events, the listener instance must set on 
  /// <c>AppboyBinding.inAppMessageListener</c>
  /// </summary>
  /// <example>Usage:
  /// <code>
  ///   // Create listener + add some handlers
  ///   BrazeInAppMessageListener listener = new BrazeInAppMessageListener();
  ///   listener.OnInAppMessageDismissed = delegate(IInAppMessage message) {
  ///     Console.WriteLine(message);
  ///   };
  ///   listener.OnInAppMessageClicked = delegate(IInAppMessage message) {
  ///     Console.WriteLine(message);
  ///   };
  /// 
  ///   // Set listener on AppboyBinding to start receiving events.
  ///   AppboyBinding.inAppMessageListener = listener;
  /// </code>
  /// </example>
  public class BrazeInAppMessageListener {

    /// <summary>
    /// Delegate executed before an in-app message is displayed.
    /// </summary>
    public Action<IInAppMessage> BeforeInAppMessageDisplayed;

    /// <summary>
    /// Delegate executed whenever an in-app message is dismissed without a click.
    /// </summary>
    public Action<IInAppMessage> OnInAppMessageDismissed;

    /// <summary>
    /// Delegate executed whenever an in-app message is clicked.
    /// </summary>
    public Action<IInAppMessage> OnInAppMessageClicked;

    /// <summary>
    /// Delegate executed whenever an in-app message button is clicked.
    /// </summary>
    public Action<IInAppMessage, InAppMessageButton> OnInAppMessageButtonClicked;

    /// <summary>
    /// Delegate executed whenever an HTML in-app message is clicked.
    /// </summary>
    public Action<IInAppMessage, Uri> OnInAppMessageHTMLClicked;
  }
}
