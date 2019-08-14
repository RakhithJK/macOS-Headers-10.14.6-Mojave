//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FirefoxCryptoKeyStorage;

__attribute__((visibility("hidden")))
@interface FirefoxCredentialDecrypter : NSObject
{
    id <FirefoxCryptoKeyStorage> _keyStore;
    NSString *_masterPassword;
}

@property(copy, nonatomic) NSString *masterPassword; // @synthesize masterPassword=_masterPassword;
- (void).cxx_destruct;
- (void)_test_getKeyId:(id *)arg1 initializationVector:(id *)arg2 cipherText:(id *)arg3 fromEncryptedCredentialData:(id)arg4;
- (id)_test_dataByDecryptingData:(id)arg1 rawKey:(id)arg2 initializationVector:(id)arg3;
- (void)_test_getRawKey:(id *)arg1 andInitializationVector:(id *)arg2 fromPassword:(id)arg3 globalSalt:(id)arg4 entrySalt:(id)arg5;
- (void)_test_getRawKey:(id *)arg1 andInitializationVector:(id *)arg2 fromKKey:(id)arg3;
- (id)_test_kKeyFromK1Key:(id)arg1 k2Key:(id)arg2;
- (id)_test_k2KeyFromEntrySalt:(id)arg1 temporaryKey:(id)arg2 combinedHashedPassword:(id)arg3;
- (id)_test_temporaryKeyFromPaddedEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2;
- (id)_test_k1KeyFromEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2;
- (id)_test_combinedHashOfHashedPassword:(id)arg1 entrySalt:(id)arg2;
- (id)_test_entrySaltByPaddingEntrySalt:(id)arg1;
- (id)_test_hashOfPassword:(id)arg1 usingGlobalSalt:(id)arg2;
- (id)_test_init;
- (void)_getRawKey:(id *)arg1 andInitializationVector:(id *)arg2 fromKKey:(id)arg3;
- (id)_kKeyFromK1Key:(id)arg1 k2Key:(id)arg2;
- (id)_k2KeyFromEntrySalt:(id)arg1 temporaryKey:(id)arg2 combinedHashedPassword:(id)arg3;
- (id)_temporaryKeyFromPaddedEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2;
- (id)_k1KeyFromEntrySalt:(id)arg1 combinedHashedPassword:(id)arg2;
- (id)_hmacForData:(id)arg1 key:(id)arg2;
- (id)_combinedHashOfHashedPassword:(id)arg1 entrySalt:(id)arg2;
- (id)_entrySaltByPaddingEntrySalt:(id)arg1;
- (id)_hashOfPassword:(id)arg1 usingGlobalSalt:(id)arg2;
- (void)_getRawKey:(id *)arg1 andInitializationVector:(id *)arg2 fromPassword:(id)arg3 globalSalt:(id)arg4 entrySalt:(id)arg5;
- (id)_dataByDecryptingData:(id)arg1 rawKey:(id)arg2 initializationVector:(id)arg3;
- (void)_getKeyId:(id *)arg1 initializationVector:(id *)arg2 cipherText:(id *)arg3 fromEncryptedCredentialData:(id)arg4;
- (id)_stringByDecryptingCredentialData:(id)arg1;
- (void)_getEncryptedPrivateKeyData:(id *)arg1 cipherText:(id *)arg2 initializationVector:(id *)arg3 forEncryptedCredentialData:(id)arg4;
- (void)_getEncryptedPrivateKey:(id *)arg1 andEntrySalt:(id *)arg2 fromEncryptedPrivateKeyData:(id)arg3;
- (id)_decryptedPrivateKeyFromEncryptedPrivateKey:(id)arg1 password:(id)arg2 globalSalt:(id)arg3 entrySalt:(id)arg4;
- (id)_rawKeyFromDecryptedPrivateKey:(id)arg1;
@property(readonly, nonatomic, getter=isMasterPasswordCorrect) BOOL masterPasswordCorrect;
- (id)_masterPasswordData;
- (id)credentialByDecryptingFirefoxCredential:(id)arg1;
- (id)initWithKeyStore:(id)arg1;

@end

