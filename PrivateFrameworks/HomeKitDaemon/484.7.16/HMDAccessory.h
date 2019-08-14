//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryTransaction, HMDAccessoryVersion, HMDApplicationData, HMDApplicationRegistry, HMDHome, HMDRoom, HMDVendorModelEntry, HMFMessageDispatcher, NSArray, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>
{
    BOOL _primary;
    BOOL _reachable;
    BOOL _remotelyReachable;
    NSMutableSet *_accessoryProfiles;
    BOOL _blocked;
    BOOL _suspendCapable;
    BOOL _remoteAccessEnabled;
    BOOL _unblockPending;
    BOOL _custom1WoBLE;
    BOOL _custom1WoWLAN;
    NSString *_identifier;
    HMDRoom *_room;
    NSString *_model;
    NSString *_manufacturer;
    HMDAccessoryVersion *_firmwareVersion;
    NSString *_serialNumber;
    HMDApplicationData *_appData;
    NSUUID *_uuid;
    HMAccessoryCategory *_category;
    HMDHome *_home;
    NSString *_providedName;
    NSString *_configurationAppIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSNumber *_categoryIdentifier;
    NSString *_configuredName;
    unsigned long long _configNumber;
    HMDApplicationRegistry *_appRegistry;
    HMDAccessoryTransaction *_transaction;
    unsigned long long _accessoryReprovisionState;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
@property(nonatomic) BOOL custom1WoWLAN; // @synthesize custom1WoWLAN=_custom1WoWLAN;
@property(nonatomic) BOOL custom1WoBLE; // @synthesize custom1WoBLE=_custom1WoBLE;
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(retain, nonatomic) HMDAccessoryTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
@property(nonatomic) BOOL unblockPending; // @synthesize unblockPending=_unblockPending;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) BOOL remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property(nonatomic, getter=isSuspendCapable) BOOL suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property(nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_handlePairingIdentityRequest:(id)arg1;
- (BOOL)supportsMinimumUserPrivilege;
- (id)hashRouteID;
- (BOOL)providesHashRouteID;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL supportsTargetControl;
@property(readonly, nonatomic) BOOL supportsTargetController;
- (void)autoConfigureTargetControllers;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly) BOOL supportsUserManagement;
- (void)_handleListPairings:(id)arg1;
- (BOOL)shouldEnableDaemonRelaunch;
- (void)_sendBlockedNotification:(BOOL)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)logDuetRoomEvent;
- (void)didEncounterError:(id)arg1;
- (void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)blockWithError:(id)arg1;
- (void)setAccessoryProfiles:(id)arg1;
- (void)removeAccessoryProfile:(id)arg1;
- (void)addAccessoryProfile:(id)arg1;
@property(readonly, copy) NSArray *accessoryProfiles;
- (id)updateAppData:(id)arg1;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (void)_handleSetAppData:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (id)runtimeState;
- (void)_remoteAccessEnabled:(BOOL)arg1;
- (void)remoteAccessEnabled:(BOOL)arg1;
- (void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 remoteAccessChanged:(BOOL)arg2;
@property(readonly, nonatomic) long long reachableTransports;
- (void)handleRemoteReachabilityChange:(BOOL)arg1;
- (BOOL)isReachableForXPCClients;
@property(nonatomic, getter=isRemotelyReachable) BOOL remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
- (void)handleReachabilityChange:(BOOL)arg1;
@property(nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
- (void)setSuspendedCapable:(BOOL)arg1;
@property(readonly) BOOL requiresHomeAppForManagement;
- (void)removeAdvertisement:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (void)notifyAccessoryNameChanged:(BOOL)arg1;
- (void)updateMediaSession:(id)arg1;
- (void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4;
@property(readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
- (void)setSerialNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)setFirmwareVersion:(id)arg1;
@property(readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
- (void)setManufacturer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)setModel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void)_handleRename:(id)arg1;
- (void)updateProvidedName:(id)arg1;
- (id)getConfiguredName;
- (void)handleUpdatedName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)_handleGetAccessoryAdvertisingParams:(id)arg1;
- (id)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2;
- (void)updateCategory:(id)arg1;
- (id)_updateRoom:(id)arg1 message:(id *)arg2;
- (void)_handleUpdateRoom:(id)arg1;
- (void)updateRoom:(id)arg1 message:(id)arg2;
- (void)updateRoom:(id)arg1;
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)unconfigure;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)_handleIdentify:(id)arg1;
- (void)_registerForMessages;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
@property(readonly, getter=isCurrentAccessory) BOOL currentAccessory;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (id)assistantObject;
- (id)url;
- (id)assistantUniqueIdentifier;
- (void)_createCameraProfiles:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

