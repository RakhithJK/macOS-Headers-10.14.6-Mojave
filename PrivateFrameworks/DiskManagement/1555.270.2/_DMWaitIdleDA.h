//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _DMWaitIdleDA : NSObject
{
    double _givenTimeout;
    struct __DASession *_givenDASession;
    BOOL _currentDAIdle;
}

+ (void)waitForDAIdleWithDASession:(struct __DASession *)arg1 timeout:(double)arg2 withDMTool:(id)arg3 didGoIdle:(char *)arg4;
- (void)dealloc;
- (id)init;

@end

