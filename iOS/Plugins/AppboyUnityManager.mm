//
//  AppboyUnityManager.mm
//  Unity-iPhone
//
//  Created by Peter McKee on 5/1/13.
//
//

#import "AppboyUnityManager.h"
#include "iPhone_View.h"
#import "Appboy.h"
#import "ABKFeedbackViewControllerModalContext.h"
#import "ABKStreamViewControllerModalContext.h"

@implementation AppboyUnityManager

+ (AppboyUnityManager*)sharedInstance
{
	static AppboyUnityManager *sharedInstance = nil;
    
	if(!sharedInstance)
		sharedInstance = [[AppboyUnityManager alloc] init];
    
	return sharedInstance;
}

- (void) showFeedbackForm
{
    ABKFeedbackViewControllerModalContext *feedbackViewController = [[ABKFeedbackViewControllerModalContext alloc] init];
    [UnityGetGLViewController() presentModalViewController:feedbackViewController animated:YES];
    [feedbackViewController release];
}

- (void) showStreamView
{
    ABKStreamViewControllerModalContext *streamViewController = [[ABKStreamViewControllerModalContext alloc] init];
    [UnityGetGLViewController() presentModalViewController:streamViewController animated:YES];
    [streamViewController release];
}

- (void) logAppEvent:(NSString*)eventName
{
    [[Appboy sharedInstance] logAppEvent:eventName];
}

@end
