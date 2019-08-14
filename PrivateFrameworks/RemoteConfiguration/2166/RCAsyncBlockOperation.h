//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface RCAsyncBlockOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    CDUnknownBlockType _block;
}

+ (id)asyncBlockOperationWithMainThreadBlock:(CDUnknownBlockType)arg1;
+ (id)asyncBlockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

