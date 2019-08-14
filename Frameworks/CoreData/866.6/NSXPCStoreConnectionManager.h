//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSXPCStore;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSXPCStoreConnectionManager : NSObject
{
    NSXPCStore *_store;
    NSMutableArray *_availableConnections;
    NSMutableArray *_allConnections;
    unsigned long long _maxConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    int _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property(readonly, nonatomic) NSArray *availableConnections; // @synthesize availableConnections=_availableConnections;
@property(readonly, nonatomic) unsigned long long maxConnections; // @synthesize maxConnections=_maxConnections;
- (void)disconnectAllConnections;
- (void)sendMessageWithContext:(id)arg1;
- (void)_checkinConnection:(id)arg1;
- (id)_checkoutConnection;
- (void)dealloc;
- (id)initForStore:(id)arg1;

@end

