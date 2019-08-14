//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

__attribute__((visibility("hidden")))
@interface NSTitlebarFloatingWindow : NSWindow
{
    NSWindow *_originalWindow;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
@property(retain) NSWindow *originalWindow; // @synthesize originalWindow=_originalWindow;
- (void)_renamingDidEndNormally:(BOOL)arg1;
- (void)_titlebarEditingDidEndNormally:(BOOL)arg1 title:(id)arg2 editingRange:(struct _NSRange)arg3 grantHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)_editingModeForTitle:(id)arg1 editingRange:(struct _NSRange *)arg2 selectedRange:(struct _NSRange *)arg3;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)isExcludedFromWindowsMenu;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_usesCustomDrawing;
- (BOOL)_titlebarRenamingShouldBeInWindow;
- (id)representedURL;
- (id)representedFilename;
- (BOOL)_titleMightBeEditable;
- (void)setMenuBarRevealedValue:(double)arg1;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

