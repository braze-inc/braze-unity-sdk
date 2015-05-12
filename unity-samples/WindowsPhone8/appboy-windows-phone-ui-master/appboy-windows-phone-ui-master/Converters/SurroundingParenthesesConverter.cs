using AppboyPlatform.PCL.Utilities;
using System;
using System.Globalization;
using System.Windows.Data;

namespace AppboyUI.Phone.Converters {
  /// <summary>
  /// Adds parentheses around the value string. If the value is not null, it first gets converted
  /// to a string by having its ToString() called.
  /// </summary>
  /// <param name="value">The value that will be surrounded by parentheses</param>
  /// <param name="parameter">The default value to use if 'value' is null</param>
  /// <returns>The value (or parameter) surrounded by parentheses. If both 'value' and 'parameter' are null, then an empty string is returned</returns>
  public sealed class SurroundingParenthesesConverter : IValueConverter {
    public object Convert(object value, Type targetType, object parameter, CultureInfo culture) {
      if (value != null) {
        return Formatter.SurroundWithParentheses(value.ToString());
      } else if (parameter != null) {
        return Formatter.SurroundWithParentheses(parameter.ToString());
      } else {
        return String.Empty;
      }
    }

    public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture) {
      throw new NotImplementedException();
    }
  }  
}
