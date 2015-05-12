using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AppboyUI.Phone.Assets.Localization {
  // This class's task is to create an instance of the generated AppboyResource class and expose it as a public static property, thereby making it compatible with the data-binding infrasturcture.
  public class AppboyBindableResources {
    static readonly AppboyBindableChangeNotifier<AppboyResource> appboyResource = new AppboyBindableChangeNotifier<AppboyResource>(new AppboyResource());
    public static AppboyBindableChangeNotifier<AppboyResource> Resource {
      get { return appboyResource; }
    }
    public static void RaiseNotifyPropertyChanged() {
      appboyResource.RaisePropertyChanged();
    }
  }
}
