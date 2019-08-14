//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterfaceConnectionRequest : NSObject
{
    CDUnknownBlockType _connectionHandler;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)connectToViewService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)_cancelWithError:(id)arg1;
- (void)_didConnectToService;
- (void)_establishConnection;
- (void)_createAndEstablishConnection;
- (void)_createPlugInProcessAssertion;
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(CDUnknownBlockType)arg3;
- (void)_createProcessAssertion;
- (void)_launchService;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

