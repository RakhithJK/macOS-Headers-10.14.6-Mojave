//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipLockObserving-Protocol.h>

@class NSMutableArray, NSString, SVTimeBasedAction, SVTimeline;
@protocol SVVideoSkipThresholdObserving;

@interface SVVideoSkipLockObserver : NSObject <SVVideoSkipLockObserving>
{
    BOOL _locked;
    double _countdown;
    CDUnknownBlockType _unlockBlock;
    CDUnknownBlockType _countdownBlock;
    SVTimeline *_timeline;
    id <SVVideoSkipThresholdObserving> _thresholdObserver;
    SVTimeBasedAction *_unlockAction;
    NSMutableArray *_countdownActions;
}

@property(retain, nonatomic) NSMutableArray *countdownActions; // @synthesize countdownActions=_countdownActions;
@property(retain, nonatomic) SVTimeBasedAction *unlockAction; // @synthesize unlockAction=_unlockAction;
@property(readonly, nonatomic) id <SVVideoSkipThresholdObserving> thresholdObserver; // @synthesize thresholdObserver=_thresholdObserver;
@property(readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;
@property(copy, nonatomic, setter=onCountDown:) CDUnknownBlockType countdownBlock; // @synthesize countdownBlock=_countdownBlock;
@property(copy, nonatomic, setter=onUnlock:) CDUnknownBlockType unlockBlock; // @synthesize unlockBlock=_unlockBlock;
@property(nonatomic) double countdown; // @synthesize countdown=_countdown;
@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
- (void).cxx_destruct;
- (void)scheduleUnlockActionWithThreshold:(double)arg1;
- (void)scheduleCountdownActionsWithThreshold:(double)arg1;
- (BOOL)lockStateForThresholdObserver:(id)arg1 onTimeline:(id)arg2;
- (void)dealloc;
- (id)initWithTimeline:(id)arg1 thresholdObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

