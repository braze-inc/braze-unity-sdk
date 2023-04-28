using Appboy.Utilities;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System;

namespace Appboy.Utilities {
  public class JsonUtils {
    /// <summary>
    /// Converts a JSONObject to a Dictionary of strings.
    /// </summary>
    public static Dictionary<string, string> JSONObjectToDictionary(JSONObject json) {
      Dictionary<string, string> dictionary = new Dictionary<string, string>();
      if (json != null) {
        JSONNode.Enumerator enumerator = json.GetEnumerator();
        while (enumerator.MoveNext()) {
          KeyValuePair<string, JSONNode> entry = (KeyValuePair<string, JSONNode>)enumerator.Current;
          dictionary.Add(entry.Key, entry.Value);
        }
      }
      return dictionary;
    }
  }
}
