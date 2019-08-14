//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalXPCConnectionProvider;

@interface CalAgentLink : NSObject
{
    CalXPCConnectionProvider *_connectionProvider;
}

+ (void)_removeAgentLink:(id)arg1;
+ (id)_registerLightweightClientWithMachServiceName:(id)arg1;
+ (void)_broadcastToOtherClients:(SEL)arg1 objects:(id)arg2 agent:(id)arg3;
+ (id)contactsGeneralProxyWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)contactsGeneralProxy;
+ (id)addressBookProxyWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)addressBookProxy;
+ (id)storeWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)store;
+ (id)synchronousRemoteObjectForMachServiceName:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)remoteObjectForMachServiceName:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)remoteObjectForMachServiceName:(id)arg1;
+ (id)clientSideCache;
+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withAgent:(id)arg4;
+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2;
+ (void)broadcastToOtherClients:(SEL)arg1;
+ (id)synchronousAgentWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)synchronousAgent;
+ (id)agentWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)agent;
+ (id)startWithMachServiceName:(id)arg1 exportedObject:(id)arg2;
+ (id)sharedInstanceWithMachServiceName:(id)arg1;
+ (id)sharedInstances;
+ (void)initialize;
@property(retain) CalXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectWithErrorBlock:(CDUnknownBlockType)arg1;
- (id)_remoteObjectWithErrorBlock:(CDUnknownBlockType)arg1;
- (id)_remoteObject;
- (void)setExportedObject:(id)arg1;
- (BOOL)hasRequiredFields;
- (id)initWithMachServiceName:(id)arg1 exportedObject:(id)arg2;
- (id)init;

@end

