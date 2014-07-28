using Appboy.Utilities;
using System.Collections;
using System.Collections.Generic;

namespace Appboy.Utilities {
  public class JsonUtils {
    /// <summary>
    /// Converts a JSONClass to a Dictionary of strings.
    /// </summary>
    public static Dictionary<string, string> JSONClassToDictionary(JSONClass json) {
      Dictionary<string, string> dictionary = new Dictionary<string, string>();
      if (json != null) {
        IEnumerator enumerator = json.GetEnumerator();
        while (enumerator.MoveNext()) {
          KeyValuePair<string, JSONNode> entry = (KeyValuePair<string, JSONNode>) enumerator.Current;
          dictionary.Add(entry.Key, entry.Value);
        }
      }
      return dictionary;
    }
  }
}

