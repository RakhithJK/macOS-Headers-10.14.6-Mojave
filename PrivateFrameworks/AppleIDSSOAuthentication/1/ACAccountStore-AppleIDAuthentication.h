//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleIDAuthentication)
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;
- (id)aida_accountForPrimaryiCloudAccount;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_AppleIDAuthenticationAccountType;
- (id)_primaryiCloudAccount;
@end

