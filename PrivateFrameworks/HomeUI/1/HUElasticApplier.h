//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUApplier.h>

@class CADisplayLink;

@interface HUElasticApplier : HUApplier
{
    BOOL _completesWhenAtRest;
    BOOL _progressBeginsFromInitialInputProgress;
    BOOL _applyOnlyOnProgressChanges;
    double _friction;
    double _tension;
    double _currentVelocity;
    CDUnknownBlockType _progressInputBlock;
    CADisplayLink *_displayLink;
    unsigned long long _frameCount;
    unsigned long long _restingFrameCount;
    double _previousForce;
}

@property(nonatomic) double previousForce; // @synthesize previousForce=_previousForce;
@property(nonatomic) unsigned long long restingFrameCount; // @synthesize restingFrameCount=_restingFrameCount;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType progressInputBlock; // @synthesize progressInputBlock=_progressInputBlock;
@property(nonatomic) double currentVelocity; // @synthesize currentVelocity=_currentVelocity;
@property(nonatomic) BOOL applyOnlyOnProgressChanges; // @synthesize applyOnlyOnProgressChanges=_applyOnlyOnProgressChanges;
@property(nonatomic) BOOL progressBeginsFromInitialInputProgress; // @synthesize progressBeginsFromInitialInputProgress=_progressBeginsFromInitialInputProgress;
@property(nonatomic) BOOL completesWhenAtRest; // @synthesize completesWhenAtRest=_completesWhenAtRest;
@property(nonatomic) double tension; // @synthesize tension=_tension;
@property(nonatomic) double friction; // @synthesize friction=_friction;
- (void).cxx_destruct;
- (BOOL)complete:(BOOL)arg1;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(BOOL)arg1;
- (void)_displayLinkTick;
- (BOOL)start;
- (id)initWithProgressInputBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

