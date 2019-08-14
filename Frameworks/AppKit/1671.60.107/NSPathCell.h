//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

#import <AppKit/NSMenuItemValidation-Protocol.h>
#import <AppKit/NSOpenSavePanelDelegate-Protocol.h>

@class NSAnimation, NSArray, NSAttributedString, NSColor, NSMutableArray, NSPathComponentCell, NSPopUpButtonCell, NSString, NSURL;
@protocol NSPathCellDelegate;

@interface NSPathCell : NSActionCell <NSMenuItemValidation, NSOpenSavePanelDelegate>
{
    NSColor *_backgroundColor;
    NSMutableArray *_borderColors;
    NSMutableArray *_cells;
    NSPathComponentCell *_clickedCell;
    NSPathComponentCell *_hoveredCell;
    NSPopUpButtonCell *_popUpButtonCell;
    struct CGRect _currentRect;
    NSAnimation *_animation;
    NSArray *_allowedTypes;
    SEL _doubleAction;
    id <NSPathCellDelegate> _delegate;
    struct {
        unsigned int cbs:4;
        unsigned int reserved:28;
    } _piFlags;
    long long _pathStyle;
    id _aux;
}

+ (BOOL)prefersTrackingUntilMouseUp;
+ (Class)pathComponentCellClass;
- (void).cxx_destruct;
- (void)_menuDidEndTracking:(id)arg1;
- (id)menuForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_resetClickedCell;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
@property(copy) NSAttributedString *placeholderAttributedString;
@property(copy) NSString *placeholderString;
@property(copy) NSColor *backgroundColor;
@property SEL doubleAction;
@property(readonly) NSPathComponentCell *clickedPathComponentCell;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_popUpMenu;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_otherItemClick:(id)arg1;
- (void)_willDisplayOpenPanel:(id)arg1;
- (void)_menuItemClick:(id)arg1;
- (void)_setClickedPathComponentCell:(id)arg1;
- (void)performClick:(id)arg1;
- (BOOL)_sendActionOrDoubleAction:(BOOL)arg1;
- (void)_changeContentsToPath:(id)arg1;
- (struct CGRect)rectOfPathComponentCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (id)pathComponentCellAtPoint:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)removePathComponentCellAtIndex:(long long)arg1;
- (void)insertPathComponentCell:(id)arg1 atIndex:(long long)arg2;
- (void)addPathComponentCell:(id)arg1;
- (void)mouseExited:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)mouseEntered:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (id)_hoveredCell;
- (void)_setHoveredCell:(id)arg1;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_createHoverChangeAnimation;
- (void)_updateTrackingRects;
- (void)_updateCell;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)focusRingMaskBoundsForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_legacyDrawFocusRingInCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_wantsToUseFocusRingMask;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_shouldDrawRTL;
- (struct CGRect)_insetFrameForBorder:(struct CGRect)arg1;
- (void)_drawBorderWithFrame:(struct CGRect)arg1;
- (void)setBorderColor:(id)arg1;
- (id)borderColorForEdge:(unsigned long long)arg1;
- (id)_borderColors;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned long long)arg2;
@property long long pathStyle;
- (void)setBezelStyle:(unsigned long long)arg1;
- (unsigned long long)bezelStyle;
- (void)setBordered:(BOOL)arg1;
- (BOOL)isOpaque;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (id)_realPlaceHolderAttributedString;
- (void)_setupPopUpButtonCellWithResizedImages:(BOOL)arg1;
- (void)_setPopUpButtonCell:(id)arg1;
- (id)_popUpButtonCell;
- (id)_scaleImage:(id)arg1 forSize:(struct CGSize)arg2 lockFocusOK:(BOOL)arg3;
- (struct CGSize)_iconSize;
- (void)setFont:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (id)_titleAttributes;
- (void)_updateSizesForInteriorFrame:(struct CGRect)arg1;
@property(copy) NSURL *URL;
- (void)setObjectValue:(id)arg1;
@property(copy) NSArray *pathComponentCells;
- (void)_autoUpdateCellContents;
- (void)_stopAnimation;
- (id)_valueAsFilePath;
- (void)_setNeedsSizeUpdate;
@property __weak id <NSPathCellDelegate> delegate;
@property(copy) NSArray *allowedTypes;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsSelectedChildrenAttributeSettable;
- (id)accessibilitySelectedChildrenAttribute;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (id)accessibilityVisibleChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (void)accessibilityPerformAction:(id)arg1 forChild:(id)arg2;
- (struct CGPoint)accessibilityWindowPointForShowMenu;
- (struct CGRect)_accessibilityScreenRectForPathComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

