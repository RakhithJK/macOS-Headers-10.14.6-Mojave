//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoServices/ICPServiceClient.h>

#import <CloudPhotoServices/ICPSharedPhotoStreamServiceClient-Protocol.h>

@class NSString, PFDispatchQueue;

@interface ICPSharedPhotoStreamServiceClient : ICPServiceClient <ICPSharedPhotoStreamServiceClient>
{
    PFDispatchQueue *_dispatchQueue;
    PFDispatchQueue *_replyQueue;
}

@property(retain) PFDispatchQueue *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) PFDispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)observerProtocol;
- (void)didUpdateCloudFeedRebuildProgress:(double)arg1;
- (void)didFindCloudFeedEntriesUpdated:(id)arg1 added:(id)arg2 deleted:(id)arg3;
- (void)didFindCloudFeedChanges;
- (void)didChangeServerSideConfiguration:(id)arg1;
- (void)didFindInvitationChanges:(id)arg1;
- (void)didMarkMediaItemWithIdentifierAsHavingUnreadComments:(id)arg1;
- (void)didUpdateUnviewedMediaItemCountForStreamWithIdentifier:(id)arg1;
- (void)didMarkSharedStreamWithIdentifierAsHavingUnreadContent:(id)arg1;
- (void)didFindCommentChangeForMediaItemWithIdentifier:(id)arg1;
- (void)didUploadAssetCollectionWithIdentifier:(id)arg1 error:(id)arg2;
- (void)didFindMetadataChangeForSharedStreamWithIdentifier:(id)arg1;
- (void)didFindNewSharedStreamWithIdentifier:(id)arg1;
- (void)setFocusStreamIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
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
- (void)markAsSpamPhoneInvitationForSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rejectPhoneInvitationForSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)acceptPhoneInvitationForSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)markAsSpamInvitationWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rejectInvitationWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)acceptInvitationWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pendingSharingRelationships:(CDUnknownBlockType)arg1;
- (void)sharingRelationshipsForSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeSharingRelationshipWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addSharingRelationships:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteCommentsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addComments:(id)arg1 toMediaItemWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)commentsForMediaItemIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getServerConfigurationImageSize:(CDUnknownBlockType)arg1;
- (void)deleteMediaItemsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)postMediaItems:(id)arg1 toSharedPhotoStreamWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setPublicAccessEnabled:(BOOL)arg1 forSharedPhotoStreamWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updatePropertiesForSharedPhotoStreamWithIdentifier:(id)arg1 properties:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deleteSharedPhotoStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createSharedPhotoStreamWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)mediaItemsForIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sharedPhotoStreamsForIdentifiers:(id)arg1 withOptions:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)mediaItemsInSharedStreamWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)subscribedSharedPhotoStreamCount:(CDUnknownBlockType)arg1;
- (void)ownedSharedPhotoStreamCount:(CDUnknownBlockType)arg1;
- (void)sharedPhotoStreamsWithOptions:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sharedPhotoStreamIdentifiers:(CDUnknownBlockType)arg1;
- (void)fetchSharedPhotoStreamLibraryPathURL:(CDUnknownBlockType)arg1;
- (void)sharedStreamsServerSideConfiguration:(CDUnknownBlockType)arg1;
- (void)configureConnection;
- (id)initWithListenerEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

