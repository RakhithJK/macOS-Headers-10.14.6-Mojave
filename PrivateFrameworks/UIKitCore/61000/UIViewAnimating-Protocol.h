//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UIViewAnimating <NSObject>
@property(nonatomic) double fractionComplete;
@property(nonatomic, getter=isReversed) BOOL reversed;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(readonly, nonatomic) long long state;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)stopAnimation:(BOOL)arg1;
- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
@end

