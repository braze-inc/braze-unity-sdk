using Appboy;
using Appboy.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace Appboy.Models.InAppMessage {

  // Use InAppMessageFactory.BuildInAppMessage(InAppMessageString) to get the in-app message with correct type from
  // Appboy SDK.
  public abstract class InAppMessageBase : IInAppMessage {
    private const int DefaultDuration = 5000;
    protected string _jsonString;
    private bool _clickLogged = false;
    private bool _impressionLogged = false;
    private int _duration;

    // BackgroundColor defines the background color of the in-app message.
    public Color? BackgroundColor { get; set; }

    // TextColor defines the message text color of the in-app message.
    public Color? TextColor { get; set; }

    // Icon defines the font awesome unicode string of the Appboy icon.
    // You can choose to display one of the Appboy icons from Appboy dashboard. When you do so, this property will have the
    // unicode string of font awesome.
    public string Icon { get; set; }

    // IconColor defines the font color of icon property.
    public Color? IconColor { get; set; }

    // IconBackgroundColor defines the background color of icon property.
    public Color? IconBackgroundColor { get; set; }

    // imageURI defines the URI of the image icon on in-app message.
    // When there is a iconImage defined, the iconImage will be used and the value of property icon will 
    // be ignored.
    public string ImageURI { get; set; }

    // This property defines the message displayed within the in-app message.
    public string Message { get; set; }

    // This property carries extra data in the form of an dictionary which can be sent down via the Appboy Dashboard.
    // You may want to design and implement a custom handler to access this data depending on your use-case.
    public Dictionary<string, string> Extras { get; set; }

    // This property defines the action that will be performed when the in-app message is clicked.
    // See the ClickAction enum documentation above offers additional details.
    public ClickAction InAppClickAction { get; private set; }

    // When the in-app message's InAppClickAction is URI, clicking on the in-app message will redirect to the uri defined
    // in this property.
    //
    // This property can be a HTTP URI or a protocol URI.
    public string URI { get; private set; }

    // InAppDismissType defines the dismissal behavior of the in-app message.
    public DismissType InAppDismissType { get; set; }

    // This property defines the number of seconds before the in-app message is automatically dismissed.
    public int Duration { 
      get {
        return _duration;
      }
      set {
        _duration = (value <= 0 ? DefaultDuration : value);
      }
    }
    
    public override string ToString() {
      return String.Format("{0}: Message={1}, InAppClickAction={2}, URI={3}, InAppDismissType={4}, Duration={5}, Extras={6}, BackgroundColor={7}" +
                           "TextColor={8}, Icon={9}, IconColor={10}, IconBackgroundColor={11}, ImageURI={12}", 
                           this.GetType().Name, Message, InAppClickAction, URI, InAppDismissType, Duration, CollectionUtils.DictionaryToString(Extras),
                           BackgroundColor, TextColor, Icon, IconColor, IconBackgroundColor, ImageURI);
    }
    
    protected InAppMessageBase() {
    }
    
    public InAppMessageBase(JSONClass json) {
      if (json == null) {
        throw new ArgumentNullException("The JSON Class passed to InAppMessage constructor is null.");
      }
      _jsonString = json.ToString();
      Message = json[InAppMessageConstants.MessageKey];
      if (json[InAppMessageConstants.ExtrasKey] != null) {
        Extras = JsonUtils.JSONClassToDictionary(json[InAppMessageConstants.ExtrasKey].AsObject);
      }
      InAppClickAction = (ClickAction)EnumUtils.TryParse(typeof(ClickAction), json[InAppMessageConstants.ClickActionKey], true, ClickAction.NEWS_FEED);
      URI = json[InAppMessageConstants.URIKey];
      ImageURI = json[InAppMessageConstants.ImageURLKey];
      if (InAppClickAction == ClickAction.URI && URI == null) {
        Debug.Log("The click action cannot be set to URI because the uri is null. Setting click action to NONE.");
        InAppClickAction = ClickAction.NONE;
      }
      InAppDismissType = (DismissType)EnumUtils.TryParse(typeof(DismissType), json[InAppMessageConstants.DismissTypeKey], true, DismissType.AUTO_DISMISS);
      Duration = json[InAppMessageConstants.DurationKey].AsInt;
      BackgroundColor = ColorUtils.HexToColor(json[InAppMessageConstants.BackgroundColorKey]);
      TextColor = ColorUtils.HexToColor(json[InAppMessageConstants.TextColorKey]);
      Icon = json[InAppMessageConstants.IconKey];
      IconColor = ColorUtils.HexToColor(json[InAppMessageConstants.IconColorKey]);
      IconBackgroundColor = ColorUtils.HexToColor(json[InAppMessageConstants.IconBackgroundColorKey]);
    }
    
    public void LogClicked() {
      if (!_clickLogged) {
        _clickLogged = true;
        AppboyBinding.LogInAppMessageClicked(_jsonString);
      } else {
        Debug.Log("The in-app message already logged a click.");
      }
    }
    
    public void LogImpression() {
      if (!_impressionLogged) {
        _impressionLogged = true;
        AppboyBinding.LogInAppMessageImpression(_jsonString);
      } else {
        Debug.Log("The in-app message already logged an impression.");
      }
    }

    // Set InAppClickAction to be NEWS_FEED or NONE
    public bool SetInAppClickAction(ClickAction clickAction) {
      if (clickAction != ClickAction.URI) {
        InAppClickAction = clickAction;
        URI = null;
        return true;
      } else {
        Debug.LogError("A non-null URI is required in order to set the InAppClickAction to URI.");
        return false;
      }
    }

    // Set InAppClickAction to be URI
    public bool SetInAppClickAction(ClickAction clickAction, string uri) {
      if (uri != null && clickAction == ClickAction.URI) {
        InAppClickAction = clickAction;
        URI = uri;
        return true;
      } else {
        return SetInAppClickAction(clickAction);
      }
    }
  }
}
