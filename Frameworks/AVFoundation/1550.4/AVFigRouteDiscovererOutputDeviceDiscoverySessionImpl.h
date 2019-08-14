//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVOutputDeviceDiscoverySessionImpl-Protocol.h>

@class AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl>
{
    CDUnknownBlockType _routeDiscovererCreator;
    struct OpaqueFigRouteDiscoverer *_discoverer;
    AVWeakReference *_weakObserver;
    AVOutputDeviceDiscoverySession *_parentSession;
}

+ (void)initialize;
@property(readonly, nonatomic) struct OpaqueFigRouteDiscoverer *routeDiscoverer; // @synthesize routeDiscoverer=_discoverer;
@property __weak AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession; // @synthesize parentOutputDeviceDiscoverySession=_parentSession;
- (void).cxx_destruct;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
- (void)_serverDied;
- (void)_routePresentChanged;
@property(readonly, nonatomic) BOOL devicePresenceDetected;
- (void)_availableRoutesChanged;
@property(readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
- (void)dealloc;
- (id)initWithFigRouteDiscovererCreator:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

