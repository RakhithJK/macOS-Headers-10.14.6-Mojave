//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, HMDApplicationRegistry, HMFTimer, NSMutableSet, NSObject, NSSet, NSString;
@protocol HMDApplicationMonitorDelegate, OS_dispatch_queue;

@interface HMDApplicationMonitor : HMFObject <HMFTimerDelegate, HMFLogging>
{
    id <HMDApplicationMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableSet *_processes;
    BKSApplicationStateMonitor *_bksMonitor;
    HMDApplicationRegistry *_appRegistry;
    HMFTimer *_spiClientTerminationDelayTimer;
    NSMutableSet *_pendingTerminatedApplications;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMutableSet *pendingTerminatedApplications; // @synthesize pendingTerminatedApplications=_pendingTerminatedApplications;
@property(retain, nonatomic) HMFTimer *spiClientTerminationDelayTimer; // @synthesize spiClientTerminationDelayTimer=_spiClientTerminationDelayTimer;
@property(nonatomic) __weak HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(retain, nonatomic) BKSApplicationStateMonitor *bksMonitor; // @synthesize bksMonitor=_bksMonitor;
@property(readonly, nonatomic) NSMutableSet *processes; // @synthesize processes=_processes;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(nonatomic) __weak id <HMDApplicationMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_delegateConformsAndRespondsToSelector:(SEL)arg1;
- (unsigned long long)_translateApplicationState:(unsigned int)arg1;
- (void)timerDidFire:(id)arg1;
@property(readonly, nonatomic) BOOL activeHomeKitApps;
@property(readonly, nonatomic) NSSet *backgroundApps;
- (id)backgroundToForegroundApps;
@property(readonly, nonatomic) NSSet *foregroundApps;
- (id)foregroundAppIdentifiers;
- (id)_activeRequests;
- (id)activeRequests;
- (id)applicationInfoForPID:(int)arg1;
- (id)applicationInfoForApplication:(id)arg1;
- (id)processInfoForPID:(int)arg1;
- (void)_callActiveHomeKitAppDelegate:(BOOL)arg1;
- (void)_callAppStateChangeDelegate:(id)arg1;
- (void)_updateProcessInfo:(id)arg1 info:(id)arg2;
- (void)_handleAppStateChangedInfo:(id)arg1;
- (void)_processAppStateChange:(id)arg1;
- (void)removeFromPendingTerminated:(id)arg1;
- (void)handleAppStateChangedInfo:(id)arg1;
- (void)_postAppTerminatedNotification:(id)arg1;
- (void)_postHomeUIServiceTerminatedNotification;
- (BOOL)infoIsForViewService:(id)arg1;
- (unsigned long long)translateApplicationStateForInfo:(id)arg1 processInfo:(id)arg2;
- (void)_removeProcess:(id)arg1;
- (void)removeProcess:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)_stopMonitoringApplicationStateChangesForBundleIdentifier:(id)arg1;
- (void)_startMonitoringApplicationStateChangesForBundleIdentifier:(id)arg1;
- (void)tearDownMonitoringIfNotInUse;
- (void)setUpForMonitoring;
- (void)dealloc;
- (id)initWithXpcQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
