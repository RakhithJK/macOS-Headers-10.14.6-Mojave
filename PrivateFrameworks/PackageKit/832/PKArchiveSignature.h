//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PKArchiveSignature : NSObject
{
    struct __SecTrust *_verifyTrustRef;
}

- (BOOL)_hasSigningCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)signatureDataReturningAlgorithm:(id *)arg1;
- (id)signedDataReturningAlgorithm:(id *)arg1;
@property(readonly) NSString *algorithmType;
@property(readonly) NSArray *certificateRefs;
- (id)description;
- (void)dealloc;
- (struct __SecTrust *)verificationTrustRef;
- (BOOL)verifySignedDataReturningError:(id *)arg1;
- (BOOL)verifySignedData;
- (BOOL)_verifyCMSWithSignedData:(id)arg1 signatureData:(id)arg2 error:(id *)arg3;
- (BOOL)_verifyLegacyWithSignedData:(id)arg1 signatureData:(id)arg2 error:(id *)arg3;

@end

