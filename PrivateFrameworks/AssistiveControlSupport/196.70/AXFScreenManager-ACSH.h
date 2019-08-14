//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccessibilitySupport/AXFScreenManager.h>

@interface AXFScreenManager (ACSH)
+ (void)moveWindow:(id)arg1 toLockScreenVisibleMultiMonitorSpace:(id)arg2;
- (double)maximumScaleFactorAcrossAllScreens;
- (struct CGPoint)acsh_pointOnScreen:(id)arg1 closestToPoint:(struct CGPoint)arg2;
- (struct CGPoint)validScreenPointForNewMouseLocation:(struct CGPoint)arg1 previousMouseLocation:(struct CGPoint)arg2;
- (struct CGRect)snapRect:(struct CGRect)arg1 withPadding:(double)arg2 toGridWithSpacing:(double)arg3;
- (struct CGRect)onScreenRectForRect:(struct CGRect)arg1 minimumOnScreenPixelAmount:(double)arg2;
- (struct CGRect)onScreenRectForRect:(struct CGRect)arg1;
- (struct CGRect)onScreenRectForRect:(struct CGRect)arg1 minimumOnScreenPixelSize:(struct CGSize)arg2;
@end

