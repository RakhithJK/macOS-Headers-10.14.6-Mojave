//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSTask.h>

#import <Mail/MFEWSFetchMessageMetadataOperationDelegate-Protocol.h>
#import <Mail/MFEWSMailboxReconcileTaskOperationDelegate-Protocol.h>
#import <Mail/MFEWSPersistMessageMetadataOperationDelegate-Protocol.h>

@class MFEWSAccount, MFEWSDeleteMailboxTaskOperation, MFEWSMailboxReconcileTaskOperation, MFEWSPersistMessageMetadataOperation, MFMailbox, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString;
@protocol MFEWSMailboxDataCache;

@interface MFEWSMailboxSyncTask : MFEWSTask <MFEWSMailboxReconcileTaskOperationDelegate, MFEWSFetchMessageMetadataOperationDelegate, MFEWSPersistMessageMetadataOperationDelegate>
{
    MFEWSMailboxReconcileTaskOperation *_reconcileOperation;
    MFEWSPersistMessageMetadataOperation *_persistMetadataOperation;
    NSMutableArray *_batchesNeedingFetch;
    NSMutableSet *_currentFetchOperations;
    NSMutableDictionary *_batchesToPersistByInitialSyncState;
    BOOL _userInitiated;
    BOOL _needsDelete;
    BOOL _foundNewUnreadInboxMessage;
    BOOL _isPrimaryMailbox;
    BOOL _isInitialSync;
    BOOL _needToPersistInitialSync;
    MFMailbox *_mailbox;
    NSString *_folderIDString;
    id <MFEWSMailboxDataCache> _mailboxDataCache;
    NSString *_syncStateToReconcile;
    NSString *_syncStateToPersist;
    MFEWSDeleteMailboxTaskOperation *_deleteMailboxOperation;
    NSProgress *_checkProgress;
    MFEWSAccount *_account;
}

@property(nonatomic) BOOL needToPersistInitialSync; // @synthesize needToPersistInitialSync=_needToPersistInitialSync;
@property(nonatomic) BOOL isInitialSync; // @synthesize isInitialSync=_isInitialSync;
@property(nonatomic) BOOL isPrimaryMailbox; // @synthesize isPrimaryMailbox=_isPrimaryMailbox;
@property(nonatomic) BOOL foundNewUnreadInboxMessage; // @synthesize foundNewUnreadInboxMessage=_foundNewUnreadInboxMessage;
@property(nonatomic) BOOL needsDelete; // @synthesize needsDelete=_needsDelete;
@property(readonly, nonatomic) MFEWSAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property(retain, nonatomic) MFEWSDeleteMailboxTaskOperation *deleteMailboxOperation; // @synthesize deleteMailboxOperation=_deleteMailboxOperation;
@property(copy, nonatomic) NSString *syncStateToPersist; // @synthesize syncStateToPersist=_syncStateToPersist;
@property(copy, nonatomic) NSString *syncStateToReconcile; // @synthesize syncStateToReconcile=_syncStateToReconcile;
@property(nonatomic) __weak id <MFEWSMailboxDataCache> mailboxDataCache; // @synthesize mailboxDataCache=_mailboxDataCache;
@property(copy, nonatomic) NSString *folderIDString; // @synthesize folderIDString=_folderIDString;
@property(readonly, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;
- (void)_sendMailboxDidStartSyncTaskNotification;
- (void)_finishCheckingForMailProgress;
- (void)_setFoundNewUnreadMessageInInbox;
- (void)_incrementFoundMessages:(unsigned long long)arg1;
- (void)persistMessageMetadataOperation:(id)arg1 didPersistBatch:(id)arg2;
- (void)fetchMessageMetadataOperation:(id)arg1 didPopulateBatch:(id)arg2;
- (void)mailboxReconcileTaskOperationFolderIsInvalid:(id)arg1;
- (void)mailboxReconcileTaskOperation:(id)arg1 receivedBatch:(id)arg2;
- (void)end;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (void)operationFinished:(id)arg1;
- (void)_removeFetchOperation:(id)arg1;
- (void)_addFetchOperation:(id)arg1;
@property(nonatomic) BOOL userInitiated;
@property(retain, nonatomic) MFEWSPersistMessageMetadataOperation *persistMetadataOperation;
@property(retain, nonatomic) MFEWSMailboxReconcileTaskOperation *reconcileOperation;
- (void)reconcileMailboxWithSyncState:(id)arg1;
- (id)init;
- (id)initWithMailbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

