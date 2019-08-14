//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying>
{
    NSData *_directionResponseID;
    unsigned int _oldRouteHistoricTravelTime;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    unsigned int _oldRouteTravelTime;
    unsigned int _reroutedRouteHistoricTravelTime;
    NSData *_reroutedRouteID;
    unsigned int _reroutedRouteTravelTime;
    BOOL _oldRouteBlocked;
    struct {
        unsigned int oldRouteHistoricTravelTime:1;
        unsigned int oldRouteTravelTime:1;
        unsigned int reroutedRouteHistoricTravelTime:1;
        unsigned int reroutedRouteTravelTime:1;
        unsigned int oldRouteBlocked:1;
    } _has;
}

+ (Class)oldRouteIncidentsType;
@property(retain, nonatomic) NSData *reroutedRouteID; // @synthesize reroutedRouteID=_reroutedRouteID;
@property(retain, nonatomic) NSData *oldRouteID; // @synthesize oldRouteID=_oldRouteID;
@property(retain, nonatomic) NSData *directionResponseID; // @synthesize directionResponseID=_directionResponseID;
@property(retain, nonatomic) NSMutableArray *oldRouteIncidents; // @synthesize oldRouteIncidents=_oldRouteIncidents;
@property(nonatomic) BOOL oldRouteBlocked; // @synthesize oldRouteBlocked=_oldRouteBlocked;
@property(nonatomic) unsigned int reroutedRouteHistoricTravelTime; // @synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime;
@property(nonatomic) unsigned int oldRouteHistoricTravelTime; // @synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime;
@property(nonatomic) unsigned int reroutedRouteTravelTime; // @synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime;
@property(nonatomic) unsigned int oldRouteTravelTime; // @synthesize oldRouteTravelTime=_oldRouteTravelTime;
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
@property(readonly, nonatomic) BOOL hasReroutedRouteID;
@property(readonly, nonatomic) BOOL hasOldRouteID;
@property(readonly, nonatomic) BOOL hasDirectionResponseID;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
@property(nonatomic) BOOL hasOldRouteBlocked;
@property(nonatomic) BOOL hasReroutedRouteHistoricTravelTime;
@property(nonatomic) BOOL hasOldRouteHistoricTravelTime;
@property(nonatomic) BOOL hasReroutedRouteTravelTime;
@property(nonatomic) BOOL hasOldRouteTravelTime;

@end
