//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAnyPayload, NSArray, NSNumber, NSString;

@interface CEMSystemWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadFilterType;
    NSNumber *_payloadAutoFilterEnabled;
    NSArray *_payloadPermittedURLs;
    NSArray *_payloadBlacklistedURLs;
    NSArray *_payloadWhitelistedBookmarks;
    NSString *_payloadUserDefinedName;
    NSString *_payloadPluginBundleID;
    NSString *_payloadServerAddress;
    NSString *_payloadUserName;
    NSString *_payloadPassword;
    NSString *_payloadCertificate;
    NSString *_payloadOrganization;
    CEMAnyPayload *_payloadVendorConfig;
    NSNumber *_payloadFilterBrowsers;
    NSNumber *_payloadFilterSockets;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withFilterType:(id)arg2 withAutoFilterEnabled:(id)arg3 withPermittedURLs:(id)arg4 withBlacklistedURLs:(id)arg5 withWhitelistedBookmarks:(id)arg6 withUserDefinedName:(id)arg7 withPluginBundleID:(id)arg8 withServerAddress:(id)arg9 withUserName:(id)arg10 withPassword:(id)arg11 withCertificate:(id)arg12 withOrganization:(id)arg13 withVendorConfig:(id)arg14 withFilterBrowsers:(id)arg15 withFilterSockets:(id)arg16;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadFilterSockets; // @synthesize payloadFilterSockets=_payloadFilterSockets;
@property(copy, nonatomic) NSNumber *payloadFilterBrowsers; // @synthesize payloadFilterBrowsers=_payloadFilterBrowsers;
@property(copy, nonatomic) CEMAnyPayload *payloadVendorConfig; // @synthesize payloadVendorConfig=_payloadVendorConfig;
@property(copy, nonatomic) NSString *payloadOrganization; // @synthesize payloadOrganization=_payloadOrganization;
@property(copy, nonatomic) NSString *payloadCertificate; // @synthesize payloadCertificate=_payloadCertificate;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadUserName; // @synthesize payloadUserName=_payloadUserName;
@property(copy, nonatomic) NSString *payloadServerAddress; // @synthesize payloadServerAddress=_payloadServerAddress;
@property(copy, nonatomic) NSString *payloadPluginBundleID; // @synthesize payloadPluginBundleID=_payloadPluginBundleID;
@property(copy, nonatomic) NSString *payloadUserDefinedName; // @synthesize payloadUserDefinedName=_payloadUserDefinedName;
@property(copy, nonatomic) NSArray *payloadWhitelistedBookmarks; // @synthesize payloadWhitelistedBookmarks=_payloadWhitelistedBookmarks;
@property(copy, nonatomic) NSArray *payloadBlacklistedURLs; // @synthesize payloadBlacklistedURLs=_payloadBlacklistedURLs;
@property(copy, nonatomic) NSArray *payloadPermittedURLs; // @synthesize payloadPermittedURLs=_payloadPermittedURLs;
@property(copy, nonatomic) NSNumber *payloadAutoFilterEnabled; // @synthesize payloadAutoFilterEnabled=_payloadAutoFilterEnabled;
@property(copy, nonatomic) NSString *payloadFilterType; // @synthesize payloadFilterType=_payloadFilterType;
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

