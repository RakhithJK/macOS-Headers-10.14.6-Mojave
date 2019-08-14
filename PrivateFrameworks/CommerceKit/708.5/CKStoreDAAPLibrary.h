//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/CKAccountObserver-Protocol.h>

@class CKStoreClient, NSMutableDictionary, NSNumber, NSString, NSTimer;
@protocol OS_dispatch_semaphore;

@interface CKStoreDAAPLibrary : NSObject <CKAccountObserver>
{
    CKStoreClient *_storeClient;
    long long _mediaKinds;
    unsigned long long _count;
    NSNumber *_localVersion;
    NSMutableDictionary *_items;
    NSString *_serviceName;
    NSNumber *_sessionID;
    NSObject<OS_dispatch_semaphore> *_requestSema;
    double _pollFrequency;
    double _forcedRefreshFrequency;
    NSTimer *_pollTimer;
    NSTimer *_forcedRefreshTimer;
    NSMutableDictionary *_observers;
}

+ (id)daapLibraryWithStoreClient:(id)arg1;
@property(retain) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain) NSTimer *forcedRefreshTimer; // @synthesize forcedRefreshTimer=_forcedRefreshTimer;
@property(retain) NSTimer *pollTimer; // @synthesize pollTimer=_pollTimer;
@property double forcedRefreshFrequency; // @synthesize forcedRefreshFrequency=_forcedRefreshFrequency;
@property double pollFrequency; // @synthesize pollFrequency=_pollFrequency;
@property(retain) NSObject<OS_dispatch_semaphore> *requestSema; // @synthesize requestSema=_requestSema;
@property(retain) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain) NSNumber *localVersion; // @synthesize localVersion=_localVersion;
@property(readonly) unsigned long long count; // @synthesize count=_count;
@property long long mediaKinds; // @synthesize mediaKinds=_mediaKinds;
@property(readonly) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (void)accountStore:(id)arg1 primaryAccountChanged:(id)arg2;
- (void)_configureWithBagInfo:(id)arg1;
- (void)_performDAAPRequestWithAction:(id)arg1 body:(id)arg2 contentType:(id)arg3 reason:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_mediaKindsQueryString;
- (void)_latestDatabaseVersionWithReason:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)daapClientTokenPairs;
- (void)_updatedItems:(id)arg1 deletedItems:(id)arg2 withLatestVersion:(id)arg3;
- (void)_pollDAAPServerWithReason:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_forcedRefreshTimerFired:(id)arg1;
- (void)_pollingTimerFired:(id)arg1;
- (void)reload;
- (void)update;
- (void)_loginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(id)arg1;
- (id)filteredItemsUsingPredicate:(id)arg1;
- (id)sortedItemsUsingDescriptors:(id)arg1;
- (id)itemsAtIndexes:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (void)_loadPersistedStore;
- (void)_writePersistedStore;
- (id)_persistedStoreURL;
- (void)dealloc;
- (id)initWithStoreClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

