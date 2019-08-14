//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIKBRTObject.h>

@class NSObject, _UIKBRTTimerBlock;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchInfo : _UIKBRTObject
{
    BOOL _currentTouchState;
    BOOL _preRuleTouchState;
    double _originalTimestamp;
    double _maximumRadius;
    double _currentTimestamp;
    double _originalZGradient;
    double _currentZGradient;
    id _touchIdentifier;
    _UIKBRTTimerBlock *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct CGPoint _originalTouchPoint;
    struct CGPoint _currentTouchPoint;
}

+ (id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3;
+ (id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2;
+ (void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2;
+ (id)touchDict;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(readonly, nonatomic) _UIKBRTTimerBlock *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) id touchIdentifier; // @synthesize touchIdentifier=_touchIdentifier;
@property(nonatomic) BOOL preRuleTouchState; // @synthesize preRuleTouchState=_preRuleTouchState;
@property(nonatomic) BOOL currentTouchState; // @synthesize currentTouchState=_currentTouchState;
@property(readonly, nonatomic) double currentZGradient; // @synthesize currentZGradient=_currentZGradient;
@property(readonly, nonatomic) double originalZGradient; // @synthesize originalZGradient=_originalZGradient;
@property(readonly, nonatomic) double currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
@property(readonly, nonatomic) double maximumRadius; // @synthesize maximumRadius=_maximumRadius;
@property(readonly, nonatomic) struct CGPoint currentTouchPoint; // @synthesize currentTouchPoint=_currentTouchPoint;
@property(readonly, nonatomic) struct CGPoint originalTouchPoint; // @synthesize originalTouchPoint=_originalTouchPoint;
@property(readonly, nonatomic) double originalTimestamp; // @synthesize originalTimestamp=_originalTimestamp;
- (void).cxx_destruct;
- (BOOL)willChangeTouchInfo:(id)arg1 toState:(BOOL)arg2;
- (id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(BOOL)arg2;
- (void)cleanup;
- (void)invalidateTimer;
- (void)fireTimerNow;
- (void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(CDUnknownBlockType)arg3;
- (void)updateTouch:(id)arg1;
@property(readonly, nonatomic) _UIKBRTTouchInfo *nextTouch;
@property(readonly, nonatomic) _UIKBRTTouchInfo *previousTouch;
- (void)dealloc;
- (id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3;

@end

