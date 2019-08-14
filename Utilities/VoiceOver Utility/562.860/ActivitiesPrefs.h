//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PrefsBase.h"

#import "ActivitiesSitesPrefsDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class ActivitiesSitesPrefs, AddRemoveBar, NSArray, NSBox, NSButton, NSMenu, NSMutableArray, NSPopUpButton, NSPopUpButtonCell, NSString, NSTableView, NSTextField, NSView, NSWindow, SCRCIndexMap, SideBarElement;
@protocol PrefsBaseView;

@interface ActivitiesPrefs : PrefsBase <ActivitiesSitesPrefsDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    AddRemoveBar *_addRemoveSegmentedControl;
    NSMenu *_actionButtonMenu;
    NSTableView *_profilesTableView;
    NSView *_detailView;
    NSTextField *_messageView;
    NSTextField *_applicationSummary;
    NSPopUpButton *_applicationsPopUp;
    NSButton *_showHideButton;
    NSView *_appAssignmentView;
    NSBox *_bottomLine;
    NSButton *_verbosityCheckbox;
    NSButton *_voicesCheckbox;
    NSButton *_pronunciationCheckbox;
    NSButton *_navigationCheckbox;
    NSButton *_hotspotsCheckbox;
    NSButton *_webCheckbox;
    NSButton *_soundCheckbox;
    NSButton *_visualsCheckbox;
    NSButton *_trackpadCheckbox;
    NSButton *_numpadCheckbox;
    NSButton *_keyboardCheckbox;
    NSButton *_quicknavCheckbox;
    NSButton *_brailleCheckbox;
    NSButton *_verbositySetButton;
    NSButton *_voicesSetButton;
    NSButton *_pronunciationSetButton;
    NSButton *_navigationSetButton;
    NSButton *_hotspotsSetButton;
    NSButton *_webSetButton;
    NSButton *_soundSetButton;
    NSButton *_visualsSetButton;
    NSButton *_trackpadSetButton;
    NSButton *_numpadSetButton;
    NSButton *_keyboardSetButton;
    NSButton *_quicknavSetButton;
    NSButton *_brailleSetButton;
    NSWindow *_settingsSheet;
    NSBox *_settingsBox;
    NSTextField *_settingsLabel;
    NSPopUpButtonCell *_actionPopupCell;
    NSArray *_allProfiles;
    struct CGRect _appAssignmentViewRect;
    double _appAssignmentViewOffset;
    NSMutableArray *_runningApplications;
    SCRCIndexMap *_checkboxIndexMap;
    NSView *_activityView;
    NSView<PrefsBaseView> *_activityParentView;
    NSArray *_activityParentViewConstraints;
    NSArray *_activityViewHorizontalConstraints;
    NSArray *_activityViewVerticalConstraints;
    struct CGRect _activityViewRect;
    SideBarElement *_activitySideBarElement;
    struct CGSize _initialSettingsBoxMargins;
    struct CGRect _initialSettingsBoxRect;
    struct CGRect _initialSettingsSheetRect;
    struct CGRect _initialSettingsTopLineRect;
    struct CGRect _initialSettingsBottomLineRect;
    NSWindow *_sitesSheet;
    NSView *_sitesPrefContainerView;
    NSTextField *_sitesLabel;
    ActivitiesSitesPrefs *_sitesPrefs;
}

@property(retain, nonatomic) ActivitiesSitesPrefs *sitesPrefs; // @synthesize sitesPrefs=_sitesPrefs;
@property(nonatomic) NSTextField *sitesLabel; // @synthesize sitesLabel=_sitesLabel;
@property(nonatomic) NSView *sitesPrefContainerView; // @synthesize sitesPrefContainerView=_sitesPrefContainerView;
@property(retain, nonatomic) NSWindow *sitesSheet; // @synthesize sitesSheet=_sitesSheet;
- (void).cxx_destruct;
- (void)removeSite:(id)arg1;
- (BOOL)validateSite:(id)arg1 error:(id *)arg2;
- (id)siteIsADuplicate:(id)arg1;
- (BOOL)updateSites:(id)arg1 error:(id *)arg2;
- (void)handleReassignFactoryCommandForMenuItem:(id)arg1;
- (void)handleUnassignCommandForMenuItem:(id)arg1;
- (void)handleAssignCommandForMenuItem:(id)arg1;
- (void)showSettingHelp:(id)arg1;
- (id)_controllerForSettings;
- (void)dismissSitesSheet:(id)arg1;
- (void)dismissSettingsSheet:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_displaySettingsView:(id)arg1 sideBarElement:(id)arg2 title:(id)arg3 profile:(id)arg4;
- (void)openSettingsForButton:(id)arg1;
- (id)_categoryNameForMask:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1 forTableView:(id)arg2;
- (void)moveInputDown:(id)arg1;
- (void)moveInputUp:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)removeProfile:(id)arg1;
- (void)removeAlertDidEndSelector:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)resetAlertDidEndSelector:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)resetActivityToDefaults:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)newEntry:(id)arg1;
- (void)addProfile:(id)arg1;
- (void)_applicationAlertDidEndSelector:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_profileWithSite:(id)arg1;
- (id)_profileWithApplication:(id)arg1;
- (void)_warnOfDuplicateNameAssignment:(id)arg1;
- (void)_warnOfDuplicateAppAssignment:(id)arg1;
- (void)_deselectAllSitesWithProfile:(id)arg1;
- (void)_deselectAllApplicationsWithProfile:(id)arg1;
- (void)selectSitesFromPopUp:(id)arg1;
- (void)selectApplicationFromPopUp:(id)arg1;
- (void)selectApplicationFromOpenPanel:(id)arg1;
- (id)_selectedProfile;
- (void)_updateRunningApplications;
- (void)setProfileMaskFromCheckbox:(id)arg1;
- (void)_setCheckboxesHidden:(BOOL)arg1;
- (void)_updateCheckboxVisibility;
- (void)_autoInitializeShowHideState;
- (void)pressShowHideButton:(id)arg1;
- (void)pressAddRemoveSegmentedControl:(id)arg1;
- (BOOL)tableViewCaptureDeleteKeyPress:(id)arg1;
- (void)_updateSetButtonsWithMask:(long long)arg1;
- (void)_updateProfileMask;
- (void)_updateAllProfilesArray;
- (void)_updateButtonStatusBasedOnCurrentSelection;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;
- (id)helpAnchor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

