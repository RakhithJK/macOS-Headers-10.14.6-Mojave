//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMerging-Protocol.h>
#import <HomeKitDaemon/NSFastEnumeration-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CNContact, HMDAccountHandle, HMDAccountIdentifier, HMFUnfairLock, NSArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMDAccountManager, OS_dispatch_queue;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    HMFUnfairLock *_lock;
    NSSet *_handles;
    NSMutableSet *_devices;
    HMDAccountIdentifier *_identifier;
    id <HMDAccountManager> _manager;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)accountWithHandle:(id)arg1;
+ (id)accountWithDestination:(id)arg1;
@property __weak id <HMDAccountManager> manager; // @synthesize manager=_manager;
@property(readonly, copy) HMDAccountIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)modelBackedObjects;
- (id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)locallyTrackedDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)locallyTrackedAccountHandleModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
@property(readonly, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, nonatomic) NSUUID *modelIdentifier;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (BOOL)shouldMergeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)logIdentifier;
- (void)__notifyDelegateUpdatedDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (id)deviceWithModelIdentifier:(id)arg1;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
@property(readonly, copy) NSArray *devices;
@property(readonly, copy) NSString *destination;
- (id)accountHandleWithModelIdentifier:(id)arg1;
- (void)removeHandle:(id)arg1;
- (void)addHandle:(id)arg1;
- (void)setHandles:(id)arg1;
@property(readonly, copy) HMDAccountHandle *primaryHandle;
@property(readonly, copy) NSArray *handles;
@property(readonly, copy) CNContact *contact;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL shouldCache;
@property(readonly, getter=isAuthenticated) BOOL authenticated;
- (id)attributeDescriptions;
- (id)shortDescription;
- (BOOL)isRelatedToAccount:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3;
- (id)init;
- (id)currentDevice;
@property(readonly, getter=isCurrentAccount) BOOL currentAccount;
@property(readonly, copy) NSArray *identities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

