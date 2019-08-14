//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMachPortTaskNameRight;

@interface FBProcessCPUStatistics : NSObject
{
    BSMachPortTaskNameRight *_taskNameRight;
    struct FBProcessTimes _times;
}

- (void).cxx_destruct;
- (double)_elapsedCPUTime;
- (void)_hostwideUserElapsedCPUTime:(double *)arg1 systemElapsedCPUTime:(double *)arg2 idleElapsedCPUTime:(double *)arg3;
- (void)_getApplicationCPUTimesForUser:(double *)arg1 system:(double *)arg2 idle:(double *)arg3;
- (id)descriptionForCrashReport;
- (void)update;
@property(readonly, nonatomic) double totalElapsedIdleTime;
@property(readonly, nonatomic) double totalElapsedSystemTime;
@property(readonly, nonatomic) double totalElapsedUserTime;
@property(readonly, nonatomic) double totalElapsedTime;
- (id)initWithTaskNameRight:(id)arg1;

@end

