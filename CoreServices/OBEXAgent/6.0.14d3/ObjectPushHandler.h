//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class BluetoothFileReference, IOBluetoothOBEXSession, IOBluetoothTransferProgressUI, NSData, NSMutableArray, NSString, NSTimer;

@interface ObjectPushHandler : NSWindowController
{
    id mWindow;
    id mTabView;
    id mSenderIconView;
    id mSenderNameField;
    id mGatheringProgressBar;
    id mFileInfoView;
    id mFileSizeField;
    id mFileNameField;
    id mFileKindField;
    id mFileKindTitle;
    id mFileIconCell;
    id mTransferProgress;
    id mTransferFileNameField;
    id mTransferStatusField;
    id mTransferTimeField;
    id mInitialAcceptButton;
    id mInitialDeclineButton;
    id mInitialFileInfoBox;
    id mSingleFinalFileInfoBox;
    id mSingleFailureFileInfoBox;
    id mMultipleFileTable;
    id mShowInFinderButton;
    IOBluetoothOBEXSession *mOBEXSession;
    struct __CFDictionary *mPutDictionaryRef;
    NSString *mDeviceName;
    IOBluetoothTransferProgressUI *mTransferProgressUI;
    int mCurrentTab;
    id mDelegate;
    NSMutableArray *mFileReferences;
    BluetoothFileReference *mPendingFile;
    int mCurrentFileIndex;
    int mExpectedFileCount;
    int mHandledFileCount;
    NSMutableArray *mFilesTransferring;
    NSMutableArray *mFilesReceived;
    NSMutableArray *mFilesFailed;
    int mFilePosition;
    NSData *mVCardData;
    NSData *mVCardSubData;
    NSTimer *mAbortTimer;
    BOOL mGETInProgress;
    unsigned int mArchiveOptions;
    BOOL mAcceptAllFiles;
    BOOL mUserRejectedTransfer;
    BOOL mSenderRejectedTransfer;
    BOOL mUserClosedWindow;
    BOOL mClosedWindowInternally;
    int mUserIncomingFileHandling;
    unsigned int mUserIncomingOtherFilesDisposition;
    NSString *mBaseSavePath;
    BOOL mRejectNextRequest;
    BOOL mTimeoutNextRequest;
}

+ (id)withBluetoothOBEXSession:(id)arg1;
@property(retain) BluetoothFileReference *pendingFile; // @synthesize pendingFile=mPendingFile;
@property(copy) NSString *deviceName; // @synthesize deviceName=mDeviceName;
@property(retain) IOBluetoothOBEXSession *obexSession; // @synthesize obexSession=mOBEXSession;
- (void).cxx_destruct;
- (void)ObjectPushHandleAbortCommand:(const struct OBEXAbortCommandData *)arg1;
- (void)ObjectPushHandleSetPathCommand:(const struct OBEXSetPathCommandData *)arg1;
- (void)continueHandleGetCommand:(id)arg1;
- (void)ObjectPushHandleGetCommand:(const struct OBEXGetCommandData *)arg1;
- (void)continueHandlePutCommand:(id)arg1;
- (void)ObjectPushHandlePutCommand:(const struct OBEXPutCommandData *)arg1;
- (void)ObjectPushHandleDisconnectCommand:(const struct OBEXDisconnectCommandData *)arg1;
- (void)ObjectPushHandleConnectCommand:(const struct OBEXConnectCommandData *)arg1;
- (void)concludeDragOperation:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)cellWasDoubleClicked:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)abortTimerFired:(id)arg1;
- (void)abortCurrentFile;
- (void)postProcessCurrentFile;
- (void)preProcessCurrentFile;
- (id)referenceForFileName:(id)arg1;
- (id)currentFile;
- (id)getKindInfoForFile:(id)arg1;
- (id)iconImageOfSize:(struct CGSize)arg1 forFileRef:(id)arg2;
- (int)openFileItem:(id)arg1;
- (void)revealItemInFinder:(id)arg1;
- (void)postProcessAllFiles;
- (void)UIStopTransfer:(id)arg1;
- (void)UIAcceptRejectFileCallback:(id)arg1;
- (void)promptUserToAcceptFile:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)askUserAboutVCard;
- (void)changeUIToTab:(int)arg1;
- (void)iconDoubleClickHandler:(id)arg1;
- (void)doNotAskCheck:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)closeWindow:(id)arg1;
- (void)skipTransfer:(id)arg1;
- (void)cancelTransfer:(id)arg1;
- (void)rejectItems:(id)arg1;
- (void)acceptItems:(id)arg1;
- (id)getFailedFiles;
- (id)getSuccessfulFiles;
- (void)displayFileAtPath:(id)arg1 wasSuccessful:(BOOL)arg2;
- (BOOL)isTransferComplete;
- (void)comeToFront:(id)arg1;
- (void)closeWindow;
- (int)timeoutNextRequest:(BOOL)arg1;
- (int)rejectNextRequest:(BOOL)arg1;
- (int)dropConnection;
- (int)closeUpShop;
- (void)setDelegate:(id)arg1;
- (void)readUserObjectExchangePreferences;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

