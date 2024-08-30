using System.Collections.Generic;

namespace Appboy.Models {
  /// <summary>
  /// The list of properties to be collected for tracking users (default: an empty list).
  /// The SDK will route collection of any of these data into a separate tracking endpoint, which must be declared in the privacy manifest.
  /// </summary>
  public class TrackingPropertyAllowList {
      /// <summary>
      /// Tracking properties you wish to add to your allowlist.
      /// </summary>
      public List<string> Adding { get; set; }

      /// <summary>
      /// Tracking properties you wish to remove from your allowlist.
      /// </summary>
      public List<string> Removing { get; set; }

      /// <summary>
      /// Custom event strings you wish to add to your current allowlist.
      /// </summary>
      public List<string> AddingCustomEvents { get; set; }

      /// <summary>
      /// Custom event strings you wish to remove from your current allowlist.
      /// </summary>
      public List<string> RemovingCustomEvents { get; set; }

      /// <summary>
      /// Custom attribute strings you wish to add to your current allowlist.
      /// </summary>
      public List<string> AddingCustomAttributes { get; set; }

      /// <summary>
      /// Custom attribute strings you wish to remove from your current allowlist.
      /// </summary>
      public List<string> RemovingCustomAttributes { get; set; }

      /// <summary>
      /// Initializes a new instance of the <see cref="TrackingPropertyAllowList"/> class.
      /// </summary>
      public TrackingPropertyAllowList()
      {
          Adding = new List<string>();
          Removing = new List<string>();
          AddingCustomEvents = new List<string>();
          RemovingCustomEvents = new List<string>();
          AddingCustomAttributes = new List<string>();
          RemovingCustomAttributes = new List<string>();
      }

      /// <summary>
      /// Converts the TrackingPropertyAllowList to a Dictionary<string, object>.
      /// </summary>
      /// <returns>A dictionary representation of the TrackingPropertyAllowList.</returns>
      public Dictionary<string, object> ToDictionary()
      {
          var dictionary = new Dictionary<string, object>
          {
              { "adding", Adding },
              { "removing", Removing },
              { "addingCustomEvents", AddingCustomEvents },
              { "removingCustomEvents", RemovingCustomEvents },
              { "addingCustomAttributes", AddingCustomAttributes },
              { "removingCustomAttributes", RemovingCustomAttributes }
          };

          return dictionary;
      }
  }
}