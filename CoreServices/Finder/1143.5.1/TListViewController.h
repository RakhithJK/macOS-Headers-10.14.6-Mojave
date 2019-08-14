//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBrowserViewController.h"

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSScrollViewDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class NSDictionary, NSString, TListHeaderRowView, TListNameCellView;

@interface TListViewController : TBrowserViewController <NSOutlineViewDelegate, NSTableViewDelegate, NSOutlineViewDataSource, NSWindowDelegate, NSScrollViewDelegate>
{
    shared_ptr_2ccd00e6 _dateFormatterSelector;
    _Bool _showDateModified;
    _Bool _showDateCreated;
    _Bool _showDateLastOpened;
    _Bool _showDateAdded;
    _Bool _showSize;
    _Bool _showKind;
    _Bool _showVersion;
    _Bool _showComments;
    _Bool _showLabel;
    _Bool _showICloudStatus;
    _Bool _useRelativeDates;
    _Bool _calculateAllSizes;
    int _sortColumn;
    struct TNSRef<NSDictionary, void> _columnSettings;
    unordered_set_931aff12 _nodesToRecursivelyExpand;
    _Bool _setupExpandingNodes;
    unordered_set_931aff12 _nodesToExpand;
    _Bool _isRecursivelyCollapsing;
    _Bool _ignoreIncomingCollapses;
    _Bool _updatingColumns;
    _Bool _unbindingViewSettings;
    _Bool _nodesBeingDraggedAreAllAtTheRootLevel;
    _Bool _editing;
    struct TNSRef<TListNameCellView, void> _originalEditedNameCellView;
    struct vector<std::__1::pair<TFENode, TFENode>, std::__1::allocator<std::__1::pair<TFENode, TFENode>>> _disclosedAliasNodes;
    struct TNSRef<TListHeaderRowView, void> _headerRowView;
    struct TNSRef<NSFont, void> _monospacedDigitsCellViewFont;
    struct TNSRef<NSFont, void> _cellViewFont;
    long long _cachedMaximumDepth;
    struct TFENode _fakeHeaderRowNode;
    struct TFENode _nodeBeingReloaded;
    struct TNotificationCenterObserver _dateTimeFormattersChangedObserver;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _viewSettingsBinders;
    struct TNSRef<NSLayoutGuide, void> _nameCellViewMasterLayoutGuide;
    struct TKeyValueObserver _nameCellViewMasterLayoutGuideFrameDidChangeObserver;
}

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool nodesBeingDraggedAreAllAtTheRootLevel; // @synthesize nodesBeingDraggedAreAllAtTheRootLevel=_nodesBeingDraggedAreAllAtTheRootLevel;
@property(nonatomic) _Bool updatingColumns; // @synthesize updatingColumns=_updatingColumns;
@property(nonatomic) _Bool calculateAllSizes; // @synthesize calculateAllSizes=_calculateAllSizes;
@property(nonatomic) _Bool useRelativeDates; // @synthesize useRelativeDates=_useRelativeDates;
@property(nonatomic) _Bool showICloudStatus; // @synthesize showICloudStatus=_showICloudStatus;
@property(nonatomic) _Bool showLabel; // @synthesize showLabel=_showLabel;
@property(nonatomic) _Bool showComments; // @synthesize showComments=_showComments;
@property(nonatomic) _Bool showVersion; // @synthesize showVersion=_showVersion;
@property(nonatomic) _Bool showKind; // @synthesize showKind=_showKind;
@property(nonatomic) _Bool showSize; // @synthesize showSize=_showSize;
@property(nonatomic) _Bool showDateAdded; // @synthesize showDateAdded=_showDateAdded;
@property(nonatomic) _Bool showDateLastOpened; // @synthesize showDateLastOpened=_showDateLastOpened;
@property(nonatomic) _Bool showDateCreated; // @synthesize showDateCreated=_showDateCreated;
@property(nonatomic) _Bool showDateModified; // @synthesize showDateModified=_showDateModified;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (_Bool)nodeCanBeDisclosed:(const struct TFENode *)arg1;
- (struct TFENode)outlineNodeFromFINode:(id)arg1;
- (id)menuForColumnHeaders;
- (void)cmdSpotlightAttribute:(id)arg1;
- (id)suggestedAttributes;
- (void)saveScrollPosition;
- (void)restoreBrowserViewState:(id)arg1;
- (id)browserViewState;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)outlineView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 item:(id)arg3;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)typeSelectCandidateNodes;
- (_Bool)nodeIsSpringable:(const struct TFENode *)arg1;
- (id)headerRowViewColumns;
- (void)headerRowView:(id)arg1 updateCellView:(id)arg2 forTableColumn:(id)arg3;
- (id)headerRowView:(id)arg1 viewForTableColumn:(id)arg2;
- (double)outlineView:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineView:(id)arg1 autoExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldAutoExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (_Bool)checkForTEFFilesInContainer:(const struct TFENode *)arg1;
- (BOOL)outlineView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)outlineView:(id)arg1 didDragTableColumn:(id)arg2;
- (void)outlineViewColumnDidMove:(id)arg1;
- (void)outlineViewColumnDidResize:(id)arg1;
- (void)didChangeColumnWidthForColumn:(id)arg1;
- (void)adjustNameColumnWidth;
- (double)minNameColumnWidth;
- (void)willCollapseNode:(const struct TFENode *)arg1 recursively:(_Bool)arg2;
- (void)willExpandNode:(const struct TFENode *)arg1 recursively:(_Bool)arg2;
- (_Bool)isRecursivelyExpanding;
- (long long)maximumDisclosedDepth;
- (void)updateHeaderRowView;
- (void)outlineView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (struct TFENode)parentForNotificationHelper:(id)arg1;
- (_Bool)isNodeBeingReloaded:(const struct TFENode *)arg1;
- (struct TFENode *)nodeBeingReloaded;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)outlineView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)updateCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)makeCellViewWithColumn:(id)arg1 node:(const struct TFENode *)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (_Bool)isGroupNode:(const struct TFENode *)arg1;
- (void)refreshNodeSettings:(_Bool)arg1;
- (void)updateTagsForCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateTagsForNameCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateProperty:(int)arg1 cellView:(id)arg2 node:(const struct TFENode *)arg3;
- (void)updateKindForCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateSizeForSizeCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateProgressForSizeCellView:(id)arg1 progressStatus:(const struct TNodeProgressStatus *)arg2;
- (void)updateProgressForICloudStatusCellView:(id)arg1 progressStatus:(const struct TNodeProgressStatus *)arg2;
- (void)updateProgressForNameCellView:(id)arg1 progressStatus:(const struct TNodeProgressStatus *)arg2;
- (void)updateProgressForRowView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateBadgeForICloudStatusCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateBadgeForNameCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateBadgeForRowView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)updateTitleForNameCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (struct TString)firstAuthorOfNode:(const struct TFENode *)arg1;
- (void)updateIconForNameCellView:(id)arg1 node:(const struct TFENode *)arg2;
- (void)resetICloudMode:(_Bool)arg1;
- (void)resizeColumnFromRight:(id)arg1 withEvent:(id)arg2;
- (void)setResizeCursorForColumn:(id)arg1;
- (void)addSpotlightColumnWithColumnPropertyIfNeeded:(int)arg1 withSettings:(id)arg2;
- (void)unbindViewSettings;
- (void)privateBindSettings;
- (void)cmdDecreaseIconSize:(id)arg1;
- (void)cmdIncreaseIconSize:(id)arg1;
- (_Bool)validateDecreaseIconSize:(id)arg1;
- (_Bool)validateIncreaseIconSize:(id)arg1;
- (void)cmdToggleVersion:(id)arg1;
- (void)cmdToggleKind:(id)arg1;
- (void)cmdToggleComments:(id)arg1;
- (void)cmdToggleLabels:(id)arg1;
- (void)cmdToggleDateCreated:(id)arg1;
- (void)cmdToggleBladeRunnerStatus:(id)arg1;
- (_Bool)validateToggleBladeRunnerStatus:(id)arg1;
- (void)cmdToggleDateAdded:(id)arg1;
- (void)cmdToggleDateLastOpened:(id)arg1;
- (void)cmdToggleSize:(id)arg1;
- (void)cmdToggleDateModified:(id)arg1;
- (void)columnSettingsDidChange;
@property(retain, nonatomic) NSDictionary *columnSettings; // @dynamic columnSettings;
- (void)setShowIconPreview:(_Bool)arg1;
- (void)reloadColumnWithColumnProperty:(int)arg1;
- (_Bool)shouldCalculateFolderSizes:(const struct TFENode *)arg1;
- (void)handleDateFormatterChange;
- (void)updateDateFormattersAndAttributes;
- (_Bool)isColumnVisible:(int)arg1;
- (void)setColumnVisibility:(int)arg1 visible:(_Bool)arg2;
- (void)setTextSize:(double)arg1;
- (void)setIconSize:(double)arg1;
- (void)setInitialConfigInProgress:(_Bool)arg1;
- (void)selectAll:(id)arg1;
- (id)popoverAnchorViewForNode:(const struct TFENode *)arg1;
@property(retain, nonatomic) TListHeaderRowView *headerRowView; // @dynamic headerRowView;
- (id)listView;
- (struct TFENode)thumbnailTargetNodeFromContainerNode:(const struct TFENode *)arg1;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
@property(nonatomic) int sortColumn; // @dynamic sortColumn;
- (void)invertSortOrder:(id)arg1;
- (struct TFENodeVector)closeContainers:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)openContainers:(const struct TFENodeVector *)arg1;
- (void)updateCellViewsDisabledStateAtRow:(id)arg1 node:(const struct TFENode *)arg2;
- (void)dataSourceItemsDidChange:(const unordered_map_80f1bec4 *)arg1;
- (void)dataSourceChanged:(const vector_274a36ec *)arg1;
- (void)configureIndentation;
- (_Bool)shouldDiscloseSubFolderContents;
- (void)configureRowHeight;
- (double)rowHeightForIconAndText;
- (_Bool)isDateSortBy:(int)arg1;
@property(retain, nonatomic) TListNameCellView *originalEditedNameCellView; // @dynamic originalEditedNameCellView;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)updateSTFEditorLocation;
- (int)editingSelectionType;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)startEditingSelectedRow;
- (void)groupAsFolderUndoCompleted:(struct TNodeTask *)arg1 forGroupFolder:(const struct TFENode *)arg2 nodes:(const struct TFENodeVector *)arg3 status:(int)arg4;
- (void)groupAsFolderCompleted:(struct TNodeTask *)arg1 withFolder:(const struct TFENode *)arg2 status:(int)arg3;
- (void)configureGroupAsFolderAnimationController:(id)arg1;
- (_Bool)node:(const struct TFENode *)arg1 isAChildInViewOfNodes:(const struct TFENodeVector *)arg2;
- (struct CGImage *)newImageForRow:(long long)arg1 outRect:(struct CGRect *)arg2;
- (void)scrollToLeftMargin;
- (_Bool)nodeIsSelected:(const struct TFENode *)arg1;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (void)selectAllNodes;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (id)indexSetForNodes:(const struct TFENodeVector *)arg1;
- (void)cmdNewFolderCommon:(const struct TFENodeVector *)arg1 createBurnFolder:(_Bool)arg2 createAtMouseLoc:(_Bool)arg3;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short)arg2;
- (_Bool)shouldDelayNextPreviewPaneRetargetForCurrentKey:(unsigned short)arg1;
- (void)handleDoubleClick:(id)arg1;
- (void)deselectAllNodes;
- (id)dragFlockIconImageForNode:(const struct TFENode *)arg1 atIconSize:(double)arg2 inView:(id)arg3;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 outFrame:(struct CGRect *)arg2 inView:(id)arg3;
- (struct CGImage *)newRestoreImageForNode:(const struct TFENode *)arg1 outRect:(struct CGRect *)arg2;
- (id)makeDragImageForNode:(const struct TFENode *)arg1 includeIcon:(_Bool)arg2 includeText:(_Bool)arg3 outTextFrame:(struct CGRect *)arg4;
- (id)makeCellViewForDragImage:(const struct TFENode *)arg1;
- (struct CGSize)idealContentSize;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (_Bool)shouldCloseContainer:(const struct TFENode *)arg1;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)itemCount;
- (unsigned long long)getSelectedNodesFromView:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (void)setDataSource:(id)arg1;
- (int)viewStyle;
- (void)reloadIconsInView;
- (id)nibName;
- (void)buildBrowserParentToChildrenMap:(unordered_map_f8b1458f *)arg1 forContainerNode:(const struct TFENode *)arg2;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)splitNodeGetDatasourceIdentity:(const struct TFENode *)arg1;
- (struct TFENode)splitNodeGetBrowserIdentity:(const struct TFENode *)arg1;
- (void)setColumnAutoResizing:(_Bool)arg1;
- (_Bool)containsNode:(const struct TFENode *)arg1;
- (void)aboutToTearDown;
- (void)updateWidthForColumn:(id)arg1;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

