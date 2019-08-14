//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CWEventDelegate-Protocol.h>
#import <CoreUtils/CWInternalEventDelegate-Protocol.h>

@class CURetrier, CWWiFiClient, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface CUWiFiManager : NSObject <CWEventDelegate, CWInternalEventDelegate>
{
    BOOL _activateCalled;
    BOOL _activated;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    BOOL _updating;
    CWWiFiClient *_wifiMacClient;
    NSArray *_trafficPeersCurrent;
    BOOL _wifiAutoJoinDisabled;
    void *_wifiManager;
    BOOL _wifiManagerSetup;
    void *_wifiDevice;
    BOOL _wifiDeviceSetup;
    void *_wifiNetworkDisabled;
    CURetrier *_wifiRetrier;
    BOOL _wifiStateMonitorSetup;
    BOOL _infraDisabledChanged;
    BOOL _trafficPeerChanged;
    BOOL _wakeOnWirelessEnabledChanged;
    BOOL _infraDisabled;
    BOOL _wakeOnWirelessEnabled;
    unsigned int _wifiFlags;
    int _wifiState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSArray *_trafficPeers;
    CDUnknownBlockType _wifiStateChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType wifiStateChangedHandler; // @synthesize wifiStateChangedHandler=_wifiStateChangedHandler;
@property(readonly, nonatomic) int wifiState; // @synthesize wifiState=_wifiState;
@property(readonly, nonatomic) unsigned int wifiFlags; // @synthesize wifiFlags=_wifiFlags;
@property(nonatomic) BOOL wakeOnWirelessEnabled; // @synthesize wakeOnWirelessEnabled=_wakeOnWirelessEnabled;
@property(copy, nonatomic) NSArray *trafficPeers; // @synthesize trafficPeers=_trafficPeers;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(nonatomic) BOOL infraDisabled; // @synthesize infraDisabled=_infraDisabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_wifiStateChanged;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)joinDidCompleteForWiFiInterfaceWithName:(id)arg1 error:(id)arg2;
- (void)joinDidStartForWiFiInterfaceWithName:(id)arg1 ssid:(id)arg2;
- (void)clientConnectionInterrupted;
- (int)_wifiStateUncached;
- (unsigned int)_wifiFlagsUncached;
- (void)_wifiEnsureStopped;
- (void)_wifiEnsureStarted;
- (void)_updateWakeOnWireless;
- (void)_updateTrafficPeersWithService:(unsigned int)arg1;
- (void)_updateTrafficPeers;
- (void)_updateInfraDisabled;
- (void)_update;
- (void)performUpdate:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

