//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject
{
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)flushCompletionBlocksWithFutureResult:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)setShouldCallImmediately:(BOOL)arg1;
- (BOOL)shouldCallImmediately;
- (id)init;

@end

