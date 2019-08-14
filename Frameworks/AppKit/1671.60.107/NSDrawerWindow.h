//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSDrawer;

@interface NSDrawerWindow : NSWindow
{
    NSDrawer *_drawer;
    NSWindow *_drawerParentWindow;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
- (BOOL)_usesCustomDrawing;
- (double)_drawerDefaultRightTrailingOffset;
- (double)_drawerDefaultLeftLeadingOffset;
- (double)_drawerDefaultBottomTrailingOffset;
- (double)_drawerDefaultTopLeadingOffset;
- (double)_drawerDepthInset;
- (double)_drawerDepthOffset;
- (double)_drawerRightOffset;
- (double)_drawerLeftOffset;
- (double)_drawerBottomOffset;
- (double)_drawerTopOffset;
- (double)_drawerCloseThreshold;
- (double)_drawerVerticalOpenOffset;
- (double)_drawerHorizontalOpenOffset;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)_cycleDrawersReversed:(BOOL)arg1;
- (BOOL)isMovableByWindowBackground;
- (BOOL)isMovable;
- (void)_adjustWindowToScreen;
- (void)performMiniaturize:(id)arg1;
- (void)performZoom:(id)arg1;
- (void)performClose:(id)arg1;
- (void)runToolbarCustomizationPalette:(id)arg1;
- (void)toggleToolbarShown:(id)arg1;
- (void)hideToolbar:(id)arg1;
- (void)showToolbar:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_isVertical;
- (void)resizeWithDelta:(struct CGPoint)arg1 fromFrame:(struct CGRect)arg2 beginOperation:(BOOL)arg3 endOperation:(BOOL)arg4;
- (void)_selectFirstKeyView;
- (id)_oldFirstResponderBeforeBecoming;
- (id)_newFirstResponderAfterResigning;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)_resetFirstResponder;
- (id)fieldEditor:(BOOL)arg1 forObject:(id)arg2;
- (BOOL)isExcludedFromWindowsMenu;
- (id)_getUndoManager:(BOOL)arg1;
- (BOOL)worksWhenModal;
- (void)_setForceActiveControls:(BOOL)arg1;
- (BOOL)_hasActiveControls;
- (void)resignMainWindow;
- (void)makeMainWindow;
- (void)becomeMainWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)isMainWindow;
- (void)orderOut:(id)arg1;
- (void)_resetDrawerFirstResponder;
- (void)_setDrawerVisibleWithoutLogin;
- (void)_changeDrawerFirstResponder;
- (void)_changeDrawerMainState;
- (void)_changeDrawerKeyState;
- (void)resignKeyWindow;
- (void)makeKeyWindow;
- (void)_drawerTakeFocus;
- (void)becomeKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)hasKeyAppearance;
- (BOOL)isKeyWindow;
- (void)_changeKeyAndMainLimitedOK:(BOOL)arg1;
- (BOOL)hasShadow;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (struct CGSize)_potentialMaxSize;
- (struct CGSize)_potentialMinSize;
- (id)_parentWindow;
- (void)_setParentWindow:(id)arg1;
- (void)_changeTexture;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 drawer:(id)arg5;
- (void)accessibilitySetSizeAttribute:(id)arg1;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

