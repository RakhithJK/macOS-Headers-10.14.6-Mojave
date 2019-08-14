//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CURunLoopThread : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    struct __CFRunLoop *_runLoop;
    BOOL _runLoopValid;
    struct NSMutableArray *_startBlocks;
    BOOL _threadRunning;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _threadInitializeHandler;
    CDUnknownBlockType _threadFinalizeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType threadFinalizeHandler; // @synthesize threadFinalizeHandler=_threadFinalizeHandler;
@property(copy, nonatomic) CDUnknownBlockType threadInitializeHandler; // @synthesize threadInitializeHandler=_threadInitializeHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_threadMain;
- (BOOL)_scheduleStopThread;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end
