//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PLEntryNotificationOperatorComposition;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLTimer : NSObject
{
    BOOL _repeats;
    NSDate *_fireDate;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _tolerance;
    id _userInfo;
    PLEntryNotificationOperatorComposition *_sleepEntryNotification;
    PLEntryNotificationOperatorComposition *_wakeEntryNotification;
    NSDate *_lastSleepTime;
}

@property(retain) NSDate *lastSleepTime; // @synthesize lastSleepTime=_lastSleepTime;
@property(retain) PLEntryNotificationOperatorComposition *wakeEntryNotification; // @synthesize wakeEntryNotification=_wakeEntryNotification;
@property(retain) PLEntryNotificationOperatorComposition *sleepEntryNotification; // @synthesize sleepEntryNotification=_sleepEntryNotification;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
@property BOOL repeats; // @synthesize repeats=_repeats;
@property double tolerance; // @synthesize tolerance=_tolerance;
@property double interval; // @synthesize interval=_interval;
@property(retain) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)handleTimerFire;
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(nonatomic) BOOL timerActive;
- (void)arm;
- (void)invalidate;
- (void)fire;
- (void)dealloc;
- (id)initWithFireDate:(id)arg1 withInterval:(double)arg2 withTolerance:(double)arg3 repeats:(BOOL)arg4 withUserInfo:(id)arg5 withQueue:(id)arg6 withBlock:(CDUnknownBlockType)arg7;

@end
