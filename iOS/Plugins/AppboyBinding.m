//
//  AppboyBinding.m
//  Unity-iPhone
//
//  Created by Peter McKee on 4/30/13.
//
//

#import "Appboy.h"
#import "ABKFeedbackViewControllerModalContext.h"
#import "AppController.h"

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

void _showStreamView()
{
    ABKFeedbackViewControllerModalContext *feedbackViewController = [[ABKFeedbackViewControllerModalContext alloc] init];
    [[AppController unityVC] presentModalViewController:feedbackViewController animated:YES];
    [feedbackViewController release];
}
