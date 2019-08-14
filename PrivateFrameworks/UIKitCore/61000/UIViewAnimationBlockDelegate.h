//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewAnimationState;

__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject
{
    BOOL _didBeginBlockAnimation;
    BOOL _allowUserInteraction;
    BOOL _isZeroDuration;
    BOOL _allowsUserInteractionToCutOffEndOfAnimation;
    BOOL _allowsHitTesting;
    BOOL _animationDidStopSent;
    CDUnknownBlockType _start;
    CDUnknownBlockType _completion;
    NSMutableArray *_systemPostAnimationActions;
    BOOL __forcingImmediateCompletion;
    UIViewAnimationState *_animationState;
}

+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned long long)arg2 start:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic, setter=_setForcingImmediateCompletion:) BOOL _forcingImmediateCompletion; // @synthesize _forcingImmediateCompletion=__forcingImmediateCompletion;
@property(nonatomic) __weak UIViewAnimationState *_animationState; // @synthesize _animationState;
@property(readonly, nonatomic) BOOL _allowsUserInteraction; // @synthesize _allowsUserInteraction=_allowUserInteraction;
- (void).cxx_destruct;
- (BOOL)_allowsHitTesting;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_sendDeferredCompletion:(id)arg1;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;

@end

