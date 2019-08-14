//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _PFManagedObjectReferenceQueue : NSObject
{
    int _cd_rc;
    int _spinLock;
    int _flags;
    int _signalRunloop;
    NSManagedObjectContext *_context;
    struct __CFArray *_queue;
    struct __CFRunLoopObserver *_rlObserver;
    int _processing;
}

- (BOOL)_queueBatchForDealloc:(struct __CFArray *)arg1;
- (BOOL)_queueForDealloc:(id)arg1;
- (BOOL)_signal;
- (void)_processReferenceQueue:(BOOL)arg1;
- (long long)_queueCount;
- (void)_contextDidDealloc;
- (void)finalize;
- (void)dealloc;
- (void)_unregisterRunloopObservers;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initForContext:(id)arg1;

@end

