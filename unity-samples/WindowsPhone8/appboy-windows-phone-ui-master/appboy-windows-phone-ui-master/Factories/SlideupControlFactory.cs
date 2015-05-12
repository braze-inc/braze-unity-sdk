using AppboyPlatform.PCL.Models.Incoming;
using AppboyPlatform.Phone.Managers;
using System.Windows;
using System.Windows.Controls;

namespace AppboyUI.Phone.Factories {
  public class SlideupControlFactory : ISlideupControlFactory {
    public UserControl GetSlideupControl(Slideup slideup) {
      var control = new Controls.Slideup();
      if (slideup.ClickAction == ClickAction.NONE) {
        control.Chevron.Visibility = Visibility.Collapsed;
      } else {
        control.Chevron.Visibility = Visibility.Visible;
      }
      control.Message.Text = slideup.Message;
      return control;
    }
  }
}
