//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCEdgeCacheHint, FCHeldRecords, NSArray, NSDictionary, NSMutableArray, NSMutableSet;
@protocol FCContentContext;

@interface FCRecordChainFetchOperation : FCOperation
{
    BOOL _shouldReturnErrorWhenSomeRecordsMissing;
    BOOL _shouldBypassRecordSourcePersistence;
    id <FCContentContext> _context;
    NSArray *_topLevelRecordIDs;
    NSDictionary *_linkKeysByRecordType;
    NSDictionary *_cachePoliciesByRecordType;
    CDUnknownBlockType _dynamicCachePolicyBlock;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_additionalRecordSources;
    CDUnknownBlockType _cachedRecordsLookupBlock;
    CDUnknownBlockType _recordChainCompletionHandler;
    NSArray *_recordSources;
    NSDictionary *_recordSourcesByRecordType;
    NSDictionary *_pbRecordTypesByRecordType;
    FCHeldRecords *_cachedRecords;
    NSMutableSet *_actualTopLevelRecordIDs;
    NSMutableSet *_skippedTopLevelRecordIDs;
    NSMutableSet *_missingCachedOnlyTopLevelRecordIDs;
    NSDictionary *_resultHeldRecordsByType;
    NSMutableArray *_mutableNetworkEvents;
}

@property(retain, nonatomic) NSMutableArray *mutableNetworkEvents; // @synthesize mutableNetworkEvents=_mutableNetworkEvents;
@property(retain, nonatomic) NSDictionary *resultHeldRecordsByType; // @synthesize resultHeldRecordsByType=_resultHeldRecordsByType;
@property(retain, nonatomic) NSMutableSet *missingCachedOnlyTopLevelRecordIDs; // @synthesize missingCachedOnlyTopLevelRecordIDs=_missingCachedOnlyTopLevelRecordIDs;
@property(retain, nonatomic) NSMutableSet *skippedTopLevelRecordIDs; // @synthesize skippedTopLevelRecordIDs=_skippedTopLevelRecordIDs;
@property(retain, nonatomic) NSMutableSet *actualTopLevelRecordIDs; // @synthesize actualTopLevelRecordIDs=_actualTopLevelRecordIDs;
@property(retain, nonatomic) FCHeldRecords *cachedRecords; // @synthesize cachedRecords=_cachedRecords;
@property(retain, nonatomic) NSDictionary *pbRecordTypesByRecordType; // @synthesize pbRecordTypesByRecordType=_pbRecordTypesByRecordType;
@property(retain, nonatomic) NSDictionary *recordSourcesByRecordType; // @synthesize recordSourcesByRecordType=_recordSourcesByRecordType;
@property(retain, nonatomic) NSArray *recordSources; // @synthesize recordSources=_recordSources;
@property(copy, nonatomic) CDUnknownBlockType recordChainCompletionHandler; // @synthesize recordChainCompletionHandler=_recordChainCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType cachedRecordsLookupBlock; // @synthesize cachedRecordsLookupBlock=_cachedRecordsLookupBlock;
@property(nonatomic) BOOL shouldBypassRecordSourcePersistence; // @synthesize shouldBypassRecordSourcePersistence=_shouldBypassRecordSourcePersistence;
@property(retain, nonatomic) NSArray *additionalRecordSources; // @synthesize additionalRecordSources=_additionalRecordSources;
@property(copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // @synthesize edgeCacheHint=_edgeCacheHint;
@property(nonatomic) BOOL shouldReturnErrorWhenSomeRecordsMissing; // @synthesize shouldReturnErrorWhenSomeRecordsMissing=_shouldReturnErrorWhenSomeRecordsMissing;
@property(copy, nonatomic) CDUnknownBlockType dynamicCachePolicyBlock; // @synthesize dynamicCachePolicyBlock=_dynamicCachePolicyBlock;
@property(copy, nonatomic) NSDictionary *cachePoliciesByRecordType; // @synthesize cachePoliciesByRecordType=_cachePoliciesByRecordType;
@property(copy, nonatomic) NSDictionary *linkKeysByRecordType; // @synthesize linkKeysByRecordType=_linkKeysByRecordType;
@property(copy, nonatomic) NSArray *topLevelRecordIDs; // @synthesize topLevelRecordIDs=_topLevelRecordIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_errorForMissingRecordNames:(id)arg1;
- (id)_partialUncachedErrorForMissingRecordName:(id)arg1;
- (id)_partialFetchErrorForMissingRecordName:(id)arg1;
- (id)_recordSourceForRecordType:(id)arg1;
- (int)_pbRecordTypeForRecordType:(id)arg1;
- (id)_recordTypeForRecordID:(id)arg1;
- (int)_pbRecordTypeForRecordID:(id)arg1;
- (void)_finalizeResultFromCachedRecords;
- (id)_recordIDsMissingFromCachedRecords;
- (void)_filterOrphansFromCachedRecords;
- (void)_walkRecordChainStartingWithRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2 recordsLookupBlock:(CDUnknownBlockType)arg3 visitorBlock:(CDUnknownBlockType)arg4;
- (void)_issueCloudRequestIfNeeded;
- (void)_collectActualTopLevelRecordIDsFromRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2;
- (void)_collectCachedRecordsFromRecordIDs:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *networkEvents;
- (void)performOperation;
- (void)prepareOperation;
- (BOOL)validateOperation;
- (id)init;

@end

