//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDuet/_DKSyncOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation
{
    struct os_unfair_lock_s _lock;
    BOOL _asynchronous;
    NSMutableArray *_blocks;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(getter=isAsynchronous) BOOL asynchronous; // @synthesize asynchronous=_asynchronous;
- (void).cxx_destruct;
- (void)main;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)executionBlocks;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

