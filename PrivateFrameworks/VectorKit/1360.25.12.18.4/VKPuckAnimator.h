//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORouteMatch, VKPuckAnimatorLocationProjector, VKRunningCurve, VKTimedAnimation;
@protocol VKPuckAnimatorDelegate, VKPuckAnimatorTarget;

@interface VKPuckAnimator : NSObject
{
    id <VKPuckAnimatorTarget> _target;
    VKTimedAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    double _vehicleHeading;
    id <VKPuckAnimatorDelegate> _delegate;
    long long _pausedCount;
    BOOL _suspended;
    double _tracePlaybackSpeedMultiplier;
    unsigned long long _behavior;
    Matrix_6e1d3589 _lastProjectedPosition;
    GEORouteMatch *_lastProjectedLocation;
}

@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) double tracePlaybackSpeedMultiplier; // @synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier;
@property(retain, nonatomic) GEORouteMatch *lastProjectedLocation; // @synthesize lastProjectedLocation=_lastProjectedLocation;
@property(nonatomic) id <VKPuckAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <VKPuckAnimatorTarget> target; // @synthesize target=_target;
- (id).cxx_construct;
- (id)detailedDescription;
- (void)updateVehicleHeading:(double)arg1;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;
- (void)_step;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

