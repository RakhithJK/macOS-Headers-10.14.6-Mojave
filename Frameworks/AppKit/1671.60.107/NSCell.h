//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAccessibility-Protocol.h>
#import <AppKit/NSAccessibilityElement-Protocol.h>
#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSUserInterfaceItemIdentification-Protocol.h>

@class NSArray, NSFont, NSFormatter, NSImage, NSMenu, NSString, NSURL, NSView;

@interface NSCell : NSObject <NSCopying, NSCoding, NSUserInterfaceItemIdentification, NSAccessibilityElement, NSAccessibility>
{
    id _contents;
    struct __CFlags {
        unsigned int state:1;
        unsigned int highlighted:1;
        unsigned int disabled:1;
        unsigned int editable:1;
        unsigned int type:2;
        unsigned int vCentered:1;
        unsigned int hCentered:1;
        unsigned int bordered:1;
        unsigned int bezeled:1;
        unsigned int selectable:1;
        unsigned int scrollable:1;
        unsigned int continuous:1;
        unsigned int actOnMouseDown:1;
        unsigned int isLeaf:1;
        unsigned int invalidObjectValue:1;
        unsigned int invalidFont:1;
        unsigned int lineBreakMode:3;
        unsigned int __reserved:1;
        unsigned int allowsAppearanceEffects:1;
        unsigned int singleLineMode:1;
        unsigned int actOnMouseDragged:1;
        unsigned int isLoaded:1;
        unsigned int truncateLastLine:1;
        unsigned int dontActOnMouseUp:1;
        unsigned int isWhite:1;
        unsigned int useUserKeyEquivalent:1;
        unsigned int showsFirstResponder:1;
        unsigned int focusRingType:2;
        unsigned int wasSelectable:1;
        unsigned int hasInvalidObject:1;
        unsigned int allowsEditingTextAttributes:1;
        unsigned int importsGraphics:1;
        unsigned int alignment:3;
        unsigned int layoutDirectionRTL:1;
        unsigned int backgroundStyle:3;
        unsigned int cellReserved2:4;
        unsigned int refusesFirstResponder:1;
        unsigned int needsHighlightedText:1;
        unsigned int dontAllowsUndo:1;
        unsigned int currentlyEditing:1;
        unsigned int allowsMixedState:1;
        unsigned int inMixedState:1;
        unsigned int sendsActionOnEndEditing:1;
        unsigned int inSendAction:1;
        unsigned int menuWasSet:1;
        unsigned int controlTint:3;
        unsigned int controlSize:2;
        unsigned int branchImageDisabled:1;
        unsigned int drawingInRevealover:1;
        unsigned int needsHighlightedTextHint:1;
    } _cFlags;
    id _support;
}

+ (id)defaultMenu;
+ (id)_cuiStyleEffectsKey;
+ (id)_cuiCatalogKey;
+ (unsigned long long)defaultFocusRingType;
+ (BOOL)prefersTrackingUntilMouseUp;
+ (void)initialize;
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
@property(retain) id accessibilityZoomButton; // @dynamic accessibilityZoomButton;
@property(copy) NSArray *accessibilityWindows; // @dynamic accessibilityWindows;
@property __weak id accessibilityWindow; // @dynamic accessibilityWindow;
@property(retain) id accessibilityWarningValue; // @dynamic accessibilityWarningValue;
@property(copy) NSArray *accessibilityVisibleRows; // @dynamic accessibilityVisibleRows;
@property(copy) NSArray *accessibilityVisibleColumns; // @dynamic accessibilityVisibleColumns;
@property(copy) NSArray *accessibilityVisibleChildren; // @dynamic accessibilityVisibleChildren;
@property struct _NSRange accessibilityVisibleCharacterRange; // @dynamic accessibilityVisibleCharacterRange;
@property(copy) NSArray *accessibilityVisibleCells; // @dynamic accessibilityVisibleCells;
@property long long accessibilityVerticalUnits; // @dynamic accessibilityVerticalUnits;
@property(copy) NSString *accessibilityVerticalUnitDescription; // @dynamic accessibilityVerticalUnitDescription;
@property(retain) id accessibilityVerticalScrollBar; // @dynamic accessibilityVerticalScrollBar;
@property(copy) NSString *accessibilityValueDescription; // @dynamic accessibilityValueDescription;
@property(retain) id accessibilityValue; // @dynamic accessibilityValue;
@property long long accessibilityUnits; // @dynamic accessibilityUnits;
@property(copy) NSString *accessibilityUnitDescription; // @dynamic accessibilityUnitDescription;
@property(copy) NSURL *accessibilityURL; // @dynamic accessibilityURL;
@property __weak id accessibilityTopLevelUIElement; // @dynamic accessibilityTopLevelUIElement;
@property(retain) id accessibilityToolbarButton; // @dynamic accessibilityToolbarButton;
@property __weak id accessibilityTitleUIElement; // @dynamic accessibilityTitleUIElement;
@property(copy) NSString *accessibilityTitle; // @dynamic accessibilityTitle;
@property(copy) NSArray *accessibilityTabs; // @dynamic accessibilityTabs;
@property(copy) NSString *accessibilitySubrole; // @dynamic accessibilitySubrole;
@property(copy) NSArray *accessibilitySplitters; // @dynamic accessibilitySplitters;
@property long long accessibilitySortDirection; // @dynamic accessibilitySortDirection;
- (void)setAccessibilityFrameInParentSpace:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrameInParentSpace;
@property struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(retain) id accessibilityShownMenu; // @dynamic accessibilityShownMenu;
@property(copy) NSArray *accessibilitySharedTextUIElements; // @dynamic accessibilitySharedTextUIElements;
@property(copy) NSArray *accessibilitySharedFocusElements; // @dynamic accessibilitySharedFocusElements;
@property struct _NSRange accessibilitySharedCharacterRange; // @dynamic accessibilitySharedCharacterRange;
@property(copy) NSArray *accessibilityServesAsTitleForUIElements; // @dynamic accessibilityServesAsTitleForUIElements;
@property(copy) NSArray *accessibilitySelectedTextRanges; // @dynamic accessibilitySelectedTextRanges;
@property struct _NSRange accessibilitySelectedTextRange; // @dynamic accessibilitySelectedTextRange;
@property(copy) NSString *accessibilitySelectedText; // @dynamic accessibilitySelectedText;
@property(copy) NSArray *accessibilitySelectedRows; // @dynamic accessibilitySelectedRows;
- (void)setAccessibilityHeaderGroup:(id)arg1;
- (id)accessibilityHeaderGroup;
@property(copy) NSArray *accessibilitySelectedColumns; // @dynamic accessibilitySelectedColumns;
@property(copy) NSArray *accessibilitySelectedChildren; // @dynamic accessibilitySelectedChildren;
@property(copy) NSArray *accessibilitySelectedCells; // @dynamic accessibilitySelectedCells;
@property(getter=isAccessibilitySelected) BOOL accessibilitySelected; // @dynamic accessibilitySelected;
- (void)setAccessibilitySections:(id)arg1;
- (id)accessibilitySections;
@property(retain) id accessibilitySearchMenu; // @dynamic accessibilitySearchMenu;
@property(retain) id accessibilitySearchButton; // @dynamic accessibilitySearchButton;
@property(copy) NSArray *accessibilityRows; // @dynamic accessibilityRows;
@property struct _NSRange accessibilityRowIndexRange; // @dynamic accessibilityRowIndexRange;
@property(copy) NSArray *accessibilityRowHeaderUIElements; // @dynamic accessibilityRowHeaderUIElements;
@property long long accessibilityRowCount; // @dynamic accessibilityRowCount;
@property(copy) NSString *accessibilityRoleDescription; // @dynamic accessibilityRoleDescription;
@property(copy) NSString *accessibilityRole; // @dynamic accessibilityRole;
@property(getter=isAccessibilityRequired) BOOL accessibilityRequired; // @dynamic accessibilityRequired;
@property(retain) id accessibilityProxy; // @dynamic accessibilityProxy;
@property(copy) NSArray *accessibilityPreviousContents; // @dynamic accessibilityPreviousContents;
@property(copy) NSString *accessibilityPlaceholderValue; // @dynamic accessibilityPlaceholderValue;
@property __weak id accessibilityParent; // @dynamic accessibilityParent;
@property(retain) id accessibilityOverflowButton; // @dynamic accessibilityOverflowButton;
@property long long accessibilityOrientation; // @dynamic accessibilityOrientation;
@property(getter=isAccessibilityOrderedByRow) BOOL accessibilityOrderedByRow; // @dynamic accessibilityOrderedByRow;
@property long long accessibilityNumberOfCharacters; // @dynamic accessibilityNumberOfCharacters;
@property(copy) NSArray *accessibilityNextContents; // @dynamic accessibilityNextContents;
@property(getter=isAccessibilityModal) BOOL accessibilityModal; // @dynamic accessibilityModal;
@property(getter=isAccessibilityMinimized) BOOL accessibilityMinimized; // @dynamic accessibilityMinimized;
@property(retain) id accessibilityMinimizeButton; // @dynamic accessibilityMinimizeButton;
@property(retain) id accessibilityMinValue; // @dynamic accessibilityMinValue;
- (void)setAccessibilityMimicNativeView:(BOOL)arg1;
- (BOOL)isAccessibilityMimicNativeView;
@property __weak id accessibilityMenuBar; // @dynamic accessibilityMenuBar;
@property(retain) id accessibilityMaxValue; // @dynamic accessibilityMaxValue;
@property(retain) id accessibilityMarkerValues; // @dynamic accessibilityMarkerValues;
@property(copy) NSArray *accessibilityMarkerUIElements; // @dynamic accessibilityMarkerUIElements;
@property(copy) NSString *accessibilityMarkerTypeDescription; // @dynamic accessibilityMarkerTypeDescription;
@property long long accessibilityRulerMarkerType; // @dynamic accessibilityRulerMarkerType;
@property(retain) id accessibilityMarkerGroupUIElement; // @dynamic accessibilityMarkerGroupUIElement;
@property(retain) id accessibilityMainWindow; // @dynamic accessibilityMainWindow;
@property(getter=isAccessibilityMain) BOOL accessibilityMain; // @dynamic accessibilityMain;
@property(copy) NSArray *accessibilityLinkedUIElements; // @dynamic accessibilityLinkedUIElements;
@property float accessibilityLabelValue; // @dynamic accessibilityLabelValue;
@property(copy) NSArray *accessibilityLabelUIElements; // @dynamic accessibilityLabelUIElements;
@property long long accessibilityInsertionPointLineNumber; // @dynamic accessibilityInsertionPointLineNumber;
@property long long accessibilityIndex; // @dynamic accessibilityIndex;
@property(retain) id accessibilityIncrementButton; // @dynamic accessibilityIncrementButton;
@property(copy) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;
@property long long accessibilityHorizontalUnits; // @dynamic accessibilityHorizontalUnits;
@property(copy) NSString *accessibilityHorizontalUnitDescription; // @dynamic accessibilityHorizontalUnitDescription;
@property(retain) id accessibilityHorizontalScrollBar; // @dynamic accessibilityHorizontalScrollBar;
@property(getter=isAccessibilityHidden) BOOL accessibilityHidden; // @dynamic accessibilityHidden;
@property(copy) NSString *accessibilityHelp; // @dynamic accessibilityHelp;
@property(retain) id accessibilityHeader; // @dynamic accessibilityHeader;
@property(copy) NSArray *accessibilityHandles; // @dynamic accessibilityHandles;
@property(retain) id accessibilityGrowArea; // @dynamic accessibilityGrowArea;
- (void)setAccessibilityFunctionRowTopLevelElements:(id)arg1;
- (id)accessibilityFunctionRowTopLevelElements;
@property(retain) id accessibilityFullScreenButton; // @dynamic accessibilityFullScreenButton;
@property(getter=isAccessibilityFrontmost) BOOL accessibilityFrontmost; // @dynamic accessibilityFrontmost;
@property(retain) id accessibilityFocusedWindow; // @dynamic accessibilityFocusedWindow;
@property(retain) id accessibilityApplicationFocusedUIElement; // @dynamic accessibilityApplicationFocusedUIElement;
@property(getter=isAccessibilityFocused) BOOL accessibilityFocused; // @dynamic accessibilityFocused;
@property(copy) NSString *accessibilityFilename; // @dynamic accessibilityFilename;
@property __weak id accessibilityExtrasMenuBar; // @dynamic accessibilityExtrasMenuBar;
@property(getter=isAccessibilityExpanded) BOOL accessibilityExpanded; // @dynamic accessibilityExpanded;
- (void)setAccessibilityEnhancedUserInterface:(BOOL)arg1;
- (BOOL)isAccessibilityEnhancedUserInterface;
@property(getter=isAccessibilityEnabled) BOOL accessibilityEnabled; // @dynamic accessibilityEnabled;
@property(getter=isAccessibilityEdited) BOOL accessibilityEdited; // @dynamic accessibilityEdited;
@property(copy) NSString *accessibilityDocument; // @dynamic accessibilityDocument;
@property long long accessibilityDisclosureLevel; // @dynamic accessibilityDisclosureLevel;
@property(getter=isAccessibilityDisclosed) BOOL accessibilityDisclosed; // @dynamic accessibilityDisclosed;
@property(retain) id accessibilityDisclosedRows; // @dynamic accessibilityDisclosedRows;
@property __weak id accessibilityDisclosedByRow; // @dynamic accessibilityDisclosedByRow;
@property(copy) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
- (id)_accessibilityLabel;
@property(retain) id accessibilityDefaultButton; // @dynamic accessibilityDefaultButton;
@property(retain) id accessibilityDecrementButton; // @dynamic accessibilityDecrementButton;
@property(copy) NSArray *accessibilityCustomRotors; // @dynamic accessibilityCustomRotors;
- (void)setAccessibilityCustomChoosers:(id)arg1;
- (id)accessibilityCustomChoosers;
@property(copy) NSArray *accessibilityCustomActions; // @dynamic accessibilityCustomActions;
@property(retain) id accessibilityCriticalValue; // @dynamic accessibilityCriticalValue;
@property(copy) NSArray *accessibilityContents; // @dynamic accessibilityContents;
@property(getter=isAccessibilityProtectedContent) BOOL accessibilityProtectedContent; // @dynamic accessibilityProtectedContent;
@property(copy) NSArray *accessibilityColumns; // @dynamic accessibilityColumns;
@property(copy) NSArray *accessibilityColumnTitles; // @dynamic accessibilityColumnTitles;
@property struct _NSRange accessibilityColumnIndexRange; // @dynamic accessibilityColumnIndexRange;
@property(copy) NSArray *accessibilityColumnHeaderUIElements; // @dynamic accessibilityColumnHeaderUIElements;
@property long long accessibilityColumnCount; // @dynamic accessibilityColumnCount;
@property(retain) id accessibilityCloseButton; // @dynamic accessibilityCloseButton;
@property(retain) id accessibilityClearButton; // @dynamic accessibilityClearButton;
@property(copy) NSArray *accessibilityChildrenInNavigationOrder; // @dynamic accessibilityChildrenInNavigationOrder;
@property(copy) NSArray *accessibilityChildren; // @dynamic accessibilityChildren;
@property(retain) id accessibilityCancelButton; // @dynamic accessibilityCancelButton;
- (void)setAccessibilityAuditIssues:(id)arg1;
- (id)accessibilityAuditIssues;
@property(getter=isAccessibilityAlternateUIVisible) BOOL accessibilityAlternateUIVisible; // @dynamic accessibilityAlternateUIVisible;
@property(copy) NSArray *accessibilityAllowedValues; // @dynamic accessibilityAllowedValues;
@property struct CGPoint accessibilityActivationPoint; // @dynamic accessibilityActivationPoint;
@property(getter=isAccessibilityElement) BOOL accessibilityElement; // @dynamic accessibilityElement;
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
- (unsigned long long)textAlignmentPolicy;
- (id)_stringDrawingContext;
- (BOOL)_usesBezeledSelectionStyle;
- (int)_effectiveBackgroundStyleInView:(id)arg1 forSpecifiedStyle:(long long)arg2 isTemplate:(BOOL)arg3;
- (int)_effectiveBackgroundStyleInView:(id)arg1 isTemplate:(BOOL)arg2;
- (void)setFieldEditorTextContainer:(id)arg1;
- (id)fieldEditorTextContainer;
- (void)setTitleTextContainer:(id)arg1;
- (id)titleTextContainer;
- (void)setStyleEffectConfiguration:(id)arg1;
- (id)styleEffectConfiguration;
- (BOOL)_allowsTextTighteningInView:(id)arg1;
- (BOOL)_hasAppearanceTextEffectsWithAttributedString:(id)arg1;
- (void)setAllowsAppearanceTextEffects:(BOOL)arg1;
- (BOOL)allowsAppearanceTextEffects;
- (BOOL)canSmoothFontsInFrame:(struct CGRect)arg1 forLayerBackedView:(id)arg2;
- (id)draggingImageComponentsWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_imageComponentIfNonEmptyImagePortion:(id)arg1 rect:(struct CGRect)arg2 key:(id)arg3;
- (void)_drawCellForDragWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)allowsEditingTokens;
- (struct CGRect)opaqueRectForTitleBounds:(struct CGRect)arg1;
@property(copy) NSString *identifier;
- (void)setUserInterfaceItemIdentifier:(id)arg1;
- (id)userInterfaceItemIdentifier;
@property long long userInterfaceLayoutDirection;
@property long long baseWritingDirection;
- (BOOL)wantsNotificationForMarkedText;
@property BOOL sendsActionOnEndEditing;
- (id)menuForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
@property(retain) NSMenu *menu;
- (void)performClick:(id)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (id)_maybeSwapSystemFontForFont:(id)arg1;
- (void)_autoflipUnarchivedProperties;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldEditorForView:(id)arg1;
- (void)endEditing:(id)arg1;
- (void)_validateEditing:(id)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)_restartEditingWithTextView:(id)arg1;
- (void)_synchronizeTextView:(id)arg1;
- (id)_selectOrEdit:(const struct CGRect *)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (struct CGRect)_centerInnerBounds:(struct CGRect)arg1;
- (struct CGRect)_focusRingFrameForFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
- (BOOL)keyUp:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)keyDown:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_setAnimationsAllowed:(BOOL)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)cancelTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)touchCancelledAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)touchEndedAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)touchMovedFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 inView:(id)arg3;
- (void)touchBeganAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)_hitTestForTouch:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_setTouchContinuousTimer:(id)arg1;
- (id)_touchContinuousTimer;
- (void)_setTrackingTouch:(id)arg1;
- (id)_trackingTouch;
- (BOOL)_MSMessengerTrackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (long long)_currentEventStage;
- (BOOL)_hitTestForTrackMouseEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_suppressMouseUpAction;
- (BOOL)_usesDefaultContinuousBehavior;
- (BOOL)_useHitTestInTrackMouse;
- (BOOL)_vetoMouseDragActionDispatch;
- (void)_displaySomeWindowsIfNeeded:(id)arg1;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (void)continueTrackingPeriodicEvent:(id)arg1 inView:(id)arg2;
- (BOOL)continueTrackingGesture:(id)arg1 inView:(id)arg2;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
@property(readonly) long long mouseDownFlags;
- (void)_setMouseDownFlags:(long long)arg1;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (BOOL)_shouldSetHighlightToFlag:(BOOL)arg1;
- (void)_setCurrentlyEditing:(BOOL)arg1;
- (void)_drawFocusRingWithFrame:(struct CGRect)arg1;
- (double)_backingScaleFactorForDrawingInView:(id)arg1;
- (void)layoutLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)wantsUpdateLayerInView:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)highlightColorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_usingAlternateHighlightColorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_effectiveStyleEffectConfigurationInView:(id)arg1;
- (BOOL)_shouldUseStyledTextInView:(id)arg1;
- (BOOL)_allowsStyledTextForColor:(id)arg1;
- (BOOL)_customForegroundColorInTitle:(id)arg1;
- (unsigned long long)_interiorContentValueStateInView:(id)arg1;
- (unsigned long long)_interiorContentAppearanceInView:(id)arg1;
- (double)_minimumPressDuration;
- (BOOL)_isGuarded;
- (void)_controlViewDidChangeEffectiveAppearance:(id)arg1;
- (BOOL)_preferInactiveContentInView:(id)arg1;
- (BOOL)_preferInactiveBezelArtInView:(id)arg1;
- (id)_defaultImageHints;
- (BOOL)_needsHighlightedTextHint;
- (void)_setNeedsHighlightedTextHint:(BOOL)arg1;
- (struct _NSRange)_characterRangeForPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_setCachedLineRef:(id)arg1;
- (id)_cachedLineRef;
- (BOOL)cachesLineRef;
- (BOOL)_isButtonTitleCell;
- (void)_endVibrantBlendGroup;
- (BOOL)_beginVibrantBlendGroupIfNecessaryForControlView:(id)arg1;
- (int)_vibrancyBlendModeForControlView:(id)arg1;
- (struct __CFString *)_coreUIWidgetName;
- (id)_effectiveCoreUIBackgroundTypeInControlView:(id)arg1;
- (struct __CFString *)customizedBackgroundTypeForControlView:(id)arg1;
- (unsigned long long)fontDilationStyle;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (void)calcDrawInfo:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)_validateEntryString:(id)arg1 uiHandled:(char *)arg2;
- (BOOL)_delegateValidation:(id)arg1 object:(id)arg2 uiHandled:(char *)arg3;
- (BOOL)_drawingInRevealover;
- (void)_setDrawingInRevealover:(BOOL)arg1;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_backgroundColorForFontSmoothing;
@property(readonly) struct CGSize cellSize;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
@property BOOL usesSingleLineMode;
@property BOOL truncatesLastVisibleLine;
- (void)setCellAttribute:(unsigned long long)arg1 to:(long long)arg2;
- (long long)cellAttribute:(unsigned long long)arg1;
@property(retain) id representedObject;
@property(retain) NSFormatter *formatter;
@property unsigned long long controlSize;
- (unsigned long long)controlTint;
- (void)setControlTint:(unsigned long long)arg1;
@property(retain) NSImage *image;
- (id)_defaultFont;
- (void)_invalidateFont;
@property(retain) NSFont *font;
- (id)_effectiveFont;
- (void)takeObjectValueFrom:(id)arg1;
- (void)takeStringValueFrom:(id)arg1;
- (void)takeDoubleValueFrom:(id)arg1;
- (void)takeFloatValueFrom:(id)arg1;
- (void)takeIntegerValueFrom:(id)arg1;
- (void)takeIntValueFrom:(id)arg1;
@property double doubleValue;
@property float floatValue;
@property long long integerValue;
@property int intValue;
- (void)_setIntegerValue:(long long)arg1;
- (long long)_integerValue;
- (long long)compare:(id)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1;
- (BOOL)allowsDefaultTighteningForTruncation;
- (void)setImportsGraphics:(BOOL)arg1;
- (BOOL)importsGraphics;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (BOOL)allowsEditingTextAttributes;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)focusRingMaskBoundsForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)_effectiveFocusRingType;
- (unsigned long long)focusRingType;
- (void)setFocusRingType:(unsigned long long)arg1;
- (BOOL)showsFirstResponder;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
- (id)mnemonic;
- (unsigned long long)mnemonicLocation;
- (void)setMnemonicLocation:(unsigned long long)arg1;
- (void)setAttributedStringValue:(id)arg1;
@property(copy) NSString *stringValue;
- (BOOL)_objectValue:(id *)arg1 forString:(id)arg2;
- (BOOL)_objectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)_cachedAttributedStringValue;
- (id)attributedStringValue;
- (BOOL)_hasAttributedStringValue;
- (void)_clearAttributedStringCache;
- (BOOL)_canCacheAttributedStringValue;
- (id)_attributedStringValue:(id)arg1 invalid:(BOOL)arg2;
- (id)_unformattedAttributedStringValue:(id)arg1;
- (id)_stringForEditing;
- (id)_attributedStringForEditing;
@property BOOL allowsUndo;
- (void)_setLineBreakMode:(unsigned long long)arg1;
- (unsigned long long)_lineBreakMode;
@property unsigned long long lineBreakMode;
- (long long)_typesetterBehavior;
- (void)_setTextAttributeParaStyleNeedsRecalc;
- (id)_textAttributes;
- (BOOL)_textDimsWhenDisabled;
@property(readonly) BOOL hasValidObjectValue;
@property(copy) id objectValue;
- (BOOL)_shouldRedrawOnIdenticalObjectValueChanges;
- (BOOL)_skipsSynchronizationForEditingTextView:(id)arg1;
- (BOOL)_isEditingTextView:(id)arg1;
- (void)_clearEditingTextView:(id)arg1;
- (void)_setEditingTextView:(id)arg1;
- (void)_setContents:(id)arg1;
- (id)_formatObjectValue:(id)arg1 invalid:(BOOL)arg2;
- (id)_contents;
- (id)_updateInvalidatedObjectValue:(id)arg1;
- (void)_invalidateObjectValue;
- (BOOL)_performKeyEquivalent:(id)arg1 conditionally:(BOOL)arg2;
@property(readonly, copy) NSString *keyEquivalent;
- (void)setFloatingPointFormat:(BOOL)arg1 left:(unsigned long long)arg2 right:(unsigned long long)arg3;
- (BOOL)isEntryAcceptable:(id)arg1;
- (void)setEntryType:(long long)arg1;
- (long long)entryType;
@property BOOL wraps;
@property unsigned long long alignment;
- (void)_setVerticallyCentered:(BOOL)arg1;
- (void)_setHorizontallyCentered:(BOOL)arg1;
- (void)_setNeedsStateUpdate:(id)arg1;
@property(getter=isHighlighted) BOOL highlighted;
- (void)setImageInterpolation:(unsigned long long)arg1;
- (unsigned long long)imageInterpolation;
@property(getter=isScrollable) BOOL scrollable;
@property(getter=isBezeled) BOOL bezeled;
@property(getter=isBordered) BOOL bordered;
@property(getter=isSelectable) BOOL selectable;
@property(getter=isEditable) BOOL editable;
- (BOOL)_cell_isEditable;
- (void)_setAcceptsFirstResponder:(BOOL)arg1;
- (BOOL)refusesFirstResponder;
- (void)setRefusesFirstResponder:(BOOL)arg1;
- (void)_cell_setRefusesFirstResponder:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
@property(getter=isContinuous) BOOL continuous;
- (long long)sendActionOn:(unsigned long long)arg1;
@property(getter=isEnabled) BOOL enabled;
@property(readonly, getter=isOpaque) BOOL opaque;
@property(copy) NSString *title;
@property long long tag;
@property SEL action;
@property __weak id target;
@property long long state;
@property unsigned long long type;
- (BOOL)_hasTrackingGestureOverride;
- (void)_setControlView:(id)arg1;
@property NSView *controlView;
- (BOOL)_usesUserKeyEquivalent;
- (id)_useUserKeyEquivalent;
- (BOOL)_prefersTrackingWhenDisabled;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)_failsafeAllocAuxiliaryStorage;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (void)_commonInit;
- (BOOL)_allowsContextMenus;
- (void)_convertToText:(id)arg1;
- (id)init;
- (void)setNextState;
@property(readonly) long long nextState;
@property BOOL allowsMixedState;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreaWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_viewDidChangeGeometryInWindow:(id)arg1;
- (void)_clearMouseTracking;
- (id)_pressureConfigurationIfNeeded;
- (void)_setMouseTrackingInRect:(struct CGRect)arg1 ofView:(id)arg2;
- (void)_setMouseTrackingInRect:(struct CGRect)arg1 ofView:(id)arg2 withConfiguration:(id)arg3;
- (void)_setMouseTrackingInfo:(id)arg1;
- (id)_mouseTrackingInfo;
- (BOOL)_isAnimatingDefaultCell;
- (void)heartBeat:(CDStruct_fadd2e06 *)arg1;
- (BOOL)_wantsHeartBeat;
- (void)_windowChangedKeyStateInView:(id)arg1;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (id)_defaultPlaceholderString;
- (id)_placeholderAttributedString;
- (void)_setPlaceholderAttributedString:(id)arg1;
- (id)_placeholderString;
- (void)_setPlaceholderString:(id)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (unsigned long long)_textHitTest:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (long long)_initialBackgroundStyleCompatibilityGuess;
- (BOOL)_externalContextSeemsLikelyToBeRaised;
- (long long)_initialBackgroundStyleCompatibilityGuessIgnoringExternalContext;
@property(readonly) long long interiorBackgroundStyle;
@property long long backgroundStyle;
- (id)deepestAccessibilityDescendants;
- (id)accessibilityAuditContrast;
- (id)accessibilityAuditLabel;
- (id)accessibilityAuditHierarchy;
- (id)accessibilityAuditParent;
- (id)accessibilityAuditIssuesAttribute;
- (id)accessibilitySectionsAttribute;
- (id)accessibilityVerticalUnitDescriptionAttribute;
- (id)accessibilityHorizontalUnitDescriptionAttribute;
- (BOOL)accessibilityShouldSendNotification:(id)arg1;
- (BOOL)_accessibilityIsTableViewDescendant;
- (id)accessibilityElementWithParent:(id)arg1;
- (void)accessibilityPostNotification:(id)arg1;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)_accessibilityShowMenu:(id)arg1;
- (void)_accessibilityShowMenu:(id)arg1 withProxy:(id)arg2;
- (struct CGPoint)accessibilityWindowPointForShowMenu;
- (struct CGPoint)_accessibilityWindowPointForShowMenuWithProxy:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilitySetFocusedAttribute:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityStyleRangeForIndexAttributeForParameter:(id)arg1;
- (id)accessibilityAttributedStringForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityRTFForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityBoundsForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityRangeForIndexAttributeForParameter:(id)arg1;
- (id)accessibilityRangeForPositionAttributeForParameter:(id)arg1;
- (id)accessibilityStringForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityRangeForLineAttributeForParameter:(id)arg1;
- (id)accessibilityLineForIndexAttributeForParameter:(id)arg1;
- (BOOL)accessibilityIsInsertionPointLineNumberAttributeSettable;
- (id)accessibilityInsertionPointLineNumberAttribute;
- (void)accessibilitySetVisibleCharacterRangeAttribute:(id)arg1;
- (BOOL)accessibilityIsVisibleCharacterRangeAttributeSettable;
- (id)accessibilityVisibleCharacterRangeAttribute;
- (BOOL)accessibilityIsNumberOfCharactersAttributeSettable;
- (id)accessibilityNumberOfCharactersAttribute;
- (void)accessibilitySetSelectedTextRangeAttribute:(id)arg1;
- (BOOL)accessibilityIsSelectedTextRangeAttributeSettable;
- (id)accessibilitySelectedTextRangeAttribute;
- (void)accessibilitySetSelectedTextAttribute:(id)arg1;
- (BOOL)accessibilityIsSelectedTextAttributeSettable;
- (id)accessibilitySelectedTextAttribute;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityCurrentEditor;
- (BOOL)_finalizeStyleTextOptions:(id)arg1;
- (BOOL)_updateStyledTextOptions:(id)arg1 withContentAppearanceInView:(id)arg2;
- (void)_updateCoreUIOptions:(id)arg1 withContentAppearanceInView:(id)arg2;
- (BOOL)_shouldHighlightCellWhenSelected;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

