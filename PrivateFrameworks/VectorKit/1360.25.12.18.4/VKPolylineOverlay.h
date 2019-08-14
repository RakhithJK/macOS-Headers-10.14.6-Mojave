//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOComposedRouteObserver-Protocol.h>
#import <VectorKit/VKOverlay-Protocol.h>

@class GEOComposedRoute, GEOMapRegion, NSString, VKRouteLine;
@protocol VKPolylineOverlayRouteRibbonObserver;

@interface VKPolylineOverlay : NSObject <VKOverlay, GEOComposedRouteObserver>
{
    struct __CFSet *_observers;
    GEOComposedRoute *_composedRoute;
    BOOL _isReadyForSnapping;
    VKRouteLine *_routeRibbon;
    id <VKPolylineOverlayRouteRibbonObserver> _routeRibbonObserver;
    double _trafficTimeStamp;
    struct TrafficSegmentsAlongRoute *_trafficSegments;
    BOOL _selected;
    BOOL _showTraffic;
}

@property(nonatomic) BOOL showTraffic; // @synthesize showTraffic=_showTraffic;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) id <VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver; // @synthesize routeRibbonObserver=_routeRibbonObserver;
@property(nonatomic) VKRouteLine *routeRibbon; // @synthesize routeRibbon=_routeRibbon;
@property(readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedTraffic:(id)arg1;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (BOOL)isSnappingForSceneTiles;
- (id)getPathsForRenderRegion:(id)arg1 shouldSnapToRoads:(BOOL)arg2 verifySnapping:(BOOL)arg3 observer:(id)arg4;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (void)_updateTraffic;
- (struct _NSRange)sectionRangeForBounds:(Box_3d7e3c2c)arg1;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) BOOL containsTransit;
- (void)_setNeedsLayout;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

