//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSString;

@protocol PLPhotoLibraryPathManagerDCIM <NSObject>
- (NSString *)assetBaseFilenameForAdjustmentFilePath:(NSString *)arg1;
- (NSString *)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id *)arg2;
- (NSString *)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (NSString *)iTunesPhotosSyncMetadataFilePath;
- (NSString *)iTunesPhotosLastSyncMetadataFilePath;
- (NSString *)iTunesSyncedAssetSmallThumbnailsDirectory;
- (NSString *)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (NSString *)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (NSString *)iTunesSyncedFaceDataDirectory;
- (NSString *)iTunesSyncedAssetsDirectory;
- (NSString *)photoMetadataDirectoryForMediaInMainDirectory:(NSString *)arg1;
- (NSString *)legacyMemoriesRelatedSnapshotDirectory;
- (NSString *)legacyModelInterestDatabasePath;
- (NSString *)iTunesPhotosDirectory;
@end

