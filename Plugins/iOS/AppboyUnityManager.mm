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
#import "ABKFeedViewControllerModalContext.h"

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
    ABKFeedViewControllerModalContext *streamViewController = [[ABKFeedViewControllerModalContext alloc] init];
    [UnityGetGLViewController() presentModalViewController:streamViewController animated:YES];
    [streamViewController release];
}

- (void) logCustomEvent:(NSString *)eventName
{
    [[Appboy sharedInstance] logCustomEvent:eventName];
}

- (void) changeUser:(NSString *)userId
{
    [[Appboy sharedInstance] changeUser:userId];
}

- (void) logPurchase:(NSString *)productId priceCents:(NSUInteger)price
{
    [[Appboy sharedInstance] logPurchase:productId priceInCents:price];
}

- (void) setUserFirstName:(NSString *)firstName
{
    [Appboy sharedInstance].user.firstName = firstName;
}

- (void) setUserLastName:(NSString *)lastName
{
    [Appboy sharedInstance].user.lastName = lastName;
}

- (void) setUserPhoneNumber:(NSString *)number
{
    [Appboy sharedInstance].user.phone = number;
}

- (void) setUserEmail:(NSString *)email
{
    [Appboy sharedInstance].user.email = email;
}

- (void) setUserBio:(NSString *)bio
{
    [Appboy sharedInstance].user.bio = bio;
}

- (void) setUserGender:(NSInteger)gender
{
  [[Appboy sharedInstance].user setGender:(ABKUserGenderType)gender];
}

- (void) setUserDateOfBirthToYear:(NSInteger)year Month:(NSInteger)month andDay:(NSInteger)day
{
    NSDateComponents *comps = [[NSDateComponents alloc] init];
    [comps setDay:day];
    [comps setMonth:month];
    [comps setYear:year];
    NSCalendar *gregorian = [[NSCalendar alloc]
                             initWithCalendarIdentifier:NSGregorianCalendar];
    NSDate *date = [gregorian dateFromComponents:comps];
    [Appboy sharedInstance].user.dateOfBirth = date;
    
    [gregorian release];
    [comps release];
}

- (void) setUserCountry:(NSString *)country
{
    [Appboy sharedInstance].user.country = country;
}

- (void) setUserHomeCity:(NSString *)city
{
    [Appboy sharedInstance].user.homeCity = city;
}

- (void) setUserIsSubscribedToEmails:(BOOL)subscribedToEmail
{
    [[Appboy sharedInstance].user setIsSubscribedToEmails:subscribedToEmail];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andBOOLValue:(BOOL)value
{
    [[Appboy sharedInstance].user setCustomAttributeWithKey:key andBOOLValue:value];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andIntegerValue:(NSInteger)value
{
    [[Appboy sharedInstance].user setCustomAttributeWithKey:key andIntegerValue:value];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andDoubleValue:(double)value
{
    [[Appboy sharedInstance].user setCustomAttributeWithKey:key andDoubleValue:value];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key andStringValue:(NSString *)value
{
    [[Appboy sharedInstance].user setCustomAttributeWithKey:key andStringValue:value];
}

- (void) setUserCustomAttributeToNowWithKey:(NSString *)key
{
    [[Appboy sharedInstance].user setCustomAttributeWithKey:key andDateValue:[NSDate date]];
}

- (void) setUserCustomAttributeWithKey:(NSString *)key toDateAsSecondsFromEpoch:(NSTimeInterval)seconds
{
    [[Appboy sharedInstance].user setCustomAttributeWithKey:key andDateValue:[NSDate dateWithTimeIntervalSince1970:seconds]];
}

- (void) unsetUserCustomAttributeWithKey:(NSString *)key
{
    [[Appboy sharedInstance].user unsetCustomAttributeWithKey:key];
}

// ABKSlideUpDelegate methods
- (ABKSlideupShouldDisplaySlideupReturnType) shouldDisplaySlideup:(NSString *)message {
    return ABKSlideupShouldIgnore;
}

- (void) slideupWasTapped {
}

@end
