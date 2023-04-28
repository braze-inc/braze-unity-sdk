using Appboy;
using Appboy.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace Appboy.Models.InAppMessage {
  public abstract class InAppMessageBase : IInAppMessage {
    private const int DefaultDuration = 5000;
    protected string _jsonString;
    private bool _clickLogged = false;
    private bool _impressionLogged = false;
    private int _duration;

    // The background color of the in-app message.
    public Color? BackgroundColor { get; set; }

    public Color? TextColor { get; set; }

    // The font awesome unicode string of the in-app message icon.
    public string Icon { get; set; }

    // The color of the icon text.
    public Color? IconColor { get; set; }

    // The color of the icon background.
    public Color? IconBackgroundColor { get; set; }

    public string ImageURI { get; set; }

    public string Message { get; set; }

    public Dictionary<string, string> Extras { get; set; }

    public ClickAction InAppClickAction { get; private set; }

    public string URI { get; private set; }

    public DismissType InAppDismissType { get; set; }

    // The number of seconds that should elapse before the in-app message is automatically dismissed.
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
    
    public InAppMessageBase(JSONObject json) {
      if (json == null) {
        throw new ArgumentNullException("Received null JSONObject.");
      }
      _jsonString = json.ToString();

      Message = json[InAppMessageConstants.MessageKey];
      if (json[InAppMessageConstants.ExtrasKey] != null) {
        Extras = JsonUtils.JSONObjectToDictionary(json[InAppMessageConstants.ExtrasKey].AsObject);
      }
      InAppClickAction = (ClickAction)EnumUtils.TryParse(typeof(ClickAction), json[InAppMessageConstants.ClickActionKey], true, ClickAction.NEWS_FEED);
      URI = json[InAppMessageConstants.URIKey];
      ImageURI = json[InAppMessageConstants.ImageURLKey];
      if (InAppClickAction == ClickAction.URI && URI == null) {
        Debug.Log("Received ClickAction.URI but URI was null. Setting click action to NONE.");
        InAppClickAction = ClickAction.NONE;
      }
      InAppDismissType = (DismissType)EnumUtils.TryParse(typeof(DismissType), json[InAppMessageConstants.DismissTypeKey], true, DismissType.AUTO_DISMISS);
      Duration = json[InAppMessageConstants.DurationKey].AsInt;
      BackgroundColor = ColorUtils.HexToColor((int)json[InAppMessageConstants.BackgroundColorKey]);
      TextColor = ColorUtils.HexToColor((int)json[InAppMessageConstants.TextColorKey]);
      Icon = json[InAppMessageConstants.IconKey];
      IconColor = ColorUtils.HexToColor((int)json[InAppMessageConstants.IconColorKey]);
      IconBackgroundColor = ColorUtils.HexToColor((int)json[InAppMessageConstants.IconBackgroundColorKey]);
    }
    
    public void LogClicked() {
      if (!_clickLogged) {
        _clickLogged = true;
        AppboyBinding.LogInAppMessageClicked(_jsonString);
      } else {
        Debug.Log("Already logged a click. Doing nothing.");
      }
    }
    
    public void LogImpression() {
      if (!_impressionLogged) {
        _impressionLogged = true;
        AppboyBinding.LogInAppMessageImpression(_jsonString);
      } else {
        Debug.Log("Already logged an impression. Doing nothing.");
      }
    }

    // Set InAppClickAction to be NEWS_FEED or NONE
    public bool SetInAppClickAction(ClickAction clickAction) {
      if (clickAction != ClickAction.URI) {
        InAppClickAction = clickAction;
        URI = null;
        return true;
      } else {
        Debug.Log("A non-null URI is required in order to set the InAppClickAction to URI.");
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
