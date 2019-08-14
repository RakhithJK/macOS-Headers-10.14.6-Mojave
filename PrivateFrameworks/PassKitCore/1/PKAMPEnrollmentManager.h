//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, PKInAppPaymentService;
@protocol OS_dispatch_queue;

@interface PKAMPEnrollmentManager : NSObject
{
    PKInAppPaymentService *_service;
    NSMutableDictionary *_promiseMap;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)enrollPaymentPass:(id)arg1 isDefault:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enrollmentStatusForPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;
- (id)init;

@end

