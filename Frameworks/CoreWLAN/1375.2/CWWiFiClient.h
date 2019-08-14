//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CWWiFiClient : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSMutableSet *_eventList;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_interfaceMap;
    NSObject<OS_dispatch_queue> *_mutex;
    id _delegate;
}

+ (id)interfaceNames;
+ (id)sharedWiFiClient;
+ (unsigned long long)platformCapabilities;
+ (id)virtualInterfaceNames;
+ (id)interfaceByRole:(long long)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)internal_joinWiFiNetworkWithUserAgent:(id)arg1 interfaceName:(id)arg2 dialogToken:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)internal_enableTetherDevice:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)internal_stopBrowsingForTetherDevicesAndReply:(CDUnknownBlockType)arg1;
- (void)internal_startBrowsingForTetherDevicesAndReply:(CDUnknownBlockType)arg1;
- (void)internal_showDHCPMessage:(id)arg1 networkName:(id)arg2;
- (void)internal_showMICErrorWithNetworkName:(id)arg1;
- (void)internal_showAvailableWiFiNetworks:(id)arg1 interfaceName:(id)arg2;
- (void)internal_setWiFiPasswordForUserKeychain:(id)arg1 ssid:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)internal_startLoginWindowMode8021XWithProfile:(id)arg1 username:(id)arg2 password:(id)arg3 interfaceWithName:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)internal_startUserMode8021XWithPasspointDomainName:(id)arg1 interfaceWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)internal_startUserMode8021XWithSSID:(id)arg1 username:(id)arg2 password:(id)arg3 identity:(id)arg4 remember:(BOOL)arg5 interfaceWithName:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)internal_startUserMode8021XUsingKeychainWithSSID:(id)arg1 interfaceWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)willShowJoinUIForWiFiNetwork:(id)arg1 interfaceName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deviceAvailabilityChangedForWiFiInterfaceWithName:(id)arg1 isAvailable:(BOOL)arg2;
- (void)wowStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)foundTetherDevices:(id)arg1;
- (void)airPlayDidCompleteForWiFiInterfaceWithName:(id)arg1;
- (void)realTimeModeDidEndForWiFiInterfaceWithName:(id)arg1;
- (void)realTimeModeDidStartForWiFiInterfaceWithName:(id)arg1;
- (void)joinDidCompleteForWiFiInterfaceWithName:(id)arg1 error:(id)arg2;
- (void)joinDidStartForWiFiInterfaceWithName:(id)arg1 ssid:(id)arg2;
- (void)autoJoinDidUpdate:(id)arg1;
- (void)autoJoinDidCompleteForWiFiInterfaceWithName:(id)arg1;
- (void)autoJoinDidStartForWiFiInterfaceWithName:(id)arg1;
- (void)scanCacheUpdatedForWiFiInterfaceWithName:(id)arg1;
- (void)rsnHandshakeDidCompleteForWiFiInterfaceWithName:(id)arg1;
- (void)interfaceRemovedWithName:(id)arg1;
- (void)interfaceAddedWithName:(id)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)rangingReportEventForWiFiInterfaceWithName:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(id)arg1;
- (void)countryCodeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)bssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (BOOL)stopMonitoringAllEventsAndReturnError:(out id *)arg1;
- (BOOL)stopMonitoringEventWithType:(long long)arg1 error:(out id *)arg2;
- (BOOL)startMonitoringEventWithType:(long long)arg1 error:(out id *)arg2;
- (void)__startMonitoringEventWithType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)finalize;
- (void)dealloc;
- (id)interfaces;
- (id)interfaceWithName:(id)arg1;
- (id)interface;
- (id)__interfaceWithName:(id)arg1;
- (id)__interfaceWithName:(id)arg1 legacy:(BOOL)arg2;
- (id)init;
- (BOOL)setWiFiPasswordInSystemKeychain:(id)arg1 ssid:(id)arg2 error:(id *)arg3;
- (BOOL)forgetPasspointWiFiProfileWithDomainName:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)forgetWiFiProfileWithSSID:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)forgetWiFiProfileWithID:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)rememberWiFiProfile:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)setWoWEnabled:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setAutoJoinEnabled:(BOOL)arg1 error:(id *)arg2;
- (long long)thermalIndex;
- (BOOL)setThermalIndex:(long long)arg1 error:(id *)arg2;
- (void)submitAWDMetric:(id)arg1 metricID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)relinquishBluetoothPagingLockAndReply:(CDUnknownBlockType)arg1;
- (void)acquireBluetoothPagingLockAndReply:(CDUnknownBlockType)arg1;
- (BOOL)stopBrowsingForTetherDevicesAndReturnError:(id *)arg1;
- (BOOL)startBrowsingForTetherDevicesAndReturnError:(id *)arg1;
- (id)interfaceWithRole:(long long)arg1;
- (id)interfaceWithRole:(long long)arg1 legacy:(BOOL)arg2;
- (BOOL)internal_userAgentWillShowJoinUIForWiFiNetwork:(id)arg1 interfaceName:(id)arg2 dialogToken:(long long)arg3 error:(id *)arg4;
- (void)internal_foundTetherDevices:(id)arg1;

@end

