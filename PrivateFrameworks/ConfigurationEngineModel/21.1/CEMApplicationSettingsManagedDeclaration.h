//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowOpenFromManagedToUnmanaged;
    NSNumber *_payloadAllowOpenFromUnmanagedToManaged;
    NSNumber *_payloadForceAirDropUnmanaged;
    NSNumber *_payloadAllowManagedAppsCloudSync;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowOpenFromManagedToUnmanaged:(id)arg2 withAllowOpenFromUnmanagedToManaged:(id)arg3 withForceAirDropUnmanaged:(id)arg4 withAllowManagedAppsCloudSync:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowManagedAppsCloudSync; // @synthesize payloadAllowManagedAppsCloudSync=_payloadAllowManagedAppsCloudSync;
@property(copy, nonatomic) NSNumber *payloadForceAirDropUnmanaged; // @synthesize payloadForceAirDropUnmanaged=_payloadForceAirDropUnmanaged;
@property(copy, nonatomic) NSNumber *payloadAllowOpenFromUnmanagedToManaged; // @synthesize payloadAllowOpenFromUnmanagedToManaged=_payloadAllowOpenFromUnmanagedToManaged;
@property(copy, nonatomic) NSNumber *payloadAllowOpenFromManagedToUnmanaged; // @synthesize payloadAllowOpenFromManagedToUnmanaged=_payloadAllowOpenFromManagedToUnmanaged;
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

