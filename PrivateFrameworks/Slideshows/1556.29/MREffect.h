//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/MRLoadable-Protocol.h>
#import <Slideshows/MRRenderable-Protocol.h>

@class MRImage, MRLayerEffect, NSDictionary, NSMutableDictionary, NSOperation, NSString;

@interface MREffect : NSObject <MRLoadable, MRRenderable>
{
    NSDictionary *mDescription;
    MRLayerEffect *mEffectLayer;
    MRImage *mOutputImage;
    NSString *mEffectID;
    NSDictionary *mAttributes;
    NSDictionary *mFlattenedAttributes;
    unsigned long long mSeed;
    struct _NSRange mMultiImageSlideRange;
    BOOL mNeedsToUpdateSlides;
    BOOL mNeedsToUpdateTexts;
    BOOL mNeedsToUpdateAttributes;
    BOOL mIsNative3D;
    BOOL mIsOpaque;
    BOOL mIsAlphaFriendly;
    NSOperation *mPreloadOperation;
    struct CGSize mPixelSize;
    double mDefaultPhaseInDuration;
    double mDefaultMainDuration;
    double mDefaultPhaseOutDuration;
    double mPhaseInDuration;
    double mMainDuration;
    double mPhaseOutDuration;
    NSMutableDictionary *_panoramaPanningOffsets;
    double _panoramaPanningEndTime;
    double _panoramaPanningAmount;
    BOOL _isInInteractiveMode;
}

+ (id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2;
+ (id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5;
+ (BOOL)hasCustomTiming;
+ (id)retainedEffectWithEffectID:(id)arg1 forEffectLayer:(id)arg2;
+ (unsigned long long)typicalSlideBatchSizeForEffectID:(id)arg1;
+ (BOOL)supportsDynamicExpansionForEffectID:(id)arg1;
@property(readonly) BOOL isInInteractiveMode; // @synthesize isInInteractiveMode=_isInInteractiveMode;
@property(readonly, nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration=mPhaseOutDuration;
@property(readonly, nonatomic) double mainDuration; // @synthesize mainDuration=mMainDuration;
@property(readonly, nonatomic) double phaseInDuration; // @synthesize phaseInDuration=mPhaseInDuration;
@property(nonatomic) struct _NSRange multiImageSlideRange; // @synthesize multiImageSlideRange=mMultiImageSlideRange;
@property(nonatomic) BOOL needsToUpdateTexts; // @synthesize needsToUpdateTexts=mNeedsToUpdateTexts;
@property(nonatomic) BOOL needsToUpdateSlides; // @synthesize needsToUpdateSlides=mNeedsToUpdateSlides;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=mPixelSize;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=mAttributes;
@property(readonly) NSString *effectID; // @synthesize effectID=mEffectID;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
@property(readonly, nonatomic) BOOL isInfinite;
@property(readonly, nonatomic) BOOL isAlphaFriendly;
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) BOOL isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadWithArguments:(id)arg1;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)endPanoramaPanning;
- (double)valueForPanoramaPanningForElementID:(id)arg1 value:(double)arg2 minValue:(double)arg3 maxValue:(double)arg4;
- (void)updatePanoramaPanningForElementID:(id)arg1 withDelta:(double)arg2;
- (BOOL)startPanoramaPanningForElementID:(id)arg1 isLandscape:(char *)arg2;
- (double)timeForPreviousChapterBeforeTime:(double)arg1;
- (double)timeForNextChapterAfterTime:(double)arg1;
- (BOOL)supportsChapters;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (void)exitInteractiveMode;
- (void)enterInteractiveModeAtTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getStartTime:(double *)arg1 andDuration:(double *)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4;
- (BOOL)getCurrentCenter:(struct CGPoint *)arg1 scale:(double *)arg2 rotation:(double *)arg3 isMain:(char *)arg4 forElement:(id)arg5;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)setLiveAttributes:(id)arg1;
- (void)_cleanup;
- (double)_computeTimeForPhaseTime:(double)arg1;
- (double)_computePhaseTimeForTime:(double)arg1;
- (void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
- (BOOL)isRetainedByEffectLayer;
- (void)releaseByEffectLayer:(id)arg1;
- (void)retainByEffectLayer:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;
- (BOOL)needsMoreSlidesAtTime:(double)arg1;
- (unsigned long long)firstSlideIndexStillNeededAtTime:(double)arg1;
@property(readonly, nonatomic) long long typicalSlideBatchSize;
@property(readonly, nonatomic) BOOL supportsDynamicExpansion;
- (void)_unload;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

