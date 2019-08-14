//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSerialQueue, FBServiceFacilityServer;
@protocol FBSystemServiceDelegate;

@interface FBSystemService : NSObject
{
    FBSSerialQueue *_queue;
    int _pendingExit;
    id <FBSystemServiceDelegate> _delegate;
    FBServiceFacilityServer *_server;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBServiceFacilityServer *server; // @synthesize server=_server;
@property(nonatomic) __weak id <FBSystemServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (unsigned long long)_mapShutdownOptionsToOptions:(id)arg1;
- (BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (BOOL)_requireEntitlementToOpenURL:(id)arg1 options:(id)arg2;
- (BOOL)_isTrustedRequestToOpenApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4;
- (void)_performExitTasksForRelaunch:(BOOL)arg1;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg1;
- (void)_reallyActivateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(BOOL)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(CDUnknownBlockType)arg11;
- (BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_activateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)activateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2;
- (void)dataReset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_shutdownWithFBSOptions:(id)arg1;
- (void)setPendingExit:(BOOL)arg1;
@property(readonly, getter=isPendingExit) BOOL pendingExit;
- (void)prepareDisplaysForExit;
- (void)setSystemIdleSleepDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)prepareForExitAndRelaunch:(BOOL)arg1;
- (void)exitAndRelaunch:(BOOL)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1 forSource:(long long)arg2;
- (void)shutdownAndReboot:(BOOL)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

