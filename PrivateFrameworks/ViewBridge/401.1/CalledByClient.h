//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ViewBridge/ClientCallsAuxiliary-Protocol.h>

__attribute__((visibility("hidden")))
@interface CalledByClient : NSObject <ClientCallsAuxiliary>
{
}

- (void)addFreeWindow:(CDStruct_d1b93830)arg1 identifier:(id)arg2 listenerEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_addFreeWindow:(const CDStruct_d1b93830 *)arg1 identifier:(id)arg2 listenerEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)viewService:(int)arg1 hasHostApp:(int)arg2;
- (id)hostAppConnectionForListenerEndpoint:(id)arg1;
- (id)hostAppEndpointForProcessIdentifier:(int)arg1;
- (BOOL)trustedToAddFreeWindowToArbitraryHostApp;
- (void)windowForContextID:(unsigned int)arg1 fromViewService:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)hostApp:(int)arg1 description:(CDUnknownBlockType)arg2;
- (id)hostAppDescription:(int)arg1;
- (void)hostAppStartingWith:(id)arg1 endpoint:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)hostAppStartingWith:(id)arg1 endpoint:(id)arg2;

@end

