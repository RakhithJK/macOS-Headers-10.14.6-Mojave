//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "AKInlineSignInViewControllerDelegate-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"

@class NSMutableSet, NSObject, NSString, NSTabView, NSTabViewItem, SOAccountRegistrationController, iMessagePrivacyViewController;
@protocol OS_dispatch_semaphore;

@interface iMessagePreferences : NSViewController <NSTabViewDelegate, AKInlineSignInViewControllerDelegate>
{
    BOOL _aliasInstructionsShown;
    NSTabView *_tabView;
    NSTabViewItem *_setupTabItem;
    NSTabViewItem *_detailsTabItem;
    NSTabViewItem *_privacyTabItem;
    SOAccountRegistrationController *_accountController;
    NSMutableSet *_currentControllers;
    NSObject<OS_dispatch_semaphore> *_signInSemaphore;
}

@property(retain) NSObject<OS_dispatch_semaphore> *signInSemaphore; // @synthesize signInSemaphore=_signInSemaphore;
@property BOOL aliasInstructionsShown; // @synthesize aliasInstructionsShown=_aliasInstructionsShown;
@property(retain) NSMutableSet *currentControllers; // @synthesize currentControllers=_currentControllers;
@property(retain) SOAccountRegistrationController *accountController; // @synthesize accountController=_accountController;
@property(retain) NSTabViewItem *privacyTabItem; // @synthesize privacyTabItem=_privacyTabItem;
@property(retain) NSTabViewItem *detailsTabItem; // @synthesize detailsTabItem=_detailsTabItem;
@property(retain) NSTabViewItem *setupTabItem; // @synthesize setupTabItem=_setupTabItem;
@property(retain) NSTabView *tabView; // @synthesize tabView=_tabView;
- (void).cxx_destruct;
- (void)accountAliasVerificationStatusChanged:(id)arg1;
- (void)accountAuthenticationTimedOut:(id)arg1;
- (void)accountRegistrationStatusChanged:(id)arg1;
- (void)showAliasValidationErrorForAlias:(id)arg1 errorUserInfo:(id)arg2;
- (void)showEmailSentSheetForAlias:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (BOOL)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
@property(readonly, copy) NSString *currentHelpTag;
- (void)setRepresentedObject:(id)arg1;
- (void)validateDefaultAlias;
- (id)defaultVettedAliasName;
- (void)updateTabForCurrentRegistrationState;
- (void)switchToDetailsTabView;
- (void)switchToSignInTabView;
- (void)clearViewContollers;
- (void)monitorAccount:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly) iMessagePrivacyViewController *privacyViewController; // @dynamic privacyViewController;
- (id)account;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

