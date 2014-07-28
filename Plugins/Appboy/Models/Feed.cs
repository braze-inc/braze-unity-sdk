using Appboy.Models.Cards;
using Appboy.Utilities;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Appboy.Models {
  public class Feed {
    public List<Card> Cards { get; private set; }
    public int Count {
     get { return Cards.Count; }
    }
    public bool IsFromOfflineStorage {get; private set;}

    public Feed(string message) {
      if (String.IsNullOrEmpty(message)) {
        throw new ArgumentException("Message cannot be null or empty.", "message");
      }
      Cards = new List<Card>();
      JSONClass json;
      try {
        json = (JSONClass) JSON.Parse(message);
        if (json["mFeedCards"] != null) {
          JSONArray jsonArray = (JSONArray)JSON.Parse(json["mFeedCards"].ToString());
          Debug.Log(String.Format("parsed cards array with {0} of cards", jsonArray.Count));
          for (int i = 0; i < jsonArray.Count; i++) {
            JSONClass cardJson = jsonArray[i].AsObject;
            try {
              Debug.Log(String.Format("Card NO. {0} json string is {1}", i, cardJson));
              Card card = Feed.CreateCardFromJson(cardJson);
              if (card != null) {
                Cards.Add(card);
              }
            } catch {
              Debug.Log(String.Format("Unable to parse card from {0}", cardJson));
            }
          }
        }
      } catch {
        throw new ArgumentException("Cannot parse feed JSON message.");
      }

      IsFromOfflineStorage = json["mFromOfflineStorage"].AsBool;
    }

    private static Card CreateCardFromJson(JSONClass json) {
      string type = json["type"];
      switch (type) {
        case "banner_image":
          return new BannerCard(json);
        case "captioned_image":
          return new CaptionedImageCard(json);
        case "cross_promotion_small":
          return new CrossPromotionSmallCard(json);
        case "short_news":
          return new ClassicCard(json);
        case "text_announcement":
          return new TextAnnouncementCard(json);
        default:
          return null;
      }
    }
  }
}
