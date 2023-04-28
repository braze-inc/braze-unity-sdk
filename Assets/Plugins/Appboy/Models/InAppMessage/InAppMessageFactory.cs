using System;
using Appboy.Utilities;

namespace Appboy.Models.InAppMessage {
  public class InAppMessageFactory {

    /// <summary>
    /// Builds in-app message instances from serialized in-app message objects.
    ///
    /// Use this method to create a useful model object from the in-app message string
    /// passed into your gameobject callback.
    /// </summary>
    /// <param name="inAppMessageJSONString">
    /// The serialized in-app message object.
    /// </param>
    ///<returns>
    /// An IInAppMessage instance populated by the serialized in-app message object.
    /// </returns>
    public static IInAppMessage BuildInAppMessage(string inAppMessageJSONString) {
      JSONObject json = InAppMessageConstants.JSONObjectFromString(inAppMessageJSONString);
      if (json != null) {
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
