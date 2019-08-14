//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOJunctionInfo, GEONameInfo, NSMutableArray;

@interface GEOSignGuidance : PBCodable <NSCopying>
{
    GEOJunctionInfo *_junctionInfo;
    int _maneuverArrowOverride;
    NSMutableArray *_secondarySigns;
    GEONameInfo *_shieldName;
    NSMutableArray *_signDetails;
    NSMutableArray *_signTitles;
    unsigned int _stackRanking;
    struct {
        unsigned int maneuverArrowOverride:1;
        unsigned int stackRanking:1;
    } _has;
}

+ (Class)secondarySignType;
+ (Class)signDetailType;
+ (Class)signTitleType;
@property(retain, nonatomic) GEOJunctionInfo *junctionInfo; // @synthesize junctionInfo=_junctionInfo;
@property(nonatomic) unsigned int stackRanking; // @synthesize stackRanking=_stackRanking;
@property(retain, nonatomic) GEONameInfo *shieldName; // @synthesize shieldName=_shieldName;
@property(retain, nonatomic) NSMutableArray *secondarySigns; // @synthesize secondarySigns=_secondarySigns;
@property(retain, nonatomic) NSMutableArray *signDetails; // @synthesize signDetails=_signDetails;
@property(retain, nonatomic) NSMutableArray *signTitles; // @synthesize signTitles=_signTitles;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasJunctionInfo;
@property(nonatomic) BOOL hasStackRanking;
@property(readonly, nonatomic) BOOL hasShieldName;
- (int)StringAsManeuverArrowOverride:(id)arg1;
- (id)maneuverArrowOverrideAsString:(int)arg1;
@property(nonatomic) BOOL hasManeuverArrowOverride;
@property(nonatomic) int maneuverArrowOverride; // @synthesize maneuverArrowOverride=_maneuverArrowOverride;
- (id)secondarySignAtIndex:(unsigned long long)arg1;
- (unsigned long long)secondarySignsCount;
- (void)addSecondarySign:(id)arg1;
- (void)clearSecondarySigns;
- (id)signDetailAtIndex:(unsigned long long)arg1;
- (unsigned long long)signDetailsCount;
- (void)addSignDetail:(id)arg1;
- (void)clearSignDetails;
- (id)signTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)signTitlesCount;
- (void)addSignTitle:(id)arg1;
- (void)clearSignTitles;

@end

