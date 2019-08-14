//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface PPXPCServerPipelinedBatchQueryManager : NSObject
{
    long long _pipelineDepth;
    unsigned long long _pipelinedCallTimeoutNsec;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSem;
    NSMutableDictionary *_queryReplyThrottleSemaphores;
    // Error parsing type: AB, name: _isInterrupted
}

- (void).cxx_destruct;
- (void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(CDUnknownBlockType)arg3 sendError:(CDUnknownBlockType)arg4 sendBatch:(CDUnknownBlockType)arg5;
- (void)unblockPendingQueries;
- (void)runConcurrentlyWithRequestThrottle:(CDUnknownBlockType)arg1;
- (void)_unblockQueryReplyThrottleSemaphore:(id)arg1;
- (id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3;

@end

