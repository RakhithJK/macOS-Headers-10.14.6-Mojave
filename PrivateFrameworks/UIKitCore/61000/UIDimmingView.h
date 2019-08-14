//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIColor, UIImageView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView <UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    NSArray *_passthroughViews;
    BOOL _ignoresTouches;
    BOOL _displayed;
    BOOL _inPassthroughHitTest;
    UIColor *_dimmingColor;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
    BOOL _suppressesBackdrops;
    id _delegate;
}

+ (id)defaultDimmingColor;
@property(nonatomic) BOOL suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) BOOL displayed; // @synthesize displayed=_displayed;
@property(nonatomic) BOOL ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_simulateTap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)display:(BOOL)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;
- (void)display:(BOOL)arg1;
- (id)_backdropViewsToAnimate;
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
- (void)dimmingRemovalAnimationDidStop;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

