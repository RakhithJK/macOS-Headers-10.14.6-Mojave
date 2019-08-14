//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMDeviceHomeScreenLayoutDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadDock;
    NSArray *_payloadPages;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withPages:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withDock:(id)arg2 withPages:(id)arg3;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadPages; // @synthesize payloadPages=_payloadPages;
@property(copy, nonatomic) NSArray *payloadDock; // @synthesize payloadDock=_payloadDock;
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

