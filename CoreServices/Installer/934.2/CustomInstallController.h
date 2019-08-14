//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InstallerPlugins/InstallerPane.h>

#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSCell, NSOutlineView, NSString, NSTextField, NSTextView, NSView;

@interface CustomInstallController : InstallerPane <NSOpenSavePanelDelegate>
{
    NSOutlineView *uiPackageOutlineView;
    NSTextView *uiPackageDescriptionTextView;
    NSTextField *uiSpaceRequiredTextField;
    NSTextField *uiSpaceRemainingTextField;
    NSView *uiBottomView;
    BOOL _userHasBeenAlertedAboutNeedForAdditionalMedia;
    NSCell *_locationPopUpMenuCell;
    BOOL _installAlwaysCustomizes;
    InstallerPane *_preInstallSummaryPane;
}

- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)paneBackgroundOpacity;
- (BOOL)drawsPaneBorder;
- (id)bottomContentView;
- (void)willExitPane:(long long)arg1;
- (BOOL)shouldExitPane:(long long)arg1;
- (void)warningSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(char *)arg3;
- (void)didEnterPane:(long long)arg1;
- (void)willEnterPane:(long long)arg1;
- (BOOL)isVisible;
- (void)awakeFromNib;
- (id)title;
- (void)dealloc;
- (id)nextPane;
- (void)setInstallAlwaysCustomizesWithPreInstallSummaryPane:(id)arg1;
- (void)_autoExpandChoicesUnder:(id)arg1;
- (void)_updateSelectedBytesUI;
- (void)_chooseCustomLocation:(id)arg1;
- (void)_chooseCustomLocationFromMenu:(id)arg1;
- (void)_packageSelected:(id)arg1;
- (BOOL)_noPackagesAreSelected;
- (id)_diskListViewForItem:(id)arg1;
- (id)_menuForPath:(id)arg1;
- (id)_folderImageForPath:(id)arg1;
- (id)_folderNameForPath:(id)arg1;
- (id)_volumeNameForPath:(id)arg1;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)openPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showErrorSheet:(id)arg1;
- (BOOL)panel:(id)arg1 isValidFilename:(id)arg2;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

