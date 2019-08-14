//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSButton, NSMutableArray, NSPopUpButton, NSString, NSTableColumn, NSTableView, NSWindow;

@interface ConfigKeychainList : NSObject <NSOpenSavePanelDelegate>
{
    NSWindow *_window;
    NSTableView *_browser;
    NSPopUpButton *_userMode;
    NSButton *_removeButton;
    NSButton *_okButton;
    NSTableColumn *_sharedColumn;
    NSTableColumn *_pathColumn;
    NSMutableArray *_userKeychainBrowserList;
    NSMutableArray *_userMergedKeychainBrowserList;
    NSMutableArray *_systemKeychainBrowserList;
    NSMutableArray *_systemMergedKeychainBrowserList;
    NSMutableArray *_commonKeychainBrowserList;
    NSMutableArray *_draggedItems;
    BOOL _userModeState;
    BOOL _isDirty;
}

- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3;
- (id)getCurrentKeychainArray:(BOOL)arg1;
- (void)setDirtyState:(BOOL)arg1;
- (void)cancelButton:(id)arg1;
- (void)okButton:(id)arg1;
- (void)helpButton:(id)arg1;
- (id)getKeychainArray:(long long)arg1 merged:(BOOL)arg2;
- (id)getIconAttributedString:(BOOL)arg1;
- (void)globalSwitch;
- (void)userMode:(id)arg1;
- (void)addKeychainToListNoDuplicate:(id)arg1 name:(id)arg2;
- (void)moveKeychainToIndex:(id)arg1 filename:(id)arg2 index:(long long)arg3;
- (void)removeKeychainsFromLists:(id)arg1;
- (void)removeKeychainFromList:(id)arg1 name:(id)arg2;
- (void)removeKeychain:(id)arg1;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)addKeychain:(id)arg1;
- (void)keychainListsChanged:(id)arg1;
- (void)newKeychain:(id)arg1;
- (void)_addUserKeychainOpenPanelSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)saveLists;
- (BOOL)isCommon:(id)arg1;
- (BOOL)isInList:(id)arg1 name:(id)arg2;
- (long long)isAtRow:(id)arg1 name:(id)arg2;
- (void)mergeLists:(long long)arg1;
- (void)populateLists;
- (void)dealloc;
- (void)show:(id)arg1;
- (void)sizeTableHeaderCellsToFit;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

