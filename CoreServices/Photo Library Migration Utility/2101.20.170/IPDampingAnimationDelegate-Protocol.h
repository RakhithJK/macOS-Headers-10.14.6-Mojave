//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPDampingAnimation;

@protocol IPDampingAnimationDelegate <NSObject>

@optional
- (void)dampingAnimation:(IPDampingAnimation *)arg1 didUpdatePosition:(double)arg2;
- (void)dampingAnimationDidEnd:(IPDampingAnimation *)arg1;
- (void)dampingAnimationDidStop:(IPDampingAnimation *)arg1;
@end
