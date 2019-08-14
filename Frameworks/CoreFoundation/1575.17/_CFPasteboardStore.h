//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CFPasteboardCache, _CFPasteboardClientInstanceID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CFPasteboardStore : NSObject
{
    struct __CFString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    _CFPasteboardCache *_cache;
    unsigned char _restrictSandboxExtension;
    int _allowedSandboxExtensionPID;
    struct {
        unsigned int val[8];
    } _allowedSandboxExtensionAuditToken;
    _CFPasteboardClientInstanceID *_owner;
    unsigned char _ownerHasPendingChanges;
    struct __CFDictionary *_clientInstancesByUUID;
    struct __CFSet *_clientInstancesWithCacheInfoForCurrentGeneration;
}

+ (struct __CFString *)dumpAllClients;
+ (void)_removePasteboardWithName:(struct __CFString *)arg1;
+ (id)pasteboardStoreWithName:(struct __CFString *)arg1 createIfNecessary:(BOOL)arg2;
+ (struct __CFArray *)copyAllPasteboards;
- (id)description;
- (void)flushOwnerChangesIfNecessaryInResponseToMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleAllowExtensionProcess:(id)arg1;
- (void)handleRestrictExtension:(id)arg1;
- (void)handleUniquePromiseFile:(id)arg1;
- (void)handleRelease:(id)arg1;
- (void)handleCreate:(id)arg1;
- (void)handleDeadClientWithUUID:(struct __CFUUID *)arg1 allowPasteboardDeletion:(BOOL)arg2;
- (void)handleRefreshCache:(id)arg1;
- (void)resolveAllPromisesOwnedByProcessWithIdentifier:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleResolvePromises:(id)arg1;
- (void)handleRequestData:(id)arg1;
- (void)requestDataForGeneration:(unsigned long long)arg1 itemIdentifier:(unsigned long long)arg2 flavor:(struct __CFString *)arg3 inResponseToMessage:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)filterDataFromEntry:(id)arg1 inResponseToMessage:(id)arg2 error:(int *)arg3;
- (id)reissueSandboxExtensionFromEntry:(id)arg1 toClient:(id)arg2 error:(int *)arg3;
- (int)analyzeSandboxExtensionEntry:(id)arg1 destinedForClient:(id)arg2;
- (void)handleSetDataFlags:(id)arg1;
- (void)handleRegisterEntries:(id)arg1;
- (void)_onqueue_handleNewEntries:(struct __CFArray *)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(char *)arg3;
- (void)handleGetCounts:(id)arg1;
- (void)handleNotifyHasEntries:(id)arg1;
- (void)handleMakeGenerationLocal:(id)arg1;
- (void)handleBeginGeneration:(id)arg1;
- (void)_onqueue_clearGenerationSpecificData;
- (id)_onqueue_cacheForGeneration:(long long)arg1;
- (long long)_onqueue_nextGenerationCount;
- (void)_onqueue_noteMessageSenderNeedsCacheInvalidation:(id)arg1;
- (void)_onqueue_invalidateCurrentGenerationCacheEntries:(const struct __CFArray *)arg1 inResponseToMessage:(id)arg2;
- (void)_onqueue_invalidateCachesWithCurrentGeneration;
- (void)performBarrier:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithName:(const struct __CFString *)arg1;

@end

