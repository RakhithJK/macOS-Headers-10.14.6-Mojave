//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableArray, NSString;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject>
{
    unsigned long long _popState;
    NSMutableArray *_remainingClassesToBePopped;
    unsigned long long _maximumCountOfRecordsInBatches;
}

+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForChanges;
+ (id)orderedClassesForDelete;
@property(nonatomic) unsigned long long maximumCountOfRecordsInBatches; // @synthesize maximumCountOfRecordsInBatches=_maximumCountOfRecordsInBatches;
- (void).cxx_destruct;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfUnmingledRecords;
- (BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;
- (BOOL)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)hasUnmingledRecordsForScopeWithIdentifier:(id)arg1;
- (BOOL)hasMingledRecordsForScopeWithIdentifier:(id)arg1;
- (BOOL)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (BOOL)_popChangeBatchOfChangedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 stop:(char *)arg3 error:(id *)arg4;
- (BOOL)_popChangeBatchOfDeletedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)prepareForMinglingWithScopeFilter:(id)arg1 error:(id *)arg2;
- (BOOL)appendBatch:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_appendBatchToStorage:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id *)arg3;
- (id)changeWithScopedIdentifier:(id)arg1;
- (unsigned long long)countOfAssetChanges;
- (BOOL)hasRecordWithScopedIdentifier:(id)arg1;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

