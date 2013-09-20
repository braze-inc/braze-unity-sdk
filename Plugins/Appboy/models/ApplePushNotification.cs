using System;
using Appboy;
using System.Collections.Generic;

namespace Appboy {
  public class ApplePushNotification {
    // These properties are from the aps dictionary at the top level of the Apple Push Notification.
    // Note that these are actually nested inside the 'aps' key when sent from Apple, but we've
	// included them in the top level ApplePushNotification upon deserialization for convenience.
	public ApplePushNotificationAlert Alert { get; set; }
	public int Badge { get; set; }
	public string Sound { get; set; }
	public int ContentAvailable { get; set; }
		
	// All additional properties included with the notification alongside the 'aps' dictionary at
	// the top level of the Apple Push Notification. See 
	// https://developer.apple.com/library/ios/documentation/NetworkingInternet/Conceptual/RemoteNotificationsPG/Chapters/ApplePushService.html#//apple_ref/doc/uid/TP40008194-CH100-SW10
	public IDictionary<string, object> Extra { get; set; }
		
	public ApplePushNotification(JSONClass json) {
	  Alert = new ApplePushNotificationAlert(json["alert"].AsObject);
	  Badge = json["badge"].AsInt;
	  Sound = json["sound"];
	  ContentAvailable = json["content-available"].AsInt;
	  Extra = new Dictionary<string, object>();
	  Extra.Add("extra", json["extra"].ToString());
	}
		
	public override string ToString() {
	  string extraString = "{";
      foreach (KeyValuePair<string, object> N in Extra) {
        if (extraString.Length > 2)
          extraString += ", ";
        extraString += "\"" + N.Key + "\":" + N.Value.ToString();
      }
      extraString += "}";
      return "PushNotfication: Alert[" + Alert.ToString() + "], Badge[" + Badge + "], Sound[" + Sound + "], ContentAvailable[" + ContentAvailable + "], Extra[" + extraString + "]";
    } 
  }
}

