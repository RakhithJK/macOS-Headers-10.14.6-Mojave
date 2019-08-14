//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

#import <CloudDocsDaemon/BRCFSEventsDelegate-Protocol.h>
#import <CloudDocsDaemon/BRCModule-Protocol.h>
#import <CloudDocsDaemon/BRCSuspendable-Protocol.h>

@class BRCAsyncDirectoryEnumerator, BRCCountedSet, BRCFairSource, NSMutableSet, NSObject, NSString, brc_task_tracker;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface BRCFSReader : BRCFSSchedulerBase <BRCModule, BRCSuspendable, BRCFSEventsDelegate>
{
    BRCCountedSet *_coordinatedReaders;
    BOOL _readerCountReachedMax;
    BRCAsyncDirectoryEnumerator *_currentScan;
    NSMutableSet *_lostSet;
    NSObject<OS_dispatch_queue> *_lostScanQueue;
    BRCFairSource *_lostScanSource;
    NSObject<OS_dispatch_source> *_lostScanDelay;
    unsigned long long _lostScanDelaySection;
    brc_task_tracker *_taskTracker;
    BOOL _resumed;
    NSObject<OS_dispatch_group> *_lostScanGroup;
}

@property(readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *lostScanGroup; // @synthesize lostScanGroup=_lostScanGroup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)_close;
- (void)cancel;
- (void)reset;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id *)arg4;
- (void)scheduleAppLibraryForLostScan:(id)arg1;
- (void)unscheduleAppLibraryForLostScan:(id)arg1;
- (void)_lostScanSchedule;
- (void)_cancelScan;
- (void)_finishCurrentRelpathScan;
- (void)_startScanOfRelpath:(id)arg1;
- (void)_finishedScanWithError:(int)arg1;
- (void)_startScanOfRegularAppLibrary:(id)arg1;
- (BOOL)_slowScanDirectoryAtPath:(id)arg1;
- (void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_processDeadItem:(id)arg1;
- (void)_didResolvedDocumentID:(unsigned int)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3;
- (void)_resolveDocumentID:(unsigned int)arg1 zone:(id)arg2;
- (void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2;
- (void)_processLostItem:(id)arg1;
- (id)_nextLostItemIDWithBackoff:(long long *)arg1 appLibrary:(id *)arg2 now:(long long)arg3;
- (BOOL)_fetchNextLostItemID:(id *)arg1 parentID:(id *)arg2 appLibraryRowID:(id *)arg3 tooManyScans:(char *)arg4 stamp:(long long *)arg5;
- (unsigned long long)_backoffBeforeProcessingLostItemWithStamp:(unsigned long long)arg1 appLibrary:(id)arg2;
- (void)fseventOnURL:(id)arg1 dbFlags:(unsigned int)arg2;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 lookup:(id)arg4;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 item:(id)arg4 lookup:(id)arg5 unresolvedLastPathComponent:(id)arg6;
- (void)_refaultItem:(id)arg1 withFaultPath:(id)arg2;
- (void)scanContainerDocumentsIfNeeded:(id)arg1;
- (void)fseventOnDirectory:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (id)itemForCreatedDocumentsDirectory:(id)arg1 appLibrary:(id)arg2 path:(id)arg3;
- (void)fseventOnAlias:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnSymlink:(id)arg1 flags:(unsigned int)arg2 lookup:(id)arg3;
- (void)fseventOnDeadPath:(id)arg1 item:(id)arg2;
- (void)fseventOnContainer:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventOnRoot:(id)arg1 flags:(unsigned int)arg2;
- (void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(id)arg3;
- (void)fseventAtPath:(id)arg1 flags:(unsigned int)arg2;
- (BOOL)updateLookupAfterHandlingPathMatchWithFSRoot:(id *)arg1 relpath:(id *)arg2;
- (BOOL)needsLookupReloadAfterHandlingCrossZoneMoveWithItem:(id)arg1 relpath:(id)arg2;
- (void)readUnderCoordinationAtURL:(id)arg1;
- (id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1;
- (BOOL)readUnderCoordinationWithLookup:(id)arg1;
- (void)endReadCoordinationInAppLibrary:(id)arg1;
- (BOOL)startReadCoordinationInAppLibrary:(id)arg1;
- (void)_scheduleReadJobWithID:(id)arg1;
- (void)schedule;
- (BOOL)canScheduleMoreJobs;
- (void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (void)_attemptSchedulingCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (void)_delayJobID:(id)arg1 by:(double)arg2;
- (BOOL)canRetryJobWithID:(id)arg1;
- (unsigned long long)_readCoordinationCount;
- (void)deleteReadingJobForItem:(id)arg1;
- (void)setState:(int)arg1 forItem:(id)arg2;
- (void)createReadingJobForItem:(id)arg1 state:(int)arg2;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isCancelled;
@property(readonly) Class superclass;

@end

