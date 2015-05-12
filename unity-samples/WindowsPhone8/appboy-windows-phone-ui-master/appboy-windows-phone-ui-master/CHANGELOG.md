## 1.1.0.0
(Using the Appboy SDK for Windows Phone Apps version 1.1.0.1 NuGet package)
Appboy version 1.1.0.0 provides a substantial upgrade to the slideup code and reorganization for better flexibility moving forward, but at the expense of a number of breaking changes. We've detailed the changes in this changelog and hope that you'll love the added power, increased flexibility, and improved UI that the new Appboy slideup provides. If you have any trouble with these changes, feel free to reach out to success@appboy.com for help, but most migrations to the new code structure should be relatively painless.

New SlideupManager
- Delegate methods have been added to control which slideups are displayed, when they are displayed, as well as what action(s) to perform when a slideup is clicked or dismissed.
- Default handling of actions assigned to the slideup from the Appboy dashboard.
- Slideups can be dismissed by swiping away the view to either the left or the right. 
- Repositions the slideup above the AppBar or below the System tray on navigation events.
- Custom slideups created locally in the app can be provided to the SlideupManager which will be displayed using the slideup UI.

Updated SlideupControlFactory
- The GetSlideupControl method replaces the previous GetSlideup method and now provides access to the entire Slideup object. This allows for better customization of the slideup. For example, if clicking on the slideup will navigate the user to the Appboy news feed, you can choose to add a visual indicator that will let the user know that clicking on the slideup will perform an action.

Slideup model
- A key value ```extras``` Dictionary has been added to provide additional data to the slideup. ```Extras``` can be on defined on a per slideup basis via the dashboard.
- The ```SlideFrom``` property defines whether the slideup originates from the top or the bottom of the screen.
- The ```DismissType``` property controls whether the slideup will dismiss automatically after a period of time has lapsed, or if it will wait for interaction with the user before disappearing. 
  - The slideup will be dismissed automatically after the number of milliseconds defined by the duration field have elapsed if the slideup's DismissType is set to AUTO_DISMISS.
- The ClickAction property defines the behavior after the slideup is clicked: display a news feed, redirect to a uri, or nothing but dismissing the slideup. This can be changed by calling any of the following methods: ```SetClickActionToNewsFeed()```, ```SetClickActionToUri(Uri uri)```, or ```SetClickActionToNone()```.
- The uri field defines the uri string that the slide up will open when the ClickAction is set to URI. To change this value, use the ```setClickActionToUri(Uri uri)``` method.
- Convenience methods to track slideup impression and click events have been added to the ```Slideup``` class.
  - Impression and click tracking methods have been removed from the ```EventLogger```.
- A public constructor has been exposed to allow you to create custom slideups.

Other
- A UriMapper has been added to be able to point the SDK to your integrated Appboy news feed.
  - If the UriMapper is set, slideups with ClickAction set to NEWS_FEED will open the integrated news feed.

## 1.0.0.1
* Updated style override method

## 1.0.0.0
* Initial release

