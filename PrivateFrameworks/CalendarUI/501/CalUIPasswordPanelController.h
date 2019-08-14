//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACUICredentialPromptViewController, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CalUIPasswordPanelController : NSObject
{
    NSMutableSet *_authenticatingAccountUIDs;
    NSMutableDictionary *_datesPasswordPanelWasShown;
    NSObject<OS_dispatch_queue> *_checkAuthenticatingAccountUIDsSerialQueue;
    ACUICredentialPromptViewController *_credentialPromptViewController;
    NSObject<OS_dispatch_queue> *_showCredentialPromptSerialQueue;
}

+ (id)sharedController;
@property(retain) NSObject<OS_dispatch_queue> *showCredentialPromptSerialQueue; // @synthesize showCredentialPromptSerialQueue=_showCredentialPromptSerialQueue;
@property(retain) ACUICredentialPromptViewController *credentialPromptViewController; // @synthesize credentialPromptViewController=_credentialPromptViewController;
@property(retain) NSObject<OS_dispatch_queue> *checkAuthenticatingAccountUIDsSerialQueue; // @synthesize checkAuthenticatingAccountUIDsSerialQueue=_checkAuthenticatingAccountUIDsSerialQueue;
@property(retain) NSMutableDictionary *datesPasswordPanelWasShown; // @synthesize datesPasswordPanelWasShown=_datesPasswordPanelWasShown;
@property(retain) NSMutableSet *authenticatingAccountUIDs; // @synthesize authenticatingAccountUIDs=_authenticatingAccountUIDs;
- (void).cxx_destruct;
- (BOOL)_recentlyShowedPasswordPanelForAccount:(id)arg1;
- (id)_mainWindow;
- (void)showPasswordPanelsForUnauthenticatedAccounts;
- (void)showPasswordPanelForSource:(id)arg1 userInitiated:(BOOL)arg2;
- (void)showPasswordPanelForSource:(id)arg1;
- (void)showPasswordPanelForAccount:(id)arg1 userInitiated:(BOOL)arg2;
- (void)showPasswordPanelForAccount:(id)arg1;
- (id)init;

@end

