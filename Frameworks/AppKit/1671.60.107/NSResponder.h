//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSTouchBarProvider-Protocol.h>
#import <AppKit/NSTouchBarProviderContainer-Protocol.h>
#import <AppKit/NSUIActivityProvider-Protocol.h>
#import <AppKit/_NSQuickActionItemSource-Protocol.h>

@class NSMenu, NSString, NSTouchBar, NSUserActivity;
@protocol NSServicesRequestor, _NSQuickActionItemSource;

@interface NSResponder : NSObject <NSTouchBarProviderContainer, NSUIActivityProvider, NSTouchBarProvider, _NSQuickActionItemSource, NSCoding>
{
    id _nextResponder;
}

+ (void)initialize;
+ (id)restorableStateKeyPaths;
+ (BOOL)automaticallyNotifiesObserversOfTouchBar;
+ (BOOL)automaticallyNotifiesObserversOfServicesRequestor;
- (BOOL)_ignoreBadFirstResponders;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformRaise;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformIncrement;
- (BOOL)accessibilityPerformDelete;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformConfirm;
- (BOOL)accessibilityPerformCancel;
- (void)setAccessibilityContentSiblingBelow:(id)arg1;
- (id)accessibilityContentSiblingBelow;
- (void)setAccessibilityContentSiblingAbove:(id)arg1;
- (id)accessibilityContentSiblingAbove;
- (void)setNextContentSibling:(id)arg1;
- (id)accessibilityNextContentSibling;
- (void)setPreviousContentSibling:(id)arg1;
- (id)accessibilityPreviousContentSibling;
- (void)setAccessibilityZoomButton:(id)arg1;
- (id)accessibilityZoomButton;
- (void)setAccessibilityWindows:(id)arg1;
- (id)accessibilityWindows;
- (void)setAccessibilityWindow:(id)arg1;
- (id)accessibilityWindow;
- (void)setAccessibilityWarningValue:(id)arg1;
- (id)accessibilityWarningValue;
- (void)setAccessibilityVisibleRows:(id)arg1;
- (id)accessibilityVisibleRows;
- (void)setAccessibilityVisibleColumns:(id)arg1;
- (id)accessibilityVisibleColumns;
- (void)setAccessibilityVisibleChildren:(id)arg1;
- (id)accessibilityVisibleChildren;
- (void)setAccessibilityVisibleCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (void)setAccessibilityVisibleCells:(id)arg1;
- (id)accessibilityVisibleCells;
- (void)setAccessibilityVerticalUnits:(long long)arg1;
- (long long)accessibilityVerticalUnits;
- (void)setAccessibilityVerticalUnitDescription:(id)arg1;
- (id)accessibilityVerticalUnitDescription;
- (void)setAccessibilityVerticalScrollBar:(id)arg1;
- (id)accessibilityVerticalScrollBar;
- (void)setAccessibilityValueDescription:(id)arg1;
- (id)accessibilityValueDescription;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (void)setAccessibilityUnits:(long long)arg1;
- (long long)accessibilityUnits;
- (void)setAccessibilityUnitDescription:(id)arg1;
- (id)accessibilityUnitDescription;
- (void)setAccessibilityURL:(id)arg1;
- (id)accessibilityURL;
- (void)setAccessibilityTopLevelUIElement:(id)arg1;
- (id)accessibilityTopLevelUIElement;
- (void)setAccessibilityToolbarButton:(id)arg1;
- (id)accessibilityToolbarButton;
- (void)setAccessibilityTitleUIElement:(id)arg1;
- (id)accessibilityTitleUIElement;
- (void)setAccessibilityTitle:(id)arg1;
- (id)accessibilityTitle;
- (void)setAccessibilityTabs:(id)arg1;
- (id)accessibilityTabs;
- (void)setAccessibilitySubrole:(id)arg1;
- (id)accessibilitySubrole;
- (void)setAccessibilitySplitters:(id)arg1;
- (id)accessibilitySplitters;
- (void)setAccessibilitySortDirection:(long long)arg1;
- (long long)accessibilitySortDirection;
- (void)setAccessibilityFrameInParentSpace:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrameInParentSpace;
- (void)setAccessibilityFrame:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrame;
- (void)setAccessibilityShownMenu:(id)arg1;
- (id)accessibilityShownMenu;
- (void)setAccessibilitySharedTextUIElements:(id)arg1;
- (id)accessibilitySharedTextUIElements;
- (void)setAccessibilitySharedFocusElements:(id)arg1;
- (id)accessibilitySharedFocusElements;
- (void)setAccessibilitySharedCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySharedCharacterRange;
- (void)setAccessibilityServesAsTitleForUIElements:(id)arg1;
- (id)accessibilityServesAsTitleForUIElements;
- (void)setAccessibilitySelectedTextRanges:(id)arg1;
- (id)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedTextRange;
- (void)setAccessibilitySelectedText:(id)arg1;
- (id)accessibilitySelectedText;
- (void)setAccessibilitySelectedRows:(id)arg1;
- (id)accessibilitySelectedRows;
- (void)setAccessibilityHeaderGroup:(id)arg1;
- (id)accessibilityHeaderGroup;
- (void)setAccessibilitySelectedColumns:(id)arg1;
- (id)accessibilitySelectedColumns;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilitySelectedChildren;
- (void)setAccessibilitySelectedCells:(id)arg1;
- (id)accessibilitySelectedCells;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (BOOL)isAccessibilitySelected;
- (void)setAccessibilitySections:(id)arg1;
- (id)accessibilitySections;
- (void)setAccessibilitySearchMenu:(id)arg1;
- (id)accessibilitySearchMenu;
- (void)setAccessibilitySearchButton:(id)arg1;
- (id)accessibilitySearchButton;
- (void)setAccessibilityRows:(id)arg1;
- (id)accessibilityRows;
- (void)setAccessibilityRowIndexRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRowIndexRange;
- (void)setAccessibilityRowHeaderUIElements:(id)arg1;
- (id)accessibilityRowHeaderUIElements;
- (void)setAccessibilityRowCount:(long long)arg1;
- (long long)accessibilityRowCount;
- (void)setAccessibilityRoleDescription:(id)arg1;
- (id)accessibilityRoleDescription;
- (void)setAccessibilityRole:(id)arg1;
- (id)accessibilityRole;
- (void)setAccessibilityRequired:(BOOL)arg1;
- (BOOL)isAccessibilityRequired;
- (void)setAccessibilityProxy:(id)arg1;
- (id)accessibilityProxy;
- (void)setAccessibilityPreviousContents:(id)arg1;
- (id)accessibilityPreviousContents;
- (void)setAccessibilityPlaceholderValue:(id)arg1;
- (id)accessibilityPlaceholderValue;
- (void)setAccessibilityParent:(id)arg1;
- (id)accessibilityParent;
- (void)setAccessibilityOverflowButton:(id)arg1;
- (id)accessibilityOverflowButton;
- (void)setAccessibilityOrientation:(long long)arg1;
- (long long)accessibilityOrientation;
- (void)setAccessibilityOrderedByRow:(BOOL)arg1;
- (BOOL)isAccessibilityOrderedByRow;
- (void)setAccessibilityNumberOfCharacters:(long long)arg1;
- (long long)accessibilityNumberOfCharacters;
- (void)setAccessibilityNextContents:(id)arg1;
- (id)accessibilityNextContents;
- (void)setAccessibilityModal:(BOOL)arg1;
- (BOOL)isAccessibilityModal;
- (void)setAccessibilityMinimized:(BOOL)arg1;
- (BOOL)isAccessibilityMinimized;
- (void)setAccessibilityMinimizeButton:(id)arg1;
- (id)accessibilityMinimizeButton;
- (void)setAccessibilityMinValue:(id)arg1;
- (id)accessibilityMinValue;
- (void)setAccessibilityMimicNativeView:(BOOL)arg1;
- (BOOL)isAccessibilityMimicNativeView;
- (void)setAccessibilityMenuBar:(id)arg1;
- (id)accessibilityMenuBar;
- (void)setAccessibilityMaxValue:(id)arg1;
- (id)accessibilityMaxValue;
- (void)setAccessibilityMarkerValues:(id)arg1;
- (id)accessibilityMarkerValues;
- (void)setAccessibilityMarkerUIElements:(id)arg1;
- (id)accessibilityMarkerUIElements;
- (void)setAccessibilityMarkerTypeDescription:(id)arg1;
- (id)accessibilityMarkerTypeDescription;
- (void)setAccessibilityRulerMarkerType:(long long)arg1;
- (long long)accessibilityRulerMarkerType;
- (void)setAccessibilityMarkerGroupUIElement:(id)arg1;
- (id)accessibilityMarkerGroupUIElement;
- (void)setAccessibilityMainWindow:(id)arg1;
- (id)accessibilityMainWindow;
- (void)setAccessibilityMain:(BOOL)arg1;
- (BOOL)isAccessibilityMain;
- (void)setAccessibilityLinkedUIElements:(id)arg1;
- (id)accessibilityLinkedUIElements;
- (void)setAccessibilityLabelValue:(float)arg1;
- (float)accessibilityLabelValue;
- (void)setAccessibilityLabelUIElements:(id)arg1;
- (id)accessibilityLabelUIElements;
- (void)setAccessibilityInsertionPointLineNumber:(long long)arg1;
- (long long)accessibilityInsertionPointLineNumber;
- (void)setAccessibilityIndex:(long long)arg1;
- (long long)accessibilityIndex;
- (void)setAccessibilityIncrementButton:(id)arg1;
- (id)accessibilityIncrementButton;
- (void)setAccessibilityIdentifier:(id)arg1;
- (id)accessibilityIdentifier;
- (void)setAccessibilityHorizontalUnits:(long long)arg1;
- (long long)accessibilityHorizontalUnits;
- (void)setAccessibilityHorizontalUnitDescription:(id)arg1;
- (id)accessibilityHorizontalUnitDescription;
- (void)setAccessibilityHorizontalScrollBar:(id)arg1;
- (id)accessibilityHorizontalScrollBar;
- (void)setAccessibilityHidden:(BOOL)arg1;
- (BOOL)isAccessibilityHidden;
- (void)setAccessibilityHelp:(id)arg1;
- (id)accessibilityHelp;
- (void)setAccessibilityHeader:(id)arg1;
- (id)accessibilityHeader;
- (void)setAccessibilityHandles:(id)arg1;
- (id)accessibilityHandles;
- (void)setAccessibilityGrowArea:(id)arg1;
- (id)accessibilityGrowArea;
- (void)setAccessibilityFunctionRowTopLevelElements:(id)arg1;
- (id)accessibilityFunctionRowTopLevelElements;
- (void)setAccessibilityFullScreenButton:(id)arg1;
- (id)accessibilityFullScreenButton;
- (void)setAccessibilityFrontmost:(BOOL)arg1;
- (BOOL)isAccessibilityFrontmost;
- (void)setAccessibilityFocusedWindow:(id)arg1;
- (id)accessibilityFocusedWindow;
- (void)setAccessibilityApplicationFocusedUIElement:(id)arg1;
- (id)accessibilityApplicationFocusedUIElement;
- (void)setAccessibilityFocused:(BOOL)arg1;
- (BOOL)isAccessibilityFocused;
- (void)setAccessibilityFilename:(id)arg1;
- (id)accessibilityFilename;
- (void)setAccessibilityExtrasMenuBar:(id)arg1;
- (id)accessibilityExtrasMenuBar;
- (void)setAccessibilityExpanded:(BOOL)arg1;
- (BOOL)isAccessibilityExpanded;
- (void)setAccessibilityEnhancedUserInterface:(BOOL)arg1;
- (BOOL)isAccessibilityEnhancedUserInterface;
- (void)setAccessibilityEnabled:(BOOL)arg1;
- (BOOL)isAccessibilityEnabled;
- (void)setAccessibilityEdited:(BOOL)arg1;
- (BOOL)isAccessibilityEdited;
- (void)setAccessibilityDocument:(id)arg1;
- (id)accessibilityDocument;
- (void)setAccessibilityDisclosureLevel:(long long)arg1;
- (long long)accessibilityDisclosureLevel;
- (void)setAccessibilityDisclosed:(BOOL)arg1;
- (BOOL)isAccessibilityDisclosed;
- (void)setAccessibilityDisclosedRows:(id)arg1;
- (id)accessibilityDisclosedRows;
- (void)setAccessibilityDisclosedByRow:(id)arg1;
- (id)accessibilityDisclosedByRow;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)_accessibilityLabel;
- (void)setAccessibilityDefaultButton:(id)arg1;
- (id)accessibilityDefaultButton;
- (void)setAccessibilityDecrementButton:(id)arg1;
- (id)accessibilityDecrementButton;
- (void)setAccessibilityCustomRotors:(id)arg1;
- (id)accessibilityCustomRotors;
- (void)setAccessibilityCustomChoosers:(id)arg1;
- (id)accessibilityCustomChoosers;
- (void)setAccessibilityCustomActions:(id)arg1;
- (id)accessibilityCustomActions;
- (void)setAccessibilityCriticalValue:(id)arg1;
- (id)accessibilityCriticalValue;
- (void)setAccessibilityContents:(id)arg1;
- (id)accessibilityContents;
- (void)setAccessibilityProtectedContent:(BOOL)arg1;
- (BOOL)isAccessibilityProtectedContent;
- (void)setAccessibilityColumns:(id)arg1;
- (id)accessibilityColumns;
- (void)setAccessibilityColumnTitles:(id)arg1;
- (id)accessibilityColumnTitles;
- (void)setAccessibilityColumnIndexRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityColumnIndexRange;
- (void)setAccessibilityColumnHeaderUIElements:(id)arg1;
- (id)accessibilityColumnHeaderUIElements;
- (void)setAccessibilityColumnCount:(long long)arg1;
- (long long)accessibilityColumnCount;
- (void)setAccessibilityCloseButton:(id)arg1;
- (id)accessibilityCloseButton;
- (void)setAccessibilityClearButton:(id)arg1;
- (id)accessibilityClearButton;
- (void)setAccessibilityChildrenInNavigationOrder:(id)arg1;
- (id)accessibilityChildrenInNavigationOrder;
- (void)setAccessibilityChildren:(id)arg1;
- (id)accessibilityChildren;
- (void)setAccessibilityCancelButton:(id)arg1;
- (id)accessibilityCancelButton;
- (void)setAccessibilityAuditIssues:(id)arg1;
- (id)accessibilityAuditIssues;
- (void)setAccessibilityAlternateUIVisible:(BOOL)arg1;
- (BOOL)isAccessibilityAlternateUIVisible;
- (void)setAccessibilityAllowedValues:(id)arg1;
- (id)accessibilityAllowedValues;
- (void)setAccessibilityActivationPoint:(struct CGPoint)arg1;
- (struct CGPoint)accessibilityActivationPoint;
- (void)setAccessibilityElement:(BOOL)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (id)accessibilityRTFForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityStyleRangeForIndex:(long long)arg1;
- (struct CGSize)accessibilityScreenSizeForLayoutSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityScreenPointForLayoutPoint:(struct CGPoint)arg1;
- (id)accessibilityResultsForSearchPredicate:(id)arg1;
- (struct _NSRange)accessibilityRangeForPosition:(struct CGPoint)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (struct _NSRange)accessibilityRangeForIndex:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (struct CGSize)accessibilityLayoutSizeForScreenSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityLayoutPointForScreenPoint:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (id)willPresentError:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)_postEventNotification:(id)arg1 fromCell:(id)arg2;
- (void)_postEventNotification:(id)arg1;
- (void)_setShouldPostEventNotifications:(BOOL)arg1;
- (BOOL)_shouldPostEventNotifications;
- (void)_noResponderFor:(SEL)arg1 duringForwardingOfEvent:(id)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1;
- (void)showContextHelp:(id)arg1;
- (void)helpRequested:(id)arg1;
- (void)dealloc;
- (id)undoManager;
@property(retain) NSMenu *menu;
- (void)flushBufferedKeyEvents;
- (void)interpretKeyEvents:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)_recursiveResponderThatWantsForwardedScrollEventsForAxis:(long long)arg1 intendedForSwipe:(char *)arg2;
- (BOOL)_recursiveWantsForwardedScrollEventsForAxis:(long long)arg1;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)arg1;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (BOOL)wantsForwardedScrollEvents;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)didResignActiveFirstResponder;
- (void)didBecomeActiveFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setGestureEventMask:(unsigned long long)arg1;
- (unsigned long long)gestureEventMask;
@property(readonly) BOOL acceptsFirstResponder;
- (void)noResponderFor:(SEL)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)navigateWithEvent:(id)arg1;
- (void)quickLookPreviewItemsAtWindowLocation:(struct CGPoint)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)_touchesCancelledWithEvent:(id)arg1;
- (void)_touchesEndedWithEvent:(id)arg1;
- (void)_touchesMovedWithEvent:(id)arg1;
- (void)_touchesBeganWithEvent:(id)arg1;
- (BOOL)_wantsTouchesForEvent:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)translateWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)performMnemonic:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)invalidateRequestor;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;
@property NSResponder *nextResponder;
- (id)_nextResponderForEvent:(id)arg1;
- (id)colorFactory;
- (void)setInterfaceStyle:(unsigned long long)arg1;
- (unsigned long long)interfaceStyle;
- (id)NS_touchBarProvidersKeyPaths;
- (id)NS_touchBarProviders;
- (id)_eventResponderChainDescription;
@property(readonly) NSString *_responderDebugDescription;
- (id)presentationWindowForError:(id)arg1 originatedInWindow:(id)arg2;
- (void)_cleanUpUserActivity;
- (void)_didRestoreUserActivity:(id)arg1;
- (void)_becomeCurrentUserActivityIfNecessary;
- (void)userActivityWasContinued:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateUserActivityState:(id)arg1;
@property(retain) NSUserActivity *userActivity;
- (id)_persistentUIEncodedReference;
- (void)_changePersistentKeyPathObservationTo:(BOOL)arg1;
- (void)_recursivelyReinvalidateRestorableStateIfNecessary;
- (void)invalidateRestorableState;
- (void)_restorePersistentState:(id)arg1;
- (void)_encodeObjectIntoRestorableState:(id)arg1 forKey:(id)arg2;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1 backgroundQueue:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_markAsEverHavingInvalidRestorableState;
- (BOOL)_hasEverHadInvalidRestorableState;
- (BOOL)_hasInvalidRestorableState;
- (void)_setHasInvalidRestorableState:(BOOL)arg1;
- (id)_persistentUIIdentifier;
- (unsigned int)_persistentUIWindowID;
- (id)_persistentUIWindow;
- (id)_copyPersistentUIChildren;
- (id)makeTouchBar;
@property(retain) NSTouchBar *touchBar;
- (id)ns_widgetType;
@property(readonly) __weak id <NSServicesRequestor> servicesRequestor;
@property(readonly) id <_NSQuickActionItemSource> additionalQuickActionItemSource;
- (id)quickAction:(id)arg1 anchoringViewForRequestor:(id)arg2 showRelativeToRect:(struct CGRect *)arg3 preferredEdge:(unsigned long long *)arg4;
- (id)quickAction:(id)arg1 sourceWindowForRequestor:(id)arg2;
- (void)quickAction:(id)arg1 didFailWithRequestor:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

