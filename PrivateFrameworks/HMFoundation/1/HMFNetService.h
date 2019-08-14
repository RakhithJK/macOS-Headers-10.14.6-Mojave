//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/NSNetServiceDelegate-Protocol.h>

@class HMFNetAddress, HMFUnfairLock, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNetService, NSObject, NSString;
@protocol HMFNetServiceDelegate, OS_dispatch_queue;

@interface HMFNetService : HMFObject <HMFLogging, NSNetServiceDelegate>
{
    HMFUnfairLock *_lock;
    NSString *_type;
    NSString *_name;
    NSString *_domain;
    unsigned long long _port;
    NSArray *_addresses;
    NSMutableDictionary *_TXTRecord;
    NSNetService *_internal;
    BOOL _resolving;
    HMFNetAddress *_hostName;
    id <HMFNetServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_resolveBlocks;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (id)errorFromNetServiceErrorDict:(id)arg1;
@property(nonatomic, getter=isResolving) BOOL resolving; // @synthesize resolving=_resolving;
@property(readonly, nonatomic) NSMutableArray *resolveBlocks; // @synthesize resolveBlocks=_resolveBlocks;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property __weak id <HMFNetServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSNetService *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (id)logIdentifier;
- (void)_reallyResolveWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)confirmWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bestAddress;
- (void)updateTXTRecordWithData:(id)arg1;
- (void)removeAllTXTRecordObjects;
- (void)setTXTRecord:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *TXTRecord;
- (void)notifyUpdatedAddresses:(id)arg1;
- (void)setAddresses:(id)arg1;
@property(readonly, copy) NSArray *addresses;
- (void)setHostname:(id)arg1;
@property(readonly, copy) HMFNetAddress *hostName; // @synthesize hostName=_hostName;
@property(readonly, nonatomic) unsigned long long port;
- (void)startMonitoring;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

