using System;
using System.Globalization;
using System.Windows.Data;
using AppboyPlatform.PCL.Utilities;

namespace AppboyUI.Phone.Converters {
  public sealed class HttpsToHttpConverter : IValueConverter {
    public object Convert(object value, Type targetType, object parameter, CultureInfo culture) {
      var url = value as string;
      if (url != null) {
        return Formatter.HttpsToHttp(url);
      }
      return value;
    }

    public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture) {
      throw new NotImplementedException();
    }
  }
}
