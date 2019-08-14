//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CertSupport : NSObject
{
}

+ (int)exportCerts:(void *)arg1 format:(unsigned int)arg2 flags:(unsigned int)arg3 data:(id *)arg4;
+ (int)p12Import:(id)arg1 nsKeychain:(id)arg2 outCerts:(id *)arg3;
+ (void)addPKCS7CertToKeychain:(id)arg1 nsKeychain:(id)arg2;
+ (void)addCertificatesToKeychain:(id)arg1 nsKeychain:(id)arg2;
+ (BOOL)certificatesFromFile:(id)arg1 certs:(id *)arg2;
+ (BOOL)createSecCertificateRefFromFile:(id)arg1 ref:(struct OpaqueSecCertificateRef **)arg2;
+ (void)addCertToKeychain:(id)arg1 nsKeychain:(id)arg2;
+ (int)addCertificate:(struct OpaqueSecCertificateRef *)arg1 toKeychain:(struct OpaqueSecKeychainRef *)arg2;

@end

