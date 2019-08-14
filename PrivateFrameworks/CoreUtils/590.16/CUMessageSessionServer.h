//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class CUMessageSession, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUMessageSessionServer : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _registerRequestHandler;
    CDUnknownBlockType _deregisterRequestHandler;
    CDUnknownBlockType _sendRequestHandler;
    struct NSMutableSet *_xpcConnections;
    NSXPCListenerEndpoint *_xpcEndpoint;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _invalidationHandler;
    CUMessageSession *_templateSession;
}

@property(retain, nonatomic) CUMessageSession *templateSession; // @synthesize templateSession=_templateSession;
@property(copy, nonatomic) CDUnknownBlockType sendRequestHandler; // @synthesize sendRequestHandler=_sendRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType deregisterRequestHandler; // @synthesize deregisterRequestHandler=_deregisterRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType registerRequestHandler; // @synthesize registerRequestHandler=_registerRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_connectionInvalidated:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)invalidate;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

