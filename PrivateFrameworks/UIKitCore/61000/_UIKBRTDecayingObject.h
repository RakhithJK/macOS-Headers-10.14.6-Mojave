//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingObject : NSObject
{
    NSMutableArray *_resetBlocks;
    BOOL _isDecaying;
    BOOL _isHolding;
    double _lastUpdate;
    double _timeoutDuration;
}

@property(readonly, nonatomic) BOOL isHolding; // @synthesize isHolding=_isHolding;
@property(readonly, nonatomic) BOOL isDecaying; // @synthesize isDecaying=_isDecaying;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(readonly, nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void).cxx_destruct;
- (void)onResetDo:(CDUnknownBlockType)arg1;
- (void)resetActiveDecayTo:(double)arg1;
- (void)startOrUpdateDecay;
- (void)updateDecay;
- (void)reset;
- (void)resetDecayTo:(double)arg1;
@property(readonly, nonatomic) BOOL isActive;
- (void)startDecaying;
- (id)initWithTimeoutDuration:(double)arg1;

@end

