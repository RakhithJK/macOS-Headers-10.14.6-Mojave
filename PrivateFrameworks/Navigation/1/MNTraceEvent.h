//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNLocation, NSDictionary, NSString;

@interface MNTraceEvent : NSObject
{
    NSString *_cachedPrimaryDescription;
    NSString *_cachedSecondaryDescription;
    double _timeSinceStartOfRoute;
    unsigned long long _stepIndex;
    unsigned long long _stage;
    double _distanceToStartOfManeuver;
    MNLocation *_location;
    unsigned long long _eventType;
    NSDictionary *_eventData;
}

@property(copy, nonatomic) NSDictionary *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) double distanceToStartOfManeuver; // @synthesize distanceToStartOfManeuver=_distanceToStartOfManeuver;
@property(readonly, nonatomic) unsigned long long stage; // @synthesize stage=_stage;
@property(readonly, nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(readonly, nonatomic) double timeSinceStartOfRoute; // @synthesize timeSinceStartOfRoute=_timeSinceStartOfRoute;
- (void).cxx_destruct;
- (id)shieldToText:(id)arg1;
- (id)instructionsFromSignDescription:(id)arg1;
- (id)stringByInstructions:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *secondaryDescription;
@property(readonly, nonatomic) NSString *primaryDescription;
- (void)_calculateDescription;
- (id)initWithTime:(double)arg1 stepIndex:(unsigned long long)arg2 stage:(unsigned long long)arg3 distance:(double)arg4 location:(id)arg5 eventType:(unsigned long long)arg6 eventData:(id)arg7;

@end

