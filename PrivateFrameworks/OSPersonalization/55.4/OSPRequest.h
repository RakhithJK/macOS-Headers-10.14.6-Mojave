//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSUUID, OSPDevice, OSPSecureBootBundle;

@interface OSPRequest : NSObject
{
    BOOL _userAuth;
    BOOL _showUI;
    BOOL _globalSignature;
    BOOL _useTDMDeviceIdentity;
    BOOL _useRunningDeviceIdentity;
    BOOL _mergeToOutputDirectory;
    BOOL _preferBuildManifest;
    BOOL _flattenManifestRoot;
    BOOL _shouldPersonalize;
    BOOL _forcePersonalization;
    BOOL _skipPersonalizationForTesting;
    BOOL _useDummyDeviceIdentity;
    BOOL _showUsageForPersonalization;
    NSURL *_volumeURL;
    NSURL *_bundleURL;
    NSArray *_packageSpecifiers;
    NSURL *_outputURL;
    NSURL *_signingServerURL;
    NSString *_variant;
    NSData *_appleConnectData;
    NSDictionary *_apRequestEntries;
    NSURL *_kernelCacheOverride;
    OSPDevice *_device;
    OSPSecureBootBundle *_bundle;
    NSURL *_personalizedOutputURL;
    NSURL *_testPersonalizedOutputURL;
    long long _fakePersonalizationErrorCode;
    NSURL *_signedPRDocumentPublicKeyURL;
    NSUUID *_uuid;
}

@property BOOL showUsageForPersonalization; // @synthesize showUsageForPersonalization=_showUsageForPersonalization;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSURL *signedPRDocumentPublicKeyURL; // @synthesize signedPRDocumentPublicKeyURL=_signedPRDocumentPublicKeyURL;
@property BOOL useDummyDeviceIdentity; // @synthesize useDummyDeviceIdentity=_useDummyDeviceIdentity;
@property long long fakePersonalizationErrorCode; // @synthesize fakePersonalizationErrorCode=_fakePersonalizationErrorCode;
@property BOOL skipPersonalizationForTesting; // @synthesize skipPersonalizationForTesting=_skipPersonalizationForTesting;
@property BOOL forcePersonalization; // @synthesize forcePersonalization=_forcePersonalization;
@property BOOL shouldPersonalize; // @synthesize shouldPersonalize=_shouldPersonalize;
@property(retain) NSURL *testPersonalizedOutputURL; // @synthesize testPersonalizedOutputURL=_testPersonalizedOutputURL;
@property(retain) NSURL *personalizedOutputURL; // @synthesize personalizedOutputURL=_personalizedOutputURL;
@property(retain) OSPSecureBootBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) OSPDevice *device; // @synthesize device=_device;
@property(retain) NSURL *kernelCacheOverride; // @synthesize kernelCacheOverride=_kernelCacheOverride;
@property BOOL flattenManifestRoot; // @synthesize flattenManifestRoot=_flattenManifestRoot;
@property BOOL preferBuildManifest; // @synthesize preferBuildManifest=_preferBuildManifest;
@property BOOL mergeToOutputDirectory; // @synthesize mergeToOutputDirectory=_mergeToOutputDirectory;
@property(retain) NSDictionary *apRequestEntries; // @synthesize apRequestEntries=_apRequestEntries;
@property BOOL useRunningDeviceIdentity; // @synthesize useRunningDeviceIdentity=_useRunningDeviceIdentity;
@property BOOL useTDMDeviceIdentity; // @synthesize useTDMDeviceIdentity=_useTDMDeviceIdentity;
@property BOOL globalSignature; // @synthesize globalSignature=_globalSignature;
@property BOOL showUI; // @synthesize showUI=_showUI;
@property(retain) NSData *appleConnectData; // @synthesize appleConnectData=_appleConnectData;
@property BOOL userAuth; // @synthesize userAuth=_userAuth;
@property(retain) NSString *variant; // @synthesize variant=_variant;
@property(retain) NSURL *signingServerURL; // @synthesize signingServerURL=_signingServerURL;
@property(retain) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain) NSArray *packageSpecifiers; // @synthesize packageSpecifiers=_packageSpecifiers;
@property(retain) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain) NSURL *volumeURL; // @synthesize volumeURL=_volumeURL;
- (void).cxx_destruct;
- (void)_printUsageForExecutableNamed:(id)arg1;
- (BOOL)_setPropertiesFromOptions:(id)arg1;
- (BOOL)_parsePRDocument:(id)arg1 enforceSignature:(BOOL)arg2;
- (BOOL)_parseArugments:(const char **)arg1 length:(int)arg2;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)initForGlobalSigningWithArgs:(const char **)arg1 length:(int)arg2;
- (id)initWithArgs:(const char **)arg1 length:(int)arg2;
- (id)initWithOptions:(id)arg1;

@end
