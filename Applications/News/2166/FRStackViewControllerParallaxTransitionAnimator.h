//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView, _FRParallaxDimmingView;
@protocol UIViewControllerContextTransitioning;

@interface FRStackViewControllerParallaxTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    long long _operation;
    id <UIViewControllerContextTransitioning> _transitionContext;
    _FRParallaxDimmingView *_borderDimmingView;
    _FRParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    long long _transitionStyle;
}

@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(retain, nonatomic) UIView *containerToView; // @synthesize containerToView=_containerToView;
@property(retain, nonatomic) UIView *containerFromView; // @synthesize containerFromView=_containerFromView;
@property(retain, nonatomic) _FRParallaxDimmingView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property(retain, nonatomic) _FRParallaxDimmingView *borderDimmingView; // @synthesize borderDimmingView=_borderDimmingView;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (double)parallaxOffset;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithCurrentOperation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

