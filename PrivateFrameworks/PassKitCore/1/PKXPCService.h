//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKForegroundActiveArbiterObserver-Protocol.h>

@class NSLock, NSString, NSXPCConnection, NSXPCInterface, PKXPCForwarder;
@protocol NSObject, PKForegroundActiveArbiter, PKXPCServiceDelegate;

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver>
{
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    id _exportedObject;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_exportedProxy;
    BOOL _suspendCallbacks;
    BOOL _forceConnectionOnResume;
    id <PKForegroundActiveArbiter> _foregroundActiveArbiter;
    id <NSObject> _foregroundListener;
    id <NSObject> _backgroundListener;
    int _serviceResumedToken;
    id <PKXPCServiceDelegate> _delegate;
    NSString *_machServiceName;
    unsigned long long _options;
}

+ (void)setForegroundActiveArbiter:(id)arg1;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void).cxx_destruct;
- (CDUnknownBlockType)_newErrorHandlerWithSemaphore:(id)arg1;
- (CDUnknownBlockType)_newWrappedErrorHandlerForHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL forceConnectionOnResume;
@property(readonly, nonatomic) BOOL connectionEstablished;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property(nonatomic) __weak id <PKXPCServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_unregisterForServiceListenerResumedNotifications;
- (void)_registerForServiceListenerResumedNotifications;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_3d581f42)arg2;
- (void)_sendSuspended;
- (void)_sendResumed;
- (void)_createConnectionIfPossible:(BOOL)arg1;
- (void)_invalidateConnectionIfPossible;
- (id)_connection;
- (void)_establishServiceConnection;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)existingRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)existingRemoteObjectProxy;
- (id)remoteObjectProxyWithSemaphore:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 options:(unsigned long long)arg6;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

