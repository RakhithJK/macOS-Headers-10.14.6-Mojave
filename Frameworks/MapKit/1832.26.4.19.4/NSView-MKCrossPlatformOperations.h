//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (MKCrossPlatformOperations)
+ (void)_mapkit_animateFromCurrentStateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_mapkit_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_maps_setDoesNotTranslateAutoresizingConstraintsForViewsDictionary:(id)arg1;
- (BOOL)_mapkit_YCoordinate:(double)arg1 liesInDirection:(long long)arg2 startingFromYCoordinate:(double)arg3;
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromYCoordinate:(double)arg3;
- (struct CGRect)_mapkit_rectWithSize:(struct CGSize)arg1 XCoordinate:(double)arg2 atDistance:(double)arg3 inDirection:(long long)arg4 fromEdge:(long long)arg5;
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromEdge:(long long)arg3;
- (id)_mapkit_constraintsPinningSubviewToBounds:(id)arg1;
- (void)_mapkit_setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (float)_mapkit_contentHuggingPriorityForAxis:(long long)arg1;
- (void)_mapkit_setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (float)_mapkit_contentCompressionResistancePriorityForAxis:(long long)arg1;
- (struct CGSize)_mapkit_sizeThatFits:(struct CGSize)arg1;
- (void)_mapkit_sizeToFit;
- (BOOL)_mapkit_isDescendantOfView:(id)arg1;
- (void)_mapkit_insertSubviewBelowAllOtherSubviews:(id)arg1;
- (void)_mapkit_insertSubviewAboveAllOtherSubviews:(id)arg1;
- (BOOL)_mapkit_isRTL;
- (void)_mapKit_setNeedsDisplay;
- (struct CGSize)_mapkit_fittingSize;
- (void)_mapkit_setBackgroundColor:(id)arg1;
- (id)_mapkit_layoutMarginsGuide;
- (void)_mapkit_layoutMarginsDidChange;
- (void)set_mapkit_layoutMargins:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)_mapkit_layoutMargins;
- (void)set_mapkit_preservesSuperviewLayoutMargins:(BOOL)arg1;
- (BOOL)_mapkit_preservesSuperviewLayoutMargins;
- (void)_mapkit_tintColorDidChange;
- (void)_mapkit_layoutBelowIfNeeded;
- (void)_mapkit_layoutIfNeeded;
- (void)_mapkit_updateConstraintsIfNeeded;
- (void)_mapkit_setNeedsLayout;
- (void)_mapkit_setNeedsUpdateConstraints;
@end

