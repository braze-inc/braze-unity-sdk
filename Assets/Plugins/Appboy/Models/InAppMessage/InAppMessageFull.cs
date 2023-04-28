using System;
using Appboy.Utilities;

namespace Appboy.Models.InAppMessage {
  public class InAppMessageFull : InAppMessageImmersiveBase {
    public InAppMessageFull() {
    }
  
    public InAppMessageFull(JSONObject json) : base(json) {
    }
  }
}

