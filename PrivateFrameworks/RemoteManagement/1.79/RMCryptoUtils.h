//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RMCryptoUtils : NSObject
{
}

+ (id)signPropertyList:(id)arg1 withIdentity:(struct OpaqueSecIdentityRef *)arg2 withAdditionalCertificates:(id)arg3 detachedSignature:(BOOL)arg4 error:(id *)arg5;
+ (id)signData:(id)arg1 withIdentity:(struct OpaqueSecIdentityRef *)arg2 withAdditionalCertificates:(id)arg3 detachedSignature:(BOOL)arg4 error:(id *)arg5;

@end
