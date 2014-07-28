using Appboy;
using Appboy.Models.Cards;
using Appboy.Utilities;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Appboy {
  public class CardTester : MonoBehaviour {
    public string[] cards;

    private void LoadStaticCards() {
      List<Card> cardList = new List<Card>();
      string bannerJsonString = @"{
        ""id"" : ""xxxx-xxxx-xxxx-xxxx-xxxx"",
        ""type"" : ""banner"",
        ""image"" : ""http://www.appboy.com/image.png"",
        ""url"" : ""http://www.appboy.com"",
        ""domain"" : ""appboy.com"",
        ""viewed"" : false,
        ""created"" : 1000000000,
        ""updated"" : 1000000001
      }";
      string captionedImageJsonString = @"{
        ""id"" : ""xxxx-xxxx-xxxx-xxxx-xxxx"",
        ""type"" : ""captioned_image"",
        ""image"" : ""http://www.appboy.com/image.png"",
        ""title"" : ""Sample captioned image card."",
        ""description"" : ""This is a sample captioned image card."",
        ""url"" : ""http://www.appboy.com"",
        ""domain"" : ""appboy.com"",
        ""viewed"" : false,
        ""created"" : 1000000000,
        ""updated"" : 1000000001
      }";
#if UNITY_ANDROID
      string crossPromotionSmallAndroidJsonString = @"{
        ""id"" : ""xxxx-xxxx-xxxx-xxxx-xxxx"",
        ""type"" : ""cross_promotion_small"",
        ""title"" : ""DroidBoy"",
        ""subtitle"" : ""Appboy sample app."",
        ""caption"" : ""Caption goes here."",
        ""image"" : ""http://www.appboy.com/image.png"",
        ""rating"" : ""5.0"",
        ""reviews"" : ""1000"",
        ""price"" : ""0"",
        ""url"" : ""http://www.appboy.com"",
        ""package"" : ""com.appboy.droidboy"",
        ""viewed"" : false,
        ""created"" : 1000000000,
        ""updated"" : 1000000001
      }";
#endif
#if UNITY_IOS
      string crossPromotionSmallIOSJsonString = @"{
        ""id"" : ""xxxx-xxxx-xxxx-xxxx-xxxx"",
        ""type"" : ""cross_promotion_small"",
        ""title"" : ""Stopwatch"",
        ""subtitle"" : ""Appboy sample app."",
        ""caption"" : ""Caption goes here."",
        ""image"" : ""http://www.appboy.com/image.png"",
        ""rating"" : ""5.0"",
        ""reviews"" : ""1000"",
        ""price"" : ""0"",
        ""url"" : ""http://www.appboy.com"",
        ""media_type"" : ""itunes_software"",
        ""itunes_id"" : ""100000000"",
        ""universal"" : ""true"",
        ""viewed"" : false,
        ""created"" : 1000000000,
        ""updated"" : 1000000001
      }";
#endif
      string shortNewsJsonString = @"{
        ""id"" : ""xxxx-xxxx-xxxx-xxxx-xxxx"",
        ""type"" : ""short_news"",
        ""image"" : ""http://www.appboy.com/image.png"",
        ""title"" : ""Sample short news card."",
        ""description"" : ""This is a sample short news card."",
        ""url"" : ""http://www.appboy.com"",
        ""domain"" : ""appboy.com"",
        ""viewed"" : false,
        ""created"" : 1000000000,
        ""updated"" : 1000000001
      }";
      string textAnnouncementJsonString = @"{
        ""id"" : ""xxxx-xxxx-xxxx-xxxx-xxxx"",
        ""type"" : ""text_announcement"",
        ""title"" : ""Sample text announcement card."",
        ""description"" : ""This is a sample text announcement card."",
        ""url"" : ""http://www.appboy.com"",
        ""domain"" : ""appboy.com"",
        ""viewed"" : false,
        ""created"" : 1000000000,
        ""updated"" : 1000000001
      }";
            
      JSONClass bannerJson = (JSONClass) JSON.Parse(bannerJsonString);
      BannerCard bannerCard = new BannerCard(bannerJson);
      Debug.Log("Banner: " + bannerCard);
      cardList.Add(bannerCard);
            
      JSONClass captionedImageJson = (JSONClass) JSON.Parse(captionedImageJsonString);
      CaptionedImageCard captionedImageCard = new CaptionedImageCard(captionedImageJson);
      Debug.Log("Captioned Image: " + captionedImageCard);
      cardList.Add(captionedImageCard);
            
#if UNITY_ANDROID
      JSONClass crossPromotionSmallAndroidJson = (JSONClass) JSON.Parse(crossPromotionSmallAndroidJsonString);
      CrossPromotionSmallCard crossPromotionSmallAndroidCard = new CrossPromotionSmallCard(crossPromotionSmallAndroidJson);
      Debug.Log("Cross Promotion Small Android: " + crossPromotionSmallAndroidCard);
      cardList.Add(crossPromotionSmallAndroidCard);
#endif
            
#if UNITY_IOS
      JSONClass crossPromotionSmallIOSJson = (JSONClass) JSON.Parse(crossPromotionSmallIOSJsonString);
      CrossPromotionSmallCard crossPromotionSmallIOSCard = new CrossPromotionSmallCard(crossPromotionSmallIOSJson);
      Debug.Log("Cross Promotion Small iOS: " + crossPromotionSmallIOSCard);
      cardList.Add(crossPromotionSmallIOSCard);
#endif

      JSONClass shortNewsJson = (JSONClass) JSON.Parse(shortNewsJsonString);
      ClassicCard shortNewsCard = new ClassicCard(shortNewsJson);
      Debug.Log("Short News: " + shortNewsCard);
      cardList.Add(shortNewsCard);
            
      JSONClass textAnnouncementJson = (JSONClass) JSON.Parse(textAnnouncementJsonString);
      TextAnnouncementCard textAnnouncementCard = new TextAnnouncementCard(textAnnouncementJson);
      Debug.Log("Text Announcement: " + textAnnouncementCard);
      cardList.Add(textAnnouncementCard);      
           
      DisplayCards(cardList);
    }

    public void DisplayCards(List<Card> cardList) {
      List<string> cardStrings = new List<string>();
      foreach (Card card in cardList) {
        cardStrings.Add(FormatCard(card));
      }
      cards = (string[]) cardStrings.ToArray();
    }

    private string FormatCard(Card card) {
      if (card.GetType() == typeof(BannerCard)) {
        return String.Format("{0}", card.Type);
      } else if (card.GetType() == typeof(CaptionedImageCard)) {
        CaptionedImageCard captionedImageCard = (CaptionedImageCard) card;
        return String.Format("{0}\n{1}\n{2}", captionedImageCard.Type, captionedImageCard.Title, captionedImageCard.Description);
      } else if (card.GetType() == typeof(CrossPromotionSmallCard)) {
        CrossPromotionSmallCard crossPromotionSmallCard = (CrossPromotionSmallCard) card;
        return String.Format("{0}\n{1}\n{2}", crossPromotionSmallCard.Type, crossPromotionSmallCard.Title, crossPromotionSmallCard.Subtitle);
      } else if (card.GetType() == typeof(ClassicCard)) {
        ClassicCard shortNewsCard = (ClassicCard) card;
        return String.Format("{0}\n{1}\n{2}", shortNewsCard.Type, shortNewsCard.Title, shortNewsCard.Description);
      } else if (card.GetType() == typeof(TextAnnouncementCard)) {
        TextAnnouncementCard textAnnouncementCard = (TextAnnouncementCard) card;
        return String.Format("{0}\n{1}\n{2}", textAnnouncementCard.Type, textAnnouncementCard.Title, textAnnouncementCard.Description);
      } else {
        return "Unsupported card type.";
      }
    }
    
    void OnGUI() {
      if (GUI.Button(new Rect(10, 10, 100, 25), "Static Cards")) {
        LoadStaticCards();
      }     
      if (GUI.Button(new Rect(120, 10, 100, 25), "Request Feed")) {
        AppboyBinding.RequestFeedRefreshFromCache();
      }
      
      GUI.SelectionGrid(new Rect(10, 45, 210, 400), 0, cards, 1);
    }
  }
}
