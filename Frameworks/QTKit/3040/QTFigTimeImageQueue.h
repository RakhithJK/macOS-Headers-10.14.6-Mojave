//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QTKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface QTFigTimeImageQueue : NSObject <NSCopying>
{
    struct QTFigTimeImageBufferQueueInternal *_internal;
}

- (unsigned long long)count;
- (void)removeImageBuffersWithFigTimesGreaterThan:(CDStruct_1b6d18a9)arg1;
- (void)removeImageBuffersWithFigTimesSmallerThan:(CDStruct_1b6d18a9)arg1;
- (void)removeAllImageBuffers;
- (CDStruct_1b6d18a9)greatestFigTime;
- (CDStruct_1b6d18a9)smallestFigTime;
- (BOOL)copyAndDequeueImageBufferWithGreatestFigTime:(struct __CVBuffer **)arg1 figTime:(CDStruct_1b6d18a9 *)arg2;
- (BOOL)copyAndDequeueImageBufferWithSmallestFigTime:(struct __CVBuffer **)arg1 figTime:(CDStruct_1b6d18a9 *)arg2;
- (void)enqueueImageBuffer:(struct __CVBuffer *)arg1 forFigTime:(CDStruct_1b6d18a9)arg2;
- (struct __CVBuffer *)copyAndDequeueImageBufferForFigTime:(CDStruct_1b6d18a9)arg1;
- (struct __CVBuffer *)imageBufferForFigTime:(CDStruct_1b6d18a9)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
