//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/HCHeardControllerProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AXHeardController : NSObject <HCHeardControllerProtocol>
{
    NSMutableArray *_clients;
    NSMutableDictionary *_handlers;
}

+ (id)entitlementsForMessageID:(unsigned long long)arg1;
+ (id)sharedServer;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)registerFakeClient:(id)arg1;
- (void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)addHandler:(id)arg1 andBlock:(CDUnknownBlockType)arg2 forMessageIdentifier:(unsigned long long)arg3;
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;
- (void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2;
- (void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (BOOL)sendMessage:(id)arg1 withError:(id *)arg2;
- (void)handleNewConnection:(id)arg1;
- (BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2;
- (void)dealloc;
- (void)startServer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

