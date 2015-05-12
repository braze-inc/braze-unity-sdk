using System;
using System.Collections.Generic;
using System.Text;

namespace Appboy.Utilities {
  public class CollectionUtils {
    // Serializes a string dictionary.
    public static string DictionaryToString(Dictionary<string, string> dictionary) {
      if (dictionary != null && dictionary.Count > 0) {
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
      } else {
        return "";
      }
    }
    
    // Serializes a list to a string by calling ToString() on each object in the list, in the form of "[object, object, ...]". 
    public static string ListToString<T>(List<T> list) {
      if (list != null && list.Count > 0) {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.Append("[");
        foreach (T element in list) {
          stringBuilder.Append(String.Format("{0},", element.ToString()));
        }
        if (stringBuilder.Length > 1) {
          stringBuilder.Length--;
        }
        stringBuilder.Append("]");
        return stringBuilder.ToString();
      } else {
        return "";
      }
    }
  }
}

