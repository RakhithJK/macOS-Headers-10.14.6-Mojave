//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIViewPropertyAnimator;
@protocol HODashboardScrollingAnimationControllerDelegate;

@interface HODashboardScrollingAnimationController : NSObject
{
    id <HODashboardScrollingAnimationControllerDelegate> _delegate;
    UIView *_animatingView;
    double _minimumMargin;
    UIViewPropertyAnimator *_animator;
    unsigned long long _visibilityState;
}

@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) double minimumMargin; // @synthesize minimumMargin=_minimumMargin;
@property(retain, nonatomic) UIView *animatingView; // @synthesize animatingView=_animatingView;
@property(nonatomic) __weak id <HODashboardScrollingAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithCurrentMargin:(double)arg1 animated:(BOOL)arg2;
- (id)initWithDelegate:(id)arg1;

@end

