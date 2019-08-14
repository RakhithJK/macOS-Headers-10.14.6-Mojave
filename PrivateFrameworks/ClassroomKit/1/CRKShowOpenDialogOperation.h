//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

#import <ClassroomKit/SFAirDropClassroomTransferDelegate-Protocol.h>

@class CRKAirDropTransferInfo, NSData, NSSet, NSString, NSURL, SFAirDropClassroomTransferManager;

@interface CRKShowOpenDialogOperation : CATOperation <SFAirDropClassroomTransferDelegate>
{
    NSSet *mURLs;
    BOOL mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    BOOL mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    NSSet *mAirDropItems;
    SFAirDropClassroomTransferManager *mTransferManager;
    NSString *mTransferIdentifier;
    CRKAirDropTransferInfo *mTransferInfo;
    BOOL mTransferAccepted;
    BOOL mTransferFinished;
    NSURL *mTransferDirectoryURL;
}

+ (id)fakeBundleID;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)succeedIfNeeded;
- (void)cleanupHiddenTransferItemsIfNeeded;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferDidFinishWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidProgressWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidStartWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)startTransfer;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 sourceBundleIdentifier:(id)arg6;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

