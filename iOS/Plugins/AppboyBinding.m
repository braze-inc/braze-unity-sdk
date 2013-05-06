//
//  AppboyBinding.m
//  Unity-iPhone
//
//  Created by Peter McKee on 4/30/13.
//
//

#import "AppboyUnityManager.h"

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

void _showStreamView()
{
    [[AppboyUnityManager sharedInstance] showStreamView];
}

void _showFeedbackForm()
{
    [[AppboyUnityManager sharedInstance] showFeedbackForm];
}

void _logAppEvent(const char* eventName)
{
	[[AppboyUnityManager sharedInstance] logAppEvent:GetStringParam(eventName)];
}

void _changeUserId(const char* userId)
{
	[[AppboyUnityManager sharedInstance] changeUserId:GetStringParam(userId)];
}
