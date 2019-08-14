//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying>
{
    NSString *_feedId;
    int _feedType;
    int _recommendationBrickType;
    NSMutableArray *_recommendedFeedIds;
    BOOL _exposedFromReferredUser;
    struct {
        unsigned int feedType:1;
        unsigned int recommendationBrickType:1;
        unsigned int exposedFromReferredUser:1;
    } _has;
}

+ (Class)recommendedFeedIdsType;
@property(nonatomic) BOOL exposedFromReferredUser; // @synthesize exposedFromReferredUser=_exposedFromReferredUser;
@property(retain, nonatomic) NSMutableArray *recommendedFeedIds; // @synthesize recommendedFeedIds=_recommendedFeedIds;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasExposedFromReferredUser;
- (int)StringAsRecommendationBrickType:(id)arg1;
- (id)recommendationBrickTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRecommendationBrickType;
@property(nonatomic) int recommendationBrickType; // @synthesize recommendationBrickType=_recommendationBrickType;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedFeedIdsCount;
- (void)addRecommendedFeedIds:(id)arg1;
- (void)clearRecommendedFeedIds;
@property(readonly, nonatomic) BOOL hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;

@end

