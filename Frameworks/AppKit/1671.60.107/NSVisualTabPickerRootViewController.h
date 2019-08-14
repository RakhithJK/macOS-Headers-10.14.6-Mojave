//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppKit/NSVisualTabPickerGridViewDataSource-Protocol.h>
#import <AppKit/NSVisualTabPickerGridViewDelegate-Protocol.h>
#import <AppKit/NSVisualTabPickerSearchFieldDelegate-Protocol.h>

@class NSArray, NSImage, NSOperationQueue, NSString, NSVisualTabPickerRootView;
@protocol NSVisualTabPickerDelegate;

__attribute__((visibility("hidden")))
@interface NSVisualTabPickerRootViewController : NSViewController <NSVisualTabPickerSearchFieldDelegate, NSVisualTabPickerGridViewDataSource, NSVisualTabPickerGridViewDelegate>
{
    NSVisualTabPickerRootView *_rootView;
    NSArray *_orderedTabViewItems;
    NSArray *_filteredTabViewItems;
    NSOperationQueue *_filterQueue;
    NSString *_searchText;
    BOOL _isPostponingClosingVisualTabPickerWhenNewTabIsInserted;
    BOOL _didReportPerformSearch;
    BOOL _isClosingBySelectingOrCreatingTab;
    id <NSVisualTabPickerDelegate> _delegate;
    BOOL _shouldStackThumbnails;
    BOOL _tabsShouldBeClosable;
    BOOL _addingNewTab;
    NSImage *_tabBarSnapshot;
    NSImage *_sidebarSnapshot;
    BOOL _shouldShowNewTabButton;
    BOOL _shouldHighlightTiles;
    BOOL _shouldShowCloseButtons;
    BOOL _isClosing;
}

+ (id)springAnimationForVisualTabPicker;
@property BOOL isClosing; // @synthesize isClosing=_isClosing;
@property(nonatomic) BOOL shouldShowCloseButtons; // @synthesize shouldShowCloseButtons=_shouldShowCloseButtons;
@property(nonatomic) BOOL shouldHighlightTiles; // @synthesize shouldHighlightTiles=_shouldHighlightTiles;
@property(nonatomic) BOOL shouldShowNewTabButton; // @synthesize shouldShowNewTabButton=_shouldShowNewTabButton;
@property(retain, nonatomic) NSImage *sidebarSnapshot; // @synthesize sidebarSnapshot=_sidebarSnapshot;
@property(retain, nonatomic) NSImage *tabBarSnapshot; // @synthesize tabBarSnapshot=_tabBarSnapshot;
@property(readonly, nonatomic, getter=isAddingNewTab) BOOL addingNewTab; // @synthesize addingNewTab=_addingNewTab;
@property(nonatomic) BOOL tabsShouldBeClosable; // @synthesize tabsShouldBeClosable=_tabsShouldBeClosable;
@property(nonatomic) BOOL shouldStackThumbnails; // @synthesize shouldStackThumbnails=_shouldStackThumbnails;
@property(nonatomic) __weak id <NSVisualTabPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateTabsShouldBeClosable;
- (void)tabPickerItemsDidChange;
- (id)_tabFilterInfoForOrderedTabs;
- (void)_resetFilterState;
- (BOOL)_doesSearchResultsContainSelectedTab;
- (void)_performAsynchronousFilter;
- (void)_reloadGridView;
- (void)_reloadLocalTabData;
- (id)_filterObjectsInArray:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)visualTabPickerSearchFieldTextDidChange:(id)arg1;
- (void)_updateSearchTextWithValue:(id)arg1;
- (void)_resetSearch;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)visualTabPickerGridViewCloseTabViewItem:(id)arg1;
- (void)visualTabPickerGridView:(id)arg1 selectTab:(id)arg2;
- (void)createNewTabForVisualTabPickerGridView:(id)arg1;
- (BOOL)canCloseTabsInVisualTabPickerGridView:(id)arg1;
- (id)visualTabPickerGridView:(id)arg1 thumbnailViewForTabItem:(id)arg2;
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(id)arg1;
- (id)selectedTabItemInVisualTabPickerGridView:(id)arg1;
- (id)orderedTabItemsInVisualTabPickerGridView:(id)arg1;
- (BOOL)isSearching;
- (void)focusSearchField;
- (struct CGRect)contentLayoutRect;
- (void)selectTabBarItem:(id)arg1;
- (void)reloadTabBarItem:(id)arg1;
- (void)didInsertTabBarItem:(id)arg1;
- (void)willInsertTabBarItem;
- (void)postponeClosingVisualTabPickerWhenNewTabIsInserted;
- (unsigned long long)indexOfSelectedTab;
- (BOOL)shouldStackMultipleThumbnailsInOneContainerIfPossible;
- (BOOL)shouldDisplayRealWebViews;
- (BOOL)entryOrExitAnimationInProgress;
- (void)startEntryAnimation;
- (void)removeVisualTabPickerFromViewHierarchy;
- (void)closeVisualTabPickerAnimated:(BOOL)arg1;
- (void)closeVisualTabPicker;
- (void)_cancelSearchAndCloseAfterDelay;
- (double)tabPickerAnimationDuration;
- (void)dealloc;
- (void)loadView;
- (id)_makeTabPickerBackdropVisualEffectViewWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

