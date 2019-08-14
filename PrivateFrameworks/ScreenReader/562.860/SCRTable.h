//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

@class NSArray, NSMutableString, SCRBrailleLineManager, SCRTableHeaderManager, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRTable : SCRElement
{
    struct {
        unsigned int supportsAXVisibleRowsAttribute:1;
        unsigned int supportsAXVisibleColumnsAttribute:1;
        unsigned int supportsAXRowHeaderAttribute:1;
        unsigned int registeredRowCountChangedNotification:1;
        unsigned int registeredSelectedRowChangeNotification:1;
        unsigned int registeredSelectedCellsChangedNotification:1;
        unsigned int registeredRowExpandedNotification:1;
        unsigned int registeredDisclosureLevelChangedNotification:1;
        unsigned int supportsCellBasedAttributes:1;
        unsigned int isInHeader:1;
    } _srtFlags;
    struct SCRDataCell _focusedCell;
    struct SCRDataCell _lastFocusedCell;
    SCRBrailleLineManager *_brailleLineManager;
    SCRElement *_readContentsElement;
    SCRUIElement *_readContentsRowUIElement;
    unsigned long long _readContentsRowIndex;
    double _ignoreNotificationsUntilTime;
    NSArray *_previousSelectionUIElements;
    unsigned long long _previousSelectionCount;
    BOOL _previousSelectionUIElementsExceededMax;
    NSMutableString *_previousRowStringRepresentation;
    unsigned long long _previousSelectedRowIndex;
    unsigned long long _rowCount;
    unsigned long long _lastColumnIndexOutputted;
    struct {
        double rowSelectionDidChange;
    } _startCountTime;
    struct {
        unsigned long long rowSelectionDidChange;
    } _countSinceStart;
    SCRTableHeaderManager *_headerManager;
}

- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (void)prepareGestureTrackingChildren;
- (id)gestureContainerOverviewDescription;
- (struct CGRect)droppableBounds;
- (struct CGRect)visibleBounds;
- (unsigned long long)numberOfChildren:(BOOL)arg1;
- (id)childAtIndex:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (id)children:(BOOL)arg1;
- (BOOL)isContainerElement;
- (void)startReadContentsVisibleOnly:(BOOL)arg1;
- (id)childrenInReadContentsOrder;
- (id)readContentsElement;
- (void)forgetReadContentsElement;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)arg1;
- (void)_setReadContentsElement:(id)arg1;
- (unsigned long long)readContentsElementCount;
- (void)_setReadContentsRowUIElement:(id)arg1;
- (void)setReadContentsElement:(id)arg1;
- (void)dragAndDropDidFinish;
- (id)childElementWithNameDescription:(id)arg1 selectedOnly:(BOOL)arg2;
- (id)childAfterElement:(id)arg1;
- (id)childBeforeElement:(id)arg1;
- (struct CGPoint)mouseInsertAfterChildElement:(id)arg1;
- (struct CGPoint)mouseInsertBeforeChildElement:(id)arg1;
- (BOOL)allowBuildChildren;
- (id)brailleLineElementForUIElement:(id)arg1;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)updateBrailleLineWithFocusedElement:(id)arg1;
- (id)brailleLineManager;
- (double)cellDescriptionDelayTime;
- (void)_echoChangesFromCellUIElements:(id)arg1 toCellUIElements:(id)arg2 request:(id)arg3 descriptor:(CDUnknownBlockType)arg4 additionalRequirementForMultipleCellsUpdate:(BOOL)arg5 singleCellOutputHandler:(CDUnknownBlockType)arg6;
- (void)echoChangesFromCellUIElements:(id)arg1 toCellUIElements:(id)arg2 descriptor:(CDUnknownBlockType)arg3;
- (id)stringForCommand:(id)arg1 withExtension:(id)arg2;
- (id)_headerRelatedLocalizedStringWithKey:(id)arg1 orientation:(long long)arg2;
- (id)_alternateDescriptionForHeaderElements;
- (id)_alternateDescriptionForHeaderElementsInOrientation:(long long)arg1;
- (BOOL)addRowSummaryFromCurrentCellToRequest:(id)arg1;
- (BOOL)addColumnSummaryFromCurrentCellToRequest:(id)arg1;
- (BOOL)addCoordinatesForCurrentCellToRequest:(id)arg1;
- (BOOL)addRowHeaderForCurrentCellToRequest:(id)arg1;
- (BOOL)addColumnHeaderForCurrentCellToRequest:(id)arg1;
- (BOOL)addTitlePhoneticSpellingToRequest:(id)arg1;
- (BOOL)addTitleAlphabeticSpellingToRequest:(id)arg1;
- (BOOL)addTitleToRequest:(id)arg1;
- (void)_executeBlockForReadVisible:(CDUnknownBlockType)arg1;
- (BOOL)addTableDimensionsToRequest:(id)arg1;
- (id)tableDimensions;
- (BOOL)addKeyboardSelectionSummaryToRequest:(id)arg1;
- (BOOL)_addSelectionDescriptionToRequest:(id)arg1 includesSelectedCount:(BOOL)arg2;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (BOOL)addContainerSummaryToRequest:(id)arg1;
- (BOOL)addColumnSummaryWithColumnIndex:(unsigned long long)arg1 fromRowIndex:(unsigned long long)arg2 toRequest:(id)arg3;
- (BOOL)addRowSummaryWithRowIndex:(unsigned long long)arg1 fromColumnIndex:(unsigned long long)arg2 includeHeader:(BOOL)arg3 includeBlanks:(BOOL)arg4 includeSelected:(BOOL)arg5 toRequest:(id)arg6;
- (id)_childrenForRow:(id)arg1;
- (void)addElementEnclosureSummaryToRequest:(id)arg1;
- (id)rowHeaderInfoWithIndex:(unsigned long long)arg1 usedHeader:(char *)arg2;
- (id)columnHeaderInfoWithIndex:(unsigned long long)arg1 usedHeader:(char *)arg2;
- (id)_headerInfoForIndex:(unsigned long long)arg1 ofOrientation:(long long)arg2 usedHeader:(char *)arg3;
- (id)headerInfoForUIElements:(id)arg1;
- (id)_stringForHeaderUIElement:(id)arg1 index:(unsigned long long)arg2 orientation:(long long)arg3;
- (id)_stringForChildUIElement:(id)arg1;
- (id)columnLocationInfoWithIndex:(unsigned long long)arg1;
- (id)coordinatesInfoForCell:(struct SCRDataCell)arg1;
- (id)_coordinatesInfoForCell:(struct SCRDataCell)arg1 usedShortCoordinatesStyle:(char *)arg2;
- (id)rowLocationInfoForCell:(id)arg1 atRowIndex:(unsigned long long)arg2;
- (void)addEmptyCellStatusToRequest:(id)arg1 forElement:(id)arg2;
- (id)emptyCellDescription;
- (void)addBrailleItemDescriptionForFallbackToRequest:(id)arg1;
- (void)addDescriptionForSelectedRowElement:(id)arg1 atCell:(struct SCRDataCell)arg2 toRequest:(id)arg3;
- (void)_addDescriptionForRowElement:(id)arg1 toRequest:(id)arg2 includeHeader:(BOOL)arg3 headerIndex:(unsigned long long)arg4 headerOrientation:(long long)arg5 includeAlternateHeader:(BOOL)arg6 alternateHeaderIndex:(unsigned long long)arg7 alternateHeaderOrientation:(long long)arg8 includeCommandEcho:(BOOL)arg9 includeBlanks:(BOOL)arg10;
- (void)addDescriptionForRowElement:(id)arg1 toRequest:(id)arg2 includeHeader:(BOOL)arg3 headerIndex:(unsigned long long)arg4 headerOrientation:(long long)arg5 includeCommandEcho:(BOOL)arg6 includeBlanks:(BOOL)arg7;
- (void)_addInfoOfHeaderAtIndex:(unsigned long long)arg1 withHeaderOrientation:(long long)arg2 toRequest:(id)arg3 forDescribingElement:(id)arg4 allowsFallbackToHeaderIndexDescription:(BOOL)arg5;
- (BOOL)_shouldIncludeHeaderAtIndex:(unsigned long long)arg1 withHeaderOrientation:(long long)arg2 forDescribingElement:(id)arg3;
- (void)addDescriptionForRowElement:(id)arg1 toRequest:(id)arg2 includeHeader:(BOOL)arg3 headerIndex:(unsigned long long)arg4 includeCommandEcho:(BOOL)arg5;
- (void)addItemDescriptionForEndInteractionToRequest:(id)arg1;
- (void)addInteractionDescriptionForFocusedItemToRequest:(id)arg1;
- (void)addItemDescriptionForInteractionToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (void)addGestureItemDescriptionForElement:(id)arg1 toRequest:(id)arg2;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (void)appendSelectedStatusDescription:(id)arg1;
- (id)statusDescriptionWithOptionsMask:(long long)arg1;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)contentChooserTitle;
- (id)contentChooserGuideItemsForResults:(id)arg1 guide:(id)arg2;
- (id)contentChooserResultsFromElement:(id)arg1 limit:(unsigned long long)arg2 direction:(long long)arg3 startIndex:(unsigned long long *)arg4;
- (BOOL)isSectionView;
- (BOOL)jumpRightEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)jumpLeftEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)jumpBottomEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)jumpTopEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (void)moveToCellBelowWithRequest:(id)arg1 event:(id)arg2;
- (void)moveToCellAboveWithRequest:(id)arg1 event:(id)arg2;
- (BOOL)nextNavigableCellToRight:(struct SCRDataCell *)arg1 fromCell:(struct SCRDataCell)arg2 didWrap:(char *)arg3 didChangeRows:(char *)arg4;
- (BOOL)moveToRightCellWithRequest:(id)arg1 event:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)allowMoveAttemptsPastBoundary:(BOOL)arg1 allowFullWrapping:(BOOL)arg2;
- (void)moveToRightCellWithRequest:(id)arg1 event:(id)arg2;
- (void)moveToLeftCellWithRequest:(id)arg1 event:(id)arg2;
- (BOOL)_moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (struct SCRDataCell)_cellForMoveToLastVisibleOnly:(BOOL)arg1 command:(id *)arg2 wrapped:(char *)arg3 shouldScroll:(char *)arg4;
- (BOOL)_moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (void)setFocusedChild:(id)arg1;
- (BOOL)_moveRightWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveLeftWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveDownWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)_moveUpWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (struct SCRDataCell)_cellToTheLeftOfCell:(struct SCRDataCell)arg1 needToWrap:(char *)arg2;
- (struct SCRDataCell)_cellToTheRightOfCell:(struct SCRDataCell *)arg1 needToWrap:(char *)arg2;
- (struct SCRDataCell)_cellAtStartOfColSpanForCell:(struct SCRDataCell)arg1;
- (BOOL)_updateRequest:(id)arg1 forDirection:(long long)arg2 toCell:(struct SCRDataCell *)arg3 allowFullWrapping:(BOOL)arg4 didWrapRowOrCol:(BOOL)arg5 didWrapAround:(BOOL)arg6 event:(id)arg7;
- (void)handleBoundaryWithDirection:(long long)arg1 cell:(struct SCRDataCell)arg2 outputRequest:(id)arg3 event:(id)arg4;
- (void)_delayedAddSelectedRowDescription;
- (void)_delayedAddItemDescription;
- (void)_outputBorderDescriptionForRequest:(id)arg1 direction:(long long)arg2;
- (BOOL)shouldWrapNavigationForOrientation:(long long)arg1;
- (BOOL)moveOutWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToLastElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToLastVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (unsigned long long)groupBehavior;
- (BOOL)isInteractive;
- (void)moveSelectionBackwardWithRequest:(id)arg1;
- (void)moveSelectionForwardWithRequest:(id)arg1;
- (void)_setSelectedCellsWithUIElements:(id)arg1;
- (void)_setSelectedCellWithUIElement:(id)arg1;
- (BOOL)toggleMultipleSelectionWithRequest:(id)arg1;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (BOOL)_setSingleSelectionWithRequest:(id)arg1 cell:(struct SCRDataCell)arg2;
- (BOOL)setSingleSelectionWithRequest:(id)arg1;
- (BOOL)setSelectionForRowUIElement:(id)arg1;
- (BOOL)canSetSelectionOnChildren;
- (BOOL)_toggleDisclosureTriangle:(id)arg1;
- (BOOL)_toggleBetweenCellAndHeader:(id)arg1;
- (void)_addItemToHeaderOrientationPickerGuide:(id)arg1 forOrientation:(long long)arg2;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveOutOfHeader:(id)arg1;
- (BOOL)moveToHeaderOfOrientation:(long long)arg1 withRequest:(id)arg2;
- (id)headerManager;
- (id)_elementForDataCell:(struct SCRDataCell)arg1;
- (id)firstChildForFocusing;
- (void)updateLastFocusedCell;
- (BOOL)synchVOCursorToKeyboard:(id)arg1;
- (BOOL)synchKeyboardToVOCursor:(id)arg1;
- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)arg1 playSound:(BOOL)arg2 withSelection:(BOOL)arg3;
- (void)_setIsKeyboardSyncInProgress:(BOOL)arg1 allowUpdatingEquivalentElementInOtherChains:(BOOL)arg2;
- (void)setIsKeyboardSyncInProgress:(BOOL)arg1;
- (void)focusToFirstSelectionWithRequest:(id)arg1 defaultToFirstVisibleItem:(BOOL)arg2 updateSelectionOnly:(BOOL)arg3;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)canFocusOutInto;
- (void)addDescendantsToArray:(id)arg1 additionalToRetain:(id)arg2 additionalToSkip:(id)arg3;
- (void)setFocusedCellUIElement:(id)arg1 scrolling:(BOOL)arg2 selection:(BOOL)arg3 request:(id)arg4;
- (id)_setFocusedCell:(struct SCRDataCell)arg1 scrolling:(BOOL)arg2 selectionMode:(int)arg3 request:(id)arg4 event:(id)arg5;
- (id)setFocusedCell:(struct SCRDataCell)arg1 scrolling:(BOOL)arg2 selection:(BOOL)arg3 request:(id)arg4 event:(id)arg5;
- (void)setFocusedCell:(struct SCRDataCell)arg1 request:(id)arg2;
- (void)setFocusedCell:(struct SCRDataCell)arg1;
- (struct SCRDataCell)focusedCell;
- (BOOL)shouldPromoteCells;
- (struct SCRDataCell)cellForUIElement:(id)arg1;
- (BOOL)cellExists:(struct SCRDataCell *)arg1;
- (id)cellForDataCell:(struct SCRDataCell)arg1;
- (id)cellUIElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)selectedCellUIElements;
- (unsigned long long)uiVisibleChildrenCount;
- (id)uiVisibleChildrenElements;
- (unsigned long long)uiSelectedChildrenCount;
- (id)uiSelectedChildrenElements;
- (BOOL)hasMultipleSelection;
- (BOOL)hasSelectedChildren;
- (BOOL)isSelected;
- (BOOL)includeTableHeaders;
- (BOOL)includeRowIndices;
- (BOOL)includeColumnIndices;
- (id)_textForRowUIElement:(id)arg1;
- (id)rowHeaders;
- (id)columnHeaders;
- (unsigned long long)rowSpanForCell:(struct SCRDataCell)arg1;
- (unsigned long long)columnSpanForCell:(struct SCRDataCell)arg1;
- (unsigned long long)rowIndexForCell:(struct SCRDataCell)arg1;
- (unsigned long long)columnIndexForCell:(struct SCRDataCell)arg1;
- (unsigned long long)columnCount;
- (unsigned long long)columnCountForRow:(unsigned long long)arg1;
- (id)visibleColumns;
- (id)visibleRows;
- (id)selectedColumns;
- (id)selectedRows;
- (BOOL)selectedRowCountExceedsMaxAllowed;
- (id)currentFocusedRow;
- (id)columnAtIndex:(unsigned long long)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *allColumns;
- (id)allRows;
- (unsigned long long)rowCount;
- (BOOL)isCellTable;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)_delayedHandledRowChanged;
- (void)_selectedRowsDidChange:(id)arg1;
- (BOOL)_incluideBlankCellsInRowDescription;
- (BOOL)isNightOwl;
- (BOOL)nightOwlRowText:(id)arg1 equalToRowText:(id)arg2;
- (BOOL)isTable;
- (BOOL)allowsEchoTitleChanges;
- (void)_outputRowCountChanged:(unsigned long long)arg1;
- (void)_rowCountDidChange:(id)arg1;
- (void)_selectedCellsDidChange:(id)arg1;
- (BOOL)_addCoordinatesRangeDescriptionForCellUIElements:(id)arg1 withContentDescriptionSuffix:(id)arg2 toRequest:(id)arg3 category:(id)arg4;
- (void)_rowCollapsed:(id)arg1;
- (void)_rowExpanded:(id)arg1;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

