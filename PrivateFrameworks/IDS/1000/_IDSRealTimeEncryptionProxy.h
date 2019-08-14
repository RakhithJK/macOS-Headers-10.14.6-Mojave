//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference, NSString;
@protocol OS_dispatch_queue;

@interface _IDSRealTimeEncryptionProxy : NSObject <IDSDaemonListenerProtocol>
{
    NSString *_uniqueID;
    NSString *_accountID;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)resetKeysForGroup:(id)arg1;
- (void)sendMKMRecoveryRequestToGroup:(id)arg1;
- (void)requestMasterKeyMaterialForGroup:(id)arg1;
- (void)sendMasterKeyMaterialToGroup:(id)arg1;
- (void)requestPublicKeys;
- (void)sendPrekeyToGroup:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

