using Appboy.Utilities;
using System;

namespace Appboy.Models.Cards {
  public class TextAnnouncementCard : Card {
    public string Title { get; private set; }

    public string Description { get; private set; }
    // Optional
    public string Url { get; private set; }

    public string Domain { get; private set; }

    public TextAnnouncementCard(JSONClass json) : base(json) {
      if (json["title"] == null || json["description"] == null) {
        throw new ArgumentException("Missing required field(s).");
      }
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
      return String.Format("TextAnnouncementCard[ID={0}, Type={1}, Title={2}, Description={3}, " + 
        "Viewed={4}, Created={5}, Updated={6}, Url={7}, Domain={8}, Categories={9}",
                           ID, Type, Title, Description, Viewed, Created, Updated, Url, Domain, CategoriesToString());
    }
  }
}