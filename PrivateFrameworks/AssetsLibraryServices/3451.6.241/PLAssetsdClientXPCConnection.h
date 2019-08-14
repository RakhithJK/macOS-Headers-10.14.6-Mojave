//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLXPCProxyCreating-Protocol.h>

@class NSString, NSXPCConnection, PLAssetsdClientService, PLXPCMessageLogger;
@protocol OS_dispatch_queue;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSXPCConnection *_connection;
    PLXPCMessageLogger *_connectionLogger;
    PLAssetsdClientService *_assetsdClientService;
    BOOL _isShuttingDown;
}

- (void).cxx_destruct;
- (id)_unboostingRemoteObjectProxy;
- (id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (id)connectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)prepareToShutdown;
- (void)handleInvalidation;
- (void)handleInterruption;
- (void)addPhotoLibraryUnavailabilityHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

