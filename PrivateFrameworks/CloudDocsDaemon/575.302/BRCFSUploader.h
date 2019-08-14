//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSTransferScheduler.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCDeadlineScheduler, BRCDeadlineSource, BRCFairScheduler, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFSUploader : BRCFSTransferScheduler <BRCModule>
{
    NSMutableDictionary *_thumbnailsOperations;
    NSMutableSet *_boostedDocIDs;
    NSMutableDictionary *_stampForDocID;
    BRCFairScheduler *_fairScheduler;
    BRCDeadlineSource *_retryQueueSource;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    br_pacer *_quotaPacer;
    br_pacer *_globalQuotaStateUpdatePacer;
    BOOL _prepareReachedMax;
    BOOL _isDefaultOwnerOutOfQuota;
    BRCDeadlineScheduler *_uploadsDeadlineScheduler;
}

@property(readonly, nonatomic) NSDictionary *thumbnailsOperationsByID; // @synthesize thumbnailsOperationsByID=_thumbnailsOperations;
@property(readonly, nonatomic) BRCDeadlineScheduler *uploadsDeadlineScheduler; // @synthesize uploadsDeadlineScheduler=_uploadsDeadlineScheduler;
@property(nonatomic) BOOL isDefaultOwnerOutOfQuota; // @synthesize isDefaultOwnerOutOfQuota=_isDefaultOwnerOutOfQuota;
- (void).cxx_destruct;
- (void)scheduleQuotaFetchIfNeededForOwner:(id)arg1;
- (void)scheduleQuotaStateUpdateForOwner:(id)arg1;
- (void)ownerDidReceiveOutOfQuotaError:(id)arg1;
- (void)setIsDefaultOwnerOutOfQuota:(BOOL)arg1 forceSignalContainers:(BOOL)arg2;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_globalQuotaStateUpdateForDefaultOwner;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1;
- (void)_rescheduleJobsOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1;
- (id)quotaAvailableForOwner:(id)arg1;
- (BOOL)hasItemsOverQuotaInZone:(id)arg1;
- (BOOL)hasItemsOverQuotaForOwner:(id)arg1;
- (void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (void)_finishedUploadingItem:(id)arg1 record:(id)arg2 jobID:(id)arg3 stageID:(id)arg4 syncContext:(id)arg5 error:(id)arg6;
- (void)_handleFileModifiedError:(id)arg1 forItem:(id)arg2;
- (BOOL)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (id)_duplicatePackage:(id)arg1 stageID:(id)arg2 stageName:(id)arg3 error:(id *)arg4;
- (void)_computeRecordForJobID:(id)arg1 item:(id)arg2 syncContext:(id)arg3;
- (void)_updateRecord:(id)arg1 jobID:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5;
- (void)_updateRecord:(id)arg1 item:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5;
- (BOOL)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (id)_thumbnailOperationForItemRowID:(id)arg1;
- (void)_doneFetchingThumbnailForJobID:(id)arg1;
- (void)_startFetchThumbnail:(id)arg1 jobID:(id)arg2;
- (void)schedule;
- (BOOL)canScheduleMoreJobs;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (void)_scheduleRetries;
- (void)rescheduleJobsPendingInitialSyncInZone:(id)arg1;
- (void)removeBoostedDocID:(id)arg1;
- (void)boostDocID:(id)arg1 item:(id)arg2;
- (void)uploadItem:(id)arg1;
- (void)setState:(int)arg1 forUploadJobID:(id)arg2 zone:(id)arg3;
- (void)setState:(int)arg1 forJobID:(id)arg2 zone:(id)arg3;
- (void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2;
- (void)cancelAndCleanupItemUpload:(id)arg1;
- (void)deleteJobsForZone:(id)arg1;
- (void)deleteJobsMatching:(id)arg1;
- (void)_cancelJobsMatching:(id)arg1;
- (void)_cancelJobs:(id)arg1 state:(int)arg2;
- (void)_willAttemptJobID:(id)arg1 throttle:(id)arg2 operationID:(id)arg3;
- (id)descriptionForJobID:(id)arg1 context:(id)arg2;
- (BOOL)isUploadingItem:(id)arg1;
- (id)_documentItemForJobID:(id)arg1 operationID:(id)arg2;
- (id)_documentItemForJobID:(id)arg1 stageID:(id)arg2;
- (void)_updateJobID:(id)arg1 setStageID:(id)arg2 operationID:(id)arg3;
- (id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2;
- (void)deleteUploadingJobForItem:(id)arg1;
- (void)setState:(int)arg1 forItem:(id)arg2;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)cancel;
- (void)close;
- (void)suspend;
- (void)resume;
- (id)initWithAccountSession:(id)arg1;
- (unsigned long long)_minBatchSize;
- (unsigned long long)_thumbnailOperationsMax;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isCancelled;
@property(readonly) Class superclass;

@end

