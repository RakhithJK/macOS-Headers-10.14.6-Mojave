//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPJournaling-Protocol.h>

@class MSPJournal, MSPMapsPaths, NSDate, NSMutableArray, NSOperationQueue, NSString, NSTimer;
@protocol MSPCloudAccess, MSPCloudSynchronizerDelegate;

@interface MSPCloudSynchronizer : NSObject <MSPJournaling>
{
    id <MSPCloudAccess> _access;
    BOOL _started;
    MSPMapsPaths *_paths;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _didScheduleInitialMerge
    NSOperationQueue *_taskAttemptsQueue;
    BOOL _needsMerge;
    unsigned long long _countOfInFlightMerges;
    NSMutableArray *_mergeCompletionHandlers;
    MSPJournal *_journal;
    NSTimer *_identityRecheckTimer;
    unsigned long long _failedResolutionAttempts;
    NSDate *_minimumDateAfterTooManyFailedResolutionAttempts;
    long long _loginStatus;
    id <MSPCloudSynchronizerDelegate> _delegate;
}

+ (double)_timeIntervalToWaitBetweenBoosts;
+ (double)_minimumReattemptInterval;
+ (double)_timeIntervalToWaitAfterTooManyResolutionAttempts;
+ (long long)_maximumResolutionAttemptsCount;
+ (long long)_boostedQualityOfServiceForOpportunisticTask;
+ (long long)_boostedQualityOfServiceForUserObservableTask;
+ (long long)_qualityOfServiceForOpportunisticTask;
+ (long long)_qualityOfServiceForUserObservableTask;
+ (long long)_qualityOfServiceForInitialDownload;
+ (double)_batchingTimeInterval;
+ (double)_identityRecheckInterval;
@property(nonatomic) __weak id <MSPCloudSynchronizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_minimumReattemptDateForProposedDate:(id)arg1;
- (void)_resetTooManyResolvingAttemptsHolds;
- (void)_taskThatIncludedResolutionAttemptSucceeded;
- (BOOL)_shouldContinueAfterFailingResolutionAttempt;
- (BOOL)_mergesAreSuspendedAfterTooManyFailedResolvingAttempts;
- (BOOL)shouldReportState:(id)arg1;
- (BOOL)_wasTaskScheduledWhenTokenCreated:(id)arg1;
- (void)_completeOperation:(id)arg1 isMerge:(BOOL)arg2 withError:(id)arg3 canReattempt:(BOOL)arg4 maxAttempts:(unsigned long long)arg5 minimumReattemptDate:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)_scheduleTaskIfAny:(id)arg1 isMerge:(BOOL)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_enqueueOperation:(id)arg1 requireBeingLoggedIn:(BOOL)arg2;
- (void)_scheduleMergeForUserObservableChange:(BOOL)arg1 isInitialMerge:(BOOL)arg2;
- (void)_scheduleMergeForUserObservableChange:(BOOL)arg1;
- (id)scheduleTask:(id)arg1;
- (void)setNeedsMergeWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNeedsMergeForUserObservableChange:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)_cancelAllOperationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginWaitingForAvailabilityAndStartQueueIfPossible;
@property(getter=_loginStatus, setter=_setLoginStatus:) long long loginStatus; // @synthesize loginStatus=_loginStatus;
- (void)_availabilityDidChange;
- (void)start;
- (long long)_boostIfNeededQualityOfServiceForTask:(id)arg1 thatIsUserObservable:(BOOL)arg2;
- (id)initWithAccess:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

