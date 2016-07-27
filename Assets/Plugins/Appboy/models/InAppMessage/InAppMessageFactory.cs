using System;
using Appboy.Utilities;

namespace Appboy.Models.InAppMessage {
  // This class is the in-app message builder. Passing the in-app message JSON string from Appboy, and the Builder will
  // return a corresponding InAppMessageSlideup, InAppMessageModal or InAppMessageFull;
  public class InAppMessageFactory {
    public static IInAppMessage BuildInAppMessage(string inAppMessageJSONString) {
      JSONClass json = InAppMessageConstants.JSONObjectFromString(inAppMessageJSONString);
      if (json != null) {
        // If the type is specified, create corresponding in-app message, otherwise, create an in-app message slideup.
        InAppMessageType type = (InAppMessageType)EnumUtils.TryParse(typeof(InAppMessageType), json[InAppMessageConstants.TypeKey], true, InAppMessageType.SLIDEUP);
        switch (type) {
          case InAppMessageType.FULL:
            return new InAppMessageFull(json);
          case InAppMessageType.MODAL:
            return new InAppMessageModal(json);
          case InAppMessageType.SLIDEUP:
          default:
            return new InAppMessageSlideup(json);
        }
      }
      return null;
    }
  }
}
