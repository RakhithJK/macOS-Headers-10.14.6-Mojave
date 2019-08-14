//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PrefsViewController.h"

@class NSButton, NSButtonCell, NSTextField;

@interface AdvancedPrefsViewController : PrefsViewController
{
    _Bool _mediaFolderSpecValid;
    NSTextField *_pathTextField;
    NSTextField *_oathTextField;
    NSButton *_changeButton;
    NSButton *_resetButton;
    NSButton *_keepiTunesMediaFolderOrganizedCheckbox;
    NSTextField *_explanation1;
    NSButtonCell *_cpyFilesToiTunesMediaFolderWhenAddingToLibraryCheckbox;
    NSButton *_automaticallyDeleteWatchedMoviesAndTVShowsCheckbox;
    NSButton *_shareiTunesLibraryXMLWithOtherApplicationsCheckbox;
    NSTextField *_resetAllDialogWarningsLabel;
    NSButton *_resetAllDialogWarningsButton;
    NSTextField *_resetiTunesStoreCacheLabel;
    NSButton *_resetiTunesStoreCacheButton;
    NSTextField *_resetPodcastIdentifierLabel;
    NSButton *_resetPodcastIdentifierButton;
    NSButton *_keepMiniplayerOnTopOfAllOtherWindowsCheckbox;
    NSButton *_keepMovieWindowOnTopOfAllOtherWindowsCheckbox;
    NSButton *_checkForNewSoftwareUpdatesAutomaticallyCheckbox;
    struct JRFileSpec _mediaFolderSpec;
}

@property _Bool mediaFolderSpecValid; // @synthesize mediaFolderSpecValid=_mediaFolderSpecValid;
@property struct JRFileSpec mediaFolderSpec; // @synthesize mediaFolderSpec=_mediaFolderSpec;
@property NSButton *checkForNewSoftwareUpdatesAutomaticallyCheckbox; // @synthesize checkForNewSoftwareUpdatesAutomaticallyCheckbox=_checkForNewSoftwareUpdatesAutomaticallyCheckbox;
@property NSButton *keepMovieWindowOnTopOfAllOtherWindowsCheckbox; // @synthesize keepMovieWindowOnTopOfAllOtherWindowsCheckbox=_keepMovieWindowOnTopOfAllOtherWindowsCheckbox;
@property NSButton *keepMiniplayerOnTopOfAllOtherWindowsCheckbox; // @synthesize keepMiniplayerOnTopOfAllOtherWindowsCheckbox=_keepMiniplayerOnTopOfAllOtherWindowsCheckbox;
@property NSButton *resetPodcastIdentifierButton; // @synthesize resetPodcastIdentifierButton=_resetPodcastIdentifierButton;
@property NSTextField *resetPodcastIdentifierLabel; // @synthesize resetPodcastIdentifierLabel=_resetPodcastIdentifierLabel;
@property NSButton *resetiTunesStoreCacheButton; // @synthesize resetiTunesStoreCacheButton=_resetiTunesStoreCacheButton;
@property NSTextField *resetiTunesStoreCacheLabel; // @synthesize resetiTunesStoreCacheLabel=_resetiTunesStoreCacheLabel;
@property NSButton *resetAllDialogWarningsButton; // @synthesize resetAllDialogWarningsButton=_resetAllDialogWarningsButton;
@property NSTextField *resetAllDialogWarningsLabel; // @synthesize resetAllDialogWarningsLabel=_resetAllDialogWarningsLabel;
@property NSButton *shareiTunesLibraryXMLWithOtherApplicationsCheckbox; // @synthesize shareiTunesLibraryXMLWithOtherApplicationsCheckbox=_shareiTunesLibraryXMLWithOtherApplicationsCheckbox;
@property NSButton *automaticallyDeleteWatchedMoviesAndTVShowsCheckbox; // @synthesize automaticallyDeleteWatchedMoviesAndTVShowsCheckbox=_automaticallyDeleteWatchedMoviesAndTVShowsCheckbox;
@property NSButtonCell *cpyFilesToiTunesMediaFolderWhenAddingToLibraryCheckbox; // @synthesize cpyFilesToiTunesMediaFolderWhenAddingToLibraryCheckbox=_cpyFilesToiTunesMediaFolderWhenAddingToLibraryCheckbox;
@property NSTextField *explanation1; // @synthesize explanation1=_explanation1;
@property NSButton *keepiTunesMediaFolderOrganizedCheckbox; // @synthesize keepiTunesMediaFolderOrganizedCheckbox=_keepiTunesMediaFolderOrganizedCheckbox;
@property NSButton *resetButton; // @synthesize resetButton=_resetButton;
@property NSButton *changeButton; // @synthesize changeButton=_changeButton;
@property NSTextField *oathTextField; // @synthesize oathTextField=_oathTextField;
@property NSTextField *pathTextField; // @synthesize pathTextField=_pathTextField;
- (void)commitChanges:(struct PreferencesData *)arg1;
- (BOOL)verifyChanges;
- (void)updateMusicFolderPath;
- (void)resetPodcastIdentifier:(id)arg1;
- (void)resetStoreCache:(id)arg1;
- (void)resetAllDialogWarnings:(id)arg1;
- (void)resetLocation:(id)arg1;
- (void)changeLocation:(id)arg1;
- (void)loadControls:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
