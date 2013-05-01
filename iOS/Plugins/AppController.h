#import <UIKit/UIKit.h>

@interface AppController : NSObject<UIAccelerometerDelegate, UIApplicationDelegate>
{
}
- (void) startUnity:(UIApplication*)application;
- (void) Repaint;
- (void) RepaintDisplayLink;
- (void) prepareRunLoop;
+ (UIViewController *)unityVC;
@end

int		UnityGetAccelerometerFrequency();
