//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXMFeatureTracker;

@interface _AXMFeatureTrackerContainer : NSObject
{
    AXMFeatureTracker *_tracker;
    AXDispatchTimer *_activeTimer;
}

@property(retain, nonatomic) AXDispatchTimer *activeTimer; // @synthesize activeTimer=_activeTimer;
@property(retain, nonatomic) AXMFeatureTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (id)initWithFeature:(id)arg1 queue:(id)arg2;

@end

