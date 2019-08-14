//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetClimateSettingsInCarIntentExport-Protocol.h>

@class INSpeakableString, NSMeasurement, NSNumber, NSString;

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setCarName:(id)arg1;
@property(readonly, copy) INSpeakableString *carName;
- (void)setClimateZone:(long long)arg1;
@property(readonly) long long climateZone;
- (void)setRelativeTemperatureSetting:(long long)arg1;
@property(readonly) long long relativeTemperatureSetting;
- (void)setTemperature:(id)arg1;
@property(readonly, copy) NSMeasurement *temperature;
- (void)setRelativeFanSpeedSetting:(long long)arg1;
@property(readonly) long long relativeFanSpeedSetting;
- (void)setFanSpeedPercentage:(id)arg1;
@property(readonly, copy) NSNumber *fanSpeedPercentage;
- (void)setFanSpeedIndex:(id)arg1;
@property(readonly, copy) NSNumber *fanSpeedIndex;
- (void)setAirCirculationMode:(long long)arg1;
@property(readonly) long long airCirculationMode;
- (void)setEnableAutoMode:(id)arg1;
@property(readonly, copy) NSNumber *enableAutoMode;
- (void)setEnableClimateControl:(id)arg1;
@property(readonly, copy) NSNumber *enableClimateControl;
- (void)setEnableAirConditioner:(id)arg1;
@property(readonly, copy) NSNumber *enableAirConditioner;
- (void)setEnableFan:(id)arg1;
@property(readonly, copy) NSNumber *enableFan;
- (id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11 carName:(id)arg12;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

