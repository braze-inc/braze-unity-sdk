using Appboy.Utilities;
using System;
using System.Collections.Generic;

namespace Appboy.Models {
  public class ApplePushNotificationAlert {		
    public IList<string> LocationArguments { get; set; }
    public string Body { get; set; }
    public string ActionLocationKey { get; set; }
    public string LocationKey { get; set; }
    public string LaunchImage { get; set; }
		
    public ApplePushNotificationAlert(JSONClass json) {
      LocationArguments = new List<string>();
      foreach (var jsonNode in json["loc-args"].AsArray) {
        LocationArguments.Add(jsonNode.ToString());
      }
      Body = json["body"];
      ActionLocationKey = json["action-loc-key"];
      LocationKey = json["loc-key"];
      LaunchImage = json["launch-image"];
    }
	
    public override string ToString() {
      string LocationArgumentsString = "[ ";
      foreach (string N in LocationArguments) {
        if (LocationArgumentsString.Length > 2) {
          LocationArgumentsString += ", ";
        }
        LocationArgumentsString += N.ToString();
      }
      LocationArgumentsString += " ]";
      return String.Format("PushNotificationAlert[LocationArguments={0}, Body={1}, ActionLocationKey={2}, LocationKey={3}, LaunchImage={4}]",
                           LocationArgumentsString, Body, ActionLocationKey, LocationKey, LaunchImage);
    }
  }
}
