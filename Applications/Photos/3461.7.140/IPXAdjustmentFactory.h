//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, PAImageItemController, PFCanceler, PFTraceBuffer;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface IPXAdjustmentFactory : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_loadGroup;
    PFCanceler *_canceler;
    PFTraceBuffer *_trace;
    NSMutableDictionary *_operations;
    BOOL _isLoaded;
    BOOL _isLoading;
    NSMutableArray *_loadCompletionBlocks;
    PAImageItemController *_imageItemController;
}

@property(readonly) PAImageItemController *imageItemController; // @synthesize imageItemController=_imageItemController;
- (void).cxx_destruct;
- (id)_composition:(id)arg1;
- (void)_sendCompletion:(CDUnknownBlockType)arg1 success:(BOOL)arg2;
- (void)setOperation:(id)arg1 forIdentifier:(id)arg2;
- (id)operationWithIdentifier:(id)arg1;
- (void)cancel;
- (void)_didLoad:(id)arg1 success:(BOOL)arg2;
- (void)didLoad:(id)arg1 success:(BOOL)arg2;
- (void)_run:(id)arg1 failCount:(id)arg2;
- (void)_load:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensureLoadGroup;
- (BOOL)reset:(id)arg1;
- (void)load:(CDUnknownBlockType)arg1;
- (id)_allIdentifiersWithMetaData;
- (id)initWithImageItemController:(id)arg1;

@end

