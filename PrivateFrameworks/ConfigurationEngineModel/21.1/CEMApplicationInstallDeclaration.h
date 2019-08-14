//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMApplicationInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadApplication;
    NSNumber *_payloadMandatory;
    NSNumber *_payloadInstallWhenActivated;
    NSNumber *_payloadRemoveWhenDeactivated;
    NSNumber *_payloadManageData;
    NSString *_payloadVPNUUID;
    NSNumber *_payloadPreventDataBackup;
    CEMAnyPayload *_payloadConfiguration;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5 withManageData:(id)arg6 withVPNUUID:(id)arg7 withPreventDataBackup:(id)arg8 withConfiguration:(id)arg9;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) CEMAnyPayload *payloadConfiguration; // @synthesize payloadConfiguration=_payloadConfiguration;
@property(copy, nonatomic) NSNumber *payloadPreventDataBackup; // @synthesize payloadPreventDataBackup=_payloadPreventDataBackup;
@property(copy, nonatomic) NSString *payloadVPNUUID; // @synthesize payloadVPNUUID=_payloadVPNUUID;
@property(copy, nonatomic) NSNumber *payloadManageData; // @synthesize payloadManageData=_payloadManageData;
@property(copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated; // @synthesize payloadRemoveWhenDeactivated=_payloadRemoveWhenDeactivated;
@property(copy, nonatomic) NSNumber *payloadInstallWhenActivated; // @synthesize payloadInstallWhenActivated=_payloadInstallWhenActivated;
@property(copy, nonatomic) NSNumber *payloadMandatory; // @synthesize payloadMandatory=_payloadMandatory;
@property(copy, nonatomic) NSString *payloadApplication; // @synthesize payloadApplication=_payloadApplication;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

