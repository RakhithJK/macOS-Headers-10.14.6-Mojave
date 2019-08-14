//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DTXResourceTracker : NSObject
{
    unsigned long long _total;
    unsigned long long _maxChunk;
    unsigned long long _used;
    unsigned int _waiting;
    unsigned int _acquireNum;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_acqSem;
    DTXResourceTracker *_parentTracker;
    BOOL _log;
}

@property(nonatomic) BOOL log; // @synthesize log=_log;
- (void).cxx_destruct;
- (void)resumeLimits;
- (void)suspendLimits;
- (void)releaseSize:(unsigned long long)arg1;
- (void)forceAcquireSize:(unsigned long long)arg1;
- (unsigned int)acquireSize:(unsigned long long)arg1;
@property(nonatomic) unsigned long long maxChunkSize;
@property(nonatomic) unsigned long long totalSize;
- (id)init;

@end

