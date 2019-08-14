//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSDictionary, NSMutableSet, PLEntryNotificationOperatorComposition, PLMonotonicTimer, PLNSNotificationOperatorComposition;

@interface PLProcessMonitorAgent : PLAgent
{
    BOOL _firstBoot;
    NSDate *_currentCachedDate;
    NSDate *_previousCacheDate;
    double _currentCachedTotalCPUTime;
    PLMonotonicTimer *_logTimer;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLNSNotificationOperatorComposition *_asertionNotifications;
    NSMutableSet *_processes;
    NSDictionary *_lastThreadIdToKTMonitorEntryDict;
    NSDate *_lastEntryDate;
}

+ (unsigned long long)PIDToCoalitionID:(int)arg1;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitionKernelTaskMonitor;
+ (id)entryEventIntervalDefinitionProcessMonitorDiff;
+ (id)entryEventBackwardDefinitionProcessPeakMemory;
+ (id)entryEventBackwardDefinitionProcessMonitor;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardProcessID;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointProcessSnapshot;
+ (id)entryEventPointMemoryTracking;
+ (id)entryEventPointDefinitions;
+ (void)load;
@property(retain) NSDate *lastEntryDate; // @synthesize lastEntryDate=_lastEntryDate;
@property(retain) NSDictionary *lastThreadIdToKTMonitorEntryDict; // @synthesize lastThreadIdToKTMonitorEntryDict=_lastThreadIdToKTMonitorEntryDict;
@property(retain) NSMutableSet *processes; // @synthesize processes=_processes;
@property(retain) PLNSNotificationOperatorComposition *asertionNotifications; // @synthesize asertionNotifications=_asertionNotifications;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
@property(retain) PLMonotonicTimer *logTimer; // @synthesize logTimer=_logTimer;
@property BOOL firstBoot; // @synthesize firstBoot=_firstBoot;
@property double currentCachedTotalCPUTime; // @synthesize currentCachedTotalCPUTime=_currentCachedTotalCPUTime;
@property(retain) NSDate *previousCacheDate; // @synthesize previousCacheDate=_previousCacheDate;
@property(retain) NSDate *currentCachedDate; // @synthesize currentCachedDate=_currentCachedDate;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)logEventIntervalKernelTaskMonitor;
- (int)get_kthread_list:(unsigned long long **)arg1;
- (void)logEventIntervalProcessMonitorIntervalUsingCache;
- (void)logEventIntervalProcessMonitorInterval;
- (void)logEventBackwardProcessPeakMemoryUsingCache;
- (void)logEventBackwardProcessMonitorUsingCache;
- (void)logEventBackwardProcessMonitor;
- (void)logEventPointProcessSnapshot;
- (void)logEventPointMemoryTracking;
- (void)log;
- (id)processMonitorMultiKeyFromProcessID:(id)arg1;
- (void)updateProcessMonitorCache;
- (void)getCpuUsageAndMemoryForPid:(int)arg1 withBuffer:(void *)arg2 withNewProcessArray:(id)arg3 withTotalCpu:(double *)arg4 withActiveProcesses:(id)arg5;
- (id)eventForwardProcessIDForPID:(int)arg1;
- (BOOL)isCachedForProcessID:(int)arg1;
- (BOOL)isCachedForProcessID:(int)arg1 andName:(id)arg2;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)arg1;
- (id)init;

@end

