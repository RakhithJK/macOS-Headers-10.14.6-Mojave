//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView
{
    BOOL _needsCycleAnimationUpdate;
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
+ (double)_totalWidthForIconSize:(long long)arg1;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (double)_barThicknessAtIndex:(unsigned long long)arg1 iconSize:(long long)arg2;
@property(retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // @synthesize cycleAnimation=_cycleAnimation;
@property(nonatomic) BOOL needsCycleAnimationUpdate; // @synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (struct CGSize)intrinsicContentSize;
- (void)_iconSizeDidChange;
- (void)didMoveToWindow;
- (void)_updateFromMode:(long long)arg1;
- (void)_updateActiveBars;
- (void)_updateCycleAnimationNow;
- (void)_updateCycleAnimationIfNeeded;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_colorsDidChange;
- (void)layoutSubviews;
- (void)_updateBars;
- (double)_barCornerRadius;

@end

