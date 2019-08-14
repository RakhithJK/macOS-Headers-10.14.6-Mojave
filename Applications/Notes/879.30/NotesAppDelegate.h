//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSUndoManager, SharingController;

@interface NotesAppDelegate : NSObject <NSApplicationDelegate>
{
    NSMutableDictionary *_openNoteWindowControllers;
    SharingController *_sharingController;
    NSUndoManager *_undoManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SharingController *sharingController; // @synthesize sharingController=_sharingController;
- (void).cxx_destruct;
- (void)_defaultAccountChanged:(id)arg1;
- (void)setupDefaultAccountMenu;
- (void)_objectsDidChange:(id)arg1;
- (void)setDefaultFont:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)parentWindowForAccountStatusSheet;
- (void)_windowWillClose:(id)arg1;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
@property(readonly, nonatomic) __weak NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

