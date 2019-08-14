//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, NSXPCConnection;

@interface PLPhotoAnalysisServiceClient : NSObject
{
    NSURL *_libraryURL;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_cachedRequestContextDictionary;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)dumpAnalysisStatusError:(id *)arg1;
- (void)configureXPCConnection;
- (void)setupXpcConnection;
- (id)initWithLibraryURL:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (void)invalidate;
- (id)init;
- (BOOL)rebuildPersonsWithOptions:(id)arg1 error:(id *)arg2;
- (id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (void)personPromoterAdvancedStatus:(CDUnknownBlockType)arg1;
- (void)personPromoterStatus:(CDUnknownBlockType)arg1;
- (id)requestSuggestedMePersonIdentifierWithError:(id *)arg1;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)arg1;
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)processPersonsWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)reclusterFacesWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)resetPeople:(id *)arg1;
- (BOOL)resetFaceClusteringState:(id *)arg1;
- (long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id *)arg3;
- (long long)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (id)requestSnapshotServiceForCurationResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (BOOL)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (BOOL)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (BOOL)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (BOOL)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id *)arg2 subtitle:(id *)arg3 error:(id *)arg4;
- (BOOL)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;
- (id)requestDefaultsObjectForKey:(id)arg1 withError:(id *)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (BOOL)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id *)arg4;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id *)arg3;
- (id)requestMetadataSnapshotFolderCreation:(id *)arg1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)requestInvalidatePersistentCaches:(id *)arg1;
- (BOOL)requestInvalidateTransientCaches:(id *)arg1;
- (void)requestGraphRebuildFractionCompletedWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphStatus:(id *)arg1;
- (void)requestHighlightEstimatesWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphStatisticsWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestTransientMemoriesWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id *)arg2;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id *)arg6;
- (void)invalidateGraphWithReply:(CDUnknownBlockType)arg1;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id *)arg2;
- (id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id *)arg2;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)dispatchBlockWithoutBoost:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)requestContextDictionaryWithOperationId:(BOOL)arg1;
- (id)requestContextDictionary;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;

@end

