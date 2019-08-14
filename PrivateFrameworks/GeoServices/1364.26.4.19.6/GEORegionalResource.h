//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_tileRanges;
    unsigned long long _tileRangesCount;
    unsigned long long _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct {
        unsigned int x:1;
        unsigned int y:1;
        unsigned int z:1;
    } _has;
}

+ (Class)iconChecksumType;
+ (Class)attributionType;
+ (Class)iconType;
@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(nonatomic) unsigned int z; // @synthesize z=_z;
@property(nonatomic) unsigned int y; // @synthesize y=_y;
@property(nonatomic) unsigned int x; // @synthesize x=_x;
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
- (void)setTileRanges:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1;
- (void)addTileRange:(struct GEOTileSetRegion)arg1;
- (void)clearTileRanges;
@property(readonly, nonatomic) struct GEOTileSetRegion *tileRanges;
@property(readonly, nonatomic) unsigned long long tileRangesCount;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
@property(nonatomic) BOOL hasZ;
@property(nonatomic) BOOL hasY;
@property(nonatomic) BOOL hasX;
- (void)dealloc;

@end

