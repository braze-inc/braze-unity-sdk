using Appboy.Utilities;
using System;

namespace Appboy.Models.Cards {
  public class CaptionedImageCard : Card {
    public string ImageUrl { get; private set; }

    public string Title { get; private set; }

    public string Description { get; private set; }
    // Optional
    public string Url { get; private set; }

    public string Domain { get; private set; }

    public CaptionedImageCard(JSONClass json) : base(json) {
      if (json["image"] == null || json["title"] == null || json["description"] == null) {
        throw new ArgumentException("Missing required field(s).");
      }
      ImageUrl = json["image"];
      Title = json["title"];
      Description = json["description"];
      if (json["url"] != null) {
        Url = json["url"];
      }
      if (json["domain"] != null) {
        Domain = json["domain"];
      }
    }

    public override string ToString() {
      return String.Format("CaptionedImageCard:[{0}, Description={1}, ImageUrl={2}, " +
                           "Title={3}, Url={4}, Domain={5}]",
                           base.ToString(), Description, ImageUrl, Title, Url, Domain);
    }
  }
}
