using AppboyPlatform.PCL.Models.Incoming.Cards;
using System.Diagnostics;
using System.Windows;

namespace AppboyUI.Phone.Utilities {
  public class CardTemplateSelector : DataTemplateSelector {
    public DataTemplate BannerDataTemplate { get; set; }
    public DataTemplate CaptionedImageDataTemplate { get; set; }
    public DataTemplate CrossPromotionSmallDataTemplate { get; set; }
    public DataTemplate ShortNewsDataTemplate { get; set; }
    public DataTemplate TextAnnouncementDataTemplate { get; set; }

    public override DataTemplate SelectTemplate(object item, DependencyObject container) {
      BaseCard card = item as BaseCard;
      if (card is Banner) {
        return BannerDataTemplate;
      } else if (card is CaptionedImage) {
        return CaptionedImageDataTemplate;
      } else if (card is CrossPromotionSmall) {
        return CrossPromotionSmallDataTemplate;
      } else if (card is ShortNews) {
        return ShortNewsDataTemplate;
      } else if (card is TextAnnouncement) {
        return TextAnnouncementDataTemplate;
      } else {
        Debug.WriteLine("Could not find the appropriate template for card {0}.", card);
      }
      return base.SelectTemplate(item, container);
    }

    protected override void OnContentChanged(object oldContent, object newContent) {
      base.OnContentChanged(oldContent, newContent);
      ContentTemplate = SelectTemplate(newContent, this);
    }
  }
}
