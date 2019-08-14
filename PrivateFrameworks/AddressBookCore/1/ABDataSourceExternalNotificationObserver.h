//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccountRepository, NSDistributedNotificationCenter, NSNotificationCenter;
@protocol CNScheduler;

@interface ABDataSourceExternalNotificationObserver : NSObject
{
    ABAccountRepository *_repository;
    NSDistributedNotificationCenter *_distributedNotificationCenter;
    NSNotificationCenter *_localNotificationCenter;
    id <CNScheduler> _preprocessingScheduler;
}

+ (BOOL)isConsideredAquaSession:(int)arg1;
+ (id)log;
@property(readonly, nonatomic) id <CNScheduler> preprocessingScheduler; // @synthesize preprocessingScheduler=_preprocessingScheduler;
@property(readonly, nonatomic) NSNotificationCenter *localNotificationCenter; // @synthesize localNotificationCenter=_localNotificationCenter;
@property(readonly, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter; // @synthesize distributedNotificationCenter=_distributedNotificationCenter;
@property(readonly, nonatomic) ABAccountRepository *repository; // @synthesize repository=_repository;
- (void)postAccountConfigurationDidChangeNotificationFromDistributedNotification:(id)arg1;
- (void)postInvalidatedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)postRemovedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)postAddedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)postChangedExternallyNotificationFromDistributedNotification:(id)arg1;
- (void)extractUIDFromNotification:(id)arg1 andRunBlock:(CDUnknownBlockType)arg2;
- (void)distributedAccountConfigurationDidChange:(id)arg1;
- (void)distributedSourcesInvalidated:(id)arg1;
- (void)removeSourceWithExternalNotification:(id)arg1;
- (void)distributedSourceRemoved:(id)arg1;
- (void)addSourceWithExternalNotification:(id)arg1;
- (void)distributedSourceAdded:(id)arg1;
- (void)distributedSourceChanged:(id)arg1;
- (void)stopObservingNotifications;
- (void)startObservingNotifications;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 distributedNotificationCenter:(id)arg2 localNotificationCenter:(id)arg3 preprocessingScheduler:(id)arg4;
- (id)initWithRepository:(id)arg1;

@end

