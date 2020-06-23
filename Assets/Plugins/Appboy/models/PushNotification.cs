using Appboy.Utilities;
using System;
using System.Collections.Generic;

namespace Appboy.Models {
  public class PushNotification {
    public string Title { get; private set; }

    public string Content { get; private set; }

    public Dictionary<string, string> Extras { get; private set; }

    public string CollapseKey { get; private set; }

    public int AndroidNotificationId { get; private set; }

    public PushNotification(string message) {
      if (String.IsNullOrEmpty(message)) {
        throw new ArgumentException("Message cannot be null or empty.", "message");
      }
      JSONClass json;
      try {
        json = (JSONClass)JSON.Parse(message);
      } catch {
        throw new ArgumentException("Unable to parse json.");
      }
      if (json["title"] != null) {
        Title = json["title"];
      }
      if (json["content"] != null) {
        Content = json["content"];
      }
      if (json["extra"] != null) {
        Extras = JsonUtils.JSONClassToDictionary(json["extra"].AsObject);
      } else {
        Extras = new Dictionary<string, string>();
      }
      CollapseKey = json["collapse_key"];
      AndroidNotificationId = json["notification_id"].AsInt; 
    }

    public override string ToString() {
      return String.Format("PushNotification[Title={0}, Content={1}, Extras={2}, CollapseKey={3}, AndroidNotificationId={4}]", 
                           Title, Content, CollectionUtils.DictionaryToString(Extras), CollapseKey, AndroidNotificationId);
    }   
  }
}

