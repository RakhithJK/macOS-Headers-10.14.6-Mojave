//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _firstSceneReferenceLocation;
    struct CGPoint _lastSceneReferenceLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    NSMutableArray *_touches;
    unsigned long long _lastTouchCount;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    double _hysteresis;
    double _allowableSeparation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
    double _allowableTouchTimeSeparation;
    unsigned int _failsPastMaxTouches:1;
    unsigned int _failsPastHysteresisWithoutMinTouches:1;
    unsigned int _canPanHorizontally:1;
    unsigned int _canPanVertically:1;
    unsigned int _ignoresStationaryTouches:1;
    unsigned int _multitouchTimerOn:1;
    unsigned int _requiresImmediateMultipleTouches:1;
    NSMutableArray *_movingTouches;
    struct CGPoint _digitizerLocation;
    BOOL _iOSMacScrollingEnabled;
    BOOL _iOSMacUseNonacceleratedDelta;
    BOOL _iOSMacIgnoreScrollDirectionUserPreference;
}

+ (void)_setPanGestureRecognizersEnabled:(BOOL)arg1;
+ (BOOL)_shouldDefaultToTouches;
+ (double)_defaultHysteresis;
@property(nonatomic, getter=_iOSMacIgnoreScrollDirectionUserPreference, setter=_setiOSMacIgnoreScrollDirectionUserPreference:) BOOL iOSMacIgnoreScrollDirectionUserPreference; // @synthesize iOSMacIgnoreScrollDirectionUserPreference=_iOSMacIgnoreScrollDirectionUserPreference;
@property(nonatomic, getter=_iOSMacUseNonacceleratedDelta, setter=_setiOSMacUseNonacceleratedDelta:) BOOL iOSMacUseNonacceleratedDelta; // @synthesize iOSMacUseNonacceleratedDelta=_iOSMacUseNonacceleratedDelta;
@property(nonatomic, getter=_iOSMacScrollingEnabled, setter=_setiOSMacScrollingEnabled:) BOOL iOSMacScrollingEnabled; // @synthesize iOSMacScrollingEnabled=_iOSMacScrollingEnabled;
@property(readonly, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample; // @synthesize _previousVelocitySample;
@property(readonly, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample; // @synthesize _velocitySample;
@property(nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property(nonatomic) unsigned long long minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;
- (void).cxx_destruct;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (void)_processScrollPhaseChanged:(id)arg1;
- (BOOL)_shouldReceiveScrollEvent:(id)arg1;
- (void)_updateDigitizerLocationWithEvent:(id)arg1;
- (struct CGPoint)_digitizerLocation;
- (void)_ignoreTouches:(id)arg1 forEvent:(id)arg2;
- (id)_activeTouches;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_ignoreTouchForTouchIdentifier:(unsigned int)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(CDUnknownBlockType)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id *)arg1;
- (BOOL)_touchesExceedAllowableSeparation;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)_removeHysteresisFromTranslation;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (BOOL)_willScrollY;
- (BOOL)_willScrollX;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1 lockingToAxis:(int)arg2;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (void)_setCanPanVertically:(BOOL)arg1;
- (void)_setCanPanHorizontally:(BOOL)arg1;
- (BOOL)_canPanVertically;
- (BOOL)_canPanHorizontally;
- (BOOL)_ignoresStationaryTouches;
- (void)_setIgnoresStationaryTouches:(BOOL)arg1;
- (BOOL)_requiresImmediateMultipleTouches;
- (void)_setRequiresImmediateMultipleTouches:(BOOL)arg1;
- (double)_allowableTouchTimeSeparation;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (double)_allowableSeparation;
- (void)_setAllowableSeparation:(double)arg1;
- (double)_hysteresis;
- (void)_setHysteresis:(double)arg1;
- (long long)_lastTouchCount;
- (BOOL)_failsPastHysteresisWithoutMinTouches;
- (void)_setFailsPastHysteresisWithoutMinTouches:(BOOL)arg1;
- (BOOL)failsPastMaxTouches;
- (void)setFailsPastMaxTouches:(BOOL)arg1;
- (void)multitouchExpired:(id)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)clearMultitouchTimer;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

