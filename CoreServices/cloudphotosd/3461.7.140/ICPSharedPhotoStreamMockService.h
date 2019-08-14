//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPSharedPhotoStreamService.h"

@class ICPPhotoStreamLibrary, NSError, PFDispatchQueue;

@interface ICPSharedPhotoStreamMockService : ICPSharedPhotoStreamService
{
    PFDispatchQueue *_replyQueue;
    ICPPhotoStreamLibrary *_streamLibrary;
    NSError *_streamLibraryError;
}

@property(retain) NSError *streamLibraryError; // @synthesize streamLibraryError=_streamLibraryError;
@property(retain) ICPPhotoStreamLibrary *streamLibrary; // @synthesize streamLibrary=_streamLibrary;
@property(retain) PFDispatchQueue *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void).cxx_destruct;
- (id)_deleteCommentWithIdentifier:(id)arg1;
- (BOOL)_addCommentForAssetWithIdentifier:(id)arg1 commentInfos:(id)arg2 error:(id *)arg3;
- (BOOL)_persistCommentsForAssetWithIdentifier:(id)arg1 commentInfos:(id)arg2 error:(id *)arg3;
- (id)_commentInfosForAssetWithIdentifier:(id)arg1;
- (id)_commentStoreFilePathForAssetWithIdentifier:(id)arg1;
- (id)_commentStoreDirectoryPath;
- (void)_reconnectLibrary:(id)arg1;
- (void)_initializeLibrary;
- (id)_libraryURL;
- (void)firstCloudFeedEntryWithType:(long long)arg1 forSharedPhotoStreamWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)recentCloudFeedEntriesForMediaItemsWithLimit:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)cloudFeedEntriesWithEarliestDate:(id)arg1 latestDate:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)markCloudFeedContentAsViewed:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)markCommentsAsViewedForMediaItemIdentifiers:(id)arg1 lastViewedDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)markSharedPhotoStreamWithIdentifierAsViewed:(id)arg1 moveLastViewedMediaItemMarker:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)lastViewedCommentDateForMediaItemWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)earliestUnviewedMediaItemIdentifierInSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)isMediaItemWithIdentifierMarkedAsUnviewed:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unviewedMediaItemCountForSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)isSharedPhotoStreamWithIdentifierMarkedAsUnviewed:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unviewedSharedPhotoStreamCount:(CDUnknownBlockType)arg1;
- (void)unsubscribeFromSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rejectInvitationWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)acceptInvitationWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pendingSharingRelationships:(CDUnknownBlockType)arg1;
- (void)sharingRelationshipsForSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeSharingRelationshipWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addSharingRelationships:(id)arg1 toSharedPhotoStreamWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deleteCommentsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addComments:(id)arg1 toMediaItemWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)commentsForMediaItemIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)mediaItemsForIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteMediaItemsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)postMediaItems:(id)arg1 toSharedPhotoStreamWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deleteSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createSharedPhotoStreamWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sharedPhotoStreamsWithOptions:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sharedPhotoStreamIdentifierToPropertyMap:(CDUnknownBlockType)arg1;
- (void)sharedPhotoStreamLibraryPathURL:(CDUnknownBlockType)arg1;
- (void)shutdownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)serviceIdentifier;
- (id)init;

@end

