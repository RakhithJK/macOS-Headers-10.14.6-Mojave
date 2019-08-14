//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/NSCoding-Protocol.h>

@class MCContainerParallelizer, MUMathExpressionDoubleBased, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MPAnimatedSet : NSObject <NSCoding>
{
    NSString *mAnimatedSetID;
    NSDictionary *mDescription;
    MUMathExpressionDoubleBased *mTimeOfGoodPositionFormula;
    BOOL mTimeWraps;
    NSMutableDictionary *mSlides;
    NSMutableArray *mFeaturedSlidePositions;
    NSMutableArray *mFeaturingAttributes;
    double mStartTime;
    double mIntroDuration;
    double mMainDuration;
    double mOutroDuration;
    double mTotalNumberOfIntervals;
    double mDefaultFeaturingDuration;
    double mDefaultFeaturingAnimationDuration;
    NSDictionary *mDefaultFeaturingAnimationAttributes;
    NSDictionary *mAttributes;
    BOOL mEaseInEaseOutBetweenFeaturedSlides;
    BOOL mFirstSlideIsShared;
    BOOL mLastSlideIsShared;
    NSString *mIntroAnimationID;
    NSString *mOutroAnimationID;
    double mDistance;
    double mSpeed;
    MCContainerParallelizer *mContainer;
}

@property(readonly) MCContainerParallelizer *container; // @synthesize container=mContainer;
@property double speed; // @synthesize speed=mSpeed;
@property double distance; // @synthesize distance=mDistance;
@property(copy) NSString *outroAnimationID; // @synthesize outroAnimationID=mOutroAnimationID;
@property(copy) NSString *introAnimationID; // @synthesize introAnimationID=mIntroAnimationID;
@property BOOL lastSlideIsShared; // @synthesize lastSlideIsShared=mLastSlideIsShared;
@property BOOL firstSlideIsShared; // @synthesize firstSlideIsShared=mFirstSlideIsShared;
@property BOOL easeInEaseOutBetweenFeaturedSlides; // @synthesize easeInEaseOutBetweenFeaturedSlides=mEaseInEaseOutBetweenFeaturedSlides;
@property(copy) NSDictionary *attributes; // @synthesize attributes=mAttributes;
@property double defaultFeaturingAnimationDuration; // @synthesize defaultFeaturingAnimationDuration=mDefaultFeaturingAnimationDuration;
@property double defaultFeaturingDuration; // @synthesize defaultFeaturingDuration=mDefaultFeaturingDuration;
@property double startTime; // @synthesize startTime=mStartTime;
@property(readonly) BOOL timeWraps; // @synthesize timeWraps=mTimeWraps;
@property(readonly) NSString *animatedSetID; // @synthesize animatedSetID=mAnimatedSetID;
- (void)chooseAnOutroAnimation;
- (void)chooseAnIntroAnimation;
@property(readonly) double fullDuration;
- (void)setAnimationPathsForPlug:(id)arg1 atPosition:(unsigned long long)arg2;
- (void)applyIntroAnimationPathsToPlug:(id)arg1 atPosition:(unsigned long long)arg2;
- (double)timeOfGoodPositionForPosition:(long long)arg1;
- (void)setAnimationPaths:(id)arg1 onPlug:(id)arg2 atPosition:(unsigned long long)arg3 atTimeOffset:(double)arg4 withTimeOffsetKind:(int)arg5 forDuration:(double)arg6 withFunctionTimeOffset:(double)arg7 andFunctionTimeFactor:(double)arg8 easeIn:(BOOL)arg9 easeOut:(BOOL)arg10 otherAttributes:(id)arg11;
- (void)computeAnimationPathsForTime:(double)arg1 andPosition:(unsigned long long)arg2 usingAnimationPaths:(id)arg3 otherAttributes:(id)arg4 plugTimeOffset:(double)arg5 plugTimeOffsetKind:(int)arg6 plugAnimationPaths:(id)arg7;
- (void)insertIntoContainer:(id)arg1;
- (void)updateContainer;
- (double)featuringTimeForSlideAtPosition:(unsigned long long)arg1;
- (id)slides;
- (void)removeAllSlides;
- (void)removeSlideAtPosition:(unsigned long long)arg1;
- (void)showSlide:(id)arg1 atPosition:(unsigned long long)arg2 featuringAttributes:(id)arg3;
- (void)decodeFromSlides:(id)arg1;
@property(readonly) BOOL needsEvenNumberOfSlides;
@property(readonly) unsigned long long maximumNumberOfSlides;
@property(readonly) unsigned long long minimumNumberOfSlides;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnimatedSetID:(id)arg1;
- (double)time2OfGoodPositionForPosition:(long long)arg1;
- (double)time1OfGoodPositionForPosition:(long long)arg1;

@end

