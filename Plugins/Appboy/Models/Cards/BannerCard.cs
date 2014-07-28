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
      return String.Format("BannerCard[ID={0}, Type={1}, ImageUrl={2}, Viewed={3}, Created={4}, " + 
                           "Updated={5}, Url={6}, Domain={7}, Categories={8}]",
                           ID, Type, ImageUrl, Viewed, Created, Updated, Url, Domain, CategoriesToString());
    }
  }
}