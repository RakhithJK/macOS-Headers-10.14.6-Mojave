//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/FirefoxCryptoKeyStorage-Protocol.h>

@class NSData, NSString, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FirefoxCryptoKeyStoreV4 : NSObject <FirefoxCryptoKeyStorage>
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
    BOOL _isOpen;
    NSData *_globalSalt;
    NSData *_passwordCheckEntrySalt;
    NSData *_passwordCheckPayload;
    NSData *_encryptedPrivateKey;
}

- (void).cxx_destruct;
- (void)_retrievePasswordCheckEntrySaltAndPayload;
- (void)_openDatabaseIfNeeded;
- (id)encryptedPrivateKeyDataWithID:(id)arg1;
@property(readonly, copy, nonatomic) NSData *passwordCheckPayload;
@property(readonly, copy, nonatomic) NSData *passwordCheckEntrySalt;
@property(readonly, copy, nonatomic) NSData *globalSaltData;
@property(readonly, nonatomic) BOOL storesRawPrivateKey;
@property(readonly, nonatomic) BOOL canOpen;
- (void)dealloc;
- (id)initWithStoreURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

