using AppboyPlatform.PCL.Utilities;
using System.Windows.Data;

namespace AppboyUI.Phone.Converters {
  public sealed class HttpsToHttpConverter : IValueConverter {
    public object Convert(object value, System.Type targetType, object parameter, System.Globalization.CultureInfo culture) {
      var url = value as string;
      if (url != null) {
        return Formatter.HttpsToHttp(url);
      }
      return value;
    }

    public object ConvertBack(object value, System.Type targetType, object parameter, System.Globalization.CultureInfo culture) {
      throw new System.NotImplementedException();
    }
  }
}
