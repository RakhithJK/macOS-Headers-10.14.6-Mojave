//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ACDEClient/ACFCryptographProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ACFCryptograph : NSObject <ACFCryptographProtocol>
{
}

- (void)setLength:(unsigned long long)arg1 toData:(id)arg2;
- (id)sha1ContextFinalize:(id)arg1;
- (void)sha1Context:(id)arg1 updateWithData:(id)arg2;
- (id)sha1Context;
- (id)compressData:(id)arg1;
- (id)compactDataFromPropertyList:(id)arg1;
- (void)clearKey:(id)arg1;
- (void)fillHMACSuffix:(id)arg1;
- (void)fillEncryptionSuffix:(id)arg1;
- (id)hmac256DataWithData:(id)arg1 key:(id)arg2;
- (id)decrypt3DESCBCData:(id)arg1 withKey:(id)arg2;
- (id)encrypt3DESCBCData:(id)arg1 withKey:(id)arg2 pading:(BOOL)arg3;
- (id)decryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(BOOL)arg4;
- (id)encryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(BOOL)arg4;
- (id)randomStringOfLength:(unsigned long long)arg1;
- (id)randomDataOfLength:(unsigned long long)arg1;
- (id)hashStringSHA1WithString:(id)arg1;
- (id)hashDataSHA1WithString:(id)arg1;
- (id)hashDataSHA256WithData:(id)arg1;
- (id)hashStringSHA256WithString:(id)arg1;
- (id)encodeObscuredDataWithString:(id)arg1 length:(unsigned long long)arg2;
- (id)decodeStringWithObscuredData:(id)arg1;
- (id)encodeBase16:(id)arg1;
- (id)decodeBase16:(id)arg1;
- (id)encodeBase64:(id)arg1;
- (id)decodeBase64:(id)arg1;
- (id)signatureForData:(id)arg1 withKey:(struct OpaqueSecKeyRef *)arg2;
- (id)encryptData:(id)arg1 withKey:(struct OpaqueSecKeyRef *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

