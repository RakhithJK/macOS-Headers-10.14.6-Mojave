//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSLocking-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSPersistentStoreCoordinator, NSQueryGenerationToken, NSSet, NSString, NSUndoManager;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking>
{
    id _queueOwner;
    void *_dispatchQueue;
    void *_reserved1;
    int _spinLock;
    id _parentObjectStore;
    struct _managedObjectContextFlags {
        unsigned int _registeredForCallback:1;
        unsigned int _propagatesDeletesAtEndOfEvent:1;
        unsigned int _exhaustiveValidation:1;
        unsigned int _processingChanges:1;
        unsigned int _useCommittedSnapshot:1;
        unsigned int _registeredUndoTransactionID:1;
        unsigned int _retainsAllRegisteredObjects:1;
        unsigned int _savingInProgress:1;
        unsigned int _wasDisposed:1;
        unsigned int _unprocessedChangesPending:1;
        unsigned int _isDirty:1;
        unsigned int _ignoreUndoCheckpoints:1;
        unsigned int _propagatingDeletes:1;
        unsigned int _isNSEditorEditing:1;
        unsigned int _isMainThreadBlessed:1;
        unsigned int _isImportContext:1;
        unsigned int _preflightSaveInProgress:1;
        unsigned int _disableDiscardEditing:1;
        unsigned int _isParentStoreContext:1;
        unsigned int _postSaveNotifications:1;
        unsigned int _isMerging:1;
        unsigned int _concurrencyType:1;
        unsigned int _deleteInaccessible:1;
        unsigned int _priority:2;
        unsigned int _autoMerge:1;
        unsigned int _isXPCServerContext:1;
        unsigned int _pushSecureDelete:1;
        unsigned int _refreshAfterSave:1;
        unsigned int _allowAncillary:1;
        unsigned int _reservedFlags:2;
    } _flags;
    NSMutableSet *_unprocessedChanges;
    NSMutableSet *_unprocessedDeletes;
    NSMutableSet *_unprocessedInserts;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_changedObjects;
    NSMutableSet *_lockedObjects;
    NSMutableSet *_refreshedObjects;
    id _infoByGID;
    id *_cachedObsInfoByEntity;
    short _undoTransactionID;
    id _lock;
    long long _lockCount;
    long long _objectStoreLockCount;
    double _fetchTimestamp;
    long long _referenceCallbackRegistration;
    id _referenceQueue;
    id _reserved3;
    id _reserved4;
    int _cd_rc;
    int _ignoreChangeNotification;
    id _reserved6;
    NSString *_contextLabel;
    id *_additionalPrivateIvars;
}

+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (id)new;
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (BOOL)_handleError:(id)arg1 withError:(id *)arg2;
+ (void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (id)createFutureForFileAtURL:(id)arg1;
- (BOOL)isEditing;
- (void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(CDStruct_f8f0024c *)arg3;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(BOOL)arg4 contextInfo:(void *)arg5 delayed:(BOOL)arg6;
- (BOOL)commitEditing;
- (BOOL)commitEditingAndReturnError:(id *)arg1;
- (void)discardEditing;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg1;
- (void)_setAutomaticallyMergesChangesFromParent:(BOOL)arg1;
@property(nonatomic) BOOL automaticallyMergesChangesFromParent;
- (id)_queryGenerationToken__;
@property(readonly, nonatomic) NSQueryGenerationToken *queryGenerationToken;
- (id)_changeTrackingToken__;
- (id)changeTrackingToken;
- (BOOL)_setChangeTrackingTokenFromToken:(id)arg1 error:(id *)arg2;
- (BOOL)setQueryGenerationFromToken:(id)arg1 error:(id *)arg2;
- (BOOL)_setQueryGenerationFromToken:(id)arg1 error:(id *)arg2;
- (id)_retainedCurrentQueryGeneration;
@property(copy) NSString *transactionAuthor;
@property(copy) NSString *name;
@property(readonly) unsigned long long concurrencyType;
@property(retain) NSManagedObjectContext *parentContext;
- (void)_setParentContext:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *userInfo;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (void)refreshAllObjects;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)unlock;
- (BOOL)tryLock;
- (void)lock;
- (void)detectConflictsForObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)redo;
- (void)undo;
- (void)_mergeRefreshEpilogueForObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (BOOL)_mergeRefreshObject:(id)arg1 mergeChanges:(BOOL)arg2 withPersistentSnapshot:(id)arg3;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (void)rollback;
- (id)_executeAsynchronousFetchRequest:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (BOOL)_checkObjectForExistenceAndCacheRow:(id)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (id)objectWithID:(id)arg1;
- (BOOL)save:(id *)arg1;
- (id)_generateOptLockExceptionForConstraintFailure:(id)arg1;
- (void)_youcreatedanNSManagedObjectContextOnthemainthreadandillegallypassedittoabackgroundthread;
- (void)_thereIsNoSadnessLikeTheDeathOfOptimism;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL hasChanges;
- (void)_prepareUnprocessedDeletionAfterRefresh:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)insertObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)objectRegisteredForID:(id)arg1;
@property(nonatomic) BOOL propagatesDeletesAtEndOfEvent;
@property(readonly, nonatomic) NSSet *deletedObjects;
@property(readonly, nonatomic) NSSet *insertedObjects;
@property(readonly, nonatomic) NSSet *registeredObjects;
@property(readonly, nonatomic) NSSet *updatedObjects;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (void)processPendingChanges;
@property(retain, nonatomic) NSUndoManager *undoManager;
- (void)_setUndoManager:(id)arg1;
@property double stalenessInterval;
- (void)finalize;
- (void)dealloc;
- (void)assertOnImproperDealloc;
- (void)_dealloc__;
- (void)reset;
- (id)description;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)init;
@property(retain) id mergePolicy;
- (BOOL)shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 triggeredByProperty:(id)arg3;
@property BOOL shouldDeleteInaccessibleFaults;
@property(nonatomic) BOOL retainsRegisteredObjects;
- (void)_setRetainsRegisteredObjects:(BOOL)arg1;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
- (void)_setPersistentStoreCoordinator:(id)arg1;
- (void)_setAllowAncillaryEntities:(BOOL)arg1;
- (BOOL)_allowAncillaryEntities;
- (void)_persistentStoreDidUpdateAdditionalRowsWithNewVersions:(id)arg1;
- (void)_setStalenessInterval:(double)arg1;
- (BOOL)_postSaveNotifications;
- (void)_setPostSaveNotifications:(BOOL)arg1;
- (BOOL)_disableDiscardEditing;
- (void)_setXPCServerContext:(BOOL)arg1;
- (BOOL)_isXPCServerContext;
- (void)_setDisableDiscardEditing:(BOOL)arg1;
- (BOOL)_isPreflightSaveInProgress;
- (BOOL)_isImportContext;
- (void)_setIsUbiquityImportContext:(BOOL)arg1;
- (void)_growRegistrationCollectionForEntitySlot:(unsigned int)arg1 toSize:(unsigned long long)arg2;
- (id)_currentEventSnapshotForObject:(id)arg1;
- (id)_committedSnapshotForObject:(id)arg1;
- (id)_globalIDForObject:(id)arg1;
- (void)_clearOriginalSnapshotAndInitializeRec:(id)arg1;
- (void)_clearOriginalSnapshotForObject:(id)arg1;
- (id)_debuggingOnly_localObjectForGlobalID:(id)arg1;
- (void)_setStopsValidationAfterFirstError:(BOOL)arg1;
- (BOOL)_stopsValidationAfterFirstError;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (void)_informParentStoreNoLongerInterestedInObjectIDs:(id)arg1 generation:(id)arg2;
- (void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2;
- (void)_informParentStoreOfInterestInObjectIDs:(id)arg1 generation:(id)arg2;
- (void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2;
- (void)_clearRefreshedObjects;
- (void)_clearLockedObjects;
- (void)_clearUnprocessedUpdates;
- (void)_clearUpdates;
- (void)_clearUnprocessedDeletions;
- (void)_clearDeletions;
- (void)_clearUnprocessedInsertions;
- (void)_clearInsertions;
- (void)_didSaveChanges;
- (BOOL)_validateObjects:(id)arg1 forOperation:(unsigned int)arg2 error:(id *)arg3 exhaustive:(BOOL)arg4 forSave:(BOOL)arg5;
- (BOOL)_validateChangesForSave:(id *)arg1;
- (BOOL)_validateDeletesUsingTable:(id)arg1 withError:(id *)arg2;
- (BOOL)_doPreSaveConstraintChecksForObjects:(id)arg1 error:(id *)arg2;
- (BOOL)_handleError:(id)arg1 withError:(id *)arg2;
- (void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2;
- (id)_createStoreFetchRequestForFetchRequest:(id)arg1;
- (void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(BOOL)arg3;
- (id)_newUnchangedLockedObjects;
- (unsigned int)_batchRetainedObjects:(id *)arg1 forCount:(unsigned int)arg2 withIDs:(id *)arg3 optionalHandler:(id)arg4 withInlineStorage:(BOOL)arg5;
- (id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(BOOL)arg3;
- (id)_globalIDsForObjects:(id)arg1;
- (id)_retainedRegisteredObjects;
- (void)_resetAllChanges;
- (id)_initWithParentObjectStore:(unsigned long long)arg1;
- (void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2;
- (void)_dispose:(BOOL)arg1;
- (void)_disposeObjects:(id *)arg1 count:(unsigned long long)arg2 notifyParent:(BOOL)arg3;
- (void)_performCoordinatorActionAndWait:(CDUnknownBlockType)arg1;
- (id)_retainedObjectWithID:(id)arg1;
- (id)_retainedObjectWithID:(id)arg1 error:(id *)arg2;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2;
- (void)_forceRegisterLostFault:(id)arg1;
- (void)_registerObject:(id)arg1 withID:(id)arg2;
- (unsigned long long)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id *)arg4;
- (unsigned long long)_countWithNoChangesForRequest:(id)arg1 error:(id *)arg2;
- (void)_unlimitRequest:(id)arg1;
- (unsigned long long)_fetchLimitForRequest:(id)arg1;
- (id)_newSaveRequestForCurrentState;
- (void)unlockObjectStore;
- (void)lockObjectStore;
- (id)_mappedForParentStoreID:(id)arg1;
- (BOOL)_hasIDMappings;
- (id)_parentStore;
- (id)performFetch:(id)arg1 error:(id *)arg2;
- (id)_unsafeTransactionAuthor;
- (id)_unsafeName;
- (void)_addObjectIDsUpdatedByTriggers:(id)arg1;
- (void)_processObjectStoreChanges:(id)arg1;
- (void)_propagateDeletesUsingTable:(id)arg1;
- (BOOL)_processDeletedObjects:(id *)arg1;
- (void)_prefetchObjectsForDeletePropagation:(id)arg1;
- (void)_noop:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_processRecentlyForgottenObjects:(id)arg1;
- (void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id *)arg1;
- (void)_createAndPostChangeNotification:(id)arg1 deletions:(id)arg2 updates:(id)arg3 refreshes:(id)arg4 deferrals:(id)arg5 wasMerge:(BOOL)arg6;
- (id)_processPendingUpdates:(id)arg1;
- (id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5;
- (BOOL)_processRecentChanges:(id *)arg1;
- (BOOL)_attemptCoalesceChangesForFetch;
- (BOOL)_prepareForPushChanges:(id *)arg1;
- (void)_postRefreshedObjectsNotificationAndClearList;
- (void)_updateUnprocessedOwnDestinations:(id)arg1;
- (void)_registerClearStateWithUndoManager;
- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_incrementUndoTransactionID;
- (void)_forceRemoveFromDeletedObjects:(id)arg1;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3;
- (void)_registerUndoForModifiedObjects:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_registerUndoForInsertedObjects:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)objectWillChange:(id)arg1;
- (void)_establishEventSnapshotsForObject:(id)arg1;
- (void)_registerAsyncReferenceCallback;
- (void)_processReferenceQueue:(BOOL)arg1;
- (void)_processNotificationQueue;
- (void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2;
- (id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class *)arg2;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (void)_storeConfigurationChanged:(id)arg1;
- (void)_objectsChangedInStore:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotificationsWithCoordinator:(id)arg1;
- (void)_stopObservingUndoManagerNotifications;
- (void)_startObservingUndoManagerNotifications;
- (void)_enableChangeNotifications;
- (void)_disableChangeNotifications;
- (BOOL)_ignoringChangeNotifications;
- (void)_postContextDidMergeChangesNotificationWithUserInfo:(id)arg1;
- (void)_postContextDidSaveNotificationWithUserInfo:(id)arg1;
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_enqueueEndOfEventNotification;
- (void)handlePeerContextDidSaveNotification:(id)arg1;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (id)_orderedSetWithResultsFromFetchRequest:(id)arg1;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (void)performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (id)performBlockWithResult:(CDUnknownBlockType)arg1;
- (BOOL)shouldPerformSecureOperation;
- (void)setShouldPerformSecureOperation:(BOOL)arg1;
- (BOOL)shouldRefreshAfterSave;
- (void)setShouldRefreshAfterSave:(BOOL)arg1;
- (BOOL)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;
- (BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 onObjectWithID:(id)arg3 error:(id *)arg4;
- (id)_orderKeysForRelationshipWithName__:(id)arg1 onObjectWithID:(id)arg2;

@end

