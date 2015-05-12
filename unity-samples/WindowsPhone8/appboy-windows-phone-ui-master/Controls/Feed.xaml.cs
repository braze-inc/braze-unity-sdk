using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using System.Windows.Threading;
using AppboyPlatform.PCL.Models.Incoming.Cards;
using AppboyPlatform.PCL.Utilities;
using AppboyPlatform.Phone;
using AppboyUI.Phone.ViewModels;
using Microsoft.Phone.Tasks;

namespace AppboyUI.Phone.Controls {
  public partial class Feed : UserControl {
    private readonly FeedAnalyticsTracker _feedAnalyticsTracker;
    private readonly FeedViewModel _feedViewModel;
    private readonly DispatcherTimer _impressionTimer;

    public Feed() {
      InitializeComponent();
      Loaded += Feed_Loaded;
      Unloaded += Feed_Unloaded;
      _feedViewModel = new FeedViewModel();
      _feedAnalyticsTracker = new FeedAnalyticsTracker(Appboy.SharedInstance.EventLogger);
      _impressionTimer = new DispatcherTimer();
      _impressionTimer.Tick += CalculateCardImpressions;
      _impressionTimer.Interval = new TimeSpan(0, 0, 1);
      FeedProgressBar.DataContext = _feedViewModel;
      FeedListBox.DataContext = _feedViewModel.Cards;
      NetworkErrorMessage.DataContext = _feedViewModel;
      FeedEmptyMessage.DataContext = _feedViewModel;
    }

    public FeedViewModel FeedViewModel {
      get { return _feedViewModel; }
    }

    public string InitialCategory { get; set; }

    private void Feed_Loaded(object sender, RoutedEventArgs e) {
      var initialCategorySet = new HashSet<CardCategory>();
      if (InitialCategory != null) {
        initialCategorySet.Add((CardCategory)Enum.Parse(typeof(CardCategory), InitialCategory.ToUpper()));
      }
      _feedViewModel.GetFeed(initialCategorySet);
      _feedAnalyticsTracker.LogFeedDisplayed();
      _impressionTimer.Start();
    }

    private void Feed_Unloaded(object sender, RoutedEventArgs e) {
      _impressionTimer.Stop();
    }

    public void SetCategory(CardCategory category) {
      _feedViewModel.SetCategory(category);
    }

    public void SetCategories(HashSet<CardCategory> categories) {
      _feedViewModel.SetCategories(categories);
    }

    public void OrientationChanged() {
      _feedViewModel.OrientationChange();
    }

    private void Card_Tapped(object sender, GestureEventArgs e) {
      string url = "";
      var card = ((FrameworkElement)sender).DataContext as BaseCard;
      string id = card.Id;
      Type cardType = card.GetType();
      if (cardType == typeof(Banner)) {
        url = ((Banner)card).Url;
      }
      if (cardType == typeof(CaptionedImage)) {
        url = ((CaptionedImage)card).Url;
      }
      if (cardType == typeof(ShortNews)) {
        url = ((ShortNews)card).Url;
      }
      if (cardType == typeof(TextAnnouncement)) {
        url = ((TextAnnouncement)card).Url;
      }
      if (!String.IsNullOrWhiteSpace(url)) {
        Appboy.SharedInstance.EventLogger.LogFeedCardClick(id);
        var webBrowserTask = new WebBrowserTask();
        webBrowserTask.Uri = new Uri(url, UriKind.Absolute);
        webBrowserTask.Show();
      }
    }

    private void CrossPromotionSmallPrice_Click(object sender, RoutedEventArgs e) {
      var card = ((FrameworkElement)sender).DataContext as BaseCard;
      var crossPromotionSmall = card as CrossPromotionSmall;
      if (crossPromotionSmall != null && !String.IsNullOrWhiteSpace(crossPromotionSmall.AppId)) {
        Appboy.SharedInstance.EventLogger.LogFeedCardClick(crossPromotionSmall.Id);
        var marketplaceDetailTask = new MarketplaceDetailTask {
          ContentIdentifier = crossPromotionSmall.AppId,
          ContentType = MarketplaceContentType.Applications
        };
        marketplaceDetailTask.Show();
      }
    }

    private void CalculateCardImpressions(object sender, object e) {
      // Skipping impression testing if there are no cards in the view model.
      if (_feedViewModel.Cards.Count == 0) {
        return;
      }

      CalculateCardImpressionsViaContainerViewTesting();
    }

    /// <summary>
    ///   Calculates card impressions by fetching the container for each card and performing an intersection
    ///   test with the ListBox. Impressions are logged for all cards that intersect the ListBox.
    /// </summary>
    private void CalculateCardImpressionsViaContainerViewTesting() {
      foreach (BaseCard card in FeedViewModel.Cards ?? Enumerable.Empty<BaseCard>()) {
        var element = FeedListBox.ItemContainerGenerator.ContainerFromItem(card) as FrameworkElement;
        if (IsInView(element, FeedListBox)) {
          _feedAnalyticsTracker.LogCardImpression(card.Id);
        }
      }
    }

    private static bool IsInView(FrameworkElement element, FrameworkElement container) {
      if (element == null || element.Visibility == Visibility.Collapsed) {
        return false;
      }
      Rect bounds = element.TransformToVisual(container).TransformBounds(new Rect(0, 0, element.ActualWidth, element.ActualHeight));
      var rect = new Rect(0.0, 0.0, container.ActualWidth, container.ActualHeight);
      return rect.Contains(new Point(bounds.X, bounds.Y)) || rect.Contains(new Point(bounds.X, bounds.Y + bounds.Height));
    }
  }
}
