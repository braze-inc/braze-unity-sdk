using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Appboy.Models.InAppMessage {
  public interface IInAppMessage {
    // BackgroundColor defines the background color of the in-app message.
    Color? BackgroundColor { get; set; }
    
    // TextColor defines the message text color of the in-app message.
    Color? TextColor { get; set; }
    
    // Icon defines the font awesome unicode string of the Appboy icon.
    // You can choose to display one of the Appboy icons from Appboy dashboard. When you do so, this property will have the
    // unicode string of font awesome.
    string Icon { get; set; }
    
    // IconColor defines the font color of icon property.
    Color? IconColor { get; set; }
    
    // IconBackgroundColor defines the background color of icon property.
    Color? IconBackgroundColor { get; set; }
    
    // ImageURI defines the URI of the image icon on in-app message.
    // When there is a iconImage defined, the iconImage will be used and the value of property icon will 
    // be ignored.
    string ImageURI { get; set; }
    
    // This property defines the message displayed within the in-app message.
    string Message { get; set; }
    
    // This property carries extra data in the form of an dictionary which can be sent down via the Appboy Dashboard.
    // You may want to design and implement a custom handler to access this data depending on your use-case.
    Dictionary<string, string> Extras { get; set; }
    
    // This property defines the action that will be performed when the in-app message is clicked.
    // See the ClickAction enum documentation above offers additional details.
    ClickAction InAppClickAction { get; }
    
    // When the in-app message's InAppClickAction is URI, clicking on the in-app message will redirect to the uri defined
    // in this property.
    //
    // This property can be a HTTP URI or a protocol URI.
    string URI { get; }
    
    // InAppDismissType defines the dismissal behavior of the in-app message.
    DismissType InAppDismissType { get; set; }
    
    // This property defines the number of seconds before the in-app message is automatically dismissed.
    int Duration { get; set; }
    
    void LogClicked();
    
    void LogImpression();
    
    // Set InAppClickAction to be NEWS_FEED or NONE
    bool SetInAppClickAction(ClickAction clickAction);
    
    // Set InAppClickAction to be URI
    bool SetInAppClickAction(ClickAction clickAction, string uri);
  }
}

