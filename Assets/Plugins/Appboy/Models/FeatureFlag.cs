using Appboy.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Appboy.Models;
using UnityEngine;
namespace Appboy.Models {
  /// <summary>
  /// Feature Flag.
  /// </summary>
  #nullable enable
  public class FeatureFlag {
    /// <summary>
    /// Feature Flag Property Node.
    /// </summary>
    public class PropertyNode {
      public string type = "" ;
      public string? stringValue;
      public int? intValue;
      public double? doubleValue;
      public bool? boolValue;
    }

    /// <summary>
    /// The ID of the Feature Flag.
    /// </summary>
    public string ID { get; private set; }

    /// <summary>
    /// Indicates if the Feature Flag is enabled for this user.
    /// </summary>
    public bool Enabled { get; private set; }

    /// <summary>
    /// A Diction of extra properties for this Feature Flag.
    /// Entries can also be accessed with getStringProperty(), getIntegerProperty(), getDoubleProperty, getBooleanProperty()
    /// </summary>
    public Dictionary<string, PropertyNode> Properties { get; set; }

    /// <summary>
    /// Converts a JSON object of the Properties into a Dictionary<string, PropertyNode>.
    /// </summary>
    private static Dictionary<string, PropertyNode> jsonToDictionary(JSONObject json) {
      Dictionary<string, PropertyNode> dictionary = new Dictionary<string, PropertyNode>();
      if (json != null) {
        JSONNode.Enumerator enumerator = json.GetEnumerator();
        while (enumerator.MoveNext()) {
          KeyValuePair<string, JSONNode> entry = (KeyValuePair<string, JSONNode>)enumerator.Current;
          string type = entry.Value["type"];
          if (type.Equals("string")) {
            var propertyNode = new PropertyNode();
            propertyNode.type = "string";
            propertyNode.stringValue = entry.Value["value"];
            dictionary.Add(entry.Key, propertyNode);
          } else if (type.Equals("number")) {
            var propertyNode = new PropertyNode();
            propertyNode.type = "number";
            propertyNode.intValue = entry.Value["value"].AsInt;
            propertyNode.doubleValue = entry.Value["value"].AsDouble;
            dictionary.Add(entry.Key, propertyNode);
          } else if (type.Equals("boolean")) {
            var propertyNode = new PropertyNode();
            propertyNode.type = "boolean";
            propertyNode.boolValue = entry.Value["value"].AsBool;
            dictionary.Add(entry.Key, propertyNode);
          } else {
            Debug.Log("Key " + entry.Key + "  type " + type + " did not match any known type. Not adding.");
          }
        }
      }
      return dictionary;
    }

    public FeatureFlag(JSONObject json) {
      if (json == null) {
        throw new ArgumentNullException("json");
      }

      if (json["id"] == null || json["enabled"] == null) {
        throw new ArgumentException("Missing required field(s). JSON = " + json.ToString());
      }
      ID = json["id"];
      Enabled = json["enabled"].AsBool;

      if (json["properties"] != null) {
        Properties = jsonToDictionary(json["properties"].AsObject);
      } else {
         Properties = new Dictionary<string, PropertyNode>();
      }
    }

    /// <summary>
    /// Get a single property as a string.
    /// </summary>
    /// <param name="id">
    /// A string of the ID of the property to retrieve.
    /// </param>
    ///<returns>
    /// The string value of the property. If the property does not exist, returns null.
    /// </returns>
    public string? getStringProperty(string id) {
      if (Properties.ContainsKey(id)) {
        PropertyNode propNode = Properties[id];
        if (propNode != null && propNode.type.Equals("string")) {
          return propNode.stringValue;
        }
      }
      return null;
    }

    /// <summary>
    /// Get a single property as an integer.
    /// </summary>
    /// <param name="id">
    /// A string of the ID of the property to retrieve.
    /// </param>
    ///<returns>
    /// The integer value of the property. If the property does not exist, returns null.
    /// </returns>
    public int? getIntegerProperty(string id) {
      if (Properties.ContainsKey(id)) {
        PropertyNode propNode = Properties[id];
        if (propNode != null && propNode.type.Equals("number")) {
          return propNode.intValue;
        }
      }
      return null;
    }

    /// <summary>
    /// Get a single property as a double.
    /// </summary>
    /// <param name="id">
    /// A string of the ID of the property to retrieve.
    /// </param>
    ///<returns>
    /// The double value of the property. If the property does not exist, returns null.
    /// </returns>
    public double? getDoubleProperty(string id) {
      if (Properties.ContainsKey(id)) {
        PropertyNode propNode = Properties[id];
        if (propNode != null && propNode.type.Equals("number")) {
          return propNode.doubleValue;
        }
      }
      return null;
    }

    /// <summary>
    /// Get a single property as a bool.
    /// </summary>
    /// <param name="id">
    /// A string of the ID of the property to retrieve.
    /// </param>
    ///<returns>
    /// The boolean value of the property. If the property does not exist, returns null.
    /// </returns>
    public bool? getBooleanProperty(string id) {
      if (Properties.ContainsKey(id)) {
        PropertyNode propNode = Properties[id];
        if (propNode != null && propNode.type.Equals("boolean")) {
          return propNode.boolValue;
        }
      }
      return null;
    }

    public override string ToString() {
      StringBuilder stringBuilder = new StringBuilder();
      stringBuilder.Append("{");
      foreach (KeyValuePair<string, PropertyNode> entry in Properties) {
        switch (entry.Value.type) {
          case "string":
            stringBuilder.Append(String.Format("{0}=string->{1},", entry.Key, entry.Value.stringValue));
            break;
          case "number":
            stringBuilder.Append(String.Format("{0}=number->{1},", entry.Key, entry.Value.intValue));
            break;
          case "boolean":
            stringBuilder.Append(String.Format("{0}=boolean->{1},", entry.Key, entry.Value.boolValue));
            break;
        }
      }
      if (stringBuilder.Length > 1) {
        stringBuilder.Length--;
      }
      stringBuilder.Append("}");

      return String.Format("{0}: ID={1}, Enabled={2}, Properties={3}",
                           this.GetType().Name, ID, Enabled, stringBuilder.ToString());
    }
  }
}
