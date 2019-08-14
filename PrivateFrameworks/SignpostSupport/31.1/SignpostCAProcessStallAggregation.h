//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/NSCopying-Protocol.h>

@class NSMutableSet, NSString, SignpostCAIntervalAggregationStats;

@interface SignpostCAProcessStallAggregation : NSObject <NSCopying>
{
    BOOL _isSystemAggregation;
    NSString *_processName;
    NSString *_processExecutablePath;
    NSMutableSet *_pids;
    SignpostCAIntervalAggregationStats *_longCommitStats;
    SignpostCAIntervalAggregationStats *_longTransactionLifetimeStats;
    SignpostCAIntervalAggregationStats *_longHIDLatencyStats;
    SignpostCAIntervalAggregationStats *_longFrameLatencyStats;
    SignpostCAIntervalAggregationStats *_longRenderForTimeStats;
    SignpostCAIntervalAggregationStats *_longFrameLifetimeStats;
    SignpostCAIntervalAggregationStats *_longResponsibleFrameLifetimeStats;
    SignpostCAIntervalAggregationStats *_glitchStats;
    SignpostCAIntervalAggregationStats *_responsibleGlitchStats;
    SignpostCAIntervalAggregationStats *_firstFrameGlitchStats;
    SignpostCAIntervalAggregationStats *_responsibleFirstFrameGlitchStats;
}

@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *responsibleFirstFrameGlitchStats; // @synthesize responsibleFirstFrameGlitchStats=_responsibleFirstFrameGlitchStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *firstFrameGlitchStats; // @synthesize firstFrameGlitchStats=_firstFrameGlitchStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *responsibleGlitchStats; // @synthesize responsibleGlitchStats=_responsibleGlitchStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *glitchStats; // @synthesize glitchStats=_glitchStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *longResponsibleFrameLifetimeStats; // @synthesize longResponsibleFrameLifetimeStats=_longResponsibleFrameLifetimeStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *longFrameLifetimeStats; // @synthesize longFrameLifetimeStats=_longFrameLifetimeStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *longRenderForTimeStats; // @synthesize longRenderForTimeStats=_longRenderForTimeStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *longFrameLatencyStats; // @synthesize longFrameLatencyStats=_longFrameLatencyStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *longHIDLatencyStats; // @synthesize longHIDLatencyStats=_longHIDLatencyStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *longTransactionLifetimeStats; // @synthesize longTransactionLifetimeStats=_longTransactionLifetimeStats;
@property(readonly, nonatomic) SignpostCAIntervalAggregationStats *longCommitStats; // @synthesize longCommitStats=_longCommitStats;
@property(readonly, nonatomic) NSMutableSet *pids; // @synthesize pids=_pids;
@property(readonly, nonatomic) NSString *processExecutablePath; // @synthesize processExecutablePath=_processExecutablePath;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) BOOL isSystemAggregation; // @synthesize isSystemAggregation=_isSystemAggregation;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)_addOtherProcessStallAggregation:(id)arg1;
- (void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2;
- (id)_statsForType:(unsigned char)arg1 initIfMissing:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithProcessExecutablePath:(id)arg1 pid:(int)arg2;
- (id)_initAsSystemAggregation;
- (unsigned long long)_totalStallDurationNs;
- (void)_iterateTypeStatsWithBlock:(CDUnknownBlockType)arg1;

@end

