//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASPersonModel : MSASModelBase
{
    BOOL _shouldDownloadEarliestPhotosFirst;
}

@property(nonatomic) BOOL shouldDownloadEarliestPhotosFirst; // @synthesize shouldDownloadEarliestPhotosFirst=_shouldDownloadEarliestPhotosFirst;
- (void)removeAssetCollectionsFromUploadQueue:(id)arg1;
- (void)setErrorCount:(int)arg1 forAssetCollectionInUploadQueue:(id)arg2;
- (id)nextItemsForUploadAlbumGUID:(id)arg1 maxPriority:(int)arg2 maxCount:(int)arg3;
- (id)nextItemsForUploadMaxCount:(int)arg1;
- (id)itemsForUpload;
- (int)assetCollectionsInUploadQueueAlbumGUID:(id)arg1;
- (int)assetCollectionsInUploadQueue;
- (void)enqueueAssetCollectionForUpload:(id)arg1 album:(id)arg2;
- (void)removeAssetsFromDownloadQueue:(id)arg1;
- (void)setInFlightAssets:(id)arg1;
- (void)setErrorCount:(int)arg1 forAssetInDownloadQueue:(id)arg2;
- (int)itemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2;
- (BOOL)hasItemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 maxCount:(int)arg3;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 thumbnails:(BOOL)arg3 maxCount:(int)arg4 isInflight:(BOOL)arg5;
- (int)assetsInDownloadQueueAlbumGUID:(id)arg1;
- (int)assetsInDownloadQueue;
- (void)enqueueAssetForDownload:(id)arg1 inAlbumWithGUID:(id)arg2;
- (long long)nextMMCSItemID;
- (BOOL)dbQueueIsGUIDQueued:(id)arg1 inQueue:(id)arg2;
- (void)dbQueueRemoveGUID:(id)arg1 fromQueue:(id)arg2;
- (void)dbQueueSetErrorCount:(int)arg1 forGUID:(id)arg2 inQueue:(id)arg3;
- (int)dbQueueAssetCountAlbumGUID:(id)arg1 inQueue:(id)arg2;
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(id)arg1;
- (void)requeuePendingAssetCollectionGUID:(id)arg1;
- (void)addPendingAssetCollectionGUID:(id)arg1 albumGUID:(id)arg2;
- (BOOL)dbQueueIsAssetCollectionWithGUIDPending:(id)arg1;
- (BOOL)isAssetCollectionWithGUIDPending:(id)arg1;
- (long long)countOfEnqueuedCommands;
- (long long)countOfEnqueuedCommand:(id)arg1;
- (void)purgeCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dbQueueRemoveAllEntriesFromTable:(id)arg1;
- (void)dbQueueRemoveCommandIdentifier:(long long)arg1;
- (void)removeCommandIdentifier:(long long)arg1;
- (void)dbQueueRemoveCommandAtHeadOfQueue;
- (void)setParams:(id)arg1 forCommandWithIdentifier:(long long)arg2;
- (id)commandWithMinimumIdentifier:(long long)arg1 outParams:(id *)arg2 outCommandIdentifier:(long long *)arg3 outPersonID:(id *)arg4 outAlbumGUID:(id *)arg5 outAssetCollectionGUID:(id *)arg6;
- (id)commandAtHeadOfQueueOutParams:(id *)arg1 outCommandIdentifier:(long long *)arg2 outPersonID:(id *)arg3 outAlbumGUID:(id *)arg4 outAssetCollectionGUID:(id *)arg5;
- (id)_commandWithMinimumIdentifier:(id)arg1 outParams:(id *)arg2 outCommandIdentifier:(long long *)arg3 outPersonID:(id *)arg4 outAlbumGUID:(id *)arg5 outAssetCollectionGUID:(id *)arg6;
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)arg1;
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)arg1;
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(struct sqlite3_stmt *)arg1 deleteStatement:(struct sqlite3_stmt *)arg2;
- (void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 pendingOnAssetCollectionGUID:(id)arg5;
- (void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 sequenceNumber:(long long)arg6;
- (void)enqueueCommandAtHeadOfQueue:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (long long)dbQueueSmallestCommandSequenceNumber;
- (long long)dbQueueNextCommandSequenceNumber;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)initWithPersonID:(id)arg1;

@end

