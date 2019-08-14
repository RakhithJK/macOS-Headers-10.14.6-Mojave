//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKBBackdropView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView
{
    UIKBBackdropView *_inputBackdropFullView;
    UIKBBackdropView *_inputBackdropLeftView;
    UIKBBackdropView *_inputBackdropRightView;
    unsigned long long _innerCorners;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    long long _style;
    BOOL _hasStartRect;
    BOOL _hasEndRect;
    struct CGRect _savedStartRect;
    struct CGRect _savedEndRect;
    _UIVisualEffectBackdropView *_captureView;
}

+ (BOOL)_retroactivelyRequiresConstraintBasedLayout;
@property(retain, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropRightView; // @synthesize inputBackdropRightView=_inputBackdropRightView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropLeftView; // @synthesize inputBackdropLeftView=_inputBackdropLeftView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropFullView; // @synthesize inputBackdropFullView=_inputBackdropFullView;
@property(readonly) long long style; // @synthesize style=_style;
- (BOOL)_isTransitioning;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_setInitialProgressWithFrame:(struct CGRect)arg1;
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect)arg2;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg1 andRightViewRect:(struct CGRect)arg2 innerCorners:(int)arg3;
- (void)restoreFromSnapshotting;
- (void)prepareForSnapshotting;
- (void)transitionToStyle:(long long)arg1 isSplit:(BOOL)arg2;
- (void)_setRenderConfig:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

