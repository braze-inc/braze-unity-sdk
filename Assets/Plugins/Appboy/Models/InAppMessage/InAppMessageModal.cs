using System;
using Appboy.Utilities;

namespace Appboy.Models.InAppMessage {
  public class InAppMessageModal : InAppMessageImmersiveBase {
    public InAppMessageModal() {
    }
    
    public InAppMessageModal(JSONObject json) : base(json) {
    }
  }
}

