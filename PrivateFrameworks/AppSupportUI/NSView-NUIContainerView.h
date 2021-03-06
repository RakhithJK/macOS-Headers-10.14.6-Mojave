//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (NUIContainerView)
@property(nonatomic) BOOL invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
@property(nonatomic) double customFirstBaselineOffsetFromContentTop;
@property(nonatomic) double customFirstBaselineOffsetFromTop;
@property(nonatomic) double customBaselineOffsetFromBottom;
@property(nonatomic, getter=isBaselineRelativeAlignmentRectInsets) BOOL baselineRelativeAlignmentRectInsets;
@property(nonatomic) struct NSEdgeInsets customAlignmentRectInsets;
@property(nonatomic) double customScreenScale;
@property(nonatomic) struct CGSize maximumLayoutSize;
@property(nonatomic) struct CGSize minimumLayoutSize;
- (id)containerViewInfoCreateIfNeeded:(BOOL)arg1;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (BOOL)supportsAsynchronousMeasurement;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
@end

