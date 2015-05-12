using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Appboy.Models.InAppMessage {
  public interface IInAppMessageImmersive {
    string Header { get; set; }
    
    Color? HeaderTextColor { get; set; }
    
    Color? CloseButtonColor { get; set; }
    
    List<InAppMessageButton> Buttons { get; set; }
    
    void LogButtonClicked(int buttonID);
  }
}
