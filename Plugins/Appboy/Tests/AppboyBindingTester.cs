using Appboy.Models;
using Appboy.Models.Cards;
using Appboy.Utilities;
using UnityEngine;
using System.Collections;

namespace Appboy {
  public class AppboyBindingTester : MonoBehaviour {
    public CardTester cardTester;
    public SlideupTester slideupTester;

    void Start() {}

    void SlideupReceivedCallback(string message) {
      Debug.Log("SlideupReceivedCallback message: " + message);
      Slideup slideup = new Slideup(message);
      Debug.Log("Slideup received: " + slideup);
      if (slideupTester != null) {
        slideupTester.DisplaySlideup(slideup);
      }
      // Here we are not really displaying  nor clicking the slideup, but just
      // testing the slideup API end point.
      slideup.LogImpression();
      slideup.LogClicked();
    }
		
    void PushNotificationReceivedCallback(string message) {
      Debug.Log("PushNotificationReceivedCallback message: " + message);
      PushNotification pushNotification = new PushNotification(message);
      Debug.Log("Push Notification received: " + pushNotification);     
    }

    void PushNotificationOpenedCallback(string message) {
      Debug.Log("PushNotificationOpenedCallback message: " + message);
      PushNotification pushNotification = new PushNotification(message);
      Debug.Log("Push Notification opened: " + pushNotification);
    }

    void PushNotificationReceivedCallbackForiOS(string message) {
      JSONClass pushNotificationJson = (JSONClass) JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push received Notification event: " + pushNotification);     
    }
		
    void PushNotificationOpenedCallbackForiOS(string message) {
      JSONClass pushNotificationJson = (JSONClass) JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push opened Notification event: " + pushNotification);      
    }
		
    void FeedReceivedCallback(string message) {
      Debug.Log("FeedReceivedCallback message: " + message);
      Feed feed = new Feed(message);
      Debug.Log("Feed received: " + feed);
      foreach (Card card in feed.Cards) {
        Debug.Log("Card: " + card);
      }
      feed.Cards[0].LogImpression();
      feed.Cards[0].LogClick();
      if (cardTester != null) {
        cardTester.DisplayCards(feed.Cards);
      }
    }
  }
}
