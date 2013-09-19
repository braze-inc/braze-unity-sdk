using System;
using Appboy;

namespace Appboy {
  public class Slideup {
    public string Message { get; set; }

    public Slideup(JSONClass json) {
      Message = json["message"];
    }
		
    public override string ToString() {
      return "Slideup: Message[" + Message + "]";
    }    
  }
}

