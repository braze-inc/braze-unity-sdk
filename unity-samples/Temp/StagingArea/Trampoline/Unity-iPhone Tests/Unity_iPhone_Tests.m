#import <XCTest/XCTest.h>

@interface UnityTest : XCTestCase

@end

@implementation UnityTest

- (void)testRunUnity {
	XCTestExpectation *expectation = [self expectationWithDescription:@"testRunUnity"];
	
	id<UIApplicationDelegate> delegate = [(UIApplication *)[UIApplication sharedApplication] delegate];
	[delegate performSelector:@selector(setQuitHandler:) withObject:^{
		[expectation fulfill];
	}];
	
	[self waitForExpectationsWithTimeout:1000000 handler:nil];
}

@end