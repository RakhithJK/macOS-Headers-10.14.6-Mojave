//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/RDDatabaseGlobalMessagesReceiver-Protocol.h>

@class LiTransactionContext, NSHashTable, NSString, NSURL, PFCoalescer, PFDispatchQueue, PHPhotoLibraryTransactionState, RDDatabase;
@protocol PLPhotoAnalysisServiceTaxonomyResolver;

@interface PHPhotoLibrary : NSObject <RDDatabaseGlobalMessagesReceiver>
{
    NSURL *_libraryURL;
    BOOL _threadPhotoLibrarySet;
    BOOL _initializedWithOpenDatabase;
    NSHashTable *_changeObservers;
    NSHashTable *_availabilityObservers;
    PHPhotoLibraryTransactionState *_transactionState;
    PFDispatchQueue *_queue;
    PFCoalescer *_changeCoalescer;
    RDDatabase *_database;
}

+ (id)activePhotoLibrary;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (long long)authorizationStatus;
+ (id)sharedPhotoLibrary;
+ (void)setSharedPhotoLibrary:(id)arg1;
+ (BOOL)hasSharedPhotoLibrary;
+ (void)setClientId:(unsigned char)arg1;
+ (unsigned char)clientId;
+ (BOOL)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2;
+ (id)systemPhotoLibraryURL;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1;
@property(readonly, nonatomic) RDDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) PFCoalescer *changeCoalescer; // @synthesize changeCoalescer=_changeCoalescer;
@property(retain, nonatomic) PFDispatchQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PHPhotoLibraryTransactionState *transactionState; // @synthesize transactionState=_transactionState;
@property(retain, nonatomic) NSHashTable *availabilityObservers; // @synthesize availabilityObservers=_availabilityObservers;
@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long unverifiedFaceCountThreshold;
- (void)updateClusterUsabilityCriteria;
- (void)setDataValidationError:(id)arg1;
- (void)validateInTransaction;
- (void)clearThreadPhotoLibrary;
- (void)storeThreadPhotoLibrary;
- (id)changeRequestForObject:(id)arg1;
- (id)changeRequestForObject:(id)arg1 createBlock:(CDUnknownBlockType)arg2;
- (void)finishTransactionWithCancel:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)beginTransactionWithError:(id *)arg1;
- (id)fetchModelForObject:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)dispatchChangeCompletionHandler:(CDUnknownBlockType)arg1 result:(BOOL)arg2 error:(id)arg3;
- (BOOL)performCancellableChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performCancellableChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)photoAnalysisClient;
- (id)urlForApplicationDataFolderIdentifier:(long long)arg1;
- (id)cloudPhotoLibraryManager;
@property(readonly, nonatomic) LiTransactionContext *context;
- (void)dealloc;
- (void)personPromotionProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)suggestedMePersonIdentifierWithError:(id *)arg1;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id *)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id *)arg2;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)invalidatePersistentGraphCachesAndReturnError:(id *)arg1;
- (BOOL)invalidateTransientGraphCachesAndReturnError:(id *)arg1;
- (id)exportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (id)graphStatisticsDescription:(id *)arg1;
- (id)graphStatusDescription:(id *)arg1;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id *)arg2;
- (BOOL)cleanupInvalidIgnoreUntilDatesWithError:(id *)arg1;
- (BOOL)resetPendingAnalysisStatesWithError:(id *)arg1;
- (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
- (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 error:(id *)arg3;
- (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)featureEnabledForWorkerType:(short)arg1 completion:(CDUnknownBlockType)arg2;
- (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 error:(id *)arg4;
- (void)requestAnalysisProgressCountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestTotalProgressCountsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cloudIdentifiersForLocalIdentifiers:(id)arg1 identifierCode:(id)arg2;
- (id)_localIdentifierListsByIdentifierCodeForLocalIdentifiers:(id)arg1;
- (id)_cloudIdentifiersFromLocalIdentifiers:(id)arg1;
- (id)cloudIdentifiersForLocalIdentifiers:(id)arg1;
- (id)localIdentifiersForCloudIdentifiers:(id)arg1;
- (void)close;
- (void)serviceConnectionClosed:(id)arg1;
- (void)notifyAvailabilityObservers;
- (BOOL)openAndWaitWithUpgrade:(BOOL)arg1 error:(id *)arg2;
- (id)initWithOpenDatabase:(id)arg1;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (id)lastSuccessfulSyncDate;
- (BOOL)isLibraryBeingSynchronized;
- (BOOL)isSystemPhotoLibrary;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (id)fetchQuarantinedAssetsWithOptions:(id)arg1;
- (id)fetchAssetsForPersons:(id)arg1 options:(id)arg2;
- (id)fetchAssetsForFaces:(id)arg1 options:(id)arg2;
- (id)fetchRepresentativeAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (id)fetchCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
- (id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2;
- (id)fetchAssetsWithOptions:(id)arg1;
- (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
- (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
- (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
- (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
- (id)fetchAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3;
- (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
- (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
- (id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchMomentsWithOptions:(id)arg1;
- (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
- (id)fetchMomentsBackingMemory:(id)arg1 options:(id)arg2;
- (id)fetchMemoriesWithOptions:(id)arg1;
- (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5;
- (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5;
- (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
- (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
- (id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2;
- (id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3;
- (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchFaceCropsWithOptions:(id)arg1;
- (id)fetchEmptyFaceGroupsWithOptions:(id)arg1;
- (id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)arg1 options:(id)arg2;
- (id)fetchFaceGroupsWithFace:(id)arg1 options:(id)arg2;
- (id)fetchFaceGroupsForPerson:(id)arg1 options:(id)arg2;
- (id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchFaceGroupsWithOptions:(id)arg1;
- (id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;
- (id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
- (id)fetchFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;
- (id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2;
- (id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
- (id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2;
- (id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2;
- (id)fetchFacesForPerson:(id)arg1 options:(id)arg2;
- (id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchFacesInAsset:(id)arg1 options:(id)arg2;
- (id)fetchFacesWithOptions:(id)arg1;
- (id)fetchInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
- (id)fetchMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
- (id)fetchPersonsForRejectedFaceNeedingFaceCrop:(id)arg1 options:(id)arg2;
- (id)fetchRejectedPersonsForFace:(id)arg1 options:(id)arg2;
- (id)fetchAssociatedPersonsGroupedByFaceGroupLocalIdentifierForFaceGroups:(id)arg1 options:(id)arg2;
- (id)fetchPersonAssociatedWithFaceGroup:(id)arg1 options:(id)arg2;
- (id)fetchPersonWithFace:(id)arg1 options:(id)arg2;
- (id)fetchPersonsFromAssetCollection:(id)arg1 options:(id)arg2;
- (id)fetchPersonsFromAsset:(id)arg1 options:(id)arg2;
- (id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
- (id)fetchPersonsWithOptions:(id)arg1;
- (id)assetChangeRequestForAsset:(id)arg1;
- (id)assetCreationRequestFromVideoAtFileURL:(id)arg1;
- (id)assetCreationRequestFromImageAtFileURL:(id)arg1;
- (id)assetCreationRequestFromImage:(id)arg1;
- (id)assetCreationRequest;
- (void)deleteAssets:(id)arg1;
- (id)assetCollectionChangeRequestForAssetCollection:(id)arg1 assets:(id)arg2;
- (id)assetCollectionChangeRequestForAssetCollection:(id)arg1;
- (id)assetCollectionCreationRequestWithTitle:(id)arg1;
- (void)deleteAssetCollections:(id)arg1;
- (id)collectionListChangeRequestForCollectionList:(id)arg1 childCollections:(id)arg2;
- (id)collectionListChangeRequestForCollectionList:(id)arg1;
- (id)collectionListCreationRequestWithTitle:(id)arg1;
- (void)deleteCollectionLists:(id)arg1;
- (id)faceCropChangeRequestForFaceCrop:(id)arg1;
- (id)faceGroupChangeRequestForFaceGroup:(id)arg1;
- (id)faceGroupCreationRequest;
- (void)deleteFaceGroups:(id)arg1;
- (id)faceChangeRequestForFace:(id)arg1;
- (id)faceCreationRequest;
- (void)deleteFaces:(id)arg1;
- (id)personChangeRequestForPerson:(id)arg1;
- (id)personCreationRequestWithVerifiedType:(short)arg1;
- (void)deletePersons:(id)arg1;
- (id)memoryChangeRequestForMemory:(id)arg1;
- (id)memoryCreationRequest;
- (void)deleteMemories:(id)arg1;
- (id)projectCreationRequest;
- (id)libraryChangeRequestForResettingPersons;
- (void)checkSceneLocale;
@property(retain, nonatomic) id <PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)nonZeroFaceClusterSequenceNumbersOfFacesNotInFaceGroups;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id *)arg2;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4;
- (id)fetchPersonsWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

