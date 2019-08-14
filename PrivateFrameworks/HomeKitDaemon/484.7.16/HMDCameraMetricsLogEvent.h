//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMDAccessory, HMDCameraSessionID;

@interface HMDCameraMetricsLogEvent : HMDLogEvent
{
    BOOL _isLocal;
    HMDCameraSessionID *_sessionID;
    HMDAccessory *_accessory;
}

@property(readonly) BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)initWithMetricUUID:(id)arg1 sessionID:(id)arg2 cameraAccessory:(id)arg3 isLocal:(BOOL)arg4;

@end

