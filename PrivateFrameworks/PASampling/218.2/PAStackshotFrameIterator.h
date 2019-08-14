//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAStackshotFrameIterator : NSObject
{
    const void *curFrame;
    const void *topFrame;
    struct thread_snapshot *snap;
    unsigned int curIndex;
    BOOL currentFrameIsKernel;
}

- (BOOL)moveToNextFrame;
- (const void *)firstValidUserFrame;
- (void)getCurrentFrame:(struct pa_stack_frame *)arg1;
- (BOOL)is64bit;
- (id)initWithThreadSnapshot:(struct thread_snapshot *)arg1 frameStart:(const void *)arg2;

@end
