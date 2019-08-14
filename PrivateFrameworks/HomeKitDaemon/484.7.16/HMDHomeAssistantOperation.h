//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSMutableSet, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomeAssistantOperation : HMFObject <HMFTimerDelegate>
{
    BOOL _completionHandlerCalled;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _completionHandler;
    HMFTimer *_accessoryConnectivityWaitTimer;
    NSSet *_accessoriesToOperateOn;
    NSMutableSet *_reachableAccessoriesToOperateOn;
}

+ (id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2;
@property(nonatomic) BOOL completionHandlerCalled; // @synthesize completionHandlerCalled=_completionHandlerCalled;
@property(readonly, nonatomic) NSMutableSet *reachableAccessoriesToOperateOn; // @synthesize reachableAccessoriesToOperateOn=_reachableAccessoriesToOperateOn;
@property(readonly, nonatomic) NSSet *accessoriesToOperateOn; // @synthesize accessoriesToOperateOn=_accessoriesToOperateOn;
@property(readonly, nonatomic) HMFTimer *accessoryConnectivityWaitTimer; // @synthesize accessoryConnectivityWaitTimer=_accessoryConnectivityWaitTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_testForReachability;
- (void)_callCompletion;
- (void)timerDidFire:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)dealloc;
- (id)initWithAccessories:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

