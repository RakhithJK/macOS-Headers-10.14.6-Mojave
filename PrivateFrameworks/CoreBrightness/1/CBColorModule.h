//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreBrightness/CBContainer.h>

#import <CoreBrightness/CBContainerProtocol-Protocol.h>
#import <CoreBrightness/CBHIDServiceProtocol-Protocol.h>
#import <CoreBrightness/CBStatusInfoProtocol-Protocol.h>
#import <CoreBrightness/NightShiftSupportProtocol-Protocol.h>

@class CBColorFilter, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CBColorModule : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol>
{
    NSMutableArray *_relevantServices;
    void *_callbackContext;
    CDStruct_ebf15ab2 _colorSample;
    double _illuminance;
    _Bool _clamshell;
    NSObject<OS_dispatch_source> *_rampTimer;
    NSString *_userName;
    NSMutableDictionary *_properties;
    struct {
        struct ColorEffects *cfx;
        _Bool blueReductionEnabled;
        float blueReductionFactor;
        _Bool nightModeSupported;
        _Bool fadeInProgress;
        _Bool enforceSlowRamps;
        float brightnessBoost;
        _Bool whitePointEnabled;
        double enablementTs;
        _Bool forceSnapping;
        _Bool harmonyHWSupported;
        _Bool harmonyNativeSupported;
        _Bool harmonySystemSupported;
        _Bool harmonyEnabled;
        _Bool harmonyActive;
        _Bool harmonyAvailable;
        _Bool whitepointAvailable;
        float harmonyStrength;
        float harmonyFixedStrength;
    } _colorStruct;
    _Bool _fadeInProgress;
    _Bool _endRamp;
    struct __IOHIDServiceClient *_dfr;
    struct {
        unsigned char firstTimerFire;
        NSObject<OS_dispatch_source> *logTimer;
        int periodS;
    } _reportContext;
    BOOL _displayOn;
    CBColorFilter *_colorFilter;
    unsigned long long _colorFilterModeOverride;
    NSMutableDictionary *_currentChromaticitySensitivity;
    unsigned long long _moduleType;
}

@property(readonly) unsigned long long moduleType; // @synthesize moduleType=_moduleType;
- (id)copyIdentifiers;
- (id)newArrayFromIntegers:(int *)arg1 size:(int)arg2;
- (id)newArrayFromDoubles:(double *)arg1 size:(int)arg2;
- (BOOL)isDFR;
- (void)reportToAggd:(CDStruct_b1cf45a1 *)arg1;
- (void)commitPowerLogReport:(CDStruct_b1cf45a1 *)arg1;
- (void)reportCommitWithStop:(BOOL)arg1;
- (void)reportInitialize;
- (void)reportResetTimerWithStop:(BOOL)arg1;
- (BOOL)startNewTimerWithFreq:(float)arg1;
- (void)timerRoutine:(id)arg1;
- (void)inputAmbientColorSample:(CDStruct_ebf15ab2 *)arg1 force:(BOOL)arg2 trust:(BOOL)arg3;
- (void)activateColorAdaptation;
- (id)newAdaptationModeMappingDictionary:(float *)arg1 strengthNum:(int)arg2;
- (id)newAdaptationModeMappingArray:(float *)arg1 strengthNum:(int)arg2;
- (BOOL)parseAdaptationModeMappingArray:(id)arg1 strengths:(float *)arg2 strengthNum:(int)arg3;
- (BOOL)parseAdaptationModeMappingDictionary:(id)arg1 strengths:(float *)arg2 strengthNum:(int)arg3;
- (void)initColorStruct;
- (void)colorRampRoutine:(const CDStruct_7bd4ac66 *)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (void)updateActivity;
- (void)updateAvailability;
- (void)updateClamshellState:(_Bool)arg1;
- (void)updateHarmonySupport;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)copyPropertyInternalForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (void)switchToUser:(id)arg1;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;
- (void)setPreferenceInternal:(id)arg1 forKey:(id)arg2 user:(id)arg3;
- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (id)copyPreferenceInternalForKey:(id)arg1 user:(id)arg2;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (void)updateSensorPolicy;
- (void)updateColorFilterMode;
- (float)absoluteDifferenceForCurrentColor:(CDStruct_b2fbf00d)arg1 andDeltaError:(CDStruct_b2fbf00d)arg2;
- (BOOL)setColorSensitivity:(float)arg1 forALS:(struct __IOHIDServiceClient *)arg2 withIlluminance:(float)arg3;
- (void)updateSensorSensitivity:(struct __IOHIDServiceClient *)arg1 forValue:(struct __IOHIDEvent *)arg2;
- (void)handleHIDEventInternal:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (void)processColorSample:(id)arg1;
- (_Bool)setPropertyInternal:(id)arg1 forKey:(id)arg2;
- (BOOL)colorFilterModeHandler:(id)arg1;
- (BOOL)CoreDisplayInitialisedPropertyHandler:(id)arg1;
- (BOOL)CAModeMapping:(id)arg1;
- (BOOL)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)arg1;
- (BOOL)CAWeakestColorAdaptationModePropertyHandler:(id)arg1;
- (void)CAStrengthUpdate:(float)arg1 withPeriod:(float)arg2;
- (BOOL)CAStrengthPropertyHandler:(id)arg1;
- (BOOL)CAEnabledPropertyHandler:(id)arg1;
- (BOOL)CALabShiftPropertyHandler:(id)arg1;
- (BOOL)BLRCCTTargetPropertyHandler:(id)arg1;
- (void)BLRFactorUpdate:(float)arg1 withPeriod:(float)arg2;
- (void)BLRFactorUpdate:(float)arg1;
- (BOOL)BLRFactorPropertyHandler:(id)arg1;
- (BOOL)clamshellStatePropertyHandler:(id)arg1;
- (void)displayBrightnessFactorUpdate:(float)arg1;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)arg1;
- (void)dealloc;
- (void)stop;
- (BOOL)start;
- (id)initDFRHarmony;
- (id)initMain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

