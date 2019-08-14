//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class NSColor, NSFont;

@interface PXMemoriesSpec : PXFeatureSpec
{
    BOOL _shouldRemoveHighlightOnScroll;
    struct NSColor *_feedBackgroundColor;
    struct NSColor *_selectionHighlightColor;
    long long _feedHeroPosition;
    long long _feedScrollDirection;
    unsigned long long _feedMemoriesPerRow;
    double _feedEntryHeaderHeight;
    double _firstFeedEntryHeaderHeight;
    double _distanceBetweenHeaderBaselineAndImageTop;
    double _feedInteritemSpacing;
    long long _idiom;
    double _feedHeroImageAspectRatio;
    double _feedAdditionalContentThreshold;
    struct NSFont *_tabTitleFont;
    struct NSColor *_tabTitleTextColor;
    double _tabTitleBaselineOffset;
    double _tabTopContentPadding;
    struct NSColor *_borderColor;
    double _borderWidth;
    unsigned long long __style;
    double __displayScale;
    struct CGPoint _highlightedSectionHeaderOffset;
    struct CGPoint _borderOffset;
    struct NSEdgeInsets _feedEntryEdgeInsets;
}

@property(readonly, nonatomic) double _displayScale; // @synthesize _displayScale=__displayScale;
@property(readonly, nonatomic) unsigned long long _style; // @synthesize _style=__style;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) struct CGPoint borderOffset; // @synthesize borderOffset=_borderOffset;
@property(readonly, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) double tabTopContentPadding; // @synthesize tabTopContentPadding=_tabTopContentPadding;
@property(readonly, nonatomic) double tabTitleBaselineOffset; // @synthesize tabTitleBaselineOffset=_tabTitleBaselineOffset;
@property(readonly, nonatomic) NSColor *tabTitleTextColor; // @synthesize tabTitleTextColor=_tabTitleTextColor;
@property(readonly, nonatomic) NSFont *tabTitleFont; // @synthesize tabTitleFont=_tabTitleFont;
@property(readonly, nonatomic) double feedAdditionalContentThreshold; // @synthesize feedAdditionalContentThreshold=_feedAdditionalContentThreshold;
@property(readonly, nonatomic) BOOL shouldRemoveHighlightOnScroll; // @synthesize shouldRemoveHighlightOnScroll=_shouldRemoveHighlightOnScroll;
@property(readonly, nonatomic) struct CGPoint highlightedSectionHeaderOffset; // @synthesize highlightedSectionHeaderOffset=_highlightedSectionHeaderOffset;
@property(readonly, nonatomic) double feedHeroImageAspectRatio; // @synthesize feedHeroImageAspectRatio=_feedHeroImageAspectRatio;
@property(readonly, nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(readonly, nonatomic) double feedInteritemSpacing; // @synthesize feedInteritemSpacing=_feedInteritemSpacing;
@property(readonly, nonatomic) double distanceBetweenHeaderBaselineAndImageTop; // @synthesize distanceBetweenHeaderBaselineAndImageTop=_distanceBetweenHeaderBaselineAndImageTop;
@property(readonly, nonatomic) double firstFeedEntryHeaderHeight; // @synthesize firstFeedEntryHeaderHeight=_firstFeedEntryHeaderHeight;
@property(readonly, nonatomic) double feedEntryHeaderHeight; // @synthesize feedEntryHeaderHeight=_feedEntryHeaderHeight;
@property(readonly, nonatomic) struct NSEdgeInsets feedEntryEdgeInsets; // @synthesize feedEntryEdgeInsets=_feedEntryEdgeInsets;
@property(readonly, nonatomic) unsigned long long feedMemoriesPerRow; // @synthesize feedMemoriesPerRow=_feedMemoriesPerRow;
@property(readonly, nonatomic) long long feedScrollDirection; // @synthesize feedScrollDirection=_feedScrollDirection;
@property(readonly, nonatomic) long long feedHeroPosition; // @synthesize feedHeroPosition=_feedHeroPosition;
@property(readonly, nonatomic) NSColor *selectionHighlightColor; // @synthesize selectionHighlightColor=_selectionHighlightColor;
@property(readonly, nonatomic) NSColor *feedBackgroundColor; // @synthesize feedBackgroundColor=_feedBackgroundColor;
- (void).cxx_destruct;
- (double)_feedInteritemSpacingForReferenceSize:(struct CGSize)arg1;
- (void)_calculateSectionInsetWithExtendedTraitCollection:(id)arg1;
@property(readonly, nonatomic) struct NSEdgeInsets layoutInsets;
- (struct NSColor *)feedCategoryLabelTextColor;
@property(readonly, nonatomic) double feedSecondaryImagePaddingBottom;
@property(readonly, nonatomic) double bottomShadowPadding;
@property(readonly, nonatomic) double feedHeroImagePaddingBottom;
@property(readonly, nonatomic) double feedHeroImagePaddingTop;
@property(readonly, nonatomic) long long feedSectionLayoutAxis;
- (id)newLayoutGeneratorWithMetrics:(id)arg1;
@property(readonly, nonatomic) Class feedTransitionAnimationCoordinatorClass;
@property(readonly, nonatomic) Class feedLayoutMetricsClass;
@property(readonly, nonatomic) Class feedDataSourceManagerClass;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end

