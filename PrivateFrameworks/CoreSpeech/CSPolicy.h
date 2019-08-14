//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSEventMonitorDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CSPolicy : NSObject <CSEventMonitorDelegate>
{
    NSMutableArray *_monitors;
    NSMutableArray *_conditions;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;
- (void)notifyCallback:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)_checkAllConditionsEnabled;
- (void)subscribeEventMonitor:(id)arg1;
- (void)addConditions:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

