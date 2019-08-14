//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/MNLocationTracker.h>

@class GEONavigationMapMatcher, MNLocation, NSData, NSTimer;
@protocol GEODirectionServiceTicket;

@interface MNTurnByTurnLocationTracker : MNLocationTracker
{
    GEONavigationMapMatcher *_mapMatcher;
    double _startTime;
    id <GEODirectionServiceTicket> _rerouteTicket;
    NSData *_serverSessionState;
    unsigned long long _rerouteReason;
    long long _responseErrorCode;
    unsigned long long _responseErrorCount;
    unsigned long long _recalculationNetworkUnreachableCount;
    NSTimer *_recalculationRetryTimer;
    unsigned long long _reroutesOnFeature;
    MNLocation *_lastLocationUsedForReroute;
    unsigned long long _consecutiveOffRouteCount;
    MNLocation *_lastKnownGoodLocationOnRoute;
    BOOL _isNavigatingInLowGuidance;
}

@property(copy, nonatomic) NSData *serverSessionState; // @synthesize serverSessionState=_serverSessionState;
- (void).cxx_destruct;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;
- (void)_setIsNavigatingInLowGuidance:(BOOL)arg1;
- (id)_alternateRouteForOffRouteLocation:(id)arg1;
- (BOOL)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (int)_detectedMotionForLocation:(id)arg1;
- (void)_updateForArrival;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_updateForLocation:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (void)traceJumpedInTime;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (BOOL)_shouldThrottleRerouteForLocation:(id)arg1 lastRerouteLocation:(id)arg2;
- (void)_failedToRecalculateRouteWithError:(id)arg1;
- (void)_recalculationRetryTimerFired:(id)arg1;
- (void)_retryLastRouteRecalculation;
- (void)_reroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_requestDirectionsForLocation:(id)arg1 destination:(id)arg2 transportType:(int)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_handleOffRouteForLocation:(id)arg1;
- (void)_submitRerouteTicketWithHandler:(CDUnknownBlockType)arg1;
- (id)_ticketForNewDestination:(id)arg1 fromLocation:(id)arg2 transportType:(int)arg3;
- (id)_rerouteTicketForLocation:(id)arg1 transportType:(int)arg2 stepIndex:(unsigned long long)arg3;
- (BOOL)_isCameraTestMode;
- (BOOL)_isRerouting;
- (BOOL)_isRoadFeatureInOppositeDirection:(CDStruct_b82ef747 *)arg1 ofCoordinate:(CDStruct_2c43369c)arg2 course:(double)arg3;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (BOOL)_shouldAdvanceGuidanceToRouteMatch:(id)arg1;
- (void)_updateSwitchTransportTypeForLocation:(id)arg1;
- (void)_updateStateForLocation:(id)arg1;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (void)updateDestination:(id)arg1 finishedHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1;
- (id)initForTestingWithRoute:(id)arg1;

@end

