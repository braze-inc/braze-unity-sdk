using AppboyPlatform.PCL.Utilities;
using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media.Imaging;

namespace AppboyUI.Phone.Controls {
  public partial class StarRating : UserControl {
    public static readonly DependencyProperty RatingProperty = DependencyProperty.Register("Rating", typeof(double), typeof(StarRating), new PropertyMetadata(0.0, OnRatingChanged));
    private static readonly int MaxStars = 5;
    private static readonly Uri EmptyStarUri = new Uri(@"\Assets\Images\Star\Blue\com_appboy_star_empty.png", UriKind.RelativeOrAbsolute);
    private static readonly Uri HalfStarUri = new Uri(@"\Assets\Images\Star\Blue\com_appboy_star_half.png", UriKind.RelativeOrAbsolute);
    private static readonly Uri FullStarUri = new Uri(@"\Assets\Images\Star\Blue\com_appboy_star_full.png", UriKind.RelativeOrAbsolute);

    public StarRating() {
      InitializeComponent();
    }

    public double Rating {
      get {
        return (double)GetValue(RatingProperty);
      }
      set {
        if (value < 0) {
          SetValue(RatingProperty, 0);
        } else if (value > MaxStars) {
          SetValue(RatingProperty, MaxStars);
        } else {
          SetValue(RatingProperty, value);
        }
      }
    }

    public void UpdateUserInterface() {
      double roundedRating = Formatter.RoundToNearestMultipleOfOneHalf(Rating);
      int ratingFloor = (int)Math.Floor(roundedRating);
      for (int i = 0; i < ratingFloor; i++) {
        SetStarImage(i, FullStarUri);
      }
      for (int i = (int)Math.Ceiling(roundedRating); i < MaxStars; i++) {
        SetStarImage(i, EmptyStarUri);
      }
      if (roundedRating % 1 != 0d) {
        SetStarImage(ratingFloor, HalfStarUri);
      }
    }

    private void SetStarImage(int index, Uri image) {
      Image star = StarStackPanel.Children[index] as Image;
      if (star != null && image != null) {
        star.Source = new BitmapImage(image);
      }
    }

    private static void OnRatingChanged(DependencyObject d, DependencyPropertyChangedEventArgs e) {
      var starRating = (StarRating)d;
      starRating.UpdateUserInterface();
    }
  }
}
