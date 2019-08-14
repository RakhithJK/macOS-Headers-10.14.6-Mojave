//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowTabGroup.h>

#import <AppKit/NSTabBarDelegate-Protocol.h>
#import <AppKit/NSTabPickerDelegate-Protocol.h>

@class NSMenu, NSMutableArray, NSMutableDictionary, NSString, NSTabBar, NSTabPickerViewController, NSWindow, NSWindowTab, _NSFullScreenModalStackController;

__attribute__((visibility("hidden")))
@interface NSWindowStackController : NSWindowTabGroup <NSTabBarDelegate, NSTabPickerDelegate>
{
    NSMutableArray *_syncedItems;
    NSString *_stateIdentifier;
    NSMutableDictionary *_talTabbingOrder;
    NSTabBar *_tabBar;
    NSWindow *_minimizedWindow;
    NSWindow *_windowBeingRemoved;
    NSWindow *_windowBeingDragged;
    NSMenu *_tabItemMenu;
    NSMenu *_pinnedTabItemMenu;
    NSTabPickerViewController *_tabPickerViewController;
    NSWindowTab *_plusTab;
    _NSFullScreenModalStackController *_fullScreenModalStackController;
    unsigned int _doingClose:1;
    unsigned int _inFullScreen:1;
    unsigned int _changingSelection:1;
    unsigned int _shouldAnimate:1;
}

+ (void)enableTabBar;
+ (void)disableTabBar;
+ (void)setTabPlusButtonWasClicked:(BOOL)arg1;
+ (BOOL)tabPlusButtonWasClicked;
+ (void)didFinishRestoring;
+ (BOOL)mergeAllWindowsWithWindow:(id)arg1;
+ (void)moveWindow:(id)arg1 toModalStackController:(id)arg2;
+ (BOOL)_tabBarIsVisibleForIdentifier:(id)arg1;
+ (id)topStackController;
+ (id)findStackControllerForIdentifier:(id)arg1 stateIdentifier:(id)arg2;
+ (void)setupStackControllerForWindow:(id)arg1 attemptToJoinExistingStack:(BOOL)arg2 makeIfNeeded:(BOOL)arg3;
+ (void)setupStackControllerIfTabBarShownForWindow:(id)arg1;
+ (BOOL)canJoinExistingStackForWindow:(id)arg1;
@property(readonly) __weak NSWindow *windowBeingDragged; // @synthesize windowBeingDragged=_windowBeingDragged;
@property(copy) NSString *stateIdentifier; // @synthesize stateIdentifier=_stateIdentifier;
@property __weak _NSFullScreenModalStackController *fullScreenModalStackController; // @synthesize fullScreenModalStackController=_fullScreenModalStackController;
- (void).cxx_destruct;
- (void)reattachFullScreenModalTabBar;
- (id)detachedFullScreenModalTabBar;
- (void)setOverviewVisible:(BOOL)arg1;
- (BOOL)isOverviewVisible;
@property BOOL shouldAnimate; // @dynamic shouldAnimate;
- (void)_closeTabPickerAnimated:(BOOL)arg1;
- (void)_openTabPickerAnimated:(BOOL)arg1;
- (void)_syncInactiveTabWindowSizesForSnapshot;
- (void)_moveTabPickerToWindow:(id)arg1;
- (void)_addTabPickerView:(id)arg1 toWindow:(id)arg2;
- (void)_removeTabPickerFromWindow:(id)arg1;
- (void)_ensureTabPickerViewController;
- (void)tabPickerDidOpen:(id)arg1;
- (void)tabPickerWillOpen:(id)arg1;
- (void)tabPickerDidClose:(id)arg1;
- (void)tabPickerWillClose:(id)arg1;
- (void)_sendTabOverviewIsVisibleDidChange;
- (id)tabPicker:(id)arg1 thumbnailViewForTabItem:(id)arg2;
- (id)tabBarSnapshotForTabPicker:(id)arg1;
- (id)tabPickerItemsForTabPicker:(id)arg1;
- (id)tabPickerCurrentlySelectedTabItem:(id)arg1;
- (id)tabPickerCreatingNewTabItem:(id)arg1;
- (id)tabPicker:(id)arg1 nextTabPickerItemAfterClosingItem:(id)arg2;
- (void)tabPicker:(id)arg1 didSelectTabItemWhenClosing:(id)arg2;
- (void)_checkIfWindowWasClosedByTabPicker:(id)arg1;
- (void)tabPicker:(id)arg1 closeTabBarItem:(id)arg2;
- (id)plusTab;
- (id)_tabBar;
- (void)setTabBarEnabled:(BOOL)arg1;
- (BOOL)isTabBarEnabled;
- (void)createNewTabInTabBar:(id)arg1;
- (void)didExitFullScreenForWindow:(id)arg1;
- (void)willEnterFullScreenForWindow:(id)arg1;
- (void)didEnterFullScreenForWindow:(id)arg1;
- (void)setTALTabIndex:(long long)arg1 forWindow:(id)arg2;
- (struct CGRect)tabRectForWindow:(id)arg1;
- (long long)tabIndexForWindow:(id)arg1;
- (void)moveTabToNewWindow:(id)arg1;
- (void)unpinTabForWindow:(id)arg1;
- (void)pinTabForWindow:(id)arg1;
- (long long)_onePastLastPinnedTab;
- (BOOL)_animateTabMergeOfWindowsFromTargetWindow:(id)arg1;
- (BOOL)_regularTabMergeOfWindowsFromTargetWindow:(id)arg1;
- (void)_enumerateTabMergableWindows:(CDUnknownBlockType)arg1 targetWindow:(id)arg2;
- (void)_doDockWindowMinimizeOfSelectedWindow;
- (BOOL)handleDeminimizingWindow:(id)arg1;
- (void)didFinishDeminiaturizeWindow:(id)arg1;
- (BOOL)handleMinimizingWindow:(id)arg1;
- (BOOL)tabBar:(id)arg1 canCloseTabBarViewItem:(id)arg2;
- (BOOL)tabBar:(id)arg1 droppedWindowTabShouldMoveToSpace:(long long)arg2;
- (BOOL)tabBarCanDragItems:(id)arg1;
- (void)tabBar:(id)arg1 showWindowForDraggingItemAtIndex:(unsigned long long)arg2;
- (void)tabBar:(id)arg1 hideWindowForDraggingItemAtIndex:(unsigned long long)arg2;
- (void)tabBar:(id)arg1 didFinishTransitionAnimationForWindow:(id)arg2;
- (id)tabBar:(id)arg1 destinationWindowForDetachedTabBarViewItem:(id)arg2;
- (id)tabBar:(id)arg1 detachedWindowImageForDraggedTabBarViewItem:(id)arg2;
- (BOOL)tabBar:(id)arg1 acceptDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBar:(id)arg1 validateDrop:(id)arg2;
- (BOOL)tabBar:(id)arg1 acceptTabDrop:(id)arg2 index:(unsigned long long)arg3;
- (void)beginNextSheetAfterWindow:(id)arg1;
- (void)moveWindow:(id)arg1 toWindowStackController:(id)arg2 atIndex:(long long)arg3;
- (BOOL)_insertDraggedItemAtIndex:(unsigned long long)arg1 fromController:(id)arg2 sourceIndex:(unsigned long long)arg3;
- (unsigned long long)tabBar:(id)arg1 validateTabDrop:(id)arg2;
- (id)tabBar:(id)arg1 menuForTabBarViewItem:(id)arg2 event:(id)arg3;
- (id)_currentTabMenuTargetedForWindow:(id)arg1;
- (void)tabBar:(id)arg1 didMoveTabBarViewItem:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 isChangingPinnedness:(BOOL)arg5;
- (void)_moveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)performCloseAllWindowsExcept:(id)arg1;
- (void)tabBar:(id)arg1 closeTabBarViewItem:(id)arg2;
- (void)_closeAllWindowsExceptItemAtIndex:(long long)arg1;
- (void)_doCloseButtonCloseOnWindow:(id)arg1 withHighlight:(BOOL)arg2;
- (void)_closeWindowAtIndex:(long long)arg1;
- (BOOL)attemptToCloseEntireStack:(id)arg1;
- (void)_selectWindowWithoutOrderingFront:(id)arg1;
- (id)selectedTabBarViewItemAfterClosingCurrentTabInTabBar:(id)arg1;
- (void)tabBar:(id)arg1 selectTabBarViewItem:(id)arg2;
- (void)_doTabSelectionAndWindowOrderingAtIndex:(unsigned long long)arg1 makeKeyAndOrderFront:(BOOL)arg2 justOrderFront:(BOOL)arg3;
- (void)_doWindowOrderingToSwapPriorWindow:(id)arg1 withNewWindow:(id)arg2;
- (void)_ensureWindowHasTabBar:(id)arg1;
- (void)_exitWindowFromFullScreenIfNeeded:(id)arg1 basedOnWindow:(id)arg2;
- (void)_enterWindow:(id)arg1 intoFullScreenWithWindow:(id)arg2;
- (void)_doTabSelectionAndWindowOrderingAtIndex:(unsigned long long)arg1;
- (void)selectPreviousTab;
- (void)selectNextTab;
- (void)setSelectedTabButtonIndex:(unsigned long long)arg1;
- (unsigned long long)selectedTabButtonIndex;
- (id)_windowYankedOutIntoNewControllerFromIndex:(long long)arg1;
- (void)_yankWindowFromIndex:(long long)arg1;
- (void)_removeSyncedItemAtIndex:(unsigned long long)arg1;
- (void)_selectNextTabWhenRemovingTabAtIndex:(unsigned long long)arg1;
- (unsigned long long)_nextSelectedIndexAfterRemovingIndex:(unsigned long long)arg1;
- (id)nextWindowToSelectAfterClosingWindow:(id)arg1;
- (void)_removeSyncedTabBarItem:(id)arg1;
- (id)_wrapperForTabBarItem:(id)arg1;
- (unsigned long long)_indexOfWrapperForTabBarItem:(id)arg1;
- (id)_syncedWrapperForTabBarItem:(id)arg1;
- (void)_noteTabbingChangedForWindow:(id)arg1;
- (void)_addSyncedTabBarItemForWindow:(id)arg1 atIndex:(long long)arg2;
- (BOOL)_shouldAnimateTabInsertion;
- (BOOL)_tabPickerIsVisible;
- (BOOL)_tabBarShouldBeVisible;
@property(getter=isTabBarVisible) BOOL tabBarVisible;
- (void)_setTabBarIsVisible:(BOOL)arg1 force:(BOOL)arg2;
@property BOOL shouldShowTabBarWithOneItem; // @dynamic shouldShowTabBarWithOneItem;
- (id)_shouldShowTabBarKey;
- (id)_selectedWindow;
- (id)initWithTabbingIdentifier:(id)arg1;
- (void)removeWindow:(id)arg1;
@property(readonly) long long numberOfTabs;
- (long long)windowCount;
- (id)windows;
@property NSWindow *selectedWindow; // @dynamic selectedWindow;
- (void)makeActiveStack;
- (void)insertWindow:(id)arg1 atIndex:(long long)arg2;
- (void)addWindow:(id)arg1;
- (id)_windowForTabViewItem:(id)arg1;
- (void)syncToolbarsBasedOnWindow:(id)arg1;
- (void)_syncToolbarOfWindow:(id)arg1 withPropertiesOfWindow:(id)arg2;
- (void)_removeTabBarAccessoryViewControllerForWindow:(id)arg1;
- (void)_ensureAccessoryViewControllerExistsForWindow:(id)arg1;
- (void)_ensureTabBarBasedOnWindow:(id)arg1;
- (void)windowDidGainToolbar:(id)arg1;
- (void)_makeTabBarForWindow:(id)arg1 visible:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

