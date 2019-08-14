//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHome, HMFMessageDispatcher, HMFTimer, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol HMDAccessoryBrowserProtocol, OS_dispatch_queue;

@interface HMDHomeReprovisionHandler : HMFObject <HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver>
{
    BOOL _reprovisionBrowsingAllowed;
    BOOL _reprovisionBrowsingPending;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    id <HMDAccessoryBrowserProtocol> _accessoryBrowser;
    HMFTimer *_disableReprovisionBrowsingTimer;
    NSMutableDictionary *_pendingReprovisionRequests;
}

+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
@property(retain, nonatomic) NSMutableDictionary *pendingReprovisionRequests; // @synthesize pendingReprovisionRequests=_pendingReprovisionRequests;
@property(retain, nonatomic) HMFTimer *disableReprovisionBrowsingTimer; // @synthesize disableReprovisionBrowsingTimer=_disableReprovisionBrowsingTimer;
@property(nonatomic, getter=isReprovisionBrowsingPending) BOOL reprovisionBrowsingPending; // @synthesize reprovisionBrowsingPending=_reprovisionBrowsingPending;
@property(nonatomic, getter=isReprovisionBrowsingAllowed) BOOL reprovisionBrowsingAllowed; // @synthesize reprovisionBrowsingAllowed=_reprovisionBrowsingAllowed;
@property(nonatomic) __weak id <HMDAccessoryBrowserProtocol> accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)timerDidFire:(id)arg1;
- (void)_handleDisableReprovisionBrowsingTimerFired;
- (void)handleReprovionedAccessory:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)handleFoundAccessoryNeedingReprovisioning:(id)arg1 error:(id)arg2;
- (void)_handleReprovisionAccessory:(id)arg1;
- (void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)arg1;
- (id)logIdentifier;
- (void)_registerForMessages;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

