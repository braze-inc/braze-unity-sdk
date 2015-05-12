using Appboy.Utilities;
using System;

namespace Appboy.Models.Cards {
  public class ClassicCard : Card {
    public string Description { get; private set; }

    public string ImageUrl { get; private set; }

    // Optional
    public string Title { get; private set; }

    public string Url { get; private set; }

    public string Domain { get; private set; }

    public ClassicCard(JSONClass json) : base(json) {
      if (json["description"] == null || json["image"] == null) {
        throw new ArgumentException("Missing required field(s).");
      }
      Description = json["description"];
      ImageUrl = json["image"];
      if (json["title"] != null) {
        Title = json["title"];
      }
      if (json["url"] != null) {
        Url = json["url"];
      }
      if (json["domain"] != null) {
        Domain = json["domain"];
      }
    }

    public override string ToString() {
      return String.Format("ClassicCard[ID={0}, Type={1}, Description={2}, ImageUrl={3}, Viewed={4}, " +
        "Created={5}, Updated={6}, Title={7}, Url={8}, Domain={9}, Categories={10}",
                           ID, Type, Description, ImageUrl, Viewed, Created, Updated, Title, Url, Domain, CategoriesToString());
    }
  }
}
