//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/NSCopying-Protocol.h>

@interface VMUBacktrace : NSObject <NSCopying>
{
    int _flavor;
    struct {
        struct {
            double t_begin;
            double t_end;
            int pid;
            unsigned int thread;
            int run_state;
            unsigned long long dispatch_queue_serial_num;
        } context;
        unsigned long long *frames;
        unsigned long long *framePtrs;
        unsigned int length;
    } _callstack;
}

- (unsigned long long)dispatchQueueSerialNumber;
- (int)threadState;
- (void)setThreadState:(int)arg1;
- (unsigned int)thread;
- (unsigned int)backtraceLength;
- (unsigned long long *)stackFramePointers;
- (unsigned long long *)backtrace;
- (void)setLengthTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t *)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(BOOL)arg3;
- (id)initWithSamplingContext:(struct sampling_context_t *)arg1 thread:(unsigned int)arg2 recordFramePointers:(BOOL)arg3;
- (struct _CSTypeRef)_symbolicator;

@end

