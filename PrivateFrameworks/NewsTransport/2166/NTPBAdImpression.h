//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBAdImpression : PBCodable <NSCopying>
{
    long long _videoAdDuration;
    int _adCreativeType;
    NSString *_adImpressionId;
    int _adImpressionTimeThreshold;
    int _adLocation;
    int _adType;
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_iadAd;
    NSString *_iadCampaign;
    NSString *_iadLine;
    int _newsProductType;
    NSString *_previousArticleId;
    NSString *_sourceChannelId;
    int _videoAdPlacementPosition;
    int _videoAdType;
    struct {
        unsigned int videoAdDuration:1;
        unsigned int adCreativeType:1;
        unsigned int adImpressionTimeThreshold:1;
        unsigned int adLocation:1;
        unsigned int adType:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int newsProductType:1;
        unsigned int videoAdPlacementPosition:1;
        unsigned int videoAdType:1;
    } _has;
}

@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(nonatomic) int adImpressionTimeThreshold; // @synthesize adImpressionTimeThreshold=_adImpressionTimeThreshold;
@property(retain, nonatomic) NSString *adImpressionId; // @synthesize adImpressionId=_adImpressionId;
@property(nonatomic) int videoAdPlacementPosition; // @synthesize videoAdPlacementPosition=_videoAdPlacementPosition;
@property(nonatomic) long long videoAdDuration; // @synthesize videoAdDuration=_videoAdDuration;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *iadAd; // @synthesize iadAd=_iadAd;
@property(retain, nonatomic) NSString *iadLine; // @synthesize iadLine=_iadLine;
@property(retain, nonatomic) NSString *iadCampaign; // @synthesize iadCampaign=_iadCampaign;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPreviousArticleId;
@property(readonly, nonatomic) BOOL hasGroupViewExposureId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(nonatomic) BOOL hasAdImpressionTimeThreshold;
@property(readonly, nonatomic) BOOL hasAdImpressionId;
@property(nonatomic) BOOL hasVideoAdPlacementPosition;
@property(nonatomic) BOOL hasVideoAdDuration;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(readonly, nonatomic) BOOL hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
- (int)StringAsVideoAdType:(id)arg1;
- (id)videoAdTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasVideoAdType;
@property(nonatomic) int videoAdType; // @synthesize videoAdType=_videoAdType;
- (int)StringAsNewsProductType:(id)arg1;
- (id)newsProductTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasNewsProductType;
@property(nonatomic) int newsProductType; // @synthesize newsProductType=_newsProductType;
- (int)StringAsAdLocation:(id)arg1;
- (id)adLocationAsString:(int)arg1;
@property(nonatomic) BOOL hasAdLocation;
@property(nonatomic) int adLocation; // @synthesize adLocation=_adLocation;
- (int)StringAsAdCreativeType:(id)arg1;
- (id)adCreativeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAdCreativeType;
@property(nonatomic) int adCreativeType; // @synthesize adCreativeType=_adCreativeType;
- (int)StringAsAdType:(id)arg1;
- (id)adTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAdType;
@property(nonatomic) int adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) BOOL hasIadAd;
@property(readonly, nonatomic) BOOL hasIadLine;
@property(readonly, nonatomic) BOOL hasIadCampaign;

@end

