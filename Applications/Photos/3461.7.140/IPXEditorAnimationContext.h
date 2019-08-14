//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXContextTransitionTesting-Protocol.h"

@class CAMediaTimingFunction, NSMutableArray, NSOperationQueue, NSPointerArray, NSString;

@interface IPXEditorAnimationContext : NSObject <IPXContextTransitionTesting>
{
    NSMutableArray *_preAnimationBlocks;
    NSMutableArray *_animationBlocks;
    NSMutableArray *_completionBlocks;
    NSPointerArray *_delegates;
    NSOperationQueue *_opQueue;
    BOOL _inAnimation;
    CDUnknownBlockType testing_transitionAnimationCompletionHandler;
    CDUnknownBlockType testing_transitionAnimationPreparationHandler;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
}

@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType testing_transitionAnimationPreparationHandler; // @synthesize testing_transitionAnimationPreparationHandler;
@property(copy, nonatomic) CDUnknownBlockType testing_transitionAnimationCompletionHandler; // @synthesize testing_transitionAnimationCompletionHandler;
- (void).cxx_destruct;
- (void)testing_notifyTransitionAnimationDidPrepare;
- (void)testing_notifyTransitionAnimationDidComplete;
- (void)_sendDelegateMessage:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (BOOL)_validateDelegate:(id)arg1;
- (void)pushAnimation:(CDUnknownBlockType)arg1 prep:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isAnimating;
- (void)runAnimationsWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runAnimationsWithDuration:(double)arg1 identifier:(id)arg2;
- (void)runAnimationsWithDuration:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

