//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock;
@protocol OS_dispatch_queue, OS_dispatch_source, _MCBatchingTimerDelegate;

@interface _MCBatchingTimer : NSObject
{
    NSLock *_timerLock;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_targetDate;
    double _minimumTimeout;
    id <_MCBatchingTimerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <_MCBatchingTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double minimumTimeout; // @synthesize minimumTimeout=_minimumTimeout;
@property(readonly, nonatomic) NSDate *targetDate; // @synthesize targetDate=_targetDate;
- (void).cxx_destruct;
- (void)_scheduleTimerForTimeInterval:(double)arg1;
- (BOOL)update;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 delegate:(id)arg2 queue:(id)arg3;

@end

