//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOCommonOptions, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEORouteAttributes, GEORouteMatch, NSDate, NSLock, NSMutableArray;
@protocol GEORouteHypothesizerUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerUpdater : NSObject <NSSecureCoding>
{
    id <GEORouteHypothesizerUpdaterDelegate> _delegate;
    GEODirectionsRequestFeedback *_feedback;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEODirectionsRequest *_currentRequest;
    GEORouteAttributes *_routeAttributes;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_originLocation;
    GEOLocation *_lastMatchedLocation;
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    BOOL _isTraveling;
    BOOL _hasArrived;
    GEOMapRegion *_arrivalMapRegion;
    double _score;
    NSMutableArray *_rerouteEntries;
    BOOL _shouldThrottleReroutes;
    NSDate *_lastRerouteDate;
    unsigned long long _numThrottledReroutes;
    NSLock *_requestLock;
    BOOL _isNavd;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isNavd; // @synthesize isNavd=_isNavd;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(readonly, nonatomic) BOOL hasArrived; // @synthesize hasArrived=_hasArrived;
@property(readonly, nonatomic) BOOL isTraveling; // @synthesize isTraveling=_isTraveling;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) __weak id <GEORouteHypothesizerUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)_transportType;
- (void)_updateScoreForLocation:(id)arg1;
- (BOOL)_checkForArrival:(id)arg1 routeMatch:(id)arg2;
- (id)routeMatchForLocation:(id)arg1;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (void)cancelCurrentRequest;
- (void)updateForLocation:(id)arg1;
- (void)startUpdatingFromLocation:(id)arg1 existingRoute:(id)arg2 usualRouteData:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (id)init;

@end

