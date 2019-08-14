//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCCacheCoordinatorDelegate-Protocol.h"
#import "FCFetchCoordinatorDelegate-Protocol.h"
#import "FCWebArchiveSource-Protocol.h"

@class FCCacheCoordinator, FCFetchCoordinator, FCThreadSafeMutableDictionary, FCWebArchiveStore, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FRWebArchiveSource : NSObject <FCCacheCoordinatorDelegate, FCFetchCoordinatorDelegate, FCWebArchiveSource>
{
    FCWebArchiveStore *_webArchiveStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCFetchCoordinator *_fetchCoordinator;
    FCThreadSafeMutableDictionary *_keysToURLs;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSURL *_directoryURLForCachedWebArchives;
}

@property(retain, nonatomic) NSURL *directoryURLForCachedWebArchives; // @synthesize directoryURLForCachedWebArchives=_directoryURLForCachedWebArchives;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue; // @synthesize initQueue=_initQueue;
@property(retain, nonatomic) FCThreadSafeMutableDictionary *keysToURLs; // @synthesize keysToURLs=_keysToURLs;
@property(retain, nonatomic) FCFetchCoordinator *fetchCoordinator; // @synthesize fetchCoordinator=_fetchCoordinator;
@property(retain, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(retain, nonatomic) FCWebArchiveStore *webArchiveStore; // @synthesize webArchiveStore=_webArchiveStore;
- (void).cxx_destruct;
- (void)_initStore;
- (void)_prepareForUse;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)fetchOperationForWebArchiveWithKey:(id)arg1 sourceURL:(id)arg2;
- (id)holdTokenForWebArchiveWithKey:(id)arg1;
- (id)fileURLForExistingWebArchiveWithKey:(id)arg1;
- (id)initWithContentDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

