//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMessageDataSource-Protocol.h"
#import "MessageListContentProviderDelegate-Protocol.h"

@class MFLibraryStore, MessageListContentProvider, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSPredicate, NSString, NSTimer;
@protocol MCMailAccount, MCMailbox, MessageListContentControllerDelegate;

@interface MessageListContentController : NSObject <MessageListContentProviderDelegate, MCMessageDataSource>
{
    BOOL _includeDeleted;
    BOOL _isInThreadedMode;
    BOOL _useLibraryIDNumbering;
    NSArray *_selectedMailboxes;
    NSArray *_expandedSelectedMailboxes;
    NSDictionary *_originalMessageByMessageID;
    NSDictionary *_messageCopiesByMessageID;
    BOOL _allMessagesLoaded;
    BOOL _inSearchMode;
    BOOL _isSortedAscending;
    BOOL _displayingToColumn;
    BOOL _wasPreviouslyOrderedAscending;
    BOOL _wasPreviouslyInThreadedMode;
    BOOL _wasPreviouslyIncludingDeleted;
    BOOL _messageListItemsCanIncludeSortView;
    BOOL _messageListItemsCanIncludeTopHits;
    BOOL _messageListHasSearchProgressView;
    BOOL _forceSearchProgressDisplayVisible;
    BOOL _toggleSearchProgressDisplayVisible;
    BOOL _toggleSearchProgressDisplayState;
    BOOL _searchProgressDisplayDidDeferFinishTaskWithInfo;
    BOOL _searchProgressDisplayDidDeferProviderCompletion;
    id <MessageListContentControllerDelegate> _delegate;
    unsigned long long _totalMessageCount;
    NSArray *_messageListItems;
    NSString *_sortOrder;
    long long _activeSearchField;
    long long _activeSearchTarget;
    NSMutableDictionary *_currentProviders;
    NSMutableDictionary *_bufferedProviders;
    NSMutableDictionary *_pendingProviders;
    NSMutableArray *_deferredTopHitsActions;
    NSString *_lastQueryStringFragment;
    NSString *_previousSortOrder;
    NSPredicate *_previousFilterPredicate;
    MFLibraryStore *_searchStore;
    MFLibraryStore *_topHitsSearchStore;
    NSString *_secondarySortOrder;
    NSPredicate *_primitiveFilterPredicate;
    NSMutableDictionary *_pendingMessageListItemsByProviderType;
    NSMutableDictionary *_messageListItemsByProviderType;
    NSTimer *_searchProgressDisplayTimer;
}

+ (id)expandedMailboxes:(id)arg1;
+ (void)initialize;
+ (id)log;
@property(nonatomic) BOOL searchProgressDisplayDidDeferProviderCompletion; // @synthesize searchProgressDisplayDidDeferProviderCompletion=_searchProgressDisplayDidDeferProviderCompletion;
@property(nonatomic) BOOL searchProgressDisplayDidDeferFinishTaskWithInfo; // @synthesize searchProgressDisplayDidDeferFinishTaskWithInfo=_searchProgressDisplayDidDeferFinishTaskWithInfo;
@property(nonatomic) BOOL toggleSearchProgressDisplayState; // @synthesize toggleSearchProgressDisplayState=_toggleSearchProgressDisplayState;
@property(nonatomic) BOOL toggleSearchProgressDisplayVisible; // @synthesize toggleSearchProgressDisplayVisible=_toggleSearchProgressDisplayVisible;
@property(nonatomic) BOOL forceSearchProgressDisplayVisible; // @synthesize forceSearchProgressDisplayVisible=_forceSearchProgressDisplayVisible;
@property(retain, nonatomic) NSTimer *searchProgressDisplayTimer; // @synthesize searchProgressDisplayTimer=_searchProgressDisplayTimer;
@property(nonatomic) BOOL messageListHasSearchProgressView; // @synthesize messageListHasSearchProgressView=_messageListHasSearchProgressView;
@property(nonatomic) BOOL messageListItemsCanIncludeTopHits; // @synthesize messageListItemsCanIncludeTopHits=_messageListItemsCanIncludeTopHits;
@property(nonatomic) BOOL messageListItemsCanIncludeSortView; // @synthesize messageListItemsCanIncludeSortView=_messageListItemsCanIncludeSortView;
@property(retain, nonatomic) NSMutableDictionary *messageListItemsByProviderType; // @synthesize messageListItemsByProviderType=_messageListItemsByProviderType;
@property(retain, nonatomic) NSMutableDictionary *pendingMessageListItemsByProviderType; // @synthesize pendingMessageListItemsByProviderType=_pendingMessageListItemsByProviderType;
@property(retain, nonatomic) NSPredicate *primitiveFilterPredicate; // @synthesize primitiveFilterPredicate=_primitiveFilterPredicate;
@property(copy, nonatomic) NSString *secondarySortOrder; // @synthesize secondarySortOrder=_secondarySortOrder;
@property(retain, nonatomic) MFLibraryStore *topHitsSearchStore; // @synthesize topHitsSearchStore=_topHitsSearchStore;
@property(retain, nonatomic) MFLibraryStore *searchStore; // @synthesize searchStore=_searchStore;
@property(nonatomic) BOOL wasPreviouslyIncludingDeleted; // @synthesize wasPreviouslyIncludingDeleted=_wasPreviouslyIncludingDeleted;
@property(nonatomic) BOOL wasPreviouslyInThreadedMode; // @synthesize wasPreviouslyInThreadedMode=_wasPreviouslyInThreadedMode;
@property(nonatomic) BOOL wasPreviouslyOrderedAscending; // @synthesize wasPreviouslyOrderedAscending=_wasPreviouslyOrderedAscending;
@property(retain, nonatomic) NSPredicate *previousFilterPredicate; // @synthesize previousFilterPredicate=_previousFilterPredicate;
@property(copy, nonatomic) NSString *previousSortOrder; // @synthesize previousSortOrder=_previousSortOrder;
@property(copy, nonatomic) NSString *lastQueryStringFragment; // @synthesize lastQueryStringFragment=_lastQueryStringFragment;
@property(retain, nonatomic) NSMutableArray *deferredTopHitsActions; // @synthesize deferredTopHitsActions=_deferredTopHitsActions;
@property(retain, nonatomic) NSMutableDictionary *pendingProviders; // @synthesize pendingProviders=_pendingProviders;
@property(retain, nonatomic) NSMutableDictionary *bufferedProviders; // @synthesize bufferedProviders=_bufferedProviders;
@property(retain, nonatomic) NSMutableDictionary *currentProviders; // @synthesize currentProviders=_currentProviders;
@property(nonatomic) BOOL displayingToColumn; // @synthesize displayingToColumn=_displayingToColumn;
@property(nonatomic) long long activeSearchTarget; // @synthesize activeSearchTarget=_activeSearchTarget;
@property(nonatomic) long long activeSearchField; // @synthesize activeSearchField=_activeSearchField;
@property(nonatomic) BOOL isSortedAscending; // @synthesize isSortedAscending=_isSortedAscending;
@property(copy, nonatomic) NSString *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy, nonatomic) NSArray *messageListItems; // @synthesize messageListItems=_messageListItems;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) BOOL inSearchMode; // @synthesize inSearchMode=_inSearchMode;
@property(nonatomic) BOOL allMessagesLoaded; // @synthesize allMessagesLoaded=_allMessagesLoaded;
@property(nonatomic) __weak id <MessageListContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)sizeForMessage:(id)arg1;
- (long long)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3;
- (id)originalOfMessage:(id)arg1;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (id)threadForMessage:(id)arg1;
- (BOOL)messageIsPartOfAThread:(id)arg1;
- (id)parentOfMessage:(id)arg1;
- (id)repliesToMessage:(id)arg1;
- (void)_deferOrExecuteAction:(CDUnknownBlockType)arg1 forProvider:(id)arg2;
- (void)messageListContentProviderConversationsUpdated:(id)arg1;
- (void)messageListContentProviderDidFinishLoading:(id)arg1;
- (void)_handleMessageListContentProviderDidFinishLoading:(id)arg1;
- (void)_handleMessageListContentProvider:(id)arg1 didFinishTaskWithInfo:(id)arg2 taskID:(id)arg3;
- (void)messageListContentProvider:(id)arg1 didFinishTaskWithInfo:(id)arg2 taskID:(id)arg3;
- (void)_adjustContentChangeIndexesForTaskInfo:(id)arg1 providerType:(long long)arg2;
- (BOOL)_requiresReloadAfterUpdateToTaskInfo:(id)arg1 providerType:(long long)arg2 performIncrementalUpdate:(BOOL)arg3;
- (unsigned long long)_indexAdjustmentDeltaForContentProviderType:(long long)arg1;
- (unsigned long long)_indexAdjustmentDeltaForTopHitsContentProviderIncludingMessageCount:(BOOL)arg1;
- (void)getIndexesOfMessages:(id)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)closeAllThreads;
- (void)openAllThreads;
- (void)closeThread:(id)arg1 atIndex:(unsigned long long)arg2 selectThread:(BOOL)arg3;
- (void)openThread:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)needTo;
- (void)toggleThreadedMode;
@property(nonatomic) BOOL isInThreadedMode;
@property(readonly, nonatomic) BOOL isInThreadedModeExcludingSearch;
@property(readonly, nonatomic) BOOL isStillSearching;
- (id)uniquedString:(id)arg1;
- (void)flushAllCaches;
- (void)invalidateMessage:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;
- (void)doCompact;
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;
- (BOOL)undeleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)saveSnippetsForMessages:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7;
- (id)messageForMessageID:(id)arg1;
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly) BOOL isReadOnly;
@property(readonly, copy, nonatomic) NSArray *expandedSelectedMailboxesAllowingSearch;
@property(readonly, copy, nonatomic) NSArray *expandedSelectedMailboxes;
@property(readonly, copy, nonatomic) NSArray *selectedMailboxes;
@property(readonly, copy, nonatomic) NSArray *allMailboxes;
@property(readonly, nonatomic) NSArray *searchStores;
- (id)_searchStoreWithName:(id)arg1 isTopHits:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSArray *stores;
- (id)_storesToRebuild;
- (void)rebuildTableOfContentsAsynchronously;
@property(readonly, nonatomic) BOOL canRebuild;
@property(readonly, nonatomic) BOOL canCompact;
- (void)unhideMessages:(id)arg1;
- (void)hideMessages:(id)arg1 selectingNextMessage:(id)arg2 withAnimationOptions:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) BOOL messageListHasTopHits;
- (id)_searchScopeMailboxesForCriterion:(id)arg1;
- (BOOL)_messageListShouldShowTopHitsForCriterion:(id)arg1;
@property(readonly, nonatomic) unsigned long long unreadCount;
- (void)setMailboxes:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 includeDeleted:(BOOL)arg5 initialViewingState:(id)arg6 filterPredicate:(id)arg7;
@property(retain, nonatomic) NSPredicate *filterPredicate;
- (BOOL)isSortedByDateReceived;
@property(nonatomic) BOOL includeDeleted;
- (void)setSortOrder:(id)arg1 ascending:(BOOL)arg2 viewingState:(id)arg3;
@property(readonly, nonatomic) BOOL selectionIncludesSmartMailbox;
@property(readonly, copy, nonatomic) NSArray *openThreads;
- (void)refreshMessageListItems;
- (void)_updateMessageListItemsForProviderType:(long long)arg1;
- (BOOL)_shouldIncludeSearchProgressView;
- (id)messageListItemsInRange:(struct _NSRange)arg1;
- (id)messageListItemsAtIndexes:(id)arg1;
- (void)_setMessages:(id)arg1 forProviderType:(long long)arg2;
- (void)_setPendingMessageListItems:(id)arg1 forProviderType:(long long)arg2;
- (unsigned long long)_countOfMessagesForProviderType:(long long)arg1;
- (id)messageThreadAtIndex:(unsigned long long)arg1;
- (id)messageAtIndex:(unsigned long long)arg1;
- (id)messageListItemAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *allMessages;
- (BOOL)supportsSearching;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldShowRecipientForMailboxes:(id)arg1;
- (id)criterionForAttachmentType:(id)arg1;
- (id)queryStringFragmentFromSuggestions:(id)arg1;
- (void)searchForSuggestions:(id)arg1 in:(long long)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4 isInThreadedMode:(BOOL)arg5 viewingState:(id)arg6 filterPredicate:(id)arg7;
- (void)clearPreviousQueryString;
- (void)_searchForCriterion:(id)arg1 isInThreadedMode:(BOOL)arg2 viewingState:(id)arg3 filterPredicate:(id)arg4 searchPhrase:(id)arg5;
- (void)_clearTopHitsState;
- (void)clearSearchWithViewingState:(id)arg1;
- (void)_validateTableViewMessageListItemsCountWithIdentifier:(id)arg1;
- (id)_providerAtIndex:(unsigned long long)arg1;
- (void)_clearPendingProvider:(id)arg1;
- (long long)_typeForCurrentProvider:(id)arg1;
- (long long)_typeForBufferedProvider:(id)arg1;
- (id)_bufferedProviderForType:(long long)arg1;
@property(readonly, nonatomic) MessageListContentProvider *topHitsProvider;
@property(readonly, nonatomic) MessageListContentProvider *mainProvider;
- (void)_clearProvidersForType:(long long)arg1;
- (void)_makeBufferedProviderCurrentForType:(long long)arg1;
- (void)_setBufferedProvider:(id)arg1 forType:(long long)arg2;
- (void)_doBackgroundReleaseHackForObject:(id)arg1;
- (void)_updateSearchProgressDisplayVisibility;
- (void)_searchProgressDisplayTimerDidFire:(id)arg1;
- (void)_stopSearchProgressDisplayTimer;
- (void)_startSearchProgressDisplayTimer;
- (void)unregisterForNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

