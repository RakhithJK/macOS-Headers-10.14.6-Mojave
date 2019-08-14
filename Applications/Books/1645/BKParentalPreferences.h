//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BKPreferencesModule.h"

@class BKSecurePreferences, NSButton, NSTextField, SFAuthorizationView;

@interface BKParentalPreferences : BKPreferencesModule
{
    struct AuthorizationOpaqueRef *_authorization;
    NSButton *_disableBookstoreButton;
    NSButton *_restrictExplicitContentButton;
    NSTextField *_restrictExplicitContentExplanationField;
    SFAuthorizationView *_authorizationButton;
    BKSecurePreferences *_securePreferences;
}

+ (id)userID;
@property(retain) BKSecurePreferences *securePreferences; // @synthesize securePreferences=_securePreferences;
@property __weak SFAuthorizationView *authorizationButton; // @synthesize authorizationButton=_authorizationButton;
@property __weak NSTextField *restrictExplicitContentExplanationField; // @synthesize restrictExplicitContentExplanationField=_restrictExplicitContentExplanationField;
@property __weak NSButton *restrictExplicitContentButton; // @synthesize restrictExplicitContentButton=_restrictExplicitContentButton;
@property __weak NSButton *disableBookstoreButton; // @synthesize disableBookstoreButton=_disableBookstoreButton;
- (void).cxx_destruct;
- (void)authorizationViewCreatedAuthorization:(id)arg1;
- (void)authorizationViewDidDeauthorize:(id)arg1;
- (void)authorizationViewDidAuthorize:(id)arg1;
- (void)restrictExplicitContentAction:(id)arg1;
- (void)disableBookstoreAction:(id)arg1;
- (void)updateControlsForAuthorizationState;
- (void)saveChanges;
- (BOOL)hasChangesPending;
- (BOOL)_needToCloseStore;
- (BOOL)isResizable;
- (void)awakeFromNib;
- (id)authBlobError:(id *)arg1;
- (id)init;

@end

