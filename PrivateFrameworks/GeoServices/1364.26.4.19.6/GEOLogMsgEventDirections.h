//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray;

@interface GEOLogMsgEventDirections : PBCodable <NSCopying>
{
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    struct GEOSessionID _navSessionId;
    double _durationOfTrip;
    NSMutableArray *_directionsFeedbacks;
    NSMutableArray *_durationInNavigationModes;
    GEOLocation *_finalLocation;
    BOOL _arrivedAtDestination;
    struct {
        unsigned int navigationAudioFeedback:1;
        unsigned int navSessionId:1;
        unsigned int durationOfTrip:1;
        unsigned int arrivedAtDestination:1;
    } _has;
}

+ (Class)durationInNavigationModeType;
+ (Class)directionsFeedbackType;
@property(retain, nonatomic) NSMutableArray *durationInNavigationModes; // @synthesize durationInNavigationModes=_durationInNavigationModes;
@property(nonatomic) struct GEOSessionID navSessionId; // @synthesize navSessionId=_navSessionId;
@property(nonatomic) double durationOfTrip; // @synthesize durationOfTrip=_durationOfTrip;
@property(nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback; // @synthesize navigationAudioFeedback=_navigationAudioFeedback;
@property(nonatomic) BOOL arrivedAtDestination; // @synthesize arrivedAtDestination=_arrivedAtDestination;
@property(retain, nonatomic) GEOLocation *finalLocation; // @synthesize finalLocation=_finalLocation;
@property(retain, nonatomic) NSMutableArray *directionsFeedbacks; // @synthesize directionsFeedbacks=_directionsFeedbacks;
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
- (id)durationInNavigationModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)durationInNavigationModesCount;
- (void)addDurationInNavigationMode:(id)arg1;
- (void)clearDurationInNavigationModes;
@property(nonatomic) BOOL hasNavSessionId;
@property(nonatomic) BOOL hasDurationOfTrip;
@property(nonatomic) BOOL hasNavigationAudioFeedback;
@property(nonatomic) BOOL hasArrivedAtDestination;
@property(readonly, nonatomic) BOOL hasFinalLocation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (void)addDirectionsFeedback:(id)arg1;
- (void)clearDirectionsFeedbacks;

@end

