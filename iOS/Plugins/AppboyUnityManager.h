//
//  AppboyUnityManager.h
//  Unity-iPhone
//
//  Created by Peter McKee on 5/1/13.
//
//

#import <Foundation/Foundation.h>

@interface AppboyUnityManager : NSObject

+ (AppboyUnityManager *) sharedInstance;
- (void) showStreamView;
- (void) showFeedbackForm;
- (void) logAppEvent:(NSString *)eventName;
- (void) changeUserId:(NSString *)userId;

@end
