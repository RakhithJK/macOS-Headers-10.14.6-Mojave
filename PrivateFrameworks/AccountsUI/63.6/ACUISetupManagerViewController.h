//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AccountsUI/NSTableViewDataSource-Protocol.h>

@class ACAccountType, ACUIAccountSetupViewController, ACUIAccountTypeRowRadio, NSArray, NSButton, NSLayoutConstraint, NSProgressIndicator, NSString, NSWindow;

@interface ACUISetupManagerViewController : NSViewController <NSTableViewDataSource>
{
    BOOL _cancelWillQuit;
    NSString *_dataclassFilter;
    NSProgressIndicator *_spinner;
    NSButton *_continueButton;
    NSWindow *_window;
    NSWindow *_sheet;
    NSArray *_accountTypes;
    NSLayoutConstraint *_providerTableHeightConstraint;
    NSButton *_cancelButton;
    ACAccountType *_otherAccountsType;
    ACUIAccountSetupViewController *_setupViewController;
    CDUnknownBlockType _completion;
    ACUIAccountTypeRowRadio *_selectedRow;
    NSString *_username;
    ACAccountType *_accountType;
    NSWindow *_safariConfirmSheet;
    NSString *_password;
    ACUISetupManagerViewController *_strongSelf;
}

+ (void)_setDefaultToSkipSetupForAccountType:(id)arg1;
+ (id)_readDefaultForSkipAccountSetup;
+ (BOOL)shouldOfferAccountSetupForAccountType:(id)arg1 username:(id)arg2;
@property(retain) ACUISetupManagerViewController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSWindow *safariConfirmSheet; // @synthesize safariConfirmSheet=_safariConfirmSheet;
@property(retain) ACAccountType *accountType; // @synthesize accountType=_accountType;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) ACUIAccountTypeRowRadio *selectedRow; // @synthesize selectedRow=_selectedRow;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) ACUIAccountSetupViewController *setupViewController; // @synthesize setupViewController=_setupViewController;
@property(retain) ACAccountType *otherAccountsType; // @synthesize otherAccountsType=_otherAccountsType;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSLayoutConstraint *providerTableHeightConstraint; // @synthesize providerTableHeightConstraint=_providerTableHeightConstraint;
@property(retain) NSArray *accountTypes; // @synthesize accountTypes=_accountTypes;
@property(retain) NSWindow *sheet; // @synthesize sheet=_sheet;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property BOOL cancelWillQuit; // @synthesize cancelWillQuit=_cancelWillQuit;
@property(retain) NSString *dataclassFilter; // @synthesize dataclassFilter=_dataclassFilter;
- (void).cxx_destruct;
- (void)_notNowAction:(id)arg1;
- (void)_allowAction:(id)arg1;
- (void)startSetupInWindow:(id)arg1 accountType:(id)arg2 username:(id)arg3 password:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)currentApplicationName;
- (id)otherAccountsLabel;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_loadAccountTypes;
- (id)_accountTypeIdentifierForDataclass:(id)arg1;
- (void)help:(id)arg1;
- (void)viewWillAppear;
- (void)continueButton:(id)arg1;
- (void)_getSetupViewController;
- (void)cancel:(id)arg1;
- (id)nibBundle;
- (void)startSetupInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

