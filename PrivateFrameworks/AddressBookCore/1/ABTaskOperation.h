//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ABTask;

@interface ABTaskOperation : NSOperation
{
    ABTask *_task;
    CDUnknownBlockType _taskCompletionBlock;
}

@property(copy) CDUnknownBlockType taskCompletionBlock; // @synthesize taskCompletionBlock=_taskCompletionBlock;
- (void)cancel;
- (void)callCompletionBlockWithCancelledError;
- (void)main;
- (void)dealloc;
- (id)initWithTask:(id)arg1;

@end

