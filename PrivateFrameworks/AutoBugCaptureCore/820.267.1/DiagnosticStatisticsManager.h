//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnalyticsWorkspace, DiagnosticCaseUsageAnalytics;
@protocol OS_dispatch_queue;

@interface DiagnosticStatisticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AnalyticsWorkspace *_workspace;
    DiagnosticCaseUsageAnalytics *_caseUsageSpace;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)cleanupDiagnosticCaseUsage;
- (void)resetDiagnosticCaseUsage;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)arg1;
- (long long)_removeDiagnosticCaseUsageMatchingDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (double)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
- (id)_createDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 onOrAfter:(id)arg5 create:(BOOL)arg6;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (void)_updateDailyCaseStatisticsWith:(id)arg1;
- (void)_updateDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 lastSeen:(id)arg5 dampeningType:(BOOL)arg6;
- (void)_updateCaseStatisticsWith:(id)arg1;
- (void)getDiagnosticCaseUsageStatistics:(CDUnknownBlockType)arg1;
- (void)updateCaseStatisticsWith:(id)arg1;
- (void)_checkFileWritingLimits:(id)arg1;
- (id)initWithWorkspace:(id)arg1 queue:(id)arg2;

@end

