//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/PreferencesPopoverPopUpItemViewController.h>

#import <Safari/PerSitePreferencesPopoverItem-Protocol.h>

@class ManagedPlugIn, ManagedPlugInHostPolicy, NSString, NSTextField, PerSitePreferencePopUpButton;

__attribute__((visibility("hidden")))
@interface ManagedPlugInPopUpItemViewController : PreferencesPopoverPopUpItemViewController <PerSitePreferencesPopoverItem>
{
    ManagedPlugInHostPolicy *_hostPolicy;
    NSString *_domain;
    NSTextField *_preferenceTitleTextField;
    PerSitePreferencePopUpButton *_permissionsPopUpButton;
    ManagedPlugIn *_managedPlugIn;
}

@property(readonly, nonatomic) ManagedPlugIn *managedPlugIn; // @synthesize managedPlugIn=_managedPlugIn;
- (void)setPermissionsPopUpButton:(id)arg1;
- (id)permissionsPopUpButton;
- (void)setPreferenceTitleTextField:(id)arg1;
- (id)preferenceTitleTextField;
- (void).cxx_destruct;
- (id)_askPolicyString;
- (id)_onPolicyString;
- (id)_offPolicyString;
- (BOOL)_plugInShouldPointToPreferences;
- (void)_selectPolicy:(int)arg1 inPolicyPopupButton:(id)arg2;
- (void)_setUpButtonIfNecessary;
- (id)_menuItemTitleAttributes;
- (void)updateStateForDomain:(id)arg1;
- (void)_showPreferencesForPlugIn:(id)arg1;
- (void)_updatePlugInPolicy:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithManagedPlugIn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

