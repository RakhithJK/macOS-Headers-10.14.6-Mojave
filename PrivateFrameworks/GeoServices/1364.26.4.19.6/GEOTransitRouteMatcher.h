//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEORouteMatcher.h>

@class GEOMotionContext, NSArray;

@interface GEOTransitRouteMatcher : GEORouteMatcher
{
    GEOMotionContext *_motionContext;
    NSArray *_stationsOnRoute;
    NSArray *_routeMatchUpdaters;
    NSArray *_stepRanges;
    double _distanceToClosestWalkingSegment;
}

@property(readonly, nonatomic) double distanceToClosestWalkingSegment; // @synthesize distanceToClosestWalkingSegment=_distanceToClosestWalkingSegment;
- (void).cxx_destruct;
- (void)_insertUpdater:(id)arg1 into:(id)arg2;
- (BOOL)_shouldConsiderCourseForLocation:(id)arg1;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_considerCandidateMatch:(id)arg1;
- (id)_stepForPointIndex:(unsigned int)arg1 previousStep:(id)arg2;
- (void)_startRouteMatch;
- (BOOL)_stepsInSameRange:(id)arg1 nextStep:(id)arg2;
- (id)motionContext;
- (id)route;
- (BOOL)isStationCoordinateOnRoute:(CDStruct_c3b9c2ee)arg1;
- (id)initWithRoute:(id)arg1 motionContext:(id)arg2;

@end

