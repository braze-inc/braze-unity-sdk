using Appboy.Utilities;
using System;

namespace Appboy.Models.Cards {
  public class BannerCard : Card {
    public string ImageUrl { get; private set; }
    // Optional
    public string Url { get; private set; }

    public string Domain { get; private set; }

    public BannerCard(JSONClass json) : base(json) {
      if (json["image"] == null) {
        throw new ArgumentException("Missing required field(s).");
      }
      ImageUrl = json["image"];
      if (json["url"] != null) {
        Url = json["url"];
      }
      if (json["domain"] != null) {
        Domain = json["domain"];
      }
    }

    public override string ToString() {
      return String.Format("BannerCard[{0}, ImageUrl={1}, Url={2}, Domain={3}]",
                           base.ToString(), ImageUrl, Url, Domain);
    }
  }
}