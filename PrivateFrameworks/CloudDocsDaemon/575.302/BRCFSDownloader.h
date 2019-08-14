//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSTransferScheduler.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCDeadlineScheduler, BRCFairScheduler, NSDate, NSMutableDictionary, NSString, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCFSDownloader : BRCFSTransferScheduler <BRCModule>
{
    brc_task_tracker *_tracker;
    BRCFairScheduler *_fairScheduler;
    unsigned long long _activeDownloadsSize;
    NSDate *_lastDownloadRefresh;
    double _activeDownloadSizeRefreshInterval;
    NSMutableDictionary *_willRetryOperationProgress;
    BRCDeadlineScheduler *_downloadsDeadlineScheduler;
}

@property(readonly, nonatomic) BRCDeadlineScheduler *downloadsDeadlineScheduler; // @synthesize downloadsDeadlineScheduler=_downloadsDeadlineScheduler;
- (void).cxx_destruct;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (void)_sendLosersBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (void)_postponeLoserForWinner:(long long)arg1 etag:(id)arg2;
- (void)_sendContentsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (unsigned long long)inFlightSize;
- (void)_sendThumbnailsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (void)schedule;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (BOOL)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int *)arg4;
- (void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int *)arg3;
- (BOOL)hasThumbnailToApplyForItem:(id)arg1;
- (BOOL)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int *)arg4 addedLosers:(id)arg5 removedLosers:(id)arg6;
- (void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(BOOL)arg3 applySchedulerState:(int *)arg4;
- (BOOL)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2;
- (void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int *)arg3;
- (BOOL)shouldScheduleLosersEvictionForItem:(id)arg1;
- (void)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2 userInitiated:(BOOL)arg3;
- (BOOL)makeContentLive:(id)arg1;
- (BOOL)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2;
- (BOOL)isDownloadingItem:(id)arg1;
- (unsigned long long)sizeOfActiveDownloads;
- (void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3;
- (void)deleteJobsMatching:(id)arg1;
- (void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2;
- (void)cancelAndCleanupItemDownloads:(id)arg1;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3;
- (void)_finishDownloadCleanup:(id)arg1;
- (void)_cancelJobs:(id)arg1 state:(int)arg2;
- (void)rescheduleJobsForPendingDiskSpaceWithAvailableSpace:(unsigned long long)arg1;
- (void)rescheduleJobsPendingWinnerForItem:(id)arg1;
- (void)rescheduleJobsPendingInitialSyncInZone:(id)arg1;
- (void)_finishedDownload:(id)arg1 syncContext:(id)arg2 operationID:(id)arg3 error:(id)arg4;
- (id)_sanitizeRecord:(id)arg1;
- (id)_appLibraryForDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3;
- (void)_createDownloadingJobForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4 userInitiated:(BOOL)arg5;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)_bumpThrottleForDownload:(id)arg1 throttle:(id)arg2;
- (void)_willDownload:(id)arg1 operationID:(id)arg2;
- (void)deleteDownloadingJobForItem:(id)arg1;
- (void)cancel;
- (void)_close;
- (void)close;
- (void)suspend;
- (void)resume;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isCancelled;
@property(readonly) Class superclass;

@end

