using System;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using System.Windows;
using AppboyPlatform.PCL.Models.Incoming.Cards;
using AppboyPlatform.PCL.Results;
using AppboyPlatform.Phone;
using AppboyUI.Phone.Annotations;
using System.Collections.Generic;

namespace AppboyUI.Phone.ViewModels {
  public class FeedViewModel : INotifyPropertyChanged {
    private bool _networkUnavailable;
    private bool _refreshingFeed;
    public event PropertyChangedEventHandler PropertyChanged;
    public ObservableCollection<BaseCard> Cards { get; set; }
    private HashSet<BaseCard> _allCards;
    private HashSet<CardCategory> _categories;
    
    public FeedViewModel() {
      Cards = new ObservableCollection<BaseCard>();
      _allCards = new HashSet<BaseCard>();
      _categories = new HashSet<CardCategory>();
    }

    public bool EmptyFeed {
      get {
        return NetworkUnavailable == false && RefreshingFeed == false && Cards.Count == 0;
      }
    }

    public bool NetworkUnavailable {
      get {
        return _networkUnavailable;
      }
      private set {
        if (value != _networkUnavailable) {
          _networkUnavailable = value;
          OnPropertyChanged("EmptyFeed");
        }
      }
    }
    public void SetCategory(CardCategory category) {
      SetCategories(new HashSet<CardCategory>() { category });
    }

    public void SetCategories(HashSet<CardCategory> categories) {
      _categories = categories;
      updateCardsWithCategories();
    }

    private void updateCardsWithCategories() {
      Cards.Clear();
      _allCards.Where(
        card => _categories == null ||
          _categories.Count == 0 ||
          _categories.Contains(CardCategory.ALL) || (
          (card.Categories == null || card.Categories.Length == 0) && (_categories.Contains(CardCategory.ALL) || _categories.Contains(CardCategory.NO_CATEGORY))) ||
          card.Categories.Intersect(_categories).Count() > 0
          ).ToList().ForEach(Cards.Add);

    }

    public bool RefreshingFeed {
      get {
        return _refreshingFeed;
      }
      private set {
        if (value != _refreshingFeed) {
          _refreshingFeed = value;
          OnPropertyChanged("EmptyFeed");
        }
      }
    }

    public void GetFeed() {
      GetFeed(new HashSet<CardCategory>() { CardCategory.ALL });
    }

    public void GetFeed(HashSet<CardCategory> categories) {
      _categories = categories;
      RefreshingFeed = true;
      Action<Task<IResult>> bindCards = (continuation) => {
        NetworkUnavailable = continuation.Result.ErrorType == ErrorType.NetworkUnavailable;
        Deployment.Current.Dispatcher.BeginInvoke(() => {
          foreach (BaseCard card in continuation.Result.Cards ?? Enumerable.Empty<BaseCard>()) {
            _allCards.Add(card);
          }
          updateCardsWithCategories();
        });
        RefreshingFeed = false;
      };
      Appboy.SharedInstance.RequestFeed().ContinueWith(bindCards);
    }

    [NotifyPropertyChangedInvocator]
    protected virtual void OnPropertyChanged([CallerMemberName] string propertyName = null) {
      PropertyChangedEventHandler handler = PropertyChanged;
      if (handler != null) {
        Deployment.Current.Dispatcher.BeginInvoke(() => {
          handler(this, new PropertyChangedEventArgs(propertyName));
        });
      }
    }
  }
}
