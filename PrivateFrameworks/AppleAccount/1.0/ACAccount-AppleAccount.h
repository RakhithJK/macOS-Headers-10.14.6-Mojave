//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class AARegionInfo, AASuspensionInfo, NSArray, NSNumber, NSString;

@interface ACAccount (AppleAccount)
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)aa_useCellularForDataclass:(id)arg1;
- (id)aa_hsaTokenWithError:(id *)arg1;
- (id)aa_authTokenWithError:(id *)arg1;
- (void)aa_setMDMServerToken:(id)arg1;
@property(readonly, nonatomic) NSString *aa_mdmServerToken;
- (void)aa_setHSAToken:(id)arg1;
@property(readonly, nonatomic) NSString *aa_hsaToken;
- (void)aa_setMapsToken:(id)arg1;
@property(readonly, nonatomic) NSString *aa_mapsToken;
@property(readonly, nonatomic) NSString *aa_fmipToken;
@property(copy, nonatomic, setter=aa_setAuthToken:) NSString *aa_authToken;
@property(copy, nonatomic, setter=aa_setPassword:) NSString *aa_password;
@property(readonly, nonatomic) ACAccount *aa_childMailAccount;
@property(readonly, nonatomic) ACAccount *aa_cloudKitAccount;
@property(readonly, nonatomic) ACAccount *aa_fmipAccount;
@property(readonly, nonatomic) ACAccount *aa_fmfAccount;
@property(nonatomic, setter=aa_setRepairState:) NSNumber *aa_repairState;
@property(copy, nonatomic, setter=aa_setLastKnownQuota:) NSNumber *aa_lastKnownQuota;
@property(readonly, nonatomic) BOOL aa_hasOptionalTerms;
@property(readonly, nonatomic) BOOL aa_isSandboxAccount;
@property(readonly, nonatomic) BOOL aa_isNotesMigrated;
@property(readonly, nonatomic) BOOL aa_isManagedAppleID;
@property(readonly, nonatomic) BOOL aa_isUsingiCloud;
@property(nonatomic, setter=aa_setCloudDocsMigrationComplete:) BOOL aa_isCloudDocsMigrationComplete;
@property(nonatomic, setter=aa_setUsesCloudDocs:) BOOL aa_isUsingCloudDocs;
@property(readonly, copy, nonatomic) AASuspensionInfo *aa_suspensionInfo;
@property(readonly, nonatomic) BOOL aa_isSuspended;
@property(nonatomic, setter=aa_setNeedsToVerifyTerms:) BOOL aa_needsToVerifyTerms;
@property(nonatomic, setter=aa_setPrimaryEmailVerified:) BOOL aa_isPrimaryEmailVerified;
@property(nonatomic, setter=aa_setPrimaryAccount:) BOOL aa_isPrimaryAccount;
@property(readonly, copy, nonatomic) AARegionInfo *aa_regionInfo;
@property(copy, nonatomic, setter=aa_setLastName:) NSString *aa_lastName;
@property(copy, nonatomic, setter=aa_setMiddleName:) NSString *aa_middleName;
@property(copy, nonatomic, setter=aa_setFirstName:) NSString *aa_firstName;
@property(readonly, nonatomic) NSString *aa_altDSID;
@property(readonly, nonatomic) NSString *aa_personID;
@property(readonly, nonatomic) NSArray *aa_appleIDAliases;
@property(readonly, nonatomic) NSString *aa_appleId;
@property(readonly, nonatomic) NSString *aa_primaryEmail;
@property(readonly, nonatomic) NSString *aa_formattedUsername;
@end

