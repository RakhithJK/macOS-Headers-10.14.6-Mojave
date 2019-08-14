//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFMCAccountProxy.h>

#import <Notes/NFAccountProxy-Protocol.h>

@class EWSExchangeServiceBinding, NSMutableDictionary, NSString, NSURL;

@interface NFEWSAccountProxy : ICNFMCAccountProxy <NFAccountProxy>
{
    NSMutableDictionary *_foldersByObjectID;
    EWSExchangeServiceBinding *_exchangeServiceBinding;
    BOOL _useExternalURL;
}

+ (id)_newExtendedFieldTypeForPropertyId:(long long)arg1;
+ (id)_extendedFieldsForEWSNoteType;
@property(readonly) EWSExchangeServiceBinding *exchangeServiceBinding; // @synthesize exchangeServiceBinding=_exchangeServiceBinding;
@property(nonatomic) BOOL useExternalURL; // @synthesize useExternalURL=_useExternalURL;
- (void).cxx_destruct;
- (BOOL)responseCodeIsFatal:(long long)arg1;
- (id)_sendMessage:(id)arg1;
- (BOOL)_processMoveItemResponse:(id)arg1 forNote:(id)arg2 responseCode:(long long *)arg3;
- (id)_newEWSMoveItemForNote:(id)arg1 toFolder:(id)arg2;
- (BOOL)moveNoteOnRemote:(id)arg1 toFolder:(id)arg2 responseCode:(long long *)arg3;
- (BOOL)deleteNoteFromRemoteWithID:(id)arg1 responseCode:(long long *)arg2;
- (BOOL)_processDeleteItemResponse:(id)arg1 responseCode:(long long *)arg2;
- (id)_newEWSDeleteItemForNoteWithRemoteID:(id)arg1;
- (BOOL)updateNoteOnRemote:(id)arg1 responseCode:(long long *)arg2;
- (BOOL)_processUpdateItemResponse:(id)arg1 forNote:(id)arg2 responseCode:(long long *)arg3;
- (id)_newEWSUpdateItemForNote:(id)arg1;
- (id)_newEWSSetItemFieldForBody:(id)arg1;
- (id)_newEWSSetItemFieldForSubject:(id)arg1;
- (BOOL)_processMoveFolderResponse:(id)arg1 forFolder:(id)arg2 responseCode:(long long *)arg3;
- (id)_newEWSMoveFolderForFolder:(id)arg1 toParent:(id)arg2;
- (BOOL)moveFolderOnRemote:(id)arg1 toParent:(id)arg2 responseCode:(long long *)arg3;
- (BOOL)_processDeleteFolderResponse:(id)arg1 forFolderId:(id)arg2 responseCode:(long long *)arg3;
- (id)_newEWSDeleteFolderWithFolderId:(id)arg1;
- (BOOL)deleteFolderFromRemoteWithId:(id)arg1 responseCode:(long long *)arg2;
- (BOOL)_processUpdateFolderResponse:(id)arg1 forFolder:(id)arg2 responseCode:(long long *)arg3;
- (id)_newEWSUpdateFolderForFolder:(id)arg1;
- (BOOL)updateFolderOnRemote:(id)arg1 responseCode:(long long *)arg2;
- (BOOL)_processCreateFolderResponse:(id)arg1 forFolder:(id)arg2 responseCode:(long long *)arg3;
- (id)_newEWSCreateFolderForFolder:(id)arg1 inParent:(id)arg2;
- (BOOL)addFolderToRemote:(id)arg1 inParent:(id)arg2 responseCode:(long long *)arg3;
- (BOOL)addNoteToRemote:(id)arg1 inFolder:(id)arg2 responseCode:(long long *)arg3;
- (BOOL)_processCreateItemResponse:(id)arg1 forNote:(id)arg2 responseCode:(long long *)arg3;
- (id)_newEWSCreateItemForNote:(id)arg1 inFolder:(id)arg2;
@property(copy) NSString *rootFolderId;
@property(retain) NSURL *lastUsedAutodiscoverURL;
@property(retain) NSURL *externalURL;
@property(retain) NSURL *internalURL;
@property(retain, nonatomic) NSString *folderHierarchySyncState;
- (BOOL)hasNotes;
@property(copy, nonatomic) NSString *parentACAccountIdentifier;
@property(copy, nonatomic) NSString *fullName;
- (void)_autodiscoverSettings;
- (id)_fetchDistinguishedFolderInfo:(id)arg1 error:(id *)arg2 errorCode:(long long *)arg3;
- (id)_connectAndAuthenticate;
- (id)_syncFolderHierarchyRequestWithSyncState:(id)arg1;
- (id)_deleteFolder:(id)arg1;
- (id)_fetchFolderInfoForId:(id)arg1 error:(id *)arg2;
- (void)_createOrUpdateFolder:(id)arg1 deletedItemsFolderId:(id)arg2;
- (void)updateAllMailboxContentsFromServer;
- (void)updateMailboxListFromServer;
- (id)mailboxProxyForMailbox:(id)arg1;
- (BOOL)isServerReachable;
- (void)recreateExchangeServiceBinding;
- (id)parentACAccount;
- (void)dealloc;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

