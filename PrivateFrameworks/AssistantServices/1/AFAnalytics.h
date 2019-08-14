//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    id <AFAnalyticsService> _service;
}

+ (id)sharedAnalytics;
- (void).cxx_destruct;
- (id)_service:(BOOL)arg1;
- (void)_stageEvents:(id)arg1;
- (void)_stageEvent:(id)arg1;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)logEvents:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(BOOL)arg4;
- (void)setService:(id)arg1;
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;
- (void)endEventsGrouping;
- (void)beginEventsGrouping;
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3;
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(struct NSUUID *)arg3;
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3;
- (void)logEventWithType:(long long)arg1 context:(id)arg2;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;
- (id)_init;
- (id)init;
- (void)logClientFeedbackPresented:(id)arg1;
- (id)createTurnBasedInstrumentationContext;

@end
