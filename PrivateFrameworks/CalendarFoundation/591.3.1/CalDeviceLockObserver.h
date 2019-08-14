//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDarwinNotificationListener;
@protocol OS_dispatch_queue;

@interface CalDeviceLockObserver : NSObject
{
    BOOL _internalHasBeenUnlockedSinceBoot;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CalDarwinNotificationListener *_notificationListener;
    CDUnknownBlockType _stateChangedCallback;
}

+ (id)stateChangedNotificationName;
+ (BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
@property(nonatomic) BOOL internalHasBeenUnlockedSinceBoot; // @synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) CalDarwinNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
- (void)_notificationReceived;
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;
- (id)init;

@end

