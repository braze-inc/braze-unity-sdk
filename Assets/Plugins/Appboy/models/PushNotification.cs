using Appboy.Utilities;
using System;
using System.Collections.Generic;

namespace Appboy.Models {
  public class PushNotification {
    public string RawJsonString { get; private set; }
    public string Title { get; private set; }
    public string Content { get; private set; }
    public Dictionary<string, string> Extras { get; private set; }
    public int AndroidNotificationId { get; private set; }
    public long AndroidPushReceivedTimestamp { get; private set; }

    public PushNotification(string message) {
      if (String.IsNullOrEmpty(message)) {
        throw new ArgumentException("Message cannot be null or empty.", "message");
      }
      RawJsonString = message;
      JSONClass json;
      try {
        json = (JSONClass) JSON.Parse(message);
      } catch {
        throw new ArgumentException("Unable to parse json.");
      }
      Title = SafeGetString(json, "t", null);
      Content = SafeGetString(json, "a", null);
      AndroidNotificationId = SafeGetInt(json, "nid", -1);
      AndroidPushReceivedTimestamp = SafeGetLong(json, "appboy_push_received_timestamp", -1);
      if (json["extra"] != null) {
        Extras = JsonUtils.JSONClassToDictionary((JSONClass) JSON.Parse(json["extra"]));
      } else {
        Extras = new Dictionary<string, string>();
      }
    }

    public override string ToString() {
      return String.Format("PushNotification[Title={0}, Content={1}, Extras={2}, AndroidNotificationId={3}, AndroidPushReceivedTimestamp={4}, RawJson={5}]",
                           Title, Content, CollectionUtils.DictionaryToString(Extras), AndroidNotificationId, AndroidPushReceivedTimestamp, RawJsonString);
    }

    private string SafeGetString(JSONClass json, string key, string defaultValue) {
      if (json == null || key == null) {
        return defaultValue;
      }

      if (json[key] != null) {
        return json[key];
      }
      return defaultValue;
    }

    private int SafeGetInt(JSONClass json, string key, int defaultValue) {
      if (json == null || key == null) {
        return defaultValue;
      }

      if (json[key] != null) {
        return Convert.ToInt32(json[key]);
      }
      return defaultValue;
    }

    private long SafeGetLong(JSONClass json, string key, long defaultValue) {
      if (json == null || key == null) {
        return defaultValue;
      }

      if (json[key] != null) {
        return Convert.ToInt64(json[key]);
      }
      return defaultValue;
    }
  }
}

