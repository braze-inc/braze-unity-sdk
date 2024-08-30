using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Appboy.Models.InAppMessage {
  public interface IInAppMessage {
    Color? BackgroundColor { get; set; }
    
    Color? TextColor { get; set; }
    
    // The font awesome unicode string of the in-app message icon.
    string Icon { get; set; }
    
    // The color of the icon text.
    Color? IconColor { get; set; }
    
    // The color of the icon background.
    Color? IconBackgroundColor { get; set; }
    
    string ImageURI { get; set; }
    
    string Message { get; set; }
    
    Dictionary<string, string> Extras { get; set; }
    
    ClickAction InAppClickAction { get; }

    string URI { get; }

    DismissType InAppDismissType { get; set; }
    
    // The number of seconds that should elapse before the in-app message is automatically dismissed.
    int Duration { get; set; }

    // Whether the in-app message is a test send.
    bool IsTestSend { get; }
    
    void LogClicked();
    
    void LogImpression();
    
    // Use this method for ClickAction.NEWS_FEED or ClickAction.NONE
    bool SetInAppClickAction(ClickAction clickAction);
    
    // Use this method for ClickAction.URI
    bool SetInAppClickAction(ClickAction clickAction, string uri);
  }
}

