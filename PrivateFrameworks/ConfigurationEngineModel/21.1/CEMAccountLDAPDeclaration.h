//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAccountLDAPDeclaration_CommunicationServiceRules, NSArray, NSNumber, NSString;

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadLDAPAccountDescription;
    NSString *_payloadLDAPAccountHostName;
    NSNumber *_payloadLDAPAccountUseSSL;
    NSArray *_payloadLDAPSearchSettings;
    CEMAccountLDAPDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;
    NSString *_payloadLDAPCredentials;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withLDAPAccountHostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withLDAPAccountDescription:(id)arg2 withLDAPAccountHostName:(id)arg3 withLDAPAccountUseSSL:(id)arg4 withLDAPSearchSettings:(id)arg5 withCommunicationServiceRules:(id)arg6 withLDAPCredentials:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadLDAPCredentials; // @synthesize payloadLDAPCredentials=_payloadLDAPCredentials;
@property(copy, nonatomic) CEMAccountLDAPDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // @synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules;
@property(copy, nonatomic) NSArray *payloadLDAPSearchSettings; // @synthesize payloadLDAPSearchSettings=_payloadLDAPSearchSettings;
@property(copy, nonatomic) NSNumber *payloadLDAPAccountUseSSL; // @synthesize payloadLDAPAccountUseSSL=_payloadLDAPAccountUseSSL;
@property(copy, nonatomic) NSString *payloadLDAPAccountHostName; // @synthesize payloadLDAPAccountHostName=_payloadLDAPAccountHostName;
@property(copy, nonatomic) NSString *payloadLDAPAccountDescription; // @synthesize payloadLDAPAccountDescription=_payloadLDAPAccountDescription;
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

