//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocumentController.h>

@class CPNewDocumentDialog, CPToolbarController, NSMenu, NSMenuItem, NSMutableArray, NSView;

@interface CPAppDelegate : NSDocumentController
{
    CPNewDocumentDialog *mNewDocumentDialog;
    NSMenuItem *mToggleToolbarsMenuItem;
    NSMenuItem *mInspectorMenuItem;
    NSMenuItem *mColorListsMenuItem;
    NSMenuItem *mArrowsMenuItem;
    NSMenuItem *mLineStylesMenuItem;
    NSMenuItem *mNumberFormatsMenuItem;
    NSMenuItem *mInfoMenuItem;
    NSMenuItem *mEquationsMenuItem;
    NSMenuItem *mFrameLimitsMenuItem;
    NSMenuItem *mIncrementMenuItem;
    NSMenuItem *mDefinitionInfo;
    NSMenuItem *mViewAnglesMenuItem;
    NSMenu *mExamplesMenu;
    NSView *mColorPanelAccessoryView;
    NSMutableArray *mPreviouslyVisibleToolbarControllers;
    CPToolbarController *mInspectorToolbar;
    CPToolbarController *mColorListsToolbar;
    CPToolbarController *mLineStylesToolbar;
    CPToolbarController *mArrowsToolbar;
    CPToolbarController *mNumberFormatsToolbar;
    CPToolbarController *mInfoToolbar;
    CPToolbarController *mEquationsToolbar;
    CPToolbarController *mFrameLimitsToolbar;
    CPToolbarController *mIncrementToolbar;
    CPToolbarController *mDefinitionToolbar;
    CPToolbarController *mViewAnglesToolbar;
    CPToolbarController *mColorsToolbar;
    CPToolbarController *mFontsToolbar;
}

+ (void)initialize;
- (void)populateExamplesMenuForPath:(id)arg1 menu:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)openExample:(id)arg1;
- (void)cancelColorPick:(id)arg1;
- (void)confirmColorPick:(id)arg1;
- (id)pickColor:(id)arg1;
- (void)colorPanelWillClose:(id)arg1;
- (void)toggleToolbars:(id)arg1;
- (void)updateToggleToolbarsMenuItemTitle;
- (void)toggleToolbar:(id)arg1;
- (void)showToolbarWithClass:(Class)arg1;
- (id)visibleToolbarControllers;
- (void)newDocumentMenuAction:(id)arg1;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 error:(id *)arg3;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)exit:(id)arg1;
- (void)showInspectorSelector:(id)arg1;
- (void)toggleInspector:(id)arg1;
- (void)showInspector:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;

@end

