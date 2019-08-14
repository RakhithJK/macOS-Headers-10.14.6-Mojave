//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatisticsCollectorQueue : NSObject
{
    struct OpaqueFigThread *_thread;
    BOOL _isThreadRunning;
    BOOL _shouldBlockWhenFull;
    CDStruct_48a7b5a5 _messageQueue[100];
    int _firstMessageIndex;
    int _lastMessageIndex;
    int _maxQueueSize;
    CDUnknownBlockType _messageHandler;
    struct _opaque_pthread_mutex_t _queueMutex;
    struct _opaque_pthread_cond_t _queueNotFullCondition;
    struct _opaque_pthread_cond_t _queueNotEmptyCondition;
}

@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) BOOL isThreadRunning; // @synthesize isThreadRunning=_isThreadRunning;
- (void)processMessage:(CDStruct_48a7b5a5)arg1;
- (void)emptyMessageQueue;
- (BOOL)dequeue:(CDStruct_48a7b5a5 *)arg1;
- (BOOL)enqueue:(CDStruct_48a7b5a5)arg1;
- (BOOL)isQueueFull;
- (BOOL)addStatisticsMessage:(CDStruct_48a7b5a5)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(BOOL)arg2;

@end

