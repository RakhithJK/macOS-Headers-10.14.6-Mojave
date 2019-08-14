//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFInitializationClassWorkItem.h>

@class NSMutableArray;

@interface _PFDeferredInitializationTriggerWorkItem : PFInitializationClassWorkItem
{
    struct __CFRunLoopObserver *_runLoopWakeObserver;
    struct __CFRunLoopObserver *_runLoopSleepObserver;
    unsigned long long _wakeTime;
    unsigned long long _sleepTime;
    unsigned long long _startTime;
    unsigned long long _wakePercent;
    unsigned long long _targetPercent;
    CDUnknownBlockType _timerFired;
    NSMutableArray *_deferredWorkItems;
    struct _opaque_pthread_mutex_t _deferredWorkItemsLock;
}

- (void).cxx_destruct;
- (void)runLoopSleep;
- (void)runLoopWake;
- (void)timerFired;
- (void)endMonitoring;
- (void)beginMonitoring;
- (void)startTimer;
- (void)_doOneDeferredWorkItem;
- (BOOL)addDeferredWorkItem:(id)arg1;
- (id)init;

@end

