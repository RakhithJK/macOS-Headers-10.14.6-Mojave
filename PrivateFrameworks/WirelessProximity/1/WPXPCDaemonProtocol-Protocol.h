//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WirelessProximity/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSUUID, WPAdvertisingRequest, WPCharacteristic, WPPeerTrackingRequest, WPScanRequest, WPZoneTrackingRequest;

@protocol WPXPCDaemonProtocol <NSObject>

@optional
- (void)disconnectFromLEPipePeer:(NSUUID *)arg1;
- (void)sendDatatoLePipe:(NSData *)arg1 forPeer:(NSUUID *)arg2;
- (void)unregisterEndpoint:(NSString *)arg1;
- (void)registerEndpoint:(NSString *)arg1;
- (void)enableBubbleTestMode;
- (void)dumpDaemonState;
- (void)registerForAnyScanResults:(BOOL)arg1;
- (void)disableScanning;
- (void)getPowerLogStats:(void (^)(NSDictionary *))arg1;
- (void)enableTestMode;
- (void)registerWithDaemon:(NSString *)arg1 forProcess:(NSString *)arg2 machName:(NSString *)arg3 shouldHoldVoucherForConnections:(BOOL)arg4;
- (void)listenToBandwidthNotifications;
- (void)checkAllowDuplicates:(void (^)(BOOL))arg1;
- (void)getAllTrackedZones;
- (void)stopTrackingAllZones;
- (void)stopTrackingZones:(NSArray *)arg1;
- (void)startTrackingZone:(WPZoneTrackingRequest *)arg1;
- (void)sendDataToCharacteristic:(WPCharacteristic *)arg1 inService:(NSString *)arg2 forPeer:(NSUUID *)arg3;
- (void)shouldSubscribe:(BOOL)arg1 toPeer:(NSUUID *)arg2 withCharacteristic:(NSString *)arg3 inService:(NSString *)arg4;
- (void)discoverCharacteristicsAndServices:(NSDictionary *)arg1 forPeripheral:(NSUUID *)arg2;
- (void)disconnectFromPeer:(NSUUID *)arg1;
- (void)connectToPeer:(NSUUID *)arg1 withOptions:(NSDictionary *)arg2;
- (void)connectToPeer:(NSUUID *)arg1;
- (void)stopTrackingPeerWithRequest:(WPPeerTrackingRequest *)arg1;
- (void)startTrackingPeerWithRequest:(WPPeerTrackingRequest *)arg1;
- (void)stopScanning:(WPScanRequest *)arg1;
- (void)startScanning:(WPScanRequest *)arg1;
- (void)stopAdvertising:(WPAdvertisingRequest *)arg1;
- (void)startAdvertising:(WPAdvertisingRequest *)arg1;
- (void)addCharacteristic:(WPCharacteristic *)arg1 forService:(NSUUID *)arg2;
@end

