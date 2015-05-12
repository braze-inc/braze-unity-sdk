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
      return String.Format("CaptionedImageCard: ID={0}, Type={1}, Description={2}, ImageUrl={3}, Viewed={4}, " +
        "Created={5}, Updated={6}, Title={7}, Url={8}, Domain={9}, Categories={10}",
                           ID, Type, Description, ImageUrl, Viewed, Created, Updated, Title, Url, Domain, CategoriesToString());
    }
  }
}
