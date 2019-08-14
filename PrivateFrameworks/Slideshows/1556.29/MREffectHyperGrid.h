//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

#import <Slideshows/MZEffectTiming-Protocol.h>

@class MRCAMLBezierData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MREffectHyperGrid : MREffect <MZEffectTiming>
{
    NSMutableDictionary *mSprites;
    NSMutableArray *mLayouts;
    long long mSlideStartIndex;
    long long mIterationStartIndex;
    long long mLastSlideIndex;
    long long mLastIteration;
    MRCAMLBezierData *mCurves[2];
    MRCAMLBezierData *mBreakCurves[2];
    BOOL mNeedsToRecalculateIterations;
    double mAspectRatio;
    NSDictionary *mBreakInformation;
    long long mLastUsableIteration;
    long long mLastIterationsAdded[2];
    BOOL mCanAddSlides;
    long long mIdealSlideCount;
    BOOL mAspectRatioDidChange;
    BOOL mSyncsToMusic;
    long long _currentIterationIndex;
}

+ (id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5;
+ (BOOL)hasCustomTiming;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getCurrentCenter:(struct CGPoint *)arg1 scale:(double *)arg2 rotation:(double *)arg3 isMain:(char *)arg4 forElement:(id)arg5;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (id)_slideProviderWithAspectRatio:(BOOL)arg1 nearest:(long long)arg2 actual:(long long *)arg3;
- (void)_drawSlideAtIndex:(long long)arg1 size:(struct CGSize)arg2 position:(struct CGPoint)arg3 atTime:(double)arg4 iterationTime:(double)arg5 iterationDuration:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8;
- (void)iterationTime:(double *)arg1 duration:(double *)arg2 forIndex:(long long)arg3 atTime:(double)arg4 inIteration:(id)arg5 firstIterationIndex:(long long)arg6 currentIterationIndex:(long long)arg7;
- (void)_renderIterationAtIndex:(long long)arg1 firstIteration:(long long)arg2 atTime:(double)arg3 relativeTime:(double)arg4 inContext:(id)arg5 withArguments:(id)arg6;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (long long)_iterationForTime:(double)arg1;
- (BOOL)_layoutAtIndexHasBreak:(long long)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (struct CGPoint)_relativePointForLayout:(unsigned char)arg1 andDirection:(unsigned char)arg2 atIndex:(long long)arg3 landscape:(BOOL)arg4;
- (struct CGSize)_relativeSizeForLayout:(unsigned char)arg1 atIndex:(long long)arg2 landscape:(BOOL)arg3;
- (void)_updateIterationTimingsWithSlideInformation:(id)arg1 aspectRatio:(double)arg2;
- (void)_updateIterationTiming:(id)arg1 slideInformation:(id)arg2 aspectRatio:(double)arg3 startTime:(double *)arg4;
- (void)_setupLayoutsWithSlideInfo:(id)arg1 aspectRatio:(double)arg2;
- (void)_applyLayoutsFromEffectAttributes;
- (BOOL)slideIndex:(long long)arg1 isInIteration:(id)arg2;
- (id)layoutForSlideIndex:(long long)arg1 forIterations:(id)arg2 atIndex:(long long *)arg3;
- (double)_movieDurationForSlideAtIndex:(long long)arg1 slideInformation:(id)arg2;
- (BOOL)_isMovieForSlideAtIndex:(long long)arg1 slideInformation:(id)arg2;
- (double)_aspectRatioForSlideIndex:(long long)arg1;
- (BOOL)needsMoreSlidesAtTime:(double)arg1;
- (double)displayTimeForTextAtIndex:(unsigned long long)arg1;
- (double)displayTimeForSlideAtIndex:(unsigned long long)arg1;
- (double)showDurationForSlideAtIndex:(unsigned long long)arg1;
- (double)_calculateMainDuration;
- (double)showTimeForSlideAtIndex:(unsigned long long)arg1;
- (void)_updateSizeScripts:(long long)arg1 aspectRatio:(double)arg2;
- (void)_applyTimingToSlideProviders:(long long)arg1;
- (BOOL)isOpaque;
- (id)effectAuthoredAttributes;
- (unsigned long long)effectAuthoredSlideCount;
- (double)lowestDisplayTime;
- (void)setAttributes:(id)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;

// Remaining properties
@property(readonly, nonatomic) double mainDuration; // @dynamic mainDuration;
@property(readonly, nonatomic) double phaseInDuration; // @dynamic phaseInDuration;
@property(readonly, nonatomic) double phaseOutDuration; // @dynamic phaseOutDuration;

@end

