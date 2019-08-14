//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOVLaneCharacteristic;

__attribute__((visibility("hidden")))
@interface GEOVPointCharacteristic : PBCodable <NSCopying>
{
    GEOVLaneCharacteristic *_laneCharacteristic;
    int _roadLaneCount;
    int _roadOffset;
    int _sectionIndex;
    int _vertexIndex;
    int _zLevel;
    BOOL _brunnelEntry;
    BOOL _castShadow;
    BOOL _cropped;
    BOOL _shouldDrawLanes;
    struct {
        unsigned int roadLaneCount:1;
        unsigned int roadOffset:1;
        unsigned int sectionIndex:1;
        unsigned int vertexIndex:1;
        unsigned int zLevel:1;
        unsigned int brunnelEntry:1;
        unsigned int castShadow:1;
        unsigned int cropped:1;
        unsigned int shouldDrawLanes:1;
    } _has;
}

@property(nonatomic) BOOL brunnelEntry; // @synthesize brunnelEntry=_brunnelEntry;
@property(nonatomic) BOOL castShadow; // @synthesize castShadow=_castShadow;
@property(nonatomic) BOOL shouldDrawLanes; // @synthesize shouldDrawLanes=_shouldDrawLanes;
@property(retain, nonatomic) GEOVLaneCharacteristic *laneCharacteristic; // @synthesize laneCharacteristic=_laneCharacteristic;
@property(nonatomic) BOOL cropped; // @synthesize cropped=_cropped;
@property(nonatomic) int zLevel; // @synthesize zLevel=_zLevel;
@property(nonatomic) int roadOffset; // @synthesize roadOffset=_roadOffset;
@property(nonatomic) int roadLaneCount; // @synthesize roadLaneCount=_roadLaneCount;
@property(nonatomic) int vertexIndex; // @synthesize vertexIndex=_vertexIndex;
@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBrunnelEntry;
@property(nonatomic) BOOL hasCastShadow;
@property(nonatomic) BOOL hasShouldDrawLanes;
@property(readonly, nonatomic) BOOL hasLaneCharacteristic;
@property(nonatomic) BOOL hasCropped;
@property(nonatomic) BOOL hasZLevel;
@property(nonatomic) BOOL hasRoadOffset;
@property(nonatomic) BOOL hasRoadLaneCount;
@property(nonatomic) BOOL hasVertexIndex;
@property(nonatomic) BOOL hasSectionIndex;

@end

