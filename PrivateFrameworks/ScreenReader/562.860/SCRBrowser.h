//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

@class SCRBrailleLineManager, SCRList, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRBrowser : SCRElement
{
    struct SCRBrowserInfo _browserInfo;
    SCRElement *_currentColumnScrollArea;
    SCRElement *_readContentsElement;
    SCRUIElement *_readContentsColumnUIElement;
    unsigned long long _readContentsColumnIndex;
    SCRList *_keyboardFocusedList;
    SCRBrailleLineManager *_brailleLineManager;
    struct {
        unsigned int isRepeatEvent:1;
        unsigned int isKeyboardEvent:1;
        unsigned int reserved:30;
    } _srbFlags;
}

- (void).cxx_destruct;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (void)prepareGestureTrackingChildren;
- (id)childAfterElement:(id)arg1;
- (id)childBeforeElement:(id)arg1;
- (struct CGRect)droppableBoundsForElement:(id)arg1;
- (unsigned long long)numberOfChildren:(BOOL)arg1;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfUIElement:(id)arg1;
- (id)children:(BOOL)arg1;
- (BOOL)isContainerElement;
- (void)startReadContentsVisibleOnly:(BOOL)arg1;
- (id)childrenInReadContentsOrder;
- (id)readContentsElement;
- (void)forgetReadContentsElement;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)arg1;
- (unsigned long long)readContentsElementCount;
- (void)_setReadContentsColumnUIElement:(id)arg1;
- (void)_setReadContentsElement:(id)arg1;
- (id)brailleLineElementForUIElement:(id)arg1;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)updateBrailleLineWithFocusedElement:(id)arg1;
- (id)brailleLineManager;
- (BOOL)childrenShouldAddIndexToDescription;
- (void)addElementEnclosureSummaryToRequest:(id)arg1;
- (void)addOverviewWithInfo:(struct SCRBrowserInfo)arg1 toRequest:(id)arg2;
- (BOOL)addTitlePhoneticSpellingToRequest:(id)arg1;
- (BOOL)addTitleAlphabeticSpellingToRequest:(id)arg1;
- (BOOL)addTitleToRequest:(id)arg1;
- (BOOL)addKeyboardSelectionSummaryToRequest:(id)arg1;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (void)addItemDescriptionForCommand:(id)arg1 toRequest:(id)arg2 event:(id)arg3;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)arg1 playSound:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)canHandleSelectedChildrenChange;
- (BOOL)canSetSelectionOnChildren;
- (BOOL)synchVOCursorToKeyboard:(id)arg1;
- (BOOL)synchKeyboardToVOCursor:(id)arg1;
- (BOOL)moveVirtualFocusToSelectedItem:(id)arg1 includeDescription:(BOOL)arg2;
- (void)_setCurrentColumnScrollAreaToKeyboardFocusedListUIElement:(id)arg1;
- (BOOL)shouldPromoteForMovingUIElement:(id)arg1;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)shouldAllowAutoFocusInto;
- (id)uiElementWithContextualMenu;
- (BOOL)_handleNavigationEvent:(id)arg1 request:(id)arg2 commandKey:(id)arg3 selector:(SEL)arg4 canScroll:(BOOL)arg5 canWrap:(BOOL)arg6;
- (BOOL)jumpRightEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)jumpLeftEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)jumpBottomEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)jumpTopEdgeWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)isSectionView;
- (BOOL)_moveToColumn:(long long)arg1;
- (id)_moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (id)_moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (id)_moveRightWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (id)_moveLeftWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (id)_moveDownWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (id)_moveUpWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
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
- (BOOL)isInteractive;
- (unsigned long long)groupBehavior;
- (BOOL)showRect:(struct CGRect)arg1;
- (void)setPercentage:(double)arg1 forUIScrollBar:(id)arg2;
- (void)_setFocusedItemWithUIElement:(id)arg1 browserInfo:(struct SCRBrowserInfo)arg2 withScrolling:(BOOL)arg3 withSelection:(BOOL)arg4;
- (void)_setFocusedItemWithUIElement:(id)arg1 browserInfo:(struct SCRBrowserInfo)arg2;
- (id)childUIElementForUIElement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)visibleChildrenUIElementsForUIElement:(id)arg1;
- (id)childrenUIElementsForUIElement:(id)arg1;
- (void)addDescendantsToArray:(id)arg1 additionalToRetain:(id)arg2 additionalToSkip:(id)arg3;
- (BOOL)hasMultipleSelection;
- (BOOL)hasSelectedChildren;
- (BOOL)hasSelectionOnElement:(id)arg1;
- (BOOL)isSelected;
- (id)uiElementForArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setKeyboardFocusedList:(id)arg1;
- (id)keyboardFocusedList;
- (id)_columnUIElements;
- (id)_listChildUIElementOfColumnScrollAreaUIElement:(id)arg1;
- (id)_selectedRowUIElementsForColumnScrollAreaUIElement:(id)arg1;
- (struct SCRBrowserInfo)_browserInfoForUIElement:(id)arg1;
- (id)_firstLevelChildrenForColumnUIElement:(id)arg1;
- (unsigned long long)_numberOfVisibleRowsForColumnScrollAreaUIElement:(id)arg1;
- (unsigned long long)_numberOfRowsForColumnScrollAreaUIElement:(id)arg1;
- (id)_rowUIElementForColumnScrollAreaUIElement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_rowUIElementsForColumnScrollAreaUIElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (id)_setCurrentColumnScrollArea:(id)arg1;
- (id)_currentColumnScrollArea;
- (void)_setBrowserInfo:(struct SCRBrowserInfo)arg1;
- (struct SCRBrowserInfo)_browserInfo;
- (void)_setUISelectedChildrenWithUIElementArray:(id)arg1;
- (id)_uiSelectedChildrenOfUIElement:(id)arg1;
- (BOOL)allowBuildChildren;
- (void)setIsKeyboardSyncInProgress:(BOOL)arg1;
- (void)handleSelectionChange:(id)arg1;
- (id)uiElementToObserveSelectionChange;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

