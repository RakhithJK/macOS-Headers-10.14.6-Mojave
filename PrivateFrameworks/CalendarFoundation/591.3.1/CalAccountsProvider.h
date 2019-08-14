//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSMutableArray;

@interface CalAccountsProvider : NSObject
{
    BOOL _runningUnitTests;
    NSMutableArray *_accountsWhenRunningUnitTests;
    ACAccountStore *_accountStore;
}

+ (id)_uniqueStringsForUsername:(id)arg1;
+ (id)_existingAccountForAccount:(id)arg1 inStore:(id)arg2;
+ (id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)_accountsWithAccountType:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
+ (id)verboseDescriptionForAccount:(id)arg1;
+ (id)uniqueStringsForPrincipalPath:(id)arg1;
+ (id)uniqueStringsForHostname:(id)arg1;
+ (BOOL)accountIsDuplicate:(id)arg1 inStore:(id)arg2;
+ (id)defaultProvider;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) BOOL runningUnitTests; // @synthesize runningUnitTests=_runningUnitTests;
@property(retain, nonatomic) NSMutableArray *accountsWhenRunningUnitTests; // @synthesize accountsWhenRunningUnitTests=_accountsWhenRunningUnitTests;
- (void).cxx_destruct;
- (id)_supportedDataclassesForMainBundleID;
- (id)_mainBundleID;
- (BOOL)_bundleIDSupportsDataclassReminders:(id)arg1;
- (BOOL)_bundleIDSupportsDataclassCalendars:(id)arg1;
- (id)_supportedDataclassesForBundleID:(id)arg1;
- (id)_providerForCalDAVAccount:(id)arg1;
- (id)_cachedAccountWithIdentifier:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
- (id)_accountsEnabledForDataClasses:(id)arg1;
- (id)_accountsEnabledForDataClass:(id)arg1;
- (BOOL)saveAccount:(id)arg1 withError:(id *)arg2;
- (BOOL)saveAccount:(id)arg1 verify:(BOOL)arg2 withError:(id *)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 verify:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 forceRenewal:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)renewCredentialsForAccount:(id)arg1 forceRenewal:(BOOL)arg2;
- (BOOL)renewCredentialsForAccount:(id)arg1;
- (BOOL)removeAccount:(id)arg1 withError:(id *)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)oauthTokenForAccount:(id)arg1 tokenType:(id)arg2;
- (void)messageTraceCurrentAccounts;
- (id)existingAccountForAccount:(id)arg1;
- (id)delegatePrincipalUIDsForAccount:(id)arg1;
- (id)clientTokenForAccountWithIdentifier:(id)arg1;
- (id)allAccountsWithError:(id *)arg1;
- (id)accountWithIdentifier:(id)arg1 returnCachedVersion:(BOOL)arg2;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)accountsWithServerURL:(id)arg1 username:(id)arg2 returnCachedVersions:(BOOL)arg3;
- (id)accountsWithUsername:(id)arg1;
- (id)accountsWithServerURL:(id)arg1;
- (BOOL)accountIsDuplicate:(id)arg1;
- (BOOL)account:(id)arg1 hasServerURL:(id)arg2;
@property(readonly, nonatomic) NSArray *enabledAccounts;
@property(readonly, nonatomic) NSArray *accountsEnabledForReminders;
@property(readonly, nonatomic) NSArray *accountsEnabledForCalendar;
@property(readonly, nonatomic) NSArray *allAccounts;
- (id)init;

@end

