using System;

namespace Appboy {
  public class PushNotification {
    public string Title { get; set; }
    public string Content { get; set; }
    public string CollapseKey { get; set; }
    public int AndroidNotificationId { get; set; }
		
    public PushNotification(JSONClass json) {
      Title = json["title"];
      Content = json["content"];
      CollapseKey = json["collapse_key"];
      AndroidNotificationId = json["notification_id"].AsInt; 
    }

    public override string ToString() {
      return "PushNotfication: Title[" + Title + "], Content[" + Content + "], CollapseKey[" + CollapseKey + "], AndroidNotificationId[" + AndroidNotificationId + "]";
    }   
  }
}

