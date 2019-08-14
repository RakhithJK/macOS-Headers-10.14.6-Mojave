//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapTransitPointFinder : GEOMapRequest
{
    GEOMapTileFinder *_tileFinder;
    CDStruct_34734122 _centerPoint;
    double _mapRadius;
    unsigned long long _pointID;
    unsigned long long _parentID;
}

- (void).cxx_destruct;
- (void)_validatePoint:(CDStruct_87830318 *)arg1 rect:(CDStruct_90e2a262)arg2 localSearch:(Box_3fb92e00)arg3 validPointHandler:(CDUnknownBlockType)arg4;
- (void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(CDUnknownBlockType)arg2 accessPointHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;
- (id)initWithMap:(id)arg1 approxLocation:(CDStruct_c3b9c2ee)arg2 parentID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(CDStruct_c3b9c2ee)arg2 pointID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;

@end

