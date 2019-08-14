//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKAccountOverrideInfo, CKContainerID, NSDictionary, NSString;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding>
{
    BOOL _captureResponseHTTPHeaders;
    BOOL _wantsSiloedContext;
    BOOL _useZoneWidePCS;
    BOOL _holdAllOperations;
    BOOL _returnPCSMetadata;
    BOOL _useMMCSEncryptionV2;
    BOOL _bypassPCSEncryption;
    BOOL _forceEnableReadOnlyManatee;
    BOOL _masqueradeAsThirdPartyApp;
    unsigned int _clientSDKVersion;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKAccountOverrideInfo *_accountInfoOverride;
    NSDictionary *_fakeEntitlements;
    NSString *_containerEncryptionServiceName;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL masqueradeAsThirdPartyApp; // @synthesize masqueradeAsThirdPartyApp=_masqueradeAsThirdPartyApp;
@property(nonatomic) unsigned int clientSDKVersion; // @synthesize clientSDKVersion=_clientSDKVersion;
@property(nonatomic) BOOL forceEnableReadOnlyManatee; // @synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee;
@property(nonatomic) BOOL bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property(retain, nonatomic) NSString *containerEncryptionServiceName; // @synthesize containerEncryptionServiceName=_containerEncryptionServiceName;
@property(nonatomic) BOOL useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(nonatomic) BOOL returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property(nonatomic) BOOL holdAllOperations; // @synthesize holdAllOperations=_holdAllOperations;
@property(retain, nonatomic) NSDictionary *fakeEntitlements; // @synthesize fakeEntitlements=_fakeEntitlements;
@property(nonatomic) BOOL useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property(nonatomic) BOOL wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;
@property(nonatomic) BOOL captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property(retain, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

