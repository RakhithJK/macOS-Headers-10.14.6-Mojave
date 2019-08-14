//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySessionController : NSObject
{
    AVOutputDeviceDiscoverySession *_outputDeviceDiscoverySession;
    AVOutputDeviceDiscoverySessionAvailableOutputDevices *_cachedAvailableOutputDevices;
    BOOL _cachedExternalOutputDeviceAvailable;
    long long _startDetailedDiscoveryCount;
}

- (void).cxx_destruct;
- (void)_updateCachedExternalOutputDeviceAvailable;
- (void)_updateCachedAvailableOutputDevices;
- (void)_availableOutputDevicesChangedNotification:(id)arg1;
- (void)stopDetailedDiscovery;
- (void)startDetailedDiscovery;
@property(readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevices;
@property(readonly, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;
- (void)dealloc;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (id)init;

@end

