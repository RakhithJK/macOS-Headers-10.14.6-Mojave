//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAccessories/ACCTransportXPCClientProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol ACCTransportClientDelegate;

@interface ACCTransportClient : NSObject <ACCTransportXPCClientProtocol>
{
    id <ACCTransportClientDelegate> _delegate;
    NSXPCConnection *_serverConnection;
    NSMutableDictionary *_endpointDataOutHandlers;
    NSMutableDictionary *_connectionPropertyChangeHandlers;
    NSMutableDictionary *_endpointPropertyChangeHandlers;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSMutableDictionary *endpointPropertyChangeHandlers; // @synthesize endpointPropertyChangeHandlers=_endpointPropertyChangeHandlers;
@property(retain, nonatomic) NSMutableDictionary *connectionPropertyChangeHandlers; // @synthesize connectionPropertyChangeHandlers=_connectionPropertyChangeHandlers;
@property(retain, nonatomic) NSMutableDictionary *endpointDataOutHandlers; // @synthesize endpointDataOutHandlers=_endpointDataOutHandlers;
@property(retain, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(nonatomic) __weak id <ACCTransportClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)processIncomingData:(id)arg1 forEndpointWithUUID:(id)arg2;
- (void)setHandler:(CDUnknownBlockType)arg1 forEndpointProperty:(id)arg2;
- (void)setHandler:(CDUnknownBlockType)arg1 forConnectionProperty:(id)arg2;
- (id)identifierForEndpointWithUUID:(id)arg1;
- (id)identifierForConnectionWithUUID:(id)arg1;
- (id)propertiesForEndpointWithUUID:(id)arg1;
- (id)propertiesForConnectionWithUUID:(id)arg1;
- (id)accessoryInfoForEndpointWithUUID:(id)arg1;
- (id)accessoryInfoForConnectionWithUUID:(id)arg1;
- (void)setConnectionAuthenticated:(id)arg1 state:(_Bool)arg2;
- (BOOL)isConnectionAuthenticated:(id)arg1;
- (int)authStatusForConnectionWithUUID:(id)arg1 authType:(int)arg2;
- (id)endpointUUIDsForConnectionWithUUID:(id)arg1;
- (id)connectionUUIDForEndpointWithUUID:(id)arg1;
- (BOOL)destroyConnectionWithUUID:(id)arg1;
- (BOOL)destroyEndpointWithUUID:(id)arg1;
- (BOOL)publishConnectionWithUUID:(id)arg1;
- (BOOL)removeProperty:(id)arg1 forEndpointWithUUID:(id)arg2;
- (BOOL)setProperty:(id)arg1 value:(id)arg2 forEndpointWithUUID:(id)arg3;
- (BOOL)setProperties:(id)arg1 forEndpointWithUUID:(id)arg2;
- (BOOL)setAccessoryInfo:(id)arg1 forEndpointWithUUID:(id)arg2;
- (id)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(id)arg3 andDataOutHandler:(CDUnknownBlockType)arg4 forConnectionWithUUID:(id)arg5 publishConnection:(BOOL)arg6;
- (BOOL)removeProperty:(id)arg1 forConnectionWithUUID:(id)arg2;
- (BOOL)setProperty:(id)arg1 value:(id)arg2 forConnectionWithUUID:(id)arg3;
- (BOOL)setProperties:(id)arg1 forConnectionWithUUID:(id)arg2;
- (id)createConnectionWithType:(int)arg1 andIdentifier:(id)arg2;
- (void)launchServer;
- (void)propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4;
- (void)propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3;
- (void)authStateDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthState:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(BOOL)arg5 connectionWasAuthenticated:(BOOL)arg6;
- (void)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)connectToServer;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

