using System.ComponentModel;

namespace AppboyUI.Phone.Assets.Localization {
  // This class provides dynamic update capability for the localization of SDK. Simply exposing the 
  // AppboyResource doesn't allow the UI to be updated when a culture change occurs at runtime. By using AppboyBinableChangeNotifier 
  // class to wrap the resource's designer class, change notification can be surreptitiously added for all properties.
  // This code is from book <Windows Phone 8> by Daniel Vaughan.
  public sealed class AppboyBindableChangeNotifier<T> : INotifyPropertyChanged {
    private static T instance;

    public AppboyBindableChangeNotifier(T observableObject) {
      instance = observableObject;
    }

    public T Instance {
      get { return instance; }
    }

    public event PropertyChangedEventHandler PropertyChanged;

    public void RaisePropertyChanged() {
      PropertyChangedEventHandler temp = PropertyChanged;
      if (temp != null) {
        temp(this, new PropertyChangedEventArgs(string.Empty));
      }
    }
  }
}
