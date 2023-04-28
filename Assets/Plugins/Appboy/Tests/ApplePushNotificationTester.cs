using UnityEngine;
using System.Collections.Generic;
using Appboy.Models;
using Appboy.Utilities;

public class ApplePushNotificationTester : MonoBehaviour {

  // Use this for initialization
  void Start() {
    // test the normal aps dictionary that Apple defines
    string JSONString = @"{""alert"" : 
    {""body"" : ""This is a push notification message."",
    ""action-loc-key"" : ""slide to open"",
    ""loc-key"" : ""Welcome to the game!"",
    ""loc-args"" : [""Jenna"", ""Frank"", ""Elena""],
    ""launch-image"" : ""launchFromPushImage.png""},
    ""badge"" : 9,
    ""sound"" : ""pushNotificationSoundFile"",
    ""content-available"" : 3}";
    
    JSONObject pushNotificationJson = (JSONObject)JSON.Parse(JSONString);
    ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
    Debug.Log("Push Notification event(aps): " + pushNotification);

    // test the arbitrary dictionary that developer can pass in push notification
    JSONString = "{\"extra\" : {\"intKey\" : 12,"
      + "\"floatKey\" : 13.356,"
      + "\"doubleKey\" : 3.1415926535897,"
      + "\"arrayKey\" : [\"a string\", 3, 3.3335, {\"subkey\" : \"subdictionary\"}],"
      + "\"dictionaryKey\" : {\"levelTwoIntKey\" : 212, "
      + "\"levelTwoFloatKey\" : 213.356,"
      + "\"levelTwoDoubleKey\" : 23.1415926535897,"
      + "\"levelTwoArrayKey\" : [\"a level 3 string\", 33, 33.3335, {\"subsubkey\" : \"subsubdictionary\"}]}}}";
    pushNotificationJson = (JSONObject)JSON.Parse(JSONString);
    pushNotification = new ApplePushNotification(pushNotificationJson);

    string ExtraString = "{";
    foreach (KeyValuePair<string, object> N in pushNotification.Extra) {
      ExtraString += N.Key + " : ";
      ExtraString += this.PrintOutObjectValues(N.Value) + ", ";
    }
    ExtraString += "}";
    Debug.Log("Push Notification event(extra): " + ExtraString);
  }

  public string PrintOutObjectValues(object o) {
    if (o is IList<object>) {
      string ListString = "[";
      foreach (object ArrayObject in (IList<object>)o) {
        ListString += this.PrintOutObjectValues(ArrayObject) + ", ";
      }
      return ListString + "], ";
    }

    if (o is IDictionary<string, object>) {
      string DictionaryString = "{";
      foreach (KeyValuePair<string, object> Pair in (IDictionary<string, object>)o) {
        DictionaryString += Pair.Key + " : ";
        DictionaryString += this.PrintOutObjectValues(Pair.Value) + ", ";
      }
      return DictionaryString + "},";
    }

    return o.ToString();
  }
}
