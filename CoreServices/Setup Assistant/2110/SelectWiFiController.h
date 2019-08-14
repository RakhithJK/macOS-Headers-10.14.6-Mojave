//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddyViewController.h"

#import "NSTableViewDelegate-Protocol.h"

@class NSArrayController, NSLayoutConstraint, NSObject, NSString, NSTableColumn, NSTableView, NSView, NSWindow, WiFiManager;
@protocol OS_dispatch_queue;

@interface SelectWiFiController : MacBuddyViewController <NSTableViewDelegate>
{
    float scrollViewInitialHeight;
    float pwdContainerInitialHeight;
    NSLayoutConstraint *networkListHeightConstraint;
    NSTableColumn *networkNameColumn;
    NSTableView *networkListTableView;
    NSArrayController *networkListController;
    NSObject<OS_dispatch_queue> *_animationQueue;
    int _nextAnimation;
    id passwordTextField;
    id passwordWrongRedArrow;
    NSWindow *joinSheet;
    BOOL otherNetworkNameEmptyWarningImageVisible;
    BOOL otherNetworkConnectingSpinnerVisible;
    NSString *otherNetworkName;
    NSString *otherNetworkPassword;
    NSString *otherNetworkJoinErrorMessage;
    BOOL didEmptySelectionNag;
    BOOL _shouldShowScanningView;
    BOOL _showingJoinSheet;
    BOOL _showEnterpriseUsernameField;
    BOOL _completedMandatoryUpdateCheck;
    BOOL _shouldGoToNextPaneAfterMandatoryUpdateCheck;
    NSView *_passwordFieldContainer;
    NSView *_passwordEntryView;
    NSLayoutConstraint *_showEnterpriseUsernameConstraint;
    NSLayoutConstraint *_hideEnterpriseUsernameConstraint;
    NSString *_enterpiseUsername;
}

+ (void)initialize;
@property BOOL shouldGoToNextPaneAfterMandatoryUpdateCheck; // @synthesize shouldGoToNextPaneAfterMandatoryUpdateCheck=_shouldGoToNextPaneAfterMandatoryUpdateCheck;
@property BOOL completedMandatoryUpdateCheck; // @synthesize completedMandatoryUpdateCheck=_completedMandatoryUpdateCheck;
@property(copy) NSString *enterpiseUsername; // @synthesize enterpiseUsername=_enterpiseUsername;
@property BOOL showEnterpriseUsernameField; // @synthesize showEnterpriseUsernameField=_showEnterpriseUsernameField;
@property(retain) NSLayoutConstraint *hideEnterpriseUsernameConstraint; // @synthesize hideEnterpriseUsernameConstraint=_hideEnterpriseUsernameConstraint;
@property(retain) NSLayoutConstraint *showEnterpriseUsernameConstraint; // @synthesize showEnterpriseUsernameConstraint=_showEnterpriseUsernameConstraint;
@property(retain) NSView *passwordEntryView; // @synthesize passwordEntryView=_passwordEntryView;
@property(retain) NSView *passwordFieldContainer; // @synthesize passwordFieldContainer=_passwordFieldContainer;
@property(readonly) BOOL showingJoinSheet; // @synthesize showingJoinSheet=_showingJoinSheet;
@property(readonly) BOOL shouldShowScanningView; // @synthesize shouldShowScanningView=_shouldShowScanningView;
@property BOOL otherNetworkConnectingSpinnerVisible; // @synthesize otherNetworkConnectingSpinnerVisible;
@property(copy) NSString *otherNetworkJoinErrorMessage; // @synthesize otherNetworkJoinErrorMessage;
@property BOOL otherNetworkNameEmptyWarningImageVisible; // @synthesize otherNetworkNameEmptyWarningImageVisible;
@property(copy) NSString *otherNetworkPassword; // @synthesize otherNetworkPassword;
@property(copy) NSString *otherNetworkName; // @synthesize otherNetworkName;
- (void).cxx_destruct;
- (void)_showEmptySelectionNag;
- (void)joinSheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)cancelOtherNetworkClicked:(id)arg1;
- (void)joinOtherNetworkClicked:(id)arg1;
- (void)_updateJoinSheetWithError:(long long)arg1;
- (void)_showJoinSheet;
- (void)didBecomeInvisible;
- (void)willBecomeInvisible;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)returnPressedOnPasswordField:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)startMandatoryUpdateCheck;
- (BOOL)validateInput;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)showHidePasswordView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showEnterpriseUsername:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)isScanningRowAtIndex:(long long)arg1;
- (BOOL)isSeparatorRowAtIndex:(long long)arg1;
- (long long)numberOfNetworksShown;
- (BOOL)selectedNetworkIsOtherNetworkPlaceholder;
- (BOOL)selectedNetworkIsEnterprise;
- (BOOL)selectedNetworkRequiresPassword;
- (id)selectedNetwork;
- (void)awakeFromNib;
@property(readonly) WiFiManager *manager;
- (id)init;
- (BOOL)shouldReturnFromSidetrip;
- (id)alternateViewIdentifier;
- (id)nextViewIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

