//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRDynamicBarAnimatorDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FRDynamicBarAnimator, FRScrollViewDelegateRouter, NSString, UIScrollView;
@protocol FRBarCompressorDelegate, FRInteractiveBarCompressionAnimating;

@interface FRBarCompressor : NSObject <UIScrollViewDelegate, FRDynamicBarAnimatorDelegate>
{
    BOOL _navigationBarCompressionEnabled;
    BOOL _toolbarCompressionEnabled;
    id <FRBarCompressorDelegate> _delegate;
    id <FRInteractiveBarCompressionAnimating> _navigationBarAnimation;
    id <FRInteractiveBarCompressionAnimating> _toolbarAnimation;
    UIScrollView *_scrollView;
    long long _state;
    FRScrollViewDelegateRouter *_scrollViewDelegateRouter;
    FRDynamicBarAnimator *_navigationBarAnimator;
    FRDynamicBarAnimator *_toolbarAnimator;
    struct CGPoint _initialContentOffset;
    struct CGPoint _lastContentOffset;
}

@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(readonly, nonatomic) FRDynamicBarAnimator *toolbarAnimator; // @synthesize toolbarAnimator=_toolbarAnimator;
@property(readonly, nonatomic) FRDynamicBarAnimator *navigationBarAnimator; // @synthesize navigationBarAnimator=_navigationBarAnimator;
@property(retain, nonatomic) FRScrollViewDelegateRouter *scrollViewDelegateRouter; // @synthesize scrollViewDelegateRouter=_scrollViewDelegateRouter;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL toolbarCompressionEnabled; // @synthesize toolbarCompressionEnabled=_toolbarCompressionEnabled;
@property(nonatomic) BOOL navigationBarCompressionEnabled; // @synthesize navigationBarCompressionEnabled=_navigationBarCompressionEnabled;
@property(retain, nonatomic) id <FRInteractiveBarCompressionAnimating> toolbarAnimation; // @synthesize toolbarAnimation=_toolbarAnimation;
@property(retain, nonatomic) id <FRInteractiveBarCompressionAnimating> navigationBarAnimation; // @synthesize navigationBarAnimation=_navigationBarAnimation;
@property(nonatomic) __weak id <FRBarCompressorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)canAnimateNavigationBar;
- (BOOL)canAnimateToolbar;
- (BOOL)shouldCompress;
- (BOOL)didHitBottom;
- (BOOL)scrollViewDidHitTop;
- (void)resetBarsAnimated:(BOOL)arg1;
- (void)reloadForTraitCollection:(id)arg1;
- (void)setToolbarBarCompressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarCompressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBarsCompressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateScrollViewAtTopAnimations;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)isScrollViewBouncingAtTop;
- (void)closeScrollViewGap;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;
- (BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

