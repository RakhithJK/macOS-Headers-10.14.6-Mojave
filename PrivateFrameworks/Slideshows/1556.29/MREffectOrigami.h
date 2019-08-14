//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCAMLBezierData, MRImage, MROrigamiAnimationPath, NSArray, NSMutableArray, NSMutableDictionary;

@interface MREffectOrigami : MREffect
{
    NSMutableDictionary *mSprites;
    NSMutableArray *mSpriteKeysWatcher;
    NSArray *mAnimationTimeBounds;
    NSMutableArray *mItemInfos;
    double mDurationStretchFactor;
    MRImage *mBackColorImage;
    float mBackColorForImage[3];
    float mDescriptionAspectRatio;
    float mPixelUnit;
    BOOL mIsOrigami2Effect;
    BOOL mIsHorizontal;
    BOOL mIsOriginallyHorizontal;
    MRCAMLBezierData *mBreakCurve;
    MROrigamiAnimationPath *mLittleSwing;
    MROrigamiAnimationPath *mBigSwing;
    MROrigamiAnimationPath *mSideSwing;
    MROrigamiAnimationPath *mThirdsSwingTop;
    MROrigamiAnimationPath *mThirdsSwingBottom;
    CDStruct_912cb5d2 *mBreakInfos;
    unsigned long long mTotalNumberOfFolds;
    BOOL _needsToUpdateSizes;
}

+ (id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5;
+ (BOOL)hasCustomTiming;
+ (void)initialize;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getStartTime:(double *)arg1 andDuration:(double *)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (BOOL)_needsRenderingAtTime:(double)arg1 remainingStillDurationAfter:(double *)arg2;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderUnfoldingFlowerAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFlipDiagonalAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFold4LeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)render1To3LeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)render1To3DownAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFoldDownAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFoldLeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFlipDownAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFlipLeftAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderBreakAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (BOOL)_checkPanoramaAbsoluteSizeForImage:(id)arg1 inRect:(struct CGRect *)arg2;
- (void)renderStillAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFallBreakAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFall2AtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFallAtTime:(double)arg1 andProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)_renderFallBreakImage:(id)arg1 atProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6:(struct CGPoint *)arg7:(struct CGPoint)arg8;
- (void)_renderFallImage:(id)arg1 atProgress:(double)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6:(struct CGPoint *)arg7:(struct CGPoint)arg8;
- (void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_setupBreakInfos:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)_retainedByUserBackColorImageInContext:(id)arg1;
- (void)updateSizes;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_setTargetSizeOfImageProviders;
- (void)_cleanupSwingTimings;
- (void)_setupSwingTimings;
- (void)_unload;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;

@end
