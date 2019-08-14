//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CommanderPrefs.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSPopUpButton, NSString, NSTabView, NSTabViewItem, NSWindow;

@interface CommandersTrackpadPrefs : CommanderPrefs <NSTableViewDelegate, NSTableViewDataSource>
{
    NSTabViewItem *_tabViewItem;
    NSWindow *_commandsSheet;
    NSPopUpButton *_modifierKeysButton;
    NSTabView *_tabView;
    NSArray *_gestureTitles;
    NSArray *_standardGestureTitles;
    NSArray *_gestureKeys;
    NSArray *_standardGestureKeys;
    NSArray *_modifierKeys;
    NSArray *_modifierSymbols;
    BOOL _ignoreTPCEnabled;
    id _padDomain;
}

- (void).cxx_destruct;
- (void)_updateTrackPadCommanderEnabled:(id)arg1;
- (void)_setCurrentTrackpadsEnabled:(BOOL)arg1;
- (void)_delayedHandleHIDDetectionNotification:(id)arg1;
- (void)_handleHIDDetectionNotification:(id)arg1;
- (void)_gestureCommandsSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_showHideTab;
- (id)_tabView;
- (void)closeCustomGestureCommands:(id)arg1;
- (void)showCustomGestureCommands:(id)arg1;
- (void)selectTrackpadModifierKey:(id)arg1;
- (id)commandForRow:(long long)arg1;
- (id)keyPathForRow:(long long)arg1;
- (BOOL)isValidRow:(long long)arg1;
- (id)_gestureKeys;
- (id)_gestureTitles;
- (void)initializeCommander;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)helpAnchor;
- (void)awakeFromNib;
- (BOOL)_commandsEditable;
- (void)dealloc;
- (id)init;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
