//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Automator/NSSplitViewDelegate-Protocol.h>

@class AMDescriptionViewController, AMGlossyStatusView, AMGradientBackgroundView, AMLibrary, AMLibraryOutlineView, AMLibraryTableView, AMSmartGroupsController, AMSplitView, NSArray, NSArrayController, NSButton, NSMenu, NSOutlineView, NSPopUpButton, NSSearchField, NSString, NSTabView, NSTableView, NSTreeController, NSView;

@interface AMLibraryViewController : NSViewController <NSSplitViewDelegate>
{
    AMGradientBackgroundView *_headerBackgroundView;
    NSSearchField *_searchField;
    NSButton *_actionsButton;
    NSButton *_variablesButton;
    NSTabView *_tabView;
    AMSplitView *_actionsMajorSplitView;
    AMSplitView *_actionsMinorSplitView;
    AMSplitView *_variablesMajorSplitView;
    AMSplitView *_variablesMinorSplitView;
    AMLibraryOutlineView *_actionsOutlineView;
    NSTreeController *_actionsTreeController;
    AMLibraryTableView *_actionsTableView;
    NSArrayController *_actionsArrayController;
    AMLibraryOutlineView *_variablesOutlineView;
    NSTreeController *_variablesTreeController;
    AMLibraryTableView *_variablesTableView;
    NSArrayController *_variablesArrayController;
    NSView *_actionDescriptionViewContainer;
    NSView *_variableDescriptionViewContainer;
    AMGlossyStatusView *_statusView;
    NSPopUpButton *_libraryMenuButton;
    NSMenu *_libraryMenu;
    NSButton *_toggleDescriptionButton;
    NSArray *_draggedGroups;
    NSArray *_draggedAssets;
    AMSmartGroupsController *_smartGroupsController;
    AMDescriptionViewController *_actionDescriptionViewController;
    AMDescriptionViewController *_variableDescriptionViewController;
    struct __AMLibraryViewFlags _libraryViewFlags;
}

@property struct __AMLibraryViewFlags libraryViewFlags; // @synthesize libraryViewFlags=_libraryViewFlags;
@property(retain) AMDescriptionViewController *variableDescriptionViewController; // @synthesize variableDescriptionViewController=_variableDescriptionViewController;
@property(retain) AMDescriptionViewController *actionDescriptionViewController; // @synthesize actionDescriptionViewController=_actionDescriptionViewController;
@property __weak NSButton *_toggleDescriptionButton; // @synthesize _toggleDescriptionButton;
@property __weak NSMenu *_libraryMenu; // @synthesize _libraryMenu;
@property __weak NSPopUpButton *_libraryMenuButton; // @synthesize _libraryMenuButton;
@property __weak AMGlossyStatusView *_statusView; // @synthesize _statusView;
@property __weak NSView *_variableDescriptionViewContainer; // @synthesize _variableDescriptionViewContainer;
@property __weak NSView *_actionDescriptionViewContainer; // @synthesize _actionDescriptionViewContainer;
@property __weak NSArrayController *_variablesArrayController; // @synthesize _variablesArrayController;
@property __weak AMLibraryTableView *_variablesTableView; // @synthesize _variablesTableView;
@property __weak NSTreeController *_variablesTreeController; // @synthesize _variablesTreeController;
@property __weak AMLibraryOutlineView *_variablesOutlineView; // @synthesize _variablesOutlineView;
@property __weak NSArrayController *_actionsArrayController; // @synthesize _actionsArrayController;
@property __weak AMLibraryTableView *_actionsTableView; // @synthesize _actionsTableView;
@property __weak NSTreeController *_actionsTreeController; // @synthesize _actionsTreeController;
@property __weak AMLibraryOutlineView *_actionsOutlineView; // @synthesize _actionsOutlineView;
@property __weak AMSplitView *_variablesMinorSplitView; // @synthesize _variablesMinorSplitView;
@property __weak AMSplitView *_variablesMajorSplitView; // @synthesize _variablesMajorSplitView;
@property __weak AMSplitView *_actionsMinorSplitView; // @synthesize _actionsMinorSplitView;
@property __weak AMSplitView *_actionsMajorSplitView; // @synthesize _actionsMajorSplitView;
@property __weak NSTabView *_tabView; // @synthesize _tabView;
@property __weak NSButton *_variablesButton; // @synthesize _variablesButton;
@property __weak NSButton *_actionsButton; // @synthesize _actionsButton;
@property(readonly) __weak NSSearchField *_searchField; // @synthesize _searchField;
@property __weak AMGradientBackgroundView *_headerBackgroundView; // @synthesize _headerBackgroundView;
@property(copy) NSArray *draggedGroups; // @synthesize draggedGroups=_draggedGroups;
@property(copy) NSArray *draggedAssets; // @synthesize draggedAssets=_draggedAssets;
- (void).cxx_destruct;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)acceptDropForVariablesFrom:(id)arg1 inGroup:(id)arg2 on:(id)arg3 row:(long long)arg4;
- (BOOL)acceptDropForActionsFrom:(id)arg1 inGroup:(id)arg2;
- (id)addAssetsFromDraggingInfo:(id)arg1 toGroup:(id)arg2 copy:(BOOL)arg3;
- (id)insertAssetsFromDraggingInfo:(id)arg1 intoGroup:(id)arg2 atIndex:(long long)arg3 copy:(BOOL)arg4;
- (BOOL)groupPositionsAreEditable:(id)arg1;
- (id)groupsForOutlineItems:(id)arg1;
- (id)representativesForDraggedGroups:(id)arg1;
- (void)smartGroupsControllerSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginEditingSmartGroup:(id)arg1;
- (id)smartGroupsController;
- (void)addSmartGroup:(id)arg1;
- (id)indexPathForGroup:(id)arg1;
- (id)nodeForGroup:(id)arg1;
- (void)_reallyRemoveAssetsFromGroup:(id)arg1;
- (void)removeAssetsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)removeSelectedAssets;
- (void)removeGroupAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)removeGroups:(id)arg1;
- (void)editGroupName:(id)arg1;
- (void)editGroup:(id)arg1;
- (id)_addGroup;
- (void)addGroup:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)workflowViewSelectionDidChange:(id)arg1;
- (void)registryDidAddAction:(id)arg1;
- (void)doDoubleClickInTableView:(id)arg1;
- (void)updateTableViewForOutlineViewSelectionChange;
- (void)expandCurrentLibraryNode;
- (void)displayDescriptionOfSelectedVariable;
- (void)displayDescriptionOfSelectedAction;
- (void)displayDefaultVariableDescription;
- (void)displayDefaultActionDescription;
- (void)toggleDescriptionView:(id)arg1;
- (void)updateDescriptionButton;
- (id)predicateForSearchString:(id)arg1;
- (void)search:(id)arg1;
- (void)displayVariables:(id)arg1;
- (void)displayActions:(id)arg1;
- (void)displayActionsByCategory:(id)arg1;
- (void)displayActionsByApplication:(id)arg1;
- (void)find:(id)arg1;
- (id)selectGroup:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectAction:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedVariables;
@property(readonly, nonatomic) NSArray *selectedActions;
- (id)clickedNodes;
- (id)currentDescriptionContainerView;
@property(readonly, nonatomic) AMSplitView *currentMajorSplitView;
@property(readonly, nonatomic) NSArray *currentRootNodes;
@property(readonly, nonatomic) NSTableView *currentTableView;
@property(readonly, nonatomic) NSOutlineView *currentOutlineView;
@property(readonly, nonatomic) NSTreeController *currentTreeController;
@property(readonly, nonatomic) NSArrayController *currentArrayController;
@property(readonly, nonatomic) AMLibrary *library;
- (BOOL)isShowingVariables;
- (BOOL)isShowingActions;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

