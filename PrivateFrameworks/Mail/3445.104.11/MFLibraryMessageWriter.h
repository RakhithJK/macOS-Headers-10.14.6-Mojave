//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox, NSArray;
@protocol MFAddProgressMonitor;

@interface MFLibraryMessageWriter : NSObject
{
    NSArray *_remoteIDs;
    NSArray *_documentIDs;
    NSArray *_messageFlagsForMessages;
    NSArray *_updateRowIDs;
    BOOL _fetchBodies;
    BOOL _copyFiles;
    BOOL _isInitialImport;
    BOOL _isMailboxRebuild;
    NSArray *_messagesToWrite;
    MFMailbox *_destinationMailbox;
    id <MFAddProgressMonitor> _progressDelegate;
    CDUnknownBlockType _insertCompletionBlock;
    long long _messageFlagsToSet;
    long long _messageFlagsToClear;
    NSArray *_unsortedMessagesIndexesOrder;
}

@property(readonly, copy, nonatomic) NSArray *unsortedMessagesIndexesOrder; // @synthesize unsortedMessagesIndexesOrder=_unsortedMessagesIndexesOrder;
@property(nonatomic) long long messageFlagsToClear; // @synthesize messageFlagsToClear=_messageFlagsToClear;
@property(nonatomic) long long messageFlagsToSet; // @synthesize messageFlagsToSet=_messageFlagsToSet;
@property(copy, nonatomic) CDUnknownBlockType insertCompletionBlock; // @synthesize insertCompletionBlock=_insertCompletionBlock;
@property(retain, nonatomic) id <MFAddProgressMonitor> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) BOOL isMailboxRebuild; // @synthesize isMailboxRebuild=_isMailboxRebuild;
@property(nonatomic) BOOL isInitialImport; // @synthesize isInitialImport=_isInitialImport;
@property(nonatomic) BOOL copyFiles; // @synthesize copyFiles=_copyFiles;
@property(nonatomic) BOOL fetchBodies; // @synthesize fetchBodies=_fetchBodies;
@property(readonly, nonatomic) MFMailbox *destinationMailbox; // @synthesize destinationMailbox=_destinationMailbox;
@property(readonly, copy, nonatomic) NSArray *messagesToWrite; // @synthesize messagesToWrite=_messagesToWrite;
- (void).cxx_destruct;
- (void)_copyMessageAuxiliaryTables:(id)arg1 originalLibraryID:(long long)arg2 newLibraryID:(long long)arg3;
- (void)_cleanupTablesReferencingMessageID:(long long)arg1 preparedStatements:(id)arg2;
- (void)_garbageCollectSubject:(long long)arg1 sender:(long long)arg2 preparedStatements:(id)arg3;
- (BOOL)_canUseEmlxFileWhenCopyingMessage:(id)arg1 fromAccount:(id)arg2 toAccount:(id)arg3;
- (BOOL)_isLocalAccount:(id)arg1;
- (BOOL)_isLibraryMessage:(id)arg1;
- (BOOL)_isRemoteStoreAccount:(id)arg1;
- (unsigned long long)_bodiesAndFileLocationsAtIndexes:(id)arg1 messageBodiesByMessage:(id *)arg2 temporaryBodyURLsByMessage:(id *)arg3 fileLocationsByMessage:(id *)arg4 lastIndexOfSuccessfulMessage:(unsigned long long *)arg5;
- (id)writeMessagesWithError:(id *)arg1;
- (void)setMessageFlagsToSet:(long long)arg1 messageFlagsToClear:(long long)arg2;
@property(copy, nonatomic) NSArray *messageFlagsForMessages;
@property(copy, nonatomic) NSArray *updateRowIDs;
@property(copy, nonatomic) NSArray *documentIDs;
@property(copy, nonatomic) NSArray *remoteIDs;
- (id)init;
- (id)initWithMessagesToWrite:(id)arg1 destinationMailbox:(id)arg2;

@end

