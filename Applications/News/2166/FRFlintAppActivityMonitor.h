//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCAppActivityObserving-Protocol.h"
#import "SXAppStateMonitor-Protocol.h"

@class NSMutableSet, NSNotificationCenter, NSString;

@interface FRFlintAppActivityMonitor : NSObject <SXAppStateMonitor, FCAppActivityObserving>
{
    NSNotificationCenter *_notificationCenter;
    NSMutableSet *_backgroundObserverBlocks;
    NSMutableSet *_foregroundObserverBlocks;
}

@property(readonly, nonatomic) NSMutableSet *foregroundObserverBlocks; // @synthesize foregroundObserverBlocks=_foregroundObserverBlocks;
@property(readonly, nonatomic) NSMutableSet *backgroundObserverBlocks; // @synthesize backgroundObserverBlocks=_backgroundObserverBlocks;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationWillEnterForeground;
- (void)performOnApplicationDidEnterBackground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWillEnterForeground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationDidBecomeActive:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

