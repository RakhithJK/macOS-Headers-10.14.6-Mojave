//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iLifeKit/iLifeKit.h>

@class ArchiveController, BackgroundColorView, NSMutableArray, NSTextField, NSWindow;
@protocol EventInterrogatorProtocol;

@interface ExtendedApplication : iLifeKit
{
    NSWindow *_mainWindowAtBeginningOfSendEvent;
    unsigned long long mLastEventModifiers;
    id mAboutWindow;
    NSWindow *mModalPanel;
    NSTextField *mVersionString;
    NSTextField *mCopyrightString;
    BOOL mAppleScriptImport;
    ArchiveController *_archiveController;
    BackgroundColorView *_aboutBoxFooter;
    NSMutableArray *mAboutPanelNibObjects;
    BOOL mQuitting;
    BOOL mFontsLoaded;
    id <EventInterrogatorProtocol> mEventInterrogator;
}

- (BOOL)_waitForAppFinishedLaunchingIfPossible;
- (BOOL)wantsScrollerTrackEndcaps;
- (BOOL)useOverlayScrollers;
- (void)setEventInterrogator:(id)arg1;
- (void)setAeView:(unsigned int)arg1;
- (unsigned int)aeView;
- (id)selection;
- (id)aeKeywords;
- (id)photostreamAlbum;
- (id)lastNMonthsAlbum;
- (id)lastNRollsAlbum;
- (id)trashAlbum;
- (id)placesAlbum;
- (id)facesAlbum;
- (id)flaggedAlbum;
- (id)lastImportAlbum;
- (id)eventsAlbum;
- (id)archiveAlbum;
- (void)setCurrentAlbum:(id)arg1;
- (id)slideshowRunning;
- (id)currentAlbum;
- (id)localRootAlbums;
- (id)albums;
- (id)imageRecs;
- (void)_addRecsFromAlbum:(id)arg1 toArray:(id)arg2;
- (id)handlePreviousSlideScriptCommand:(id)arg1;
- (void)handleAutoImportScriptCommand:(id)arg1;
- (id)handleNextSlideScriptCommand:(id)arg1;
- (id)handleResumeSlideshowScriptCommand:(id)arg1;
- (id)handlePauseSlideshowScriptCommand:(id)arg1;
- (id)handleStopSlideshowScriptCommand:(id)arg1;
- (id)handleStartSlideshowScriptCommand:(id)arg1;
- (id)handleEmptyTrashScriptCommand:(id)arg1;
- (id)handleNewAlbumScriptCommand:(id)arg1;
- (id)importing;
- (id)handleImportScriptCommand:(id)arg1;
- (void)doImportScriptCommand:(id)arg1 toAlbum:(id)arg2 forceNoAliases:(BOOL)arg3;
- (id)handleDuplicateScriptCommand:(id)arg1;
- (id)handleSelectScriptCommand:(id)arg1;
- (id)handleAssignKeywordScriptCommand:(id)arg1;
- (id)addressForEmail;
- (id)recipientForEmail;
- (id)subjectForEmail;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)openAcknowledgments:(id)arg1;
- (void)openLicenseAgreement:(id)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)isQuitting;
- (void)setQuitting:(BOOL)arg1;
- (id)mainWindowAtBeginningOfSendEvent;
- (id)libraryPath;
- (id)workspaceController;
- (id)archiveController;
- (id)currentDocument;
- (void)dealloc;
- (id)init;
- (id)legacyLibraryUpgradeController;
- (void)convertBookPhotoIdsToUIDs:(id)arg1;
- (void)forceSaveAllSlideshows:(id)arg1;

@end

