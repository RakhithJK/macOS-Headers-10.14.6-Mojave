//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject
{
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

+ (void)withCurrentTransaction:(CDUnknownBlockType)arg1;
+ (void)group:(CDUnknownBlockType)arg1;
+ (void)commitAndNotifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)_commit:(id)arg1;
+ (void)commit;
+ (void)begin;
+ (id)assertCurrentTransaction;
+ (id)ensureCurrentTransaction;
+ (void)setCurrentTransaction:(id)arg1;
+ (id)currentTransaction;
- (void).cxx_destruct;
- (void)resetPendingRequests;
- (void)submitPendingRequests;
- (void)flush;
@property(readonly) NSArray *pendingRequests;
- (void)submitRequest:(id)arg1;
- (void)notifyCompletion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)commit;
- (BOOL)begin;
- (id)init;

@end

