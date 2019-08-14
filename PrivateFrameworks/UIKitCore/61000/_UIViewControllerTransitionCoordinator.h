//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerTransitionCoordinator-Protocol.h>

@class NSMutableArray, NSString, UIView, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>
{
    _UIViewControllerTransitionContext *__mainContext;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
}

@property(retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers; // @synthesize _interactiveChangeHandlers=__interactiveChangeHandlers;
@property(retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions; // @synthesize _alongsideCompletions=__alongsideCompletions;
@property(retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews; // @synthesize _alongsideAnimationViews=__alongsideAnimationViews;
@property(retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations; // @synthesize _alongsideAnimations=__alongsideAnimations;
@property(nonatomic, setter=_setMainContext:) _UIViewControllerTransitionContext *_mainContext; // @synthesize _mainContext=__mainContext;
- (void).cxx_destruct;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(BOOL)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(CDUnknownBlockType)arg2;
- (id)_alongsideCompletions:(BOOL)arg1;
- (id)_alongsideAnimations:(BOOL)arg1;
- (id)_interactiveChangeHandlers:(BOOL)arg1;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
- (struct CGAffineTransform)affineTransform;
- (BOOL)isRotating;
@property(readonly, nonatomic) UIView *containerView;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
- (BOOL)isCompleting;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, nonatomic) BOOL isInterruptible;
@property(readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property(readonly, nonatomic) BOOL initiallyInteractive;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic, getter=isAnimated) BOOL animated;
- (id)initWithMainContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

