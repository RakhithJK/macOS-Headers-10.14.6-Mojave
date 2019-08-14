//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBSectionSlotCostInfo;

@interface NTPBTodayResultOperationInfo : PBCodable <NSCopying>
{
    long long _embedsLimit;
    long long _leadingCellThumbnailSizePreset;
    long long _nonLeadingCellThumbnailSizePreset;
    long long _qualityOfService;
    double _slotsLimit;
    long long _sourceNameImageSizePreset;
    NSString *_assetsDirectoryFileURLString;
    unsigned int _dynamicThumbnailSizePresetMinimumHeightInPixels;
    unsigned int _dynamicThumbnailSizePresetMinimumWidthInPixels;
    NTPBSectionSlotCostInfo *_nonVideoSectionSlotCostInfo;
    NTPBSectionSlotCostInfo *_videoSectionSlotCostInfo;
    BOOL _allowLeadingCell;
    BOOL _allowOnlyWatchEligibleSections;
    BOOL _allowSectionTitles;
    BOOL _fetchWidgetConfig;
    BOOL _preferCompactSectionName;
    BOOL _preferCompactSourceName;
    BOOL _respectsWidgetSlotsLimit;
    BOOL _respectsWidgetVisibleSectionsPerQueueLimit;
    struct {
        unsigned int embedsLimit:1;
        unsigned int leadingCellThumbnailSizePreset:1;
        unsigned int nonLeadingCellThumbnailSizePreset:1;
        unsigned int qualityOfService:1;
        unsigned int slotsLimit:1;
        unsigned int sourceNameImageSizePreset:1;
        unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels:1;
        unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels:1;
        unsigned int allowLeadingCell:1;
        unsigned int allowOnlyWatchEligibleSections:1;
        unsigned int allowSectionTitles:1;
        unsigned int fetchWidgetConfig:1;
        unsigned int preferCompactSectionName:1;
        unsigned int preferCompactSourceName:1;
        unsigned int respectsWidgetSlotsLimit:1;
        unsigned int respectsWidgetVisibleSectionsPerQueueLimit:1;
    } _has;
}

@property(nonatomic) long long embedsLimit; // @synthesize embedsLimit=_embedsLimit;
@property(nonatomic) BOOL allowSectionTitles; // @synthesize allowSectionTitles=_allowSectionTitles;
@property(nonatomic) unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels; // @synthesize dynamicThumbnailSizePresetMinimumHeightInPixels=_dynamicThumbnailSizePresetMinimumHeightInPixels;
@property(nonatomic) unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels; // @synthesize dynamicThumbnailSizePresetMinimumWidthInPixels=_dynamicThumbnailSizePresetMinimumWidthInPixels;
@property(nonatomic) long long leadingCellThumbnailSizePreset; // @synthesize leadingCellThumbnailSizePreset=_leadingCellThumbnailSizePreset;
@property(nonatomic) BOOL allowLeadingCell; // @synthesize allowLeadingCell=_allowLeadingCell;
@property(retain, nonatomic) NSString *assetsDirectoryFileURLString; // @synthesize assetsDirectoryFileURLString=_assetsDirectoryFileURLString;
@property(nonatomic) BOOL respectsWidgetVisibleSectionsPerQueueLimit; // @synthesize respectsWidgetVisibleSectionsPerQueueLimit=_respectsWidgetVisibleSectionsPerQueueLimit;
@property(nonatomic) BOOL allowOnlyWatchEligibleSections; // @synthesize allowOnlyWatchEligibleSections=_allowOnlyWatchEligibleSections;
@property(nonatomic) BOOL fetchWidgetConfig; // @synthesize fetchWidgetConfig=_fetchWidgetConfig;
@property(retain, nonatomic) NTPBSectionSlotCostInfo *nonVideoSectionSlotCostInfo; // @synthesize nonVideoSectionSlotCostInfo=_nonVideoSectionSlotCostInfo;
@property(retain, nonatomic) NTPBSectionSlotCostInfo *videoSectionSlotCostInfo; // @synthesize videoSectionSlotCostInfo=_videoSectionSlotCostInfo;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) long long sourceNameImageSizePreset; // @synthesize sourceNameImageSizePreset=_sourceNameImageSizePreset;
@property(nonatomic) long long nonLeadingCellThumbnailSizePreset; // @synthesize nonLeadingCellThumbnailSizePreset=_nonLeadingCellThumbnailSizePreset;
@property(nonatomic) BOOL preferCompactSourceName; // @synthesize preferCompactSourceName=_preferCompactSourceName;
@property(nonatomic) BOOL preferCompactSectionName; // @synthesize preferCompactSectionName=_preferCompactSectionName;
@property(nonatomic) BOOL respectsWidgetSlotsLimit; // @synthesize respectsWidgetSlotsLimit=_respectsWidgetSlotsLimit;
@property(nonatomic) double slotsLimit; // @synthesize slotsLimit=_slotsLimit;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEmbedsLimit;
@property(nonatomic) BOOL hasAllowSectionTitles;
@property(nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumHeightInPixels;
@property(nonatomic) BOOL hasDynamicThumbnailSizePresetMinimumWidthInPixels;
@property(nonatomic) BOOL hasLeadingCellThumbnailSizePreset;
@property(nonatomic) BOOL hasAllowLeadingCell;
@property(readonly, nonatomic) BOOL hasAssetsDirectoryFileURLString;
@property(nonatomic) BOOL hasRespectsWidgetVisibleSectionsPerQueueLimit;
@property(nonatomic) BOOL hasAllowOnlyWatchEligibleSections;
@property(nonatomic) BOOL hasFetchWidgetConfig;
@property(readonly, nonatomic) BOOL hasNonVideoSectionSlotCostInfo;
@property(readonly, nonatomic) BOOL hasVideoSectionSlotCostInfo;
@property(nonatomic) BOOL hasQualityOfService;
@property(nonatomic) BOOL hasSourceNameImageSizePreset;
@property(nonatomic) BOOL hasNonLeadingCellThumbnailSizePreset;
@property(nonatomic) BOOL hasPreferCompactSourceName;
@property(nonatomic) BOOL hasPreferCompactSectionName;
@property(nonatomic) BOOL hasRespectsWidgetSlotsLimit;
@property(nonatomic) BOOL hasSlotsLimit;

@end

