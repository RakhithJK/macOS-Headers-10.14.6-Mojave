//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TUpdateLayerView.h"

@class NSArray, NSDictionary, NSSet, NSView, TTitleAndValueView;

@interface TSpotlightMetaDataStackView : TUpdateLayerView
{
    struct TNSRef<NSStackView, void> _stackView;
    struct TNSRef<NSArray<NSString *>, void> _metaDataOrder;
    struct TNSRef<NSSet<NSString *>, void> _filteredMetadata;
    _Bool _filterActive;
    long long _hiddenAttributesCountDelta;
    struct TNSRef<NSDictionary<NSString *, TNodesAndValues *>, void> _spotlightMetaData;
    double _interRowGap;
    unsigned long long _maxAttributesToDisplay;
    _Bool _addLabelSuffix;
    _Bool _showAttributesWithNoData;
    TTitleAndValueView *_genericTitleAndValueView;
    struct TNSRef<NSView, void> _viewForTitleWidth;
    struct TNSRef<NSMutableArray<NSView *>, void> _filterViews;
    _Bool _populateForAnimating;
}

@property(nonatomic) _Bool showAttributesWithNoData; // @synthesize showAttributesWithNoData=_showAttributesWithNoData;
@property(nonatomic) _Bool addLabelSuffix; // @synthesize addLabelSuffix=_addLabelSuffix;
@property(nonatomic) unsigned long long maxAttributesToDisplay; // @synthesize maxAttributesToDisplay=_maxAttributesToDisplay;
@property(nonatomic) double interRowGap; // @synthesize interRowGap=_interRowGap;
@property(nonatomic, getter=isFilterActive) _Bool filterActive; // @synthesize filterActive=_filterActive;
@property(readonly, nonatomic) long long hiddenAttributesCountDelta; // @synthesize hiddenAttributesCountDelta=_hiddenAttributesCountDelta;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (void)populate;
- (id)prepareForAnimatingExpansion:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long numRows; // @dynamic numRows;
@property(retain, nonatomic) NSView *viewForTitleWidth; // @dynamic viewForTitleWidth;
@property(retain, nonatomic) NSSet *filteredMetadata; // @dynamic filteredMetadata;
@property(retain, nonatomic) NSArray *metaDataOrder; // @dynamic metaDataOrder;
@property(retain, nonatomic) NSDictionary *spotlightMetaData; // @dynamic spotlightMetaData;
- (void)aboutToTearDown;
- (void)awakeFromNib;
- (void)initCommon;

@end
