//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, BRCClientRanksPersistedState, BRCXPCClient, BRNotificationQueue, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCNotificationManager : NSObject <BRCModule>
{
    BRCAccountSession *_session;
    BRCClientRanksPersistedState *_state;
    NSHashTable *_pipes;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BRNotificationQueue *_notifs;
    NSMutableDictionary *_transferCache;
    BRCXPCClient *_client;
    // Error parsing type: AQ, name: _activeAliasQueries
    NSMutableSet *_additionalUpdatesItemRowID;
    unsigned long long _previousMaxRank;
    NSMutableDictionary *_watchersByFileObjectID;
    NSMapTable *_fileObjectIDByWatcher;
    BOOL _isCancelled;
}

@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pipeDelegateInvalidated:(id)arg1;
- (void)invalidatePipesWatchingAppLibraryIDs:(id)arg1;
- (void)flushUpdatesWithRank:(unsigned long long)arg1;
- (void)_queueAdditionalUpdates;
- (void)_dispatchUpdatesToPipesWithRank:(unsigned long long)arg1;
- (void)fetchLastFlushedRankWithReply:(CDUnknownBlockType)arg1;
- (void)queueUpdateForItemAtRowID:(unsigned long long)arg1;
- (void)queueUpdate:(id)arg1;
- (void)queueProgressUpdates:(id)arg1;
- (id)pipeWithReceiver:(id)arg1;
- (void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)unregisterPipeAsWatcher:(id)arg1;
- (void)registerPipe:(id)arg1 asWatcherForFileObjectID:(id)arg2;
- (BOOL)hasWatcherForDocumentID:(id)arg1;
- (void)unregisterAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)registerAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
@property(readonly) BOOL hasActiveAliasWatchers;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
