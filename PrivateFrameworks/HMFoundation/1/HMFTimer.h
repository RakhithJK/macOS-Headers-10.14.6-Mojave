//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSDate, NSObject;
@protocol HMFTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMFTimer : HMFObject
{
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeInterval;
    unsigned long long _leeway;
    BOOL _running;
    NSDate *_fireDate;
    id <HMFTimerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _options;
}

+ (id)shortDescription;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) unsigned long long leeway; // @synthesize leeway=_leeway;
@property __weak id <HMFTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (void)__handleExpiration;
- (void)__fire;
- (void)fire;
- (void)kick;
- (void)suspend;
- (void)resume;
- (void)setFireDate:(id)arg1;
@property(readonly, copy) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

