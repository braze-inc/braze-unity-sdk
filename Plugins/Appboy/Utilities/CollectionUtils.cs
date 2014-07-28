using System;
using System.Collections.Generic;
using System.Text;

namespace Appboy.Utilities {
  public class CollectionUtils {
    /// <summary>
    /// Serializes a string dictionary.
    /// </summary>
    public static string DictionaryToString(Dictionary<string, string> dictionary) {
      StringBuilder stringBuilder = new StringBuilder();
      stringBuilder.Append("{");
      foreach (KeyValuePair<string, string> entry in dictionary) {
        stringBuilder.Append(String.Format("{0}={1},", entry.Key, entry.Value));
      }
      if (stringBuilder.Length > 1) {
        stringBuilder.Length--;
      }
      stringBuilder.Append("}");
      return stringBuilder.ToString();
    }
  }
}

