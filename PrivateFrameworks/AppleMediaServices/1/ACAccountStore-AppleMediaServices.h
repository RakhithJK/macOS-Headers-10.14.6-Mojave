//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray, NSString;

@interface ACAccountStore (AppleMediaServices)
+ (id)_getSetUserCookiesForResponse:(id)arg1;
+ (id)_getSetGlobalCookiesForResponse:(id)arg1;
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;
+ (id)ams_sharedAccountStore;
- (id)ams_iTunesSandboxAccounts;
- (void)_createLocalAccount;
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2;
- (id)_allCommerceiTunesAccounts;
- (id)_alliTunesAccounts;
- (BOOL)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (BOOL)_addGlobalCookiesForResponse:(id)arg1 error:(id *)arg2;
- (BOOL)ams_removeCookiesMatchingProperties:(id)arg1 error:(id *)arg2;
- (BOOL)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id *)arg4;
- (BOOL)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (BOOL)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)ams_secureTokenForAccount:(id)arg1;
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2;
- (id)ams_iTunesAccountWithUsername:(id)arg1;
- (id)ams_iTunesAccountWithDSID:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;
- (id)ams_IDMSAccountForAccount:(id)arg1;
- (id)ams_cookiesForURL:(id)arg1;
@property(readonly) NSString *ams_mediaType;
@property(readonly) ACAccount *ams_localiTunesAccount;
@property(readonly) NSArray *ams_iTunesAccounts;
@property(readonly) ACAccount *ams_activeiTunesAccount;
@property(readonly) ACAccount *ams_activeiCloudAccount;
@property(readonly, getter=ams_isActiveAccountCombined) BOOL ams_activeAccountCombined;
@end

