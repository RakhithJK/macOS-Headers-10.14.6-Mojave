//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCUserDefaults.h>

@class NSArray, NSString;

@interface SCRCUserDefaults (SCRCUserDefaultsSpeechConvenience)
+ (BOOL)_areComponentsOfValidSpeechAttributeKey:(id)arg1;
+ (id)speechAttributeFromLegacyUserDefaultsKey:(id)arg1;
+ (id)speechCategoryFromLegacyUserDefaultsKey:(id)arg1;
+ (id)speechLegacyKeyForCategory:(id)arg1 attribute:(id)arg2;
+ (id)speechAttributeFromUserDefaultsKey:(id)arg1;
+ (id)speechCategoryFromUserDefaultsKey:(id)arg1;
+ (id)speechLanguageIDFromUserDefaultsKey:(id)arg1;
+ (id)speechKeyForLanguageID:(id)arg1 category:(id)arg2 attribute:(id)arg3;
- (id)_preferredVoiceIDForLanguage:(id)arg1;
- (BOOL)_isSystemWideCategory:(id)arg1;
- (void)setUsingCustomizedVoiceSettings:(BOOL)arg1 forCategory:(id)arg2;
- (BOOL)usingCustomizedVoiceSettingsForCategory:(id)arg1;
- (void)setSpeechIntonationAsPercent:(double)arg1 forCategory:(id)arg2;
- (double)speechIntonationAsPercentForCategory:(id)arg1;
- (double)defaultSpeechIntonationAsPercentForCategory:(id)arg1;
- (void)setSpeechVolumeAsPercent:(double)arg1 forCategory:(id)arg2;
- (double)speechVolumeAsPercentForCategory:(id)arg1;
- (double)defaultSpeechVolumeAsPercentForCategory:(id)arg1;
- (void)setSpeechPitchAsPercent:(double)arg1 forCategory:(id)arg2;
- (double)speechPitchAsPercentForCategory:(id)arg1;
- (double)defaultSpeechPitchAsPercentForCategory:(id)arg1;
- (void)setSpeechRateAsPercent:(double)arg1 forLanguageID:(id)arg2 category:(id)arg3;
- (void)setSpeechRateAsPercent:(double)arg1 forLanguageID:(id)arg2;
- (void)setSpeechRateAsPercent:(double)arg1 forCategory:(id)arg2;
- (double)speechRateAsPercentForLanguageID:(id)arg1 category:(id)arg2;
- (double)speechRateAsPercentForLanguageID:(id)arg1;
- (double)speechRateAsPercentForCategory:(id)arg1;
- (double)defaultSpeechRateAsPercentForCategory:(id)arg1;
- (void)setSpeechVoiceID:(id)arg1 forLanguageID:(id)arg2 category:(id)arg3;
- (void)setSpeechVoiceID:(id)arg1 forLanguageID:(id)arg2;
- (void)setSpeechVoiceID:(id)arg1 forCategory:(id)arg2;
- (id)speechVoiceIDForLanguageID:(id)arg1 category:(id)arg2;
- (id)speechVoiceIDForLanguageID:(id)arg1;
- (id)speechVoiceIDForCategory:(id)arg1;
- (id)defaultSpeechVoiceIDForCategory:(id)arg1;
- (void)removeSpeechCustomizedLanguageID:(id)arg1;
- (void)addSpeechCustomizedLanguageID:(id)arg1;
@property(nonatomic) double speechCurrentIntonationAsPercent;
@property(nonatomic) double speechCurrentVolumeAsPercent;
@property(nonatomic) double speechCurrentPitchAsPercent;
@property(nonatomic) double speechCurrentRateAsPercent;
@property(copy, nonatomic) NSString *speechCurrentDefaultVoiceID;
@property(copy, nonatomic) NSString *speechSelectedVoiceLanguageID;
@property(readonly, nonatomic) BOOL automaticallySwitchVoiceBasedOnLanguage;
@property(readonly, nonatomic) NSArray *speechCustomizedLanguageIDs;
@property(readonly, nonatomic, getter=isSoundEnabled) BOOL soundEnabled;
@property(readonly, nonatomic, getter=isSpeechEnabled) BOOL speechEnabled;
@end

