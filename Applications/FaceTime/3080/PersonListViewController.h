//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CNAutocompleteFetchDelegate-Protocol.h"
#import "CNAutocompleteResultWindowDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "DFRControllerDelegate-Protocol.h"
#import "FTCallControllerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTokenFieldCellDelegate-Protocol.h"
#import "NSTokenFieldDelegate-Protocol.h"
#import "PersonTableRowViewDelegate-Protocol.h"
#import "PersonTableViewDelegate-Protocol.h"

@class CNAutocompleteResult, CNAutocompleteStore, CNContactPicker, CNExtendedAutocompleteResultWindow, FTCallController, FTRecentsController, IDSService, NSButton, NSButtonCell, NSHashTable, NSLayoutConstraint, NSMenu, NSMutableArray, NSMutableOrderedSet, NSScrollView, NSSegmentedControl, NSStackView, NSString, NSTimer, PersonTableView, RoundRectButton, TUSearchController, TUSearchResults;
@protocol CNCancelable;

@interface PersonListViewController : NSViewController <NSTokenFieldDelegate, NSTokenFieldCellDelegate, FTCallControllerDelegate, CNAutocompleteResultWindowDelegate, CNAutocompleteFetchDelegate, DFRControllerDelegate, PersonTableViewDelegate, NSTableViewDataSource, PersonTableRowViewDelegate, CNContactPickerDelegate, NSMenuDelegate>
{
    BOOL _firstSearchResultsFinishedLoading;
    BOOL _isAnimatingSegementedControl;
    BOOL _searchResultsChangedDuringAnimation;
    BOOL _hasAwokenFromNib;
    BOOL _userIsDeleting;
    BOOL _skipCompletionRebuilding;
    int _thermalToken;
    FTRecentsController *_recentsController;
    NSSegmentedControl *_filterRecentsSegmentedControl;
    PersonTableView *_tableView;
    NSScrollView *_scrollView;
    NSButton *_peoplePickerButton;
    NSLayoutConstraint *_segmentedControlTopConstraint;
    NSLayoutConstraint *_searchFieldTopConstraint;
    NSMenu *_contextualMenu;
    CNContactPicker *_contactPicker;
    NSStackView *_audioVideoStackView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    NSButtonCell *_audioButtonCell;
    NSButtonCell *_videoButtonCell;
    TUSearchController *_searchController;
    CDUnknownBlockType _searchCompletionBlock;
    CDUnknownBlockType _recentsCompletionBlock;
    TUSearchResults *_tokenResults;
    TUSearchResults *_searchResults;
    NSTimer *_reloadTableTimer;
    NSTimer *_reloadVisibleTableTimer;
    IDSService *_iMessageService;
    long long _previouslySelectedSegment;
    long long _previouslySelectedRow;
    RoundRectButton *_audioButton;
    RoundRectButton *_videoButton;
    FTCallController *_callController;
    NSMutableArray *_joinableConversations;
    NSString *_searchString;
    CNExtendedAutocompleteResultWindow *_completionWindow;
    CNAutocompleteStore *_autocompleteStore;
    id <CNCancelable> _currentFetchRequest;
    long long _completionWindowLevel;
    unsigned long long _tokenCount;
    NSHashTable *_tokenAttachmentCells;
    NSMutableArray *_autocompleteResults;
    NSMutableOrderedSet *_autoCompleteSearchResults;
    CNAutocompleteResult *_selectedCompletionResult;
}

+ (id)idsDestinationsForHandle:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) CNAutocompleteResult *selectedCompletionResult; // @synthesize selectedCompletionResult=_selectedCompletionResult;
@property(copy, nonatomic) NSMutableOrderedSet *autoCompleteSearchResults; // @synthesize autoCompleteSearchResults=_autoCompleteSearchResults;
@property(readonly, copy, nonatomic) NSMutableArray *autocompleteResults; // @synthesize autocompleteResults=_autocompleteResults;
@property(readonly, nonatomic) NSHashTable *tokenAttachmentCells; // @synthesize tokenAttachmentCells=_tokenAttachmentCells;
@property(nonatomic) unsigned long long tokenCount; // @synthesize tokenCount=_tokenCount;
@property(nonatomic) BOOL skipCompletionRebuilding; // @synthesize skipCompletionRebuilding=_skipCompletionRebuilding;
@property(nonatomic) long long completionWindowLevel; // @synthesize completionWindowLevel=_completionWindowLevel;
@property(nonatomic) BOOL userIsDeleting; // @synthesize userIsDeleting=_userIsDeleting;
@property(retain, nonatomic) id <CNCancelable> currentFetchRequest; // @synthesize currentFetchRequest=_currentFetchRequest;
@property(readonly, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(retain, nonatomic) CNExtendedAutocompleteResultWindow *completionWindow; // @synthesize completionWindow=_completionWindow;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) NSMutableArray *joinableConversations; // @synthesize joinableConversations=_joinableConversations;
@property(readonly, nonatomic) FTCallController *callController; // @synthesize callController=_callController;
@property(nonatomic) __weak RoundRectButton *videoButton; // @synthesize videoButton=_videoButton;
@property(nonatomic) __weak RoundRectButton *audioButton; // @synthesize audioButton=_audioButton;
@property(nonatomic) long long previouslySelectedRow; // @synthesize previouslySelectedRow=_previouslySelectedRow;
@property(nonatomic) long long previouslySelectedSegment; // @synthesize previouslySelectedSegment=_previouslySelectedSegment;
@property(retain, nonatomic) IDSService *iMessageService; // @synthesize iMessageService=_iMessageService;
@property(nonatomic) BOOL hasAwokenFromNib; // @synthesize hasAwokenFromNib=_hasAwokenFromNib;
@property(nonatomic) int thermalToken; // @synthesize thermalToken=_thermalToken;
@property BOOL searchResultsChangedDuringAnimation; // @synthesize searchResultsChangedDuringAnimation=_searchResultsChangedDuringAnimation;
@property BOOL isAnimatingSegementedControl; // @synthesize isAnimatingSegementedControl=_isAnimatingSegementedControl;
@property(retain, nonatomic) NSTimer *reloadVisibleTableTimer; // @synthesize reloadVisibleTableTimer=_reloadVisibleTableTimer;
@property(retain, nonatomic) NSTimer *reloadTableTimer; // @synthesize reloadTableTimer=_reloadTableTimer;
@property(retain, nonatomic) TUSearchResults *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) TUSearchResults *tokenResults; // @synthesize tokenResults=_tokenResults;
@property(copy, nonatomic) CDUnknownBlockType recentsCompletionBlock; // @synthesize recentsCompletionBlock=_recentsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType searchCompletionBlock; // @synthesize searchCompletionBlock=_searchCompletionBlock;
@property(retain, nonatomic) TUSearchController *searchController; // @synthesize searchController=_searchController;
@property __weak NSButtonCell *videoButtonCell; // @synthesize videoButtonCell=_videoButtonCell;
@property __weak NSButtonCell *audioButtonCell; // @synthesize audioButtonCell=_audioButtonCell;
@property __weak NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;
@property __weak NSStackView *audioVideoStackView; // @synthesize audioVideoStackView=_audioVideoStackView;
@property(retain, nonatomic) CNContactPicker *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) NSMenu *contextualMenu; // @synthesize contextualMenu=_contextualMenu;
@property(nonatomic) __weak NSLayoutConstraint *searchFieldTopConstraint; // @synthesize searchFieldTopConstraint=_searchFieldTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *segmentedControlTopConstraint; // @synthesize segmentedControlTopConstraint=_segmentedControlTopConstraint;
@property(nonatomic) __weak NSButton *peoplePickerButton; // @synthesize peoplePickerButton=_peoplePickerButton;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak PersonTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSSegmentedControl *filterRecentsSegmentedControl; // @synthesize filterRecentsSegmentedControl=_filterRecentsSegmentedControl;
@property(retain, nonatomic) FTRecentsController *recentsController; // @synthesize recentsController=_recentsController;
@property BOOL firstSearchResultsFinishedLoading; // @synthesize firstSearchResultsFinishedLoading=_firstSearchResultsFinishedLoading;
- (void).cxx_destruct;
- (void)handleFTRecentsControllerRecentCallsDidChangeNotification:(id)arg1;
- (void)DFRController:(id)arg1 selectedAutoCompleteAtIndex:(long long)arg2;
- (void)DFRController:(id)arg1 performedActionType:(unsigned long long)arg2 withData:(id)arg3;
- (void)_showConversationContactList:(id)arg1;
- (void)showHideStackView:(BOOL)arg1;
- (void)callControllerShouldReloadList:(id)arg1;
- (BOOL)isMultiwayAllowedForCurrentRecipients;
- (BOOL)isVideoAllowedForCurrentRecipients;
- (BOOL)isTelephonyAllowedForToken:(id)arg1;
- (BOOL)isAudioAllowedForCurrentRecipients;
- (void)controlTextDidChange:(id)arg1;
- (void)hideControlsForEmptySearchString;
- (void)conversationButtonPressed:(id)arg1;
- (id)tokenField;
- (id)contextualMenuItemsForConversation:(id)arg1;
- (id)contextualMenuItemsForSearchResult:(id)arg1;
- (id)_strippedPboardString:(id)arg1;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (struct _NSRange)rangeForUserCompletionInFieldEditor:(id)arg1;
- (id)autocompleteStringForFieldEditor:(id)arg1;
- (void)_registerTokenAttachmentCell:(id)arg1;
- (id)addressStringForResult:(id)arg1;
- (unsigned long long)indexOfSelectedCompletionResult;
- (void)_updateAutoCompleteUI;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)dismissCompletionUI;
- (id)handleForChosenCompletionResult:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)selectedResult:(id)arg1;
- (void)didSelectResult:(id)arg1;
- (void)selectCurrentResultUsingHighlightedResult;
- (BOOL)selectCurrentResult;
- (void)refreshDFRState;
- (void)showCompletions;
- (void)updateWindowLocation;
- (void)completionWindowDidResize:(id)arg1;
@property(readonly, nonatomic) BOOL showingCompletionWindow;
- (void)_startAutocompletion;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)faceTimeAudioMenuItemsForRowItem:(id)arg1;
- (void)updateAudioButtonMenu;
- (void)updateAudioVideoButtonState;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokensFromTokenField;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (id)createContactMenuItemForItem:(id)arg1;
- (id)ddMenuItemsForItem:(id)arg1;
- (void)showContactsPicker:(id)arg1;
- (void)focusSearchWithString:(id)arg1;
- (void)idsStatusChanged:(id)arg1;
- (void)callCapabilityDidChange:(id)arg1;
- (void)sideListHidden:(id)arg1;
- (void)resetView:(id)arg1;
- (void)contactStoreDidChange:(id)arg1;
- (void)unreadCallCountDidChange:(id)arg1;
- (void)recentPeopleDidChange:(id)arg1;
- (void)applicationActiveStateChanged:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)deleteHistoryForRowItem:(id)arg1;
- (void)menuShowContactCard:(id)arg1;
- (void)menuUnblockPerson:(id)arg1;
- (void)menuBlockPerson:(id)arg1;
- (void)menuRemoveAllPeopleFromRecents:(id)arg1;
- (void)menuRemovePersonFromRecents:(id)arg1;
- (void)menuMakePhoneCall:(id)arg1;
- (void)menuMakeFaceAudioCall:(id)arg1;
- (void)menuMakeFaceTimeCall:(id)arg1;
- (void)menuDeclineConversation:(id)arg1;
- (void)menuJoinConversation:(id)arg1;
- (void)_showContactCardForRowView:(id)arg1;
- (void)removeAllRecents;
- (void)showContactCardForCurrentlySelectedPerson;
- (struct CGRect)absolutePopoverRectForRect:(struct CGRect)arg1;
- (id)itemAtIndex:(long long)arg1;
- (id)itemAtClickedRow;
- (id)_immediateActionAnimationControllerForRowView:(id)arg1 recognizer:(id)arg2;
- (id)_findCreateContactMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)removeAllRecentsMenuItems;
- (id)contactPopoverMenuItemsForRowItem:(id)arg1;
- (id)blockUnblockMenuItemsForRowItem:(id)arg1;
- (id)removeFromRecentsMenuItemsForRowItem:(id)arg1;
- (id)faceTimeMenuItemsForRowItem:(id)arg1;
- (unsigned long long)menuItem:(id)arg1 preferredEdgeForPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (void)infoButtonPressed:(id)arg1;
- (void)telephonyButtonPressed:(id)arg1 request:(id)arg2;
- (void)videoButtonPressed:(id)arg1;
- (void)audioButtonPressed:(id)arg1;
- (void)tableView:(id)arg1 deleteRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)rowItemHasAudioSupport:(id)arg1;
- (BOOL)rowItemHasVideoSupport:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)doubleClickedRow:(id)arg1;
- (id)conversationForRowIndex:(id)arg1;
- (void)_makePhoneCallUsingItem:(id)arg1 number:(id)arg2 ttyType:(long long)arg3;
- (void)_makeFaceTimeCallUsingItem:(id)arg1 isAudio:(BOOL)arg2;
- (void)_makeFaceTimeCallUsingItems:(id)arg1 isAudio:(BOOL)arg2;
- (void)reloadVisibleTableTimerFired:(id)arg1;
- (void)reloadTableTimerFired:(id)arg1;
- (void)_updateJoinableConversations;
- (void)_updateNoRecentsView;
- (void)_showSpinner:(id)arg1;
- (void)_search:(id)arg1;
- (CDUnknownBlockType)searchCompletion;
- (CDUnknownBlockType)recentsCompletion;
- (void)_updateDFRStateForNoSelectionIfNecessary;
- (BOOL)_hasCall;
- (void)delayedReloadVisibleTableData;
- (void)delayedReloadTableData;
- (void)reloadTableDataWithResults:(id)arg1;
- (void)reloadTableData;
- (BOOL)isShowingSearchResults;
- (id)searchText;
- (void)search:(id)arg1;
- (void)markCurrentTabCallsAsRead;
- (BOOL)hasUnreadCallsForCurrentTab;
- (void)_updateTabUnreadCounts;
- (unsigned long long)callHistoryOptionsForSegment:(long long)arg1;
- (void)showSegmentedFilter:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)filterChange:(id)arg1;
- (void)videoButtonClicked:(id)arg1;
- (void)audioButtonClicked:(id)arg1;
- (void)makeFaceTimeCall:(BOOL)arg1;
- (void)viewWillAppear;
- (id)_view;
- (void)awakeFromNib;
- (void)dealloc;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

