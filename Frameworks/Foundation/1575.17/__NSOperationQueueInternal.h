//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation, NSPointerArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : NSObject
{
    struct os_unfair_lock_s __queueLock;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastPriOperation[5];
    // Error parsing type: AQ, name: __operationCount
    NSPointerArray *__activeThreads;
    long long __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned char __mainQ;
    // Error parsing type: Ac, name: __suspended
    // Error parsing type: Ac, name: __overcommit
    // Error parsing type: AC, name: __propertyQoS
    NSObject<OS_dispatch_queue> *__dispatch_queue;
    NSObject<OS_dispatch_queue> *__backingQueue;
    NSString *__name;
    char __nameBuffer[320];
    // Error parsing type: AC, name: __operationsObserverCount
    // Error parsing type: AC, name: __operationCountObserverCount
    // Error parsing type: AC, name: __suspendedObserverCount
}

- (void)dealloc;
- (id)init;

@end

