//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLevel : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _levelId;
    GEOPDVenueLabel *_label;
    int _ordinal;
    struct {
        unsigned int levelId:1;
        unsigned int ordinal:1;
    } _has;
}

@property(retain, nonatomic) GEOPDVenueLabel *label; // @synthesize label=_label;
@property(nonatomic) int ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) unsigned long long levelId; // @synthesize levelId=_levelId;
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
@property(readonly, nonatomic) BOOL hasLabel;
@property(nonatomic) BOOL hasOrdinal;
@property(nonatomic) BOOL hasLevelId;

@end

