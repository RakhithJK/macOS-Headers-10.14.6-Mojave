//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSMutableArray;
@protocol EKServerChangeObserver;

@interface CalDAVOperationQueue : NSObject
{
    BOOL _stopped;
    BOOL _needsAccountPropertyRefresh;
    NSMutableArray *_operations;
    NSMutableArray *_failedOperations;
    NSMutableArray *_lowPriorityOperations;
    NSManagedObjectID *_sessionID;
    id <EKServerChangeObserver> _observer;
}

- (void).cxx_destruct;
- (id)threadSafeQueueDescription;
- (id)description;
- (void)registerObserver:(id)arg1;
- (BOOL)isProcessingOperationForChange:(id)arg1;
- (void)transferDependencyGraphOfOperation:(id)arg1 toOperation:(id)arg2;
- (void)removeDependentOperationsFromQueue:(id)arg1;
- (void)removeFromQueue:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isPendingRetry;
- (BOOL)isStalled;
- (BOOL)isStopped;
- (void)kick;
- (void)start;
- (void)stop;
- (void)setNeedsAccountPropertyRefresh:(BOOL)arg1;
- (BOOL)needsAccountPropertyRefresh;
- (void)beginNextOperation;
- (void)_promoteNextLowPriorityOperation;
- (void)_addBackFailedOperations;
- (void)flattenOperationDependencies;
- (void)_findLowPriorityDependenciesForOperation:(id)arg1 addToSet:(id)arg2;
- (void)_fixPriorityInversions;
- (id)lowPriorityOperations;
- (id)failedOperations;
- (id)operations;
- (id)allOperations;
- (id)peek;
- (id)nextOperationNotCurrentlyRunning;
- (void)removeOperationAndRefresh:(id)arg1;
- (void)removeAndRevertOperation:(id)arg1;
- (void)tryOperationAgain:(id)arg1;
- (void)detectSyncMalfunctions;
- (void)completeOperation:(id)arg1;
- (void)removeOperation:(id)arg1 removeEntities:(BOOL)arg2;
- (void)removeAllOperations;
- (void)removeOperation:(id)arg1;
- (void)reorderFailedOperation:(id)arg1;
- (void)dequeueOperation:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)insertOperation:(id)arg1;
- (id)_operationAtIndex:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1;

@end

