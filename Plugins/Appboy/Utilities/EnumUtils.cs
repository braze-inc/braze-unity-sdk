using System;

namespace Appboy.Utilities {
  public class EnumUtils {
    /// <summary>
    /// Attempts to convert the string value into the desired enum. If the conversion fails, the
    /// default value is returned.
    /// 
    /// Note: This is a backport of the Enum.TryParse method added in .NET 4.0.
    /// </summary>
    public static object TryParse(Type enumType, string value, bool ignoreCase, object defaultValue) {
      try {
        return Enum.Parse(enumType, value, ignoreCase);
      } catch {
        return defaultValue;
      }
    }
  }
}

