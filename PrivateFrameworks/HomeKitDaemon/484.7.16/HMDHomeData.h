//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSMutableCopying-Protocol.h>

@class HMDAccount, HMDApplicationData, NSArray, NSDictionary, NSString, NSUUID;

@interface HMDHomeData : HMFObject <NSCopying, NSMutableCopying>
{
    NSArray *_homes;
    NSArray *_accessories;
    NSUUID *_primaryHomeUUID;
    NSUUID *_lastCurrentHomeUUID;
    long long _schemaVersion;
    long long _dataVersion;
    NSUUID *_dataTag;
    NSArray *_UUIDsOfRemovedHomes;
    NSArray *_cloudZones;
    NSArray *_incomingInvitations;
    unsigned long long _assistantGenerationCounter;
    NSString *_currentDevice;
    NSArray *_pendingReasonSaved;
    NSArray *_pendingUserManagementOperations;
    NSArray *_unprocessedOperationIdentifiers;
    HMDApplicationData *_applicationData;
    long long _residentEnabledState;
    HMDAccount *_account;
    NSArray *_remoteAccounts;
    BOOL _accessAllowedWhenLocked;
    NSDictionary *_demoAccessories;
    BOOL _demoFinalized;
}

@property(readonly, nonatomic) BOOL demoFinalized; // @synthesize demoFinalized=_demoFinalized;
@property(readonly, copy, nonatomic) NSDictionary *demoAccessories; // @synthesize demoAccessories=_demoAccessories;
@property(readonly, nonatomic) BOOL accessAllowedWhenLocked; // @synthesize accessAllowedWhenLocked=_accessAllowedWhenLocked;
@property(readonly, copy, nonatomic) NSArray *remoteAccounts; // @synthesize remoteAccounts=_remoteAccounts;
@property(readonly, nonatomic) HMDAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) long long residentEnabledState; // @synthesize residentEnabledState=_residentEnabledState;
@property(readonly, copy, nonatomic) HMDApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(readonly, copy, nonatomic) NSArray *unprocessedOperationIdentifiers; // @synthesize unprocessedOperationIdentifiers=_unprocessedOperationIdentifiers;
@property(readonly, copy, nonatomic) NSArray *pendingUserManagementOperations; // @synthesize pendingUserManagementOperations=_pendingUserManagementOperations;
@property(readonly, copy, nonatomic) NSArray *pendingReasonSaved; // @synthesize pendingReasonSaved=_pendingReasonSaved;
@property(readonly, copy, nonatomic) NSString *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) unsigned long long assistantGenerationCounter; // @synthesize assistantGenerationCounter=_assistantGenerationCounter;
@property(readonly, copy, nonatomic) NSArray *incomingInvitations; // @synthesize incomingInvitations=_incomingInvitations;
@property(readonly, copy, nonatomic) NSArray *cloudZones; // @synthesize cloudZones=_cloudZones;
@property(readonly, copy, nonatomic) NSArray *UUIDsOfRemovedHomes; // @synthesize UUIDsOfRemovedHomes=_UUIDsOfRemovedHomes;
@property(readonly, copy, nonatomic) NSUUID *dataTag; // @synthesize dataTag=_dataTag;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(readonly, copy, nonatomic) NSUUID *lastCurrentHomeUUID; // @synthesize lastCurrentHomeUUID=_lastCurrentHomeUUID;
@property(readonly, copy, nonatomic) NSUUID *primaryHomeUUID; // @synthesize primaryHomeUUID=_primaryHomeUUID;
@property(readonly, copy, nonatomic) NSArray *accessories; // @synthesize accessories=_accessories;
@property(readonly, copy, nonatomic) NSArray *homes; // @synthesize homes=_homes;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

