//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSAnalytics/PCCEndpoint.h>

@class NSObject, OS_remote_device_browser, OS_xpc_remote_connection;
@protocol OS_dispatch_queue;

@interface PCCBridgeEndpoint : PCCEndpoint
{
    OS_remote_device_browser *_device_browser;
    BOOL _bridge_exists;
    NSObject<OS_dispatch_queue> *_eventQueue;
    OS_xpc_remote_connection *_outgoingConnection;
    OS_xpc_remote_connection *_listeningConnection;
    BOOL _interruptedState;
}

- (void).cxx_destruct;
- (id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (id)send:(id)arg1 message:(id)arg2 error:(id *)arg3;
- (void)exitInterruptedState;
- (void)enterInterruptedState;
- (id)synchronize:(id)arg1 withOptions:(id)arg2;
- (BOOL)isDeviceNearby:(id)arg1;
- (id)deviceIds;
- (BOOL)setupDeviceStateChangeHandler;
- (void)setupIncomingEventListener;
- (void)runWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

