//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLXPCAsyncProxyCreating-Protocol.h>
#import <AssetsLibraryServices/PLXPCProxyCreating-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, PLXPCProxyCreating;

@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating, PLXPCAsyncProxyCreating>
{
    SEL _proxyGetterSelector;
    id <PLXPCProxyCreating> _serviceProxy;
    id <PLXPCProxyCreating> _proxyCreating;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_inq_createServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

