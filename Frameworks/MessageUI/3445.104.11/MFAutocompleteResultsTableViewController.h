//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, UIColor, _MFAutocompleteResultsTableViewModel;
@protocol MFAutocompleteResultsTableViewControllerDelegate;

@interface MFAutocompleteResultsTableViewController : UITableViewController
{
    NSMutableArray *_searchResults;
    NSMutableArray *_suggestedSearchResults;
    NSMutableArray *_serverSearchResults;
    _MFAutocompleteResultsTableViewModel *_tableViewModel;
    BOOL _tableViewNeedsReload;
    BOOL _cellAnimationsEnabled;
    BOOL _deferTableViewUpdates;
    BOOL _shouldHighlightCompleteMatches;
    BOOL _shouldDimIrrelevantInformation;
    UIColor *_cellBackgroundColor;
    id <MFAutocompleteResultsTableViewControllerDelegate> _delegate;
}

+ (id)cellBackgroundColorForPopoverDisplay;
+ (id)cellBackgroundColorForInlineDisplay;
@property(nonatomic) BOOL shouldDimIrrelevantInformation; // @synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation;
@property(nonatomic) BOOL shouldHighlightCompleteMatches; // @synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches;
@property(nonatomic, getter=isDeferringTableViewUpdates) BOOL deferTableViewUpdates; // @synthesize deferTableViewUpdates=_deferTableViewUpdates;
@property(nonatomic, getter=areCellAnimationsEnabled) BOOL cellAnimationsEnabled; // @synthesize cellAnimationsEnabled=_cellAnimationsEnabled;
@property(nonatomic) id <MFAutocompleteResultsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(readonly, nonatomic) NSArray *directoryServerRecipients; // @synthesize directoryServerRecipients=_serverSearchResults;
@property(readonly, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedSearchResults;
@property(readonly, nonatomic) NSArray *contactRecipients; // @synthesize contactRecipients=_searchResults;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (Class)recipientTableViewCellClass;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)_tableViewHeaderHeight;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (void)_selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (id)_recipientAtIndexPath:(id)arg1;
- (id)_indexPathForRecipient:(id)arg1;
- (unsigned long long)numberOfResults;
- (BOOL)containsRecipient:(id)arg1;
@property(readonly, nonatomic) NSArray *allRecipients;
- (id)_combinedResults;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clear;
- (void)resetScrollPosition;
- (BOOL)confirmSelectedRecipient;
- (void)selectPreviousSearchResult;
- (void)selectNextSearchResult;
- (id)_flattenedIndexPaths;
- (void)presentSearchResults:(id)arg1;
- (void)_updateTableViewModelAnimated:(BOOL)arg1;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)dealloc;

@end

