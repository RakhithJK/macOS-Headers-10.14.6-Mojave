//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSColor, PXExtendedTraitCollection, PXLayoutMetricInterpolator;

@interface PXFeatureSpec : NSObject
{
    BOOL _shouldInsetAllPhotoDetailsContent;
    BOOL __shouldUseMiniMargins;
    long long _sizeClass;
    long long _userInterfaceIdiom;
    long long _userInterfaceFeature;
    NSArray *_collectionTileImageOverlaySpecs;
    NSArray *_collectionTileImageOverlaySpecsHighlighted;
    NSCache *__viewSpecCache;
    double __displayScale;
    PXExtendedTraitCollection *__extendedTraitCollection;
    PXLayoutMetricInterpolator *__horizontalContentGuideInsetsInterpolator;
    struct CGSize __layoutReferenceSize;
    struct NSEdgeInsets _safeAreaInsets;
    struct NSEdgeInsets _layoutMargins;
}

@property(readonly, nonatomic) BOOL _shouldUseMiniMargins; // @synthesize _shouldUseMiniMargins=__shouldUseMiniMargins;
@property(readonly, nonatomic) PXLayoutMetricInterpolator *_horizontalContentGuideInsetsInterpolator; // @synthesize _horizontalContentGuideInsetsInterpolator=__horizontalContentGuideInsetsInterpolator;
@property(readonly, nonatomic) PXExtendedTraitCollection *_extendedTraitCollection; // @synthesize _extendedTraitCollection=__extendedTraitCollection;
@property(readonly, nonatomic) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property(readonly, nonatomic) double _displayScale; // @synthesize _displayScale=__displayScale;
@property(readonly, nonatomic) NSCache *_viewSpecCache; // @synthesize _viewSpecCache=__viewSpecCache;
@property(readonly, nonatomic) BOOL shouldInsetAllPhotoDetailsContent; // @synthesize shouldInsetAllPhotoDetailsContent=_shouldInsetAllPhotoDetailsContent;
@property(readonly, nonatomic) NSArray *collectionTileImageOverlaySpecsHighlighted; // @synthesize collectionTileImageOverlaySpecsHighlighted=_collectionTileImageOverlaySpecsHighlighted;
@property(readonly, nonatomic) NSArray *collectionTileImageOverlaySpecs; // @synthesize collectionTileImageOverlaySpecs=_collectionTileImageOverlaySpecs;
@property(readonly, nonatomic) struct NSEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(readonly, nonatomic) struct NSEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(readonly, nonatomic) long long userInterfaceFeature; // @synthesize userInterfaceFeature=_userInterfaceFeature;
@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
- (void).cxx_destruct;
- (id)_textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5;
- (long long)_capitalizationStyleFromTextAttributes:(id)arg1 defaultCapitalizationStyle:(long long)arg2;
@property(readonly, nonatomic) unsigned long long localizedLeadingTextAlignment;
@property(readonly, nonatomic) double collectionTileImageCornerRadius;
- (struct NSColor *)collectionTileImageOverlayColorHighlighted;
- (struct NSColor *)collectionTileImageOverlayColor;
@property(readonly, nonatomic) NSColor *defaultPlacesPlaceholderColor;
@property(readonly, nonatomic) NSColor *defaultPlaceholderColor;
@property(readonly, nonatomic) double defaultCornerRadius;
@property(readonly, nonatomic) NSColor *defaultBackgroundColor;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (void)configureViewSpec:(id)arg1;
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (struct NSEdgeInsets)contentGuideInsetsForScrollDirection:(long long)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)init;

@end

