using Appboy.Models;
using Appboy.Models.Cards;
using Appboy.Models.InAppMessage;
using Appboy.Utilities;
using UnityEngine;
using System.Collections;

namespace Appboy {
  public class AppboyBindingTester : MonoBehaviour {

    void Start() {
    }

    void InAppMessageReceivedCallback(string message) {
      Debug.Log("InAppMessageReceivedCallback message: " + message);
      IInAppMessage inApp = InAppMessageFactory.BuildInAppMessage(message);
      Debug.Log("In-app message received: " + inApp);
      inApp.LogClicked();
      inApp.LogImpression();
      if (inApp is IInAppMessageImmersive) {
        IInAppMessageImmersive inAppImmersive = inApp as IInAppMessageImmersive;
        if (inAppImmersive.Buttons != null && inAppImmersive.Buttons.Count > 0) {
          inAppImmersive.LogButtonClicked(inAppImmersive.Buttons[0].ButtonID);
        }
      }
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
      JSONClass pushNotificationJson = (JSONClass)JSON.Parse(message);
      ApplePushNotification pushNotification = new ApplePushNotification(pushNotificationJson);
      Debug.Log("Push received Notification event: " + pushNotification);     
    }

    void PushNotificationOpenedCallbackForiOS(string message) {
      JSONClass pushNotificationJson = (JSONClass)JSON.Parse(message);
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
    }
  }
}
