//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

#import <KnowledgeMonitor/CXCallObserverDelegate-Protocol.h>

@class CXCallObserver, NSString;

@interface _DKCallMonitor : _DKMonitor <CXCallObserverDelegate>
{
    BOOL _enabled;
    BOOL _callInProgress;
    CXCallObserver *_observer;
}

+ (void)setCallInProgress:(BOOL)arg1;
+ (id)entitlements;
+ (id)eventStream;
@property(retain, nonatomic) CXCallObserver *observer; // @synthesize observer=_observer;
@property(nonatomic) BOOL callInProgress; // @synthesize callInProgress=_callInProgress;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)synchronouslyReflectCurrentValue;
- (BOOL)anyCallInProgressOnCurrentDevice:(id)arg1;
- (void)deactivate;
- (void)stop;
- (void)start;
- (id)loadState;
- (void)saveState;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
