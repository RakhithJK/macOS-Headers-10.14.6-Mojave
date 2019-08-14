//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SyncServices/ISDChangeSource-Protocol.h>
#import <SyncServices/NSKeyedArchiverDelegate-Protocol.h>
#import <SyncServices/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ISDConflictManager : NSObject <ISDChangeSource, NSKeyedUnarchiverDelegate, NSKeyedArchiverDelegate>
{
    NSMutableArray *_conflicts;
    NSString *_directory;
    NSMutableArray *_deltaFileNames;
    unsigned int _lastSyncedGeneration;
    unsigned long long _flushCount;
    unsigned long long _nextDeltaNumber;
    BOOL _validateConflictsOnWrite;
    BOOL _validateConflictsOnRead;
    NSMutableDictionary *_deletedRecordMap;
    NSMutableArray *_addedChanges;
    NSMutableDictionary *_recordIdDataReferenceMap;
    NSMutableArray *_resolvedConflicts;
    NSMutableArray *_conflictWrappers;
}

+ (void)postConflictsChangedDistributedNotification;
+ (id)conflictsDirectoryPathnameComponent;
+ (id)unresolvedConflictsCountPathnameComponent;
- (id)dirtyCoderDelegate;
- (void)setDirtyCoderDelegate:(id)arg1;
- (void)isd_didDecodeDataWrapper:(id)arg1 forRecordWithIdentifier:(id)arg2 withPropertyName:(id)arg3;
- (id)recordIdsWithDataReferences;
- (id)dataReferencesWithRecordId:(id)arg1;
- (void)clearDataReferenceAssociationsForRecordIds:(id)arg1;
- (void)associateDataReference:(id)arg1 withRecordId:(id)arg2 andPropertyName:(id)arg3;
- (void)addConflictWrappers:(id)arg1;
- (id)reloadAndReturnConflictsInfo;
- (unsigned long long)resolvedConflictsForEntitiesCount:(id)arg1;
- (unsigned long long)unresolvedConflictCount;
- (unsigned int)earliestFromGenerationOfAddedRecordsForEntityName:(id)arg1;
- (id)unacceptedRecordIdsForEntityName:(id)arg1;
- (id)entityNamesOfAddedRecords;
- (id)commonClientId;
- (void)removeAllConflictsForEntityNames:(id)arg1;
- (id)newSetOfDeletedRecordIdsForEntityNames:(id)arg1;
- (void)recycleDatabaseConnection;
- (void)compact;
- (unsigned long long)removeEnumeratedChanges;
- (void)updateChangePropertiesForChange:(id)arg1;
- (void)releaseState;
- (void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2;
- (void)replaceRecordId:(id)arg1 withRecordId:(id)arg2;
- (void)removeConflict:(id)arg1;
- (void)removeAllConflicts;
- (void)addConflict:(id)arg1;
- (long long)conflictCount;
- (id)deletedRecordMap;
- (id)conflicts;
- (id)freezeDriedRecordWithId:(id)arg1;
- (id)conflictForRecordWithId:(id)arg1;
- (BOOL)enumerateChangesForEntityNames:(id)arg1 changeType:(int *)arg2 state:(long long *)arg3 maxToEnumerate:(long long)arg4 asArgumentToFunction:(CDUnknownFunctionPointerType)arg5 context:(void *)arg6;
- (void)enumerateChangesForEntityNames:(id)arg1 asArgumentToFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (BOOL)enumerateAddsForEntityNames:(id)arg1 state:(long long *)arg2 maxToEnumerate:(long long)arg3 asArgumentToFunction:(CDUnknownFunctionPointerType)arg4 context:(void *)arg5;
- (BOOL)isUndoManager;
- (BOOL)isConflictManager;
- (void)enumerateAddsForEntityNames:(id)arg1 asArgumentToFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)_clearBadConflictWithRecordId:(id)arg1;
- (BOOL)commitNewlyResolvedConflicts;
- (BOOL)commitNewlyResolvedConflictsPostingNotification:(BOOL)arg1;
- (void)commit;
- (void)postConflictsChangedDistributedNotification;
- (void)rollbackChanges;
- (BOOL)_writeConflicts:(id)arg1 toFile:(id)arg2 obtainLock:(BOOL)arg3;
- (void)updateCountFile;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (void)save;
- (void)enableFlush;
- (void)disableFlushAndLockImmediately;
- (void)disableFlush;
- (void)dealloc;
- (id)initWithDataDirectory:(id)arg1 lastSyncedGeneration:(unsigned int)arg2 validateConflictsOnRead:(BOOL)arg3;
- (id)initWithDataDirectory:(id)arg1 lastSyncedGeneration:(unsigned int)arg2;
- (BOOL)_readConflicts:(BOOL)arg1;
- (void)_clearConflictState;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)_readConflictsFromFile:(id)arg1;
- (void)_buildDeltaFileNames;
- (void)_clearDeltaFileNames;
- (id)_sortDeltaFileNamesAndSetNextDeltaNumber:(id)arg1;
- (id)_validConflictsFromConflicts:(id)arg1;
- (void)_validateConflict:(id)arg1;
- (void)fileLocker:(id)arg1 lockWasStolen:(id)arg2;
- (int)fileLocker:(id)arg1 actionForApparentlyAbandonedLock:(id)arg2 onAttempt:(int)arg3;
- (void)noteConflictToRemove:(id)arg1;
- (void)noteAddedChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

