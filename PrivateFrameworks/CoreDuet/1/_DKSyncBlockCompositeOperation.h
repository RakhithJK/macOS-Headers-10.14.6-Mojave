//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_blocks;
}

+ (id)blockCompositeOperationWithParent:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)blockCompositeOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSMutableArray *blocks; // @synthesize blocks=_blocks;
- (void).cxx_destruct;
- (void)main;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)executionBlocks;
- (id)initWithParent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

