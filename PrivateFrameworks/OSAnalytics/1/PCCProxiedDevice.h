//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PCCEndpoint, PCCGroupJob;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PCCProxiedDevice : NSObject
{
    PCCEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_job_queue;
    PCCGroupJob *_groupXferJob;
    NSMutableDictionary *_jobByTracker;
    NSObject<OS_dispatch_source> *_expiryTimer;
    NSObject<OS_os_transaction> *_txn;
    int file_count;
    int msg_count;
    int up_count;
    int job_count;
    int expire_count;
    double _jobTimeout;
}

@property double jobTimeout; // @synthesize jobTimeout=_jobTimeout;
- (void).cxx_destruct;
- (void)startTimer;
- (void)finish:(id)arg1 target:(id)arg2 result:(id)arg3;
- (BOOL)doWork:(id)arg1;
- (void)initiate:(id)arg1 transferLog:(id)arg2 job:(id)arg3;
- (void)initiate:(id)arg1 transferGroupWithOptions:(id)arg2 job:(id)arg3;
- (void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
- (void)runCrashMoverService:(id)arg1;
- (void)acceptTaskingPayload:(id)arg1 forRouting:(id)arg2 withId:(id)arg3;
- (void)sendDeviceMetadata:(id)arg1;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (void)handleConnection:(BOOL)arg1;
- (void)sweepLogs;
- (void)explore;
- (id)initWithEndpoint:(id)arg1;

@end

