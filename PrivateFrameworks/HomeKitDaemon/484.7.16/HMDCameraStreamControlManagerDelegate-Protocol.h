//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, NSDictionary, NSError, NSNumber;
@protocol HMDCameraStreamControlManagerProtocol;

@protocol HMDCameraStreamControlManagerDelegate <NSObject>
- (void)streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg1 didFail:(NSError *)arg2;
- (void)streamControlManagerDidStopStreamForSessionID:(HMDCameraSessionID *)arg1 error:(NSError *)arg2;
- (void)streamControlManagerDidReconfigureStream:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidReceiveFirstFrame:(id <HMDCameraStreamControlManagerProtocol>)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(NSNumber *)arg3 slotIdentifier:(NSNumber *)arg4;
- (void)streamControlManagerDidStartStream:(id <HMDCameraStreamControlManagerProtocol>)arg1 slotIdentifier:(NSNumber *)arg2;
- (void)streamControlManagerDidSetupRemoteConnection:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidNegotiateStream:(id <HMDCameraStreamControlManagerProtocol>)arg1 selectedParameters:(NSDictionary *)arg2;
@end

