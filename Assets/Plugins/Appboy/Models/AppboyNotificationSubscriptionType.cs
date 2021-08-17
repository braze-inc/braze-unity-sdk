using System.Collections;

namespace Appboy.Models {

  /// <summary>
  /// User opt-in states.
  /// </summary>
  public enum AppboyNotificationSubscriptionType {
    /// <summary>
    /// The user has explicitly opted-in.
    /// </summary>
    OPTED_IN = 0,
    /// <summary>
    /// The user is subscribed but has not explicitly opted-in.
    /// </summary>
    SUBSCRIBED = 1,
    /// <summary>
    /// The user is unsubscribed or has opted-out.
    /// </summary>
    UNSUBSCRIBED = 2
  }
}
