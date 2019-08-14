//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPItemCollectionDelegate-Protocol.h>

@class FPItemCollection, NSDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPExtensionProviderChangesReceiver : NSObject <FPItemCollectionDelegate>
{
    NSMutableSet *_changesHandlers;
    NSDictionary *_providersByID;
    FPItemCollection *_localStorageCollection;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    int _settingsChangedToken;
}

+ (id)sharedChangesReceiver;
- (void).cxx_destruct;
- (void)_signalLocalStorageUpdate;
- (void)providersInfoHasChanged:(id)arg1 error:(id)arg2;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)updateProviderInfoWithAttemptCount:(unsigned long long)arg1;
- (void)removeChangesHandler:(CDUnknownBlockType)arg1;
- (void)addChangesHandler:(CDUnknownBlockType)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

