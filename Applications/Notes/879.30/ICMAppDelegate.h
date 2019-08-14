//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICArchivedUIStateDelegate-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSUserNotificationCenterDelegate-Protocol.h"
#import "NSWindowRestoration-Protocol.h"

@class ICArchivedUIState, ICCloudNoteController, ICMImportNotesController, ICMSharingMenuController, ICNoteContext, ICReachability, NSArray, NSManagedObjectContext, NSMutableDictionary, NSString, NSTimer, NSURL, NSUndoManager, NSWindow;
@protocol ICSearchIndexable;

@interface ICMAppDelegate : NSObject <ICArchivedUIStateDelegate, NSWindowRestoration, NSUserNotificationCenterDelegate, NSApplicationDelegate>
{
    BOOL _hasFinishedLaunching;
    BOOL _isTerminating;
    ICNoteContext *_noteContext;
    ICArchivedUIState *_archivedUIState;
    ICMSharingMenuController *_sharingMenuController;
    ICReachability *_reachability;
    NSUndoManager *_undoManager;
    NSURL *_launchURL;
    id <ICSearchIndexable> _launchSearchIndexableObject;
    ICCloudNoteController *_cloudNoteController;
    NSTimer *_repetitiveLoggingTimer;
    ICMImportNotesController *_importNotesController;
    NSWindow *_preferencesWindow;
    NSMutableDictionary *_singleNoteWindowsDict;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableDictionary *singleNoteWindowsDict; // @synthesize singleNoteWindowsDict=_singleNoteWindowsDict;
@property(retain, nonatomic) NSWindow *preferencesWindow; // @synthesize preferencesWindow=_preferencesWindow;
@property(retain, nonatomic) ICMImportNotesController *importNotesController; // @synthesize importNotesController=_importNotesController;
@property(retain, nonatomic) NSTimer *repetitiveLoggingTimer; // @synthesize repetitiveLoggingTimer=_repetitiveLoggingTimer;
@property(retain, nonatomic) ICCloudNoteController *cloudNoteController; // @synthesize cloudNoteController=_cloudNoteController;
@property(retain, nonatomic) id <ICSearchIndexable> launchSearchIndexableObject; // @synthesize launchSearchIndexableObject=_launchSearchIndexableObject;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) ICReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) ICMSharingMenuController *sharingMenuController; // @synthesize sharingMenuController=_sharingMenuController;
@property(readonly) BOOL isTerminating; // @synthesize isTerminating=_isTerminating;
- (void).cxx_destruct;
- (void)registerAccessibilityLoggingDelegates;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *currentExpandedFolderIdentifiers;
@property(readonly, copy, nonatomic) NSString *currentNoteContainerIdentifier;
@property(readonly, copy, nonatomic) NSString *currentFolderIdentifier;
@property(readonly, copy, nonatomic) NSString *currentNoteIdentifier;
- (id)showImageGalleryAttachmentInSeparateWindow:(id)arg1 selectSubAttachments:(id)arg2;
- (id)showHTMLWindowForNote:(id)arg1;
- (id)singleHTMLNoteWindowControllerForNote:(id)arg1 create:(BOOL)arg2;
- (id)singleModernNoteWindowControllerForNote:(id)arg1;
- (BOOL)isModernSingleNoteWindow:(id)arg1;
- (BOOL)isHTMLSingleNoteWindow:(id)arg1;
- (BOOL)isSingleNoteWindow:(id)arg1;
- (void)closeAllModernSingleNoteWindows;
- (void)closeAllLegacySingleNoteWindows;
- (void)closeAllSingleNoteWindows;
- (BOOL)isNoteInSingleWindow:(id)arg1;
- (void)updateModernSingleNoteWindowControllerFromNote:(id)arg1 toNote:(id)arg2;
- (void)closeHTMLMigratedSingleNoteWindowsIfNecessary;
- (void)cleanUpAfterSingleNoteWindowCloseIfNecessaryForWindow:(id)arg1;
- (id)openModernNoteInSeparateWindow:(id)arg1 scrollToRange:(struct _NSRange)arg2 showWindow:(BOOL)arg3;
- (void)propagateZoomFromPadViewController:(id)arg1 toWindowsWithNote:(id)arg2;
- (void)showNotesInSeparateWindow:(id)arg1 clickedNote:(id)arg2 shouldFloat:(BOOL)arg3 scrollToRangesForNotes:(id)arg4;
- (void)saveArchivedUIState;
- (void)showCurrentNote;
- (BOOL)openSavedLaunchSearchIndexableObject;
- (BOOL)openSavedLaunchURL;
@property(readonly, nonatomic) ICArchivedUIState *archivedUIState; // @synthesize archivedUIState=_archivedUIState;
- (void)syncIfNecessaryAfterChangedActiveStatus;
- (void)accountWillBeDeleted:(id)arg1;
- (void)accountsDidChange:(id)arg1;
- (void)migrationStateDidChange:(id)arg1;
- (void)showMigrationStartupScreenIfNecessary;
- (BOOL)resetMigrationStateForInternalSettingsAndShowMigrationScreenIfNecessary;
- (void)setupReachability;
- (void)cryptorWillClearMasterKeys:(id)arg1;
- (void)lockAllPasswordProtectedNotes:(id)arg1;
- (void)togglePhotoBrowser:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)showMainWindow:(id)arg1;
- (void)showiCloudPreferences:(id)arg1;
- (void)showAccountsPreferences:(id)arg1;
- (void)showImportWindow:(id)arg1;
- (void)showAboutWindow:(id)arg1;
- (void)systemColorsDidChange:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showPreferences:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (void)previewImagesDidUpdate:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
@property(readonly, nonatomic) ICNoteContext *noteContext; // @synthesize noteContext=_noteContext;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
- (id)noteEditorController;
- (void)cleanUpTemporaryFiles;
- (void)openSearchableItemFromUserActivity:(id)arg1;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 userAcceptedCloudKitShareWithMetadata:(id)arg2;
- (void)bringMainWindowToFrontIfNecessaryForOpenNotes;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1 allowsTerminateLater:(BOOL)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)runSnapshotLoggingInBackground;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)openNoteURL:(id)arg1 error:(id *)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)handleDarwinNotificationName:(id)arg1;
- (void)unregisterForDarwinNotification:(id)arg1;
- (void)registerForDarwinNotification:(id)arg1;
- (void)registerForAppleEvents;
- (void)applicationWillFinishLaunching:(id)arg1;
- (BOOL)applicationExplicitlyMarksAppLaunchComplete:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

