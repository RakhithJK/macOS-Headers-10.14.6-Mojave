//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TCoalescingNodeObserverProtocol-Protocol.h"
#import "TReadWriteLockingProtocol-Protocol.h"

@class NSString;

@interface TBrowserViewDataSource : NSObject <TReadWriteLockingProtocol, TCoalescingNodeObserverProtocol>
{
    struct TReadWriteLock _lock;
    struct TRef<NSObject<OS_dispatch_queue>*, TRetainReleasePolicy<dispatch_queue_t>> _workerSerialQueue;
    struct unique_ptr<TBlockingQueue, std::__1::default_delete<TBlockingQueue>> _callBackQueue;
    _Bool _isTornDown;
    struct TNSRef<TBVDSBulkConfigChangedState, void> _bulkConfigChangedState;
    unordered_map_9c9b7b32 _nodeToChildrenDataMap;
    _Bool _checkChildrenForTags;
    int _sortBy;
    _Bool _isSortInIncreasingOrder;
    _Bool _isSortFoldersFirst;
    struct unordered_map<TFENode, TGroupModeData, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TGroupModeData>>> _containerNodeToGroupDataMap;
    int _groupBy;
    struct unordered_map<TFENode, TNSRef<TBVDSBusyStateIncrementer, void>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<TBVDSBusyStateIncrementer, void>>>> _firstPopBusyStateIncrementers;
    // Error parsing type: {atomic<unsigned long>="__a_"AQ}, name: _busyStateRefCount
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> _nodeObserver;
    unordered_set_931aff12 _alwaysVisibleNodes;
    _Bool _isSwitchingViewStyles;
    struct unordered_map<TFENode, TOpenContainerOptions, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TOpenContainerOptions>>> _pendingNodeToOpenContainerOptions;
    struct unordered_map<TFENode, NodeNotificationOptions, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, NodeNotificationOptions>>> _pendingNodeToCloseContainerOptions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)unlockForWrite;
- (void)lockForWrite;
- (void)unlockForRead;
- (void)lockForRead;
- (void)_modifyChildrenOfContainerAsync:(const struct TFENode *)arg1 withUnlockedFunctor:(const function_7b5bbfa5 *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openChildListUpdated:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openSyncCompleted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openSyncStarted:(const struct TFENode *)arg2;
- (void)handleOpenSyncCompletedAndChildListUpdated:(const struct TFENode *)arg1 containerNodeSet:(const unordered_set_931aff12 *)arg2 nodeToChildrenDataMapToModify:(unordered_map_9c9b7b32 *)arg3 groupModeDataToModify:(struct TGroupModeData *)arg4 dataSourceChangedListToModify:(vector_274a36ec *)arg5 isInGroupMode:(_Bool)arg6 checkChildrenForTags:(_Bool)arg7;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 groupDefinitionChanged:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesDeleted:(const struct TFENodeVector *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 spotlightAttrSyncCompleted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesChanged:(const vector_614ab7ad *)arg2 inObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesAdded:(const struct TFENodeVector *)arg2 toObservedNode:(const struct TFENode *)arg3;
- (void)cancelDelayedNodeEventHandling;
- (void)delayNodeEventHandling:(double)arg1;
- (void)flushPendingEvents:(const function_b1fce659 *)arg1;
- (struct TFENodeVector)typeSelectCandidates;
- (struct TGroupManager *)_groupManagerForNode:(const struct TFENode *)arg1 calculateFolderSizes:(_Bool)arg2;
- (_Bool)isGroupNode:(const struct TFENode *)arg1 inContainerNode:(const struct TFENode *)arg2;
- (_Bool)_isGroupNode:(const struct TFENode *)arg1;
- (_Bool)_isContainerNode:(const struct TFENode *)arg1;
- (_Bool)isNode:(const struct TFENode *)arg1 groupedChildOfContainerNode:(const struct TFENode *)arg2;
- (long long)indexForGroupedChild:(const struct TFENode *)arg1 forContainerNode:(const struct TFENode *)arg2 countGroups:(_Bool)arg3;
- (const struct TFENode *)groupedChildOfContainerNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2 countGroups:(_Bool)arg3;
- (unsigned long long)numberOfGroupedChildrenForContainerNode:(const struct TFENode *)arg1 countGroups:(_Bool)arg2;
- (void)getGroupedChildren:(struct TFENodeVector *)arg1 forContainerNode:(const struct TFENode *)arg2 countGroups:(_Bool)arg3;
- (const struct TFENode *)groupNodeOfContainerNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexForGroupNode:(const struct TFENode *)arg1 forContainerNode:(const struct TFENode *)arg2;
- (unsigned long long)numberOfGroupNodesForContainerNode:(const struct TFENode *)arg1;
- (const struct TFENodeVector *)sortedGroupNodesForContainerNode:(const struct TFENode *)arg1;
- (void)_rebuildOnWorkerQueue:(id)arg1;
@property int groupBy; // @dynamic groupBy;
- (_Bool)isInGroupMode;
- (shared_ptr_0ec8498d)_newSortComparatorForContainerNode:(const struct TFENode *)arg1 calculateFolderSizes:(_Bool)arg2;
- (shared_ptr_0ec8498d)_newGroupComparatorForContainerNode:(const struct TFENode *)arg1 withGroupManager:(struct TGroupManager *)arg2;
- (void)_resortOnWorkerQueue:(id)arg1 completionHandler:(const function_b1fce659 *)arg2 forceResort:(_Bool)arg3;
- (void)setSortBy:(int)arg1 inIncreasingOrder:(_Bool)arg2 sortFoldersFirst:(_Bool)arg3 completionHandler:(const function_b1fce659 *)arg4;
@property(readonly) int sortBy; // @dynamic sortBy;
@property(readonly) _Bool isSortFoldersFirst; // @dynamic isSortFoldersFirst;
@property(readonly) _Bool isSortInIncreasingOrder; // @dynamic isSortInIncreasingOrder;
- (_Bool)isContainerNode:(const struct TFENode *)arg1;
- (_Bool)isNode:(const struct TFENode *)arg1 childOfContainerNode:(const struct TFENode *)arg2;
- (long long)indexForChild:(const struct TFENode *)arg1 forContainerNode:(const struct TFENode *)arg2;
- (const struct TFENode *)childOfContainerNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSortedChildrenForContainerNode:(const struct TFENode *)arg1;
- (const struct TFENodeVector *)sortedChildrenForContainerNode:(const struct TFENode *)arg1;
- (_Bool)atLeastOneTaggedChildInContainerNode:(const struct TFENode *)arg1;
- (void)_recheckChildrenForTagsOnWorkerQueue:(id)arg1;
@property _Bool checkChildrenForTags; // @dynamic checkChildrenForTags;
@property(getter=isSwitchingViewStyles) _Bool switchingViewStyles; // @dynamic switchingViewStyles;
- (void)_decrementBusyStateRefCount;
- (void)_incrementBusyStateRefCount;
@property(readonly) _Bool isBusy; // @dynamic isBusy;
- (_Bool)containerNodeIsPopulated:(const struct TFENode *)arg1;
- (void)_removeAllFirstBVDSBusyStateIncrementersWhileLocked;
- (void)_removeAllFirstBVDSBusyStateIncrementers;
- (void)_removeFirstBVDSBusyStateIncrementerForNodeWhileLocked:(const struct TFENode *)arg1;
- (void)_removeFirstBVDSBusyStateIncrementerForNode:(const struct TFENode *)arg1;
- (void)_addFirstBVDSBusyStateIncrementerForNode:(const struct TFENode *)arg1;
@property _Bool bulkConfigInProgress; // @dynamic bulkConfigInProgress;
- (void)setAlwaysVisibleNodes:(const struct TFENodeVector *)arg1;
- (const unordered_set_931aff12 *)alwaysVisibleNodes;
- (void)adjustContainerNodeObserverOptions:(const vector_04525f4a *)arg1;
- (void)_closeContainerNodesOnWorkerQueue:(const shared_ptr_73db28f7 *)arg1 busyStateIncrementer:(id)arg2 isSwitchingViewStyles:(_Bool)arg3;
- (void)closeContainerNodes:(const vector_c133cd5b *)arg1;
- (void)_openContainerNodesOnWorkerQueue:(const shared_ptr_7bdd7b4a *)arg1 busyStateIncrementer:(id)arg2 isSwitchingViewStyles:(_Bool)arg3;
- (void)openContainerNodes:(const vector_a7e7ffc1 *)arg1;
- (void)handlePendingCallBacks:(int)arg1;
- (void)callOnMainThread:(const function_b1fce659 *)arg1;
- (void)aboutToTearDown;
- (void)dealloc;
- (id)initWithSortBy:(int)arg1 sortInIncreasingOrder:(_Bool)arg2 sortFoldersFirst:(_Bool)arg3 groupBy:(int)arg4 checkChildrenForTags:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

