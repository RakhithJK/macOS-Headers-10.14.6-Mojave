//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UIView, _UIExpandingGlyphsView, _UIStatusBarLockItemPadlockView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate>
{
    BOOL _alongsideViewIsBecomingVisible;
    int _animationCount;
    UIView *_viewToAnimateAlongside;
    _UIStatusBarLockItemPadlockView *_padlockView;
    UIView *_textClippingView;
    _UIExpandingGlyphsView *_textView;
    double _padlockViewCenterOffsetFromForegroundViewCenter;
    UIView *_timeItemSnapshot;
    double _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
    double _widthNeededDuringAnimation;
    double _widthNeededForFinalState;
    CDUnknownBlockType _animationCompletionBlock;
}

+ (double)lockSlideAnimationDuration;
@property(copy, nonatomic) CDUnknownBlockType animationCompletionBlock; // @synthesize animationCompletionBlock=_animationCompletionBlock;
@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) double widthNeededForFinalState; // @synthesize widthNeededForFinalState=_widthNeededForFinalState;
@property(nonatomic) double widthNeededDuringAnimation; // @synthesize widthNeededDuringAnimation=_widthNeededDuringAnimation;
@property(nonatomic) double timeItemSnapshotCenterOffsetFromForegroundViewCenter; // @synthesize timeItemSnapshotCenterOffsetFromForegroundViewCenter=_timeItemSnapshotCenterOffsetFromForegroundViewCenter;
@property(retain, nonatomic) UIView *timeItemSnapshot; // @synthesize timeItemSnapshot=_timeItemSnapshot;
@property(nonatomic) double padlockViewCenterOffsetFromForegroundViewCenter; // @synthesize padlockViewCenterOffsetFromForegroundViewCenter=_padlockViewCenterOffsetFromForegroundViewCenter;
@property(retain, nonatomic) _UIExpandingGlyphsView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textClippingView; // @synthesize textClippingView=_textClippingView;
@property(retain, nonatomic) _UIStatusBarLockItemPadlockView *padlockView; // @synthesize padlockView=_padlockView;
@property(nonatomic) BOOL alongsideViewIsBecomingVisible; // @synthesize alongsideViewIsBecomingVisible=_alongsideViewIsBecomingVisible;
@property(nonatomic) __weak UIView *viewToAnimateAlongside; // @synthesize viewToAnimateAlongside=_viewToAnimateAlongside;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)updateContentsAndWidth;
- (BOOL)_isAnimating;
- (void)_endAnimation;
- (void)_beginAnimation;
- (BOOL)isExclusive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

