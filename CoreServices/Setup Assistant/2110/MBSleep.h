//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBSleep : NSObject
{
}

+ (id)sharedSleep;
- (void)stopPreventingSleep;
- (void)startPreventingSleep;
- (void)postSystemWillSleepNotification;
- (void)postSystemHasPoweredOnNotification;
- (void)watchForSleep;
- (void)sleepNow;
- (void)_watchForSleep:(id)arg1;

@end

