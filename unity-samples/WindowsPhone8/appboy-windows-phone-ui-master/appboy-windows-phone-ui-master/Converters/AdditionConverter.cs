using System;
using System.Globalization;
using System.Windows.Data;

namespace AppboyUI.Phone.Converters {
  public sealed class AdditionConverter : IValueConverter {
    public object Convert(object value, Type targetType, object parameter, CultureInfo culture) {
      Double input = Double.Parse(value.ToString());
      Double param = Double.Parse(parameter.ToString());
      return input + param;
    }

    public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture) {
      throw new NotImplementedException();
    }
  }  
}
