//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedGuidanceEvent, MNGuidanceEventManager, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNAnnouncementPlanEvent : NSObject
{
    BOOL _includeInPlan;
    GEOComposedGuidanceEvent *_event;
    unsigned long long _variantIndex;
    double _triggerDistance;
    MNGuidanceEventManager *_manager;
    NSMutableArray *_announcementDurations;
    double _distance;
    double _speed;
}

@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSMutableArray *announcementDurations; // @synthesize announcementDurations=_announcementDurations;
@property(nonatomic) __weak MNGuidanceEventManager *manager; // @synthesize manager=_manager;
@property(nonatomic) double triggerDistance; // @synthesize triggerDistance=_triggerDistance;
@property(nonatomic) unsigned long long variantIndex; // @synthesize variantIndex=_variantIndex;
@property(nonatomic) BOOL includeInPlan; // @synthesize includeInPlan=_includeInPlan;
@property(retain, nonatomic) GEOComposedGuidanceEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
@property(readonly, nonatomic) double completionDistance;
- (id)description;
- (id)initWithEvent:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4;

@end

