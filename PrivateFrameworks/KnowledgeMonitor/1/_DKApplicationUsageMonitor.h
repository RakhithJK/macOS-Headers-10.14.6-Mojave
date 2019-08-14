//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDictionary;

@interface _DKApplicationUsageMonitor : _DKMonitor
{
    void *_notificationID;
    NSDictionary *_activeApplicationEvents;
}

+ (id)_eventWithBundleIdentifier:(id)arg1 startDate:(id)arg2;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
@property(copy, nonatomic) NSDictionary *activeApplicationEvents; // @synthesize activeApplicationEvents=_activeApplicationEvents;
@property(nonatomic) void *notificationID; // @synthesize notificationID=_notificationID;
- (void).cxx_destruct;
- (void)invalidateInstantState;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)start;
- (void)updateActiveApplications:(id)arg1;
- (void)platformSpecificStop;
- (void)platformSpecificStart;
- (void)obtainCurrentValue;
- (void)registerForAppChangeNotifications;
- (void)updateContextStore;
- (id)init;

@end

