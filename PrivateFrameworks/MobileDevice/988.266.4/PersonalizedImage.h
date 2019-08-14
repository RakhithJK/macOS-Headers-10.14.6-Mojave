//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface PersonalizedImage : NSObject
{
    struct _AMDevice *_device;
    NSURL *_bundlePathURL;
    NSDictionary *_mountedVolumeEntry;
    NSURL *_imagePathURL;
    NSString *_imageVariant;
    NSNumber *_ecid;
    NSNumber *_chipID;
    NSNumber *_boardID;
    NSNumber *_securityDomain;
    NSNumber *_certificateSecurityMode;
    NSNumber *_certificateProductionStatus;
    NSNumber *_effectiveSecurityMode;
    NSNumber *_effectiveProductionStatus;
    NSNumber *_image4Supported;
    NSData *_apNonce;
    NSData *_sepNonce;
    NSString *_hardwareModel;
    NSString *_deviceClass;
    unsigned int _digestLength;
    BOOL _useCredentials;
    NSURL *_signingServerURL;
    NSURL *_userProvidedBundleMountPathURL;
}

@property(retain, nonatomic) NSURL *userProvidedBundleMountPathURL; // @synthesize userProvidedBundleMountPathURL=_userProvidedBundleMountPathURL;
@property(retain, nonatomic) NSURL *signingServerURL; // @synthesize signingServerURL=_signingServerURL;
@property(nonatomic) BOOL useCredentials; // @synthesize useCredentials=_useCredentials;
@property(nonatomic) unsigned int digestLength; // @synthesize digestLength=_digestLength;
@property(copy, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(retain, nonatomic) NSData *sepNonce; // @synthesize sepNonce=_sepNonce;
@property(retain, nonatomic) NSData *apNonce; // @synthesize apNonce=_apNonce;
@property(retain, nonatomic) NSNumber *image4Supported; // @synthesize image4Supported=_image4Supported;
@property(retain, nonatomic) NSNumber *effectiveProductionStatus; // @synthesize effectiveProductionStatus=_effectiveProductionStatus;
@property(retain, nonatomic) NSNumber *effectiveSecurityMode; // @synthesize effectiveSecurityMode=_effectiveSecurityMode;
@property(retain, nonatomic) NSNumber *certificateProductionStatus; // @synthesize certificateProductionStatus=_certificateProductionStatus;
@property(retain, nonatomic) NSNumber *certificateSecurityMode; // @synthesize certificateSecurityMode=_certificateSecurityMode;
@property(retain, nonatomic) NSNumber *securityDomain; // @synthesize securityDomain=_securityDomain;
@property(retain, nonatomic) NSNumber *boardID; // @synthesize boardID=_boardID;
@property(retain, nonatomic) NSNumber *chipID; // @synthesize chipID=_chipID;
@property(retain, nonatomic) NSNumber *ecid; // @synthesize ecid=_ecid;
@property(retain, nonatomic) NSString *imageVariant; // @synthesize imageVariant=_imageVariant;
@property(retain, nonatomic) NSURL *imagePathURL; // @synthesize imagePathURL=_imagePathURL;
@property(retain, nonatomic) NSDictionary *mountedVolumeEntry; // @synthesize mountedVolumeEntry=_mountedVolumeEntry;
@property(retain, nonatomic) NSURL *bundlePathURL; // @synthesize bundlePathURL=_bundlePathURL;
@property(nonatomic) struct _AMDevice *device; // @synthesize device=_device;
- (int)mountImage:(id *)arg1;
- (int)mountImage:(id)arg1 serverTicket:(id)arg2 imageDigest:(id)arg3 error:(id *)arg4;
- (BOOL)initializeDeviceAttributes:(id *)arg1;
- (BOOL)initializeImageProperties:(id *)arg1;
- (id)digestFile:(id)arg1 digestLength:(unsigned int)arg2 error:(id *)arg3;
- (id)digestFileSha384:(id)arg1 error:(id *)arg2;
- (id)digestFileSha1:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithDevice:(struct _AMDevice *)arg1 bundleURL:(id)arg2 imageVariant:(id)arg3 options:(id)arg4;

@end

