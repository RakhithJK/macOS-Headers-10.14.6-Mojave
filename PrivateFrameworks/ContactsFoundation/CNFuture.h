//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFuture-Protocol.h>
#import <ContactsFoundation/CNPromise-Protocol.h>

@class CNFutureCompletionBlocks, CNFutureResult, NSConditionLock, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise>
{
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNFutureCompletionBlocks *_completionBlocks;
}

+ (id)join:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)chain:(id)arg1;
+ (void)finishPromise:(id)arg1 withFuture:(id)arg2;
+ (id)recover:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)flatMap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)future;
+ (id)promiseFuture;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (void)_flushCompletionBlocks;
- (id)futureResult;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (BOOL)_nts_isFinished;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (BOOL)cancel;
- (BOOL)nts_isFinished;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

