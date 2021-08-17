using System;
using UnityEngine;
using Appboy.Models;
using Appboy.Utilities;

namespace Appboy.Models.InAppMessage {
  public class InAppMessageSlideup : InAppMessageBase {
    public SlideFrom SlideupAnchor { get; set; }

    public bool HideChevron { get; set; }

    public Color? ChevronColor { get; set; }
    
    public override string ToString() {
      return String.Format("{0}, SlideupAnchor={1}, HideChevron={2}, ChevronColor={3}",
                           base.ToString(), SlideupAnchor, HideChevron, ChevronColor);
    }
    
    public InAppMessageSlideup() {
    }

    public InAppMessageSlideup(JSONClass json) : base(json) {
      SlideupAnchor = (SlideFrom)EnumUtils.TryParse(typeof(SlideFrom), json[InAppMessageConstants.SlideFromKey], true, SlideFrom.BOTTOM);
      ChevronColor = ColorUtils.HexToColor(json[InAppMessageConstants.CloseButtonColorKey]);
      HideChevron = json[InAppMessageConstants.HideChevronKey].AsBool;
    }
  }
}

