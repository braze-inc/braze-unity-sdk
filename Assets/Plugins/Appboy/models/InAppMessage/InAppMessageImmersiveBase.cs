using System;
using Appboy.Utilities;
using UnityEngine;
using System.Collections.Generic;

namespace Appboy.Models.InAppMessage {
  public abstract class InAppMessageImmersiveBase : InAppMessageBase, IInAppMessageImmersive {
    private bool _buttonClickLogged = false;
  
    public string Header { get; set; }

    public Color? HeaderTextColor { get; set; }

    public Color? CloseButtonColor { get; set; }

    public List<InAppMessageButton> Buttons { get; set; }
    
    public override string ToString() {
      return String.Format("{0}, Header={1}, HeaderTextColor={2}, CloseButtonColor={3}, Buttons{4}",
                           base.ToString(), Header, HeaderTextColor, CloseButtonColor, CollectionUtils.ListToString(Buttons));
    }
    
    protected InAppMessageImmersiveBase() {
    }

    public InAppMessageImmersiveBase(JSONClass json) : base(json) {
      Header = json[InAppMessageConstants.HeaderKey];
      HeaderTextColor = ColorUtils.HexToColor(json[InAppMessageConstants.HeaderTextColorKey]);
      CloseButtonColor = ColorUtils.HexToColor(json[InAppMessageConstants.CloseButtonColorKey]);

      if (json[InAppMessageConstants.ButtonsKey] != null) {
        Buttons = new List<InAppMessageButton>();
        JSONArray jsonArray = (JSONArray)JSON.Parse(json[InAppMessageConstants.ButtonsKey].ToString());
        Debug.Log(String.Format("parse in-app message with {0} buttons", jsonArray.Count));
        for (int i = 0; i < jsonArray.Count; i++) {
          JSONClass buttonJson = jsonArray[i].AsObject;
          try {
            Debug.Log(String.Format("Button no. {0} json string is {1}", i, buttonJson));
            InAppMessageButton button = new InAppMessageButton(buttonJson);
            if (button != null) {
              Buttons.Add(button);
            }
          } catch {
            Debug.Log(String.Format("Unable to parse button from {0}", buttonJson));
          }
        }
      }
    }
    
    public void LogButtonClicked(int buttonID) {
      if (!_buttonClickLogged) {
        _buttonClickLogged = true;
        AppboyBinding.LogInAppMessageButtonClicked(_jsonString, buttonID);
      } else {
        Debug.Log("The in-app message already log a button clicked.");
      }
    }
  }
}

