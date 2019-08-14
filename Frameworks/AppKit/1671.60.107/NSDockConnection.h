//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSDockConnection : NSObject
{
    BOOL _started;
    NSString *_serviceName;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _pid;
    CDUnknownBlockType _receiveHandler;
}

+ (id)connectionWithServiceName:(id)arg1;
+ (id)_nameToConnectionMap;
+ (id)allConnections;
@property(readonly, copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)_processEvent:(id)arg1;
- (int)dockPid;
- (void)sendMessage:(id)arg1 synchronous:(BOOL)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1;
- (void)_makeConnectionIfNeeded;
- (void)_makeConnectionIfNeededWithRetryInterval:(double)arg1 onDemand:(BOOL)arg2;
- (void)reactToDockAlive;
- (void)reactToDockDied;
- (void)startConnection;
- (id)init;
- (id)initWithServiceName:(id)arg1 receiveHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

