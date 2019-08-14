//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation, NSTimer;

__attribute__((visibility("hidden")))
@interface UIRepeatedAction : NSObject
{
    BOOL _didCompletePreInvocationDelay;
    BOOL _didCompleteInvocationDelay;
    BOOL _disableRepeat;
    BOOL _skipInitialFire;
    double _preInvocationDelay;
    double _invocationDelay;
    double _repeatedDelay;
    NSInvocation *_invocation;
    id _invocationArgument;
    NSTimer *_timer;
}

+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id invocationArgument; // @synthesize invocationArgument=_invocationArgument;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(nonatomic) BOOL skipInitialFire; // @synthesize skipInitialFire=_skipInitialFire;
@property(nonatomic) BOOL disableRepeat; // @synthesize disableRepeat=_disableRepeat;
@property(nonatomic) double repeatedDelay; // @synthesize repeatedDelay=_repeatedDelay;
@property(nonatomic) double invocationDelay; // @synthesize invocationDelay=_invocationDelay;
@property(nonatomic) double preInvocationDelay; // @synthesize preInvocationDelay=_preInvocationDelay;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)invalidate;
- (void)schedule;
- (void)_repeatedTimerFire;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;
- (BOOL)invoke;
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end

