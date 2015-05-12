using System;
using System.Globalization;
using System.Windows.Data;
using AppboyPlatform.PCL.Utilities;

namespace AppboyUI.Phone.Converters {
  public sealed class PriceConverter : IValueConverter {
    public object Convert(object value, Type targetType, object parameter, CultureInfo culture) {
      decimal price = value as decimal? ?? 0m;
      return Formatter.FormatPrice(price);
    }

    public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture) {
      throw new NotImplementedException();
    }
  }
}
