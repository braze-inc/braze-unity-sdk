using UnityEngine;
using System;
using Appboy.Utilities;
using System.Collections.Generic;

namespace Appboy.Models {
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

    public ApplePushNotification(string jsonString) : this((JSONObject) JSON.Parse(jsonString)) {}

    public ApplePushNotification(JSONObject json) {
      Alert = new ApplePushNotificationAlert(json["alert"].AsObject);
      Badge = json["badge"].AsInt;
      Sound = json["sound"];
      ContentAvailable = json["content-available"].AsInt;
      Extra = new Dictionary<string, object>();
      JSONNode ExtraNode = json["extra"];
      if (ExtraNode.GetType() == typeof(JSONObject)) {
        foreach (KeyValuePair<string, JSONNode> KeyValuePairNode in ExtraNode.AsObject) {
          Extra.Add(KeyValuePairNode.Key, this.getJSONNodeValue(KeyValuePairNode.Value));
        }
      } else {
        Debug.Log("Value of key Extra isn't a dictionary. Stop parsing the Extra dictionary");     
      }
    }

    private object getJSONNodeValue(JSONNode node) {
      int intNode = 0;
      if (int.TryParse(node.Value, out intNode)) {
        return intNode;
      }

      float floatNode = 0.0f;
      if (float.TryParse(node.Value, out floatNode)) {
        return floatNode;
      }

      double doubleNode = 0.0;
      if (double.TryParse(node.Value, out doubleNode)) {
        return doubleNode;
      }

      bool boolNode = false;
      if (bool.TryParse(node.Value, out boolNode)) {
        return boolNode;
      }

      if (node.GetType() == typeof(JSONArray)) {
        IList<object> nodeList = new List<object>();
        foreach (JSONNode nodeInArray in node.AsArray) {
          nodeList.Add(this.getJSONNodeValue(nodeInArray));
        }
        return nodeList;
      }

      if (node.GetType() == typeof(JSONObject)) {
        IDictionary<string, object> nodeDictionary = new Dictionary<string, object>();
        foreach (KeyValuePair<string, JSONNode> kvp in node.AsObject) {
          nodeDictionary.Add(kvp.Key, this.getJSONNodeValue(kvp.Value));
        }
        return nodeDictionary;
      }

      // if the Node isn't one type of int/float/double/bool/list/dictionary, then we should save it as a string
      return node.ToString();
    }

    public override string ToString() {
      string extraString = "{";
      foreach (KeyValuePair<string, object> N in Extra) {
        if (extraString.Length > 2) {
          extraString += ", ";
        }
        extraString += "\"" + N.Key + "\":" + N.Value.ToString();
      }
      extraString += "}";
      return String.Format("PushNotification[Alert={0}, Badge={1}, Sound={2}, ContentAvailable={3}, Extra={4}]", 
                           Alert.ToString(), Badge, Sound, ContentAvailable, extraString);
    } 
  }
}

