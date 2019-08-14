//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGCoalescingDropBox : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _makeEmptyBox;
    CDUnknownBlockType _handler;
    id _box;
    struct _opaque_pthread_mutex_t _handlerLock;
    struct _opaque_pthread_mutex_t _boxLock;
    int _outstanding;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
}

- (void).cxx_destruct;
- (void)wait;
- (void)updateBox:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void)updateBox:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBoxMaker:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 qos:(unsigned int)arg3;

@end

