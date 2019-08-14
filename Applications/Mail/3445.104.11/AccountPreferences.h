//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "ACUIAccountsTableViewControllerDelegate-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "TerminationHandler-Protocol.h"

@class ACUIAccountsTableViewController, EWSIMAPAccountInformationController, EWSMailboxBehaviorsController, EWSServerSettingsController, IMAPMailboxBehaviorsController, IMAPPOPServerSettingsController, NSButton, NSSegmentedControl, NSString, NSTabViewController, NSView, NoEmailChildAccountInformationController, POPAccountInformationController, POPMailboxBehaviorsController, ParentAccountServerSettingsController;
@protocol NSTabViewDelegate;

@interface AccountPreferences : NSViewController <ACUIAccountsTableViewControllerDelegate, TerminationHandler, NSWindowDelegate, NSTabViewDelegate>
{
    NSView *_accountsTableContainer;
    ACUIAccountsTableViewController *_accountsTableController;
    NSSegmentedControl *_addRemoveAccountControl;
    NSTabViewController *_accountDetailController;
    EWSIMAPAccountInformationController *_ewsImapAccountInformationController;
    POPAccountInformationController *_popAccountInformationController;
    NoEmailChildAccountInformationController *_noEmailChildAccountInformationController;
    EWSMailboxBehaviorsController *_ewsMailboxBehaviorsController;
    IMAPMailboxBehaviorsController *_imapMailboxBehaviorsController;
    POPMailboxBehaviorsController *_popMailboxBehaviorsController;
    EWSServerSettingsController *_ewsServerSettingsController;
    IMAPPOPServerSettingsController *_imapPopServerSettingsController;
    ParentAccountServerSettingsController *_parentAccountServerSettingsController;
    id <NSTabViewDelegate> _existingTabViewDelegate;
    NSButton *_helpButton;
}

@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak id <NSTabViewDelegate> existingTabViewDelegate; // @synthesize existingTabViewDelegate=_existingTabViewDelegate;
@property(retain, nonatomic) ParentAccountServerSettingsController *parentAccountServerSettingsController; // @synthesize parentAccountServerSettingsController=_parentAccountServerSettingsController;
@property(retain, nonatomic) IMAPPOPServerSettingsController *imapPopServerSettingsController; // @synthesize imapPopServerSettingsController=_imapPopServerSettingsController;
@property(retain, nonatomic) EWSServerSettingsController *ewsServerSettingsController; // @synthesize ewsServerSettingsController=_ewsServerSettingsController;
@property(retain, nonatomic) POPMailboxBehaviorsController *popMailboxBehaviorsController; // @synthesize popMailboxBehaviorsController=_popMailboxBehaviorsController;
@property(retain, nonatomic) IMAPMailboxBehaviorsController *imapMailboxBehaviorsController; // @synthesize imapMailboxBehaviorsController=_imapMailboxBehaviorsController;
@property(retain, nonatomic) EWSMailboxBehaviorsController *ewsMailboxBehaviorsController; // @synthesize ewsMailboxBehaviorsController=_ewsMailboxBehaviorsController;
@property(retain, nonatomic) NoEmailChildAccountInformationController *noEmailChildAccountInformationController; // @synthesize noEmailChildAccountInformationController=_noEmailChildAccountInformationController;
@property(retain, nonatomic) POPAccountInformationController *popAccountInformationController; // @synthesize popAccountInformationController=_popAccountInformationController;
@property(retain, nonatomic) EWSIMAPAccountInformationController *ewsImapAccountInformationController; // @synthesize ewsImapAccountInformationController=_ewsImapAccountInformationController;
@property(retain, nonatomic) NSTabViewController *accountDetailController; // @synthesize accountDetailController=_accountDetailController;
@property(nonatomic) __weak NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(retain, nonatomic) ACUIAccountsTableViewController *accountsTableController; // @synthesize accountsTableController=_accountsTableController;
@property(nonatomic) __weak NSView *accountsTableContainer; // @synthesize accountsTableContainer=_accountsTableContainer;
- (void).cxx_destruct;
- (void)_performPostVerifyAction:(long long)arg1 shouldDeselectAccount:(BOOL)arg2 proposedToolbarIdentifier:(id)arg3;
- (id)_preferencesTabController;
- (BOOL)_shouldDeselectAccountWithPostVerifyAction:(long long)arg1;
- (void)_saveAccount;
- (void)_outgoingAccountNeedsVerificationDidChange:(BOOL)arg1;
- (void)_accountNeedsVerificationDidChange:(BOOL)arg1;
- (void)_accountNeedsSavingDidChange:(BOOL)arg1;
- (void)_addRemoveAccountClick:(id)arg1;
- (void)_selectedTabViewItemDidChange:(long long)arg1;
- (void)focusAccount:(id)arg1;
- (id)subTitleOverrideForAccount:(id)arg1;
- (void)didRefreshAccounts;
- (void)didSelectAccount:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (BOOL)windowShouldClose:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

