//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APSConnection, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CKDPushConnection : NSObject
{
    BOOL _darkWakeEnabled;
    NSString *_apsEnvironmentString;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_callbacks;
    NSMutableDictionary *_topicsToWaitingAppContainerTuples;
    NSMutableSet *_topicsAwaitingPublicToken;
}

+ (id)sharedConnectionForAPSEnvironmentString:(id)arg1 darkWakeEnabled:(BOOL)arg2;
@property(retain, nonatomic) NSMutableSet *topicsAwaitingPublicToken; // @synthesize topicsAwaitingPublicToken=_topicsAwaitingPublicToken;
@property(retain, nonatomic) NSMutableDictionary *topicsToWaitingAppContainerTuples; // @synthesize topicsToWaitingAppContainerTuples=_topicsToWaitingAppContainerTuples;
@property(retain, nonatomic) NSMapTable *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL darkWakeEnabled; // @synthesize darkWakeEnabled=_darkWakeEnabled;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
- (void).cxx_destruct;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)revokeTokenForAppContainerTuple:(id)arg1;
- (void)requestTokenForAppContainerTuple:(id)arg1;
- (id)_waitingAppContainerTuplesForTopic:(id)arg1;
- (void)_removeWaitingAppContainerTuplesForTopic:(id)arg1;
- (void)_addWaitingAppContainerTuple:(id)arg1 forTopic:(id)arg2;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 darkWakeEnabled:(BOOL)arg2;

@end

