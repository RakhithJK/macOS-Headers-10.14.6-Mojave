//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOMapFeatureLine.h>

@class GEOMapFeatureJunction, NSString;

@interface GEOMapFeatureRoad : GEOMapFeatureLine
{
    CDStruct_9c468c1c *_feature;
    unsigned long long _roadID;
    GEOMapFeatureJunction *_junctionA;
    GEOMapFeatureJunction *_junctionB;
    BOOL _checkedJunctionA;
    BOOL _checkedJunctionB;
}

+ (double)estimatedWidthForRoad:(CDStruct_9c468c1c *)arg1;
- (void).cxx_destruct;
- (CDStruct_6e3f967a *)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long *)arg2;
- (id)_containingTile;
- (id)_junctionB;
- (id)_junctionA;
- (id)localizedRoadName:(out id *)arg1;
- (void)flip;
@property(readonly, nonatomic) NSString *internalRoadName;
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) BOOL isRail;
@property(readonly, nonatomic) BOOL isBridge;
@property(readonly, nonatomic) BOOL isTunnel;
@property(readonly, nonatomic) BOOL isWalkable;
@property(readonly, nonatomic) BOOL isDrivable;
@property(readonly, nonatomic) BOOL speedLimitIsMPH;
@property(readonly, nonatomic) unsigned long long speedLimit;
@property(readonly, nonatomic) double roadWidth;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
@property(readonly, nonatomic) GEOMapFeatureJunction *endJunction;
@property(readonly, nonatomic) GEOMapFeatureJunction *startJunction;
@property(readonly, nonatomic) unsigned long long roadID;
@property(readonly, nonatomic) BOOL isFlipped;
@property(readonly, nonatomic) CDStruct_9c468c1c *feature;
@property(readonly, nonatomic) struct _GEOTileKey tileKey;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_9c468c1c *)arg1;

@end

