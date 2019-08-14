//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDEntity, GEOPDPlaceInfo, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedService : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDEntity *_entity;
    NSMutableArray *_hours;
    GEOPDPlaceInfo *_placeInfo;
}

+ (Class)hoursType;
+ (id)linkedServicesForPlaceData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) GEOPDPlaceInfo *placeInfo; // @synthesize placeInfo=_placeInfo;
@property(retain, nonatomic) GEOPDEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)hoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)hoursCount;
- (void)addHours:(id)arg1;
- (void)clearHours;
@property(readonly, nonatomic) BOOL hasPlaceInfo;
@property(readonly, nonatomic) BOOL hasEntity;

@end

