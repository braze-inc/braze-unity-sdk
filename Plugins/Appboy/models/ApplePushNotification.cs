using UnityEngine;
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
    	JSONNode ExtraNode = json["extra"];
    	if (ExtraNode.GetType() == typeof(JSONClass)) {
    		foreach (KeyValuePair<string, JSONNode> KeyValuePairNode in ExtraNode.AsObject) {
    			Extra.Add(KeyValuePairNode.Key, this.getJSONNodeValue(KeyValuePairNode.Value));		
    		}		
    	} else {
    		Debug.Log("Value of key Extra isn't a dictionary. Stop parsing the Extra dictionary");     
    	}
    }
		
    private object getJSONNodeValue(JSONNode Node) {
    	int IntNode = 0;
    	if (int.TryParse(Node.Value, out IntNode)) 
	      return IntNode;
			
			float FloatNode = 0.0f;
			if (float.TryParse(Node.Value, out FloatNode))
			return FloatNode;
			
	    double DoubleNode = 0.0;
	    if (double.TryParse(Node.Value, out DoubleNode))
	      return DoubleNode;
			
	    bool BoolNode = false;
	    if (bool.TryParse(Node.Value, out BoolNode))
	      return BoolNode;
	  
	    if (Node.GetType() == typeof(JSONArray)) {
	      IList<object> NodeList = new List<object>();
	      foreach (JSONNode NodeInArray in Node.AsArray) {
		      NodeList.Add(this.getJSONNodeValue(NodeInArray));
	      }
	      return NodeList;
	    }
	
	    if (Node.GetType() == typeof(JSONClass)) {
	      IDictionary<string, object> NodeDictionary = new Dictionary<string, object>();
	      foreach (KeyValuePair<string, JSONNode> KeyValuePairNode in Node.AsObject) {
		      NodeDictionary.Add(KeyValuePairNode.Key, this.getJSONNodeValue(KeyValuePairNode.Value));		
	      }
	      return NodeDictionary;
	    }
			
	    // if the Node isn't one type of int/float/double/bool/list/dictionary, then we should save it as a string
	    return Node.ToString();
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

