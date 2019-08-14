//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface _AXReplayInstance : NSObject
{
    BOOL _async;
    BOOL _didSucceed;
    CDUnknownBlockType _replayBlock;
    CDUnknownBlockType _completionBlock;
    double _interval;
    long long _maxAttempts;
    long long _attemptsRemaining;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_underlyingError;
    id _underlyingResult;
    NSString *_name;
}

+ (id)replayBlock:(CDUnknownBlockType)arg1 name:(id)arg2 attempts:(long long)arg3 interval:(double)arg4 async:(BOOL)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id underlyingResult; // @synthesize underlyingResult=_underlyingResult;
@property(retain, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(nonatomic) BOOL didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL async; // @synthesize async=_async;
@property(nonatomic) long long attemptsRemaining; // @synthesize attemptsRemaining=_attemptsRemaining;
@property(nonatomic) long long maxAttempts; // @synthesize maxAttempts=_maxAttempts;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType replayBlock; // @synthesize replayBlock=_replayBlock;
- (void).cxx_destruct;
- (id)_genericFailError;
- (void)_dispatchAsynchronously;
- (void)_dispatchSynchronously;
- (void)dispatch;

@end

