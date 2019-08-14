//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iLifeAssetManagement/SharedPhotoStreamControllerBase.h>

@interface SharedPhotoStreamController : SharedPhotoStreamControllerBase
{
}

+ (BOOL)switchToPhotoStreamView;
+ (BOOL)isShowingPhotoStreamView;
+ (id)photoStreamAccountProxy;
+ (id)simpleSharedBySubtitleForAlbum:(id)arg1;
+ (id)sharedBySubtitleForAlbum:(id)arg1;
+ (BOOL)isRejectedSharedPhotoStream:(id)arg1;
+ (BOOL)isUnsubscribedSharedPhotoStream:(id)arg1;
+ (BOOL)isSubscribedSharedPhotoStream:(id)arg1;
+ (BOOL)isPendingSharedPhotoStream:(id)arg1;
+ (BOOL)isOwnedSharedPhotoStream:(id)arg1;
+ (unsigned long long)getRelationshipStateFromAlbum:(id)arg1;
+ (void)setRelationshipState:(unsigned long long)arg1 forAlbum:(id)arg2;
+ (unsigned long long)sharedPhotoStreamRelationshipState:(id)arg1;
+ (BOOL)isSharedPhotoStream:(id)arg1;
+ (id)photoStreamSettingsForAlbum:(id)arg1;
+ (id)sharedStreamController;
- (void)removeSubscriberToken:(id)arg1;
- (void)_confirmSubscriptionRemoval:(id)arg1;
- (void)_confirmSubscriptionRemovalDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)showDropPopoverForPhotos:(id)arg1 atLocation:(struct CGRect)arg2;
- (void)_showDropPopoverForPhotosAndView:(id)arg1;
- (BOOL)validateUploadSelection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)photoStreamUploadSelectionModificationConfirmationAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)validateEnabledState;
- (void)photoStreamMustEnableAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)getWindowForAlertSheet;
- (id)allSharedStreams;
- (void)notifyDownloadedPhotos:(struct IPPhotoList *)arg1 inPublishedAlbum:(id)arg2;
- (void)didReceiveAlbumAddedNotification:(id)arg1;
- (void)stopListeningForItemAvailabilityNotifications;
- (void)startListeningForItemAvailabilityNotifications;
- (BOOL)handleRevealPhotoStreamItemRequest:(id)arg1;
- (void)_pushToOneUpViewForcingInspectorSidebar:(BOOL)arg1 usingRequest:(id)arg2;
- (id)_activePhotoStreamLibraryPath;
- (void)notifyStreamsAdded:(id)arg1 removed:(id)arg2 changed:(id)arg3;
- (void)didFindInvitation:(id)arg1;
- (id)applicationSharedStreamIdentifierAndAssetCountMap;
- (id)agentSharedStreamIdentifierAndAssetCountMap;
- (id)publishedAlbumForStreamIdentifier:(id)arg1;
- (id)localPhotoIDForPublishedPhotoID:(id)arg1 inPublishedAlbum:(id)arg2;
- (id)publishedPhotoIDForLocalPhotoID:(id)arg1 inPublishedAlbum:(id)arg2;
- (id)sharedStreamIdentifierForPublishedAlbum:(id)arg1;
- (void)updateCommentsForPhotosWithIdentifiers:(id)arg1;
- (void)didFindSharedStreamsListChange;
- (void)didFindContentChangeForSharedStreamsWithIdentifiers:(id)arg1;
- (id)personID;
- (BOOL)sharedPhotoStreamEnabledForThisLibrary;
- (id)assetManagementClient;
- (void)selectAlbum:(id)arg1;
- (BOOL)showAlbumAsHavingChanges:(id)arg1;
- (long long)unviewedAssetCountForAlbum:(id)arg1;
- (BOOL)isAssetWithPublishedIDMarkedAsUnviewed:(id)arg1;
- (long long)unviewedAlbumCount;
- (BOOL)isAlbumMarkedAsUnviewed:(id)arg1;
- (void)checkForNewInvite:(id)arg1;
- (id)findInvitationForSender:(id)arg1;
- (id)activeStreamIdentifier;
- (void)didFinishLaunching;
- (void)dealloc;
- (id)init;

@end

