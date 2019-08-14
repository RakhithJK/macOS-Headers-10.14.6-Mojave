//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AFPreferences : NSObject
{
    BOOL _registeredForInternalPrefs;
    BOOL _registeredForLanguageCode;
    BOOL _registeredForOutputVoice;
    BOOL _registeredForSupportedLanguages;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    BOOL _navTokenIsValid;
    int _navToken;
    long long _tlsSessionTicketFlushRequestPending;
}

+ (id)sharedPreferences;
- (void).cxx_destruct;
- (id)configOverrides;
- (void)setConfigOverrides:(id)arg1;
- (void)removeConfigOverrideForKey:(id)arg1;
- (void)setConfigOverrideWithValue:(id)arg1 forKey:(id)arg2;
- (BOOL)cardLoggingEnabled;
- (void)setCardLoggingEnabled:(BOOL)arg1;
- (BOOL)shouldLogForQA;
- (BOOL)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2;
- (BOOL)tlsSessionTicketsFlushPending;
- (void)setTLSSessionTicketsFlushPending:(BOOL)arg1;
- (void)setCurrentNavigationState:(unsigned long long)arg1;
- (unsigned long long)currentNavigationState;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (id)valueForSessionContextPreferenceKey:(id)arg1;
- (void)_registerForNavStatusIfNeeded;
- (void)setUseDeviceSpeakerForTTS:(long long)arg1;
- (long long)useDeviceSpeakerForTTS;
- (void)setOutputVoice:(id)arg1;
- (id)outputVoice;
- (void)setInProgressOutputVoice:(id)arg1;
- (id)inProgressOutputVoice;
- (void)synchronizeVoiceServicesLanguageCode;
- (void)setLanguageCode:(id)arg1;
- (id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(char *)arg2;
- (BOOL)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)arg1;
- (id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(char *)arg2;
- (id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(char *)arg2;
- (id)_languagePreferencesForCurrentSystemConfiguration;
- (BOOL)isLocaleIdentifierNativelySupported:(id)arg1;
- (BOOL)isCurrentLocaleNativelySupported;
- (id)languageCode;
- (void)setAssistantLanguageForceRTL:(BOOL)arg1;
- (BOOL)assistantLanguageForceRTL;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1;
- (BOOL)disableAssistantWhilePasscodeLocked;
- (void)setApplySASToFirstPartyDomains:(BOOL)arg1;
- (BOOL)applySASToFirstPartyDomains;
- (void)setUseSASAutoSelectionFeature:(BOOL)arg1;
- (BOOL)useSASAutoSelectionFeature;
- (void)setShouldLoadNativeMessagesExtensionAsBundle:(BOOL)arg1;
- (BOOL)shouldLoadNativeMessagesExtensionAsBundle;
- (void)setSiriSpeakerGradingDebugUIEnabled:(BOOL)arg1;
- (BOOL)siriSpeakerGradingDebugUIEnabled;
- (void)setSiriDebugUIEnabled:(BOOL)arg1;
- (BOOL)siriDebugUIEnabled;
- (void)setAutoDismissalMaxAttentionSamplingTime:(double)arg1;
- (double)autoDismissalMaxAttentionSamplingTime;
- (void)setAutoDismissalExtendedIdleTimeout:(double)arg1;
- (double)autoDismissalExtendedIdleTimeout;
- (void)setAutoDismissalIdleTimeout:(double)arg1;
- (double)autoDismissalIdleTimeout;
- (void)setLimitedAudioLoggingEnabled:(BOOL)arg1;
- (BOOL)limitedAudioLoggingEnabled;
- (void)setMyriadLastWin;
- (id)myriadLastWin;
- (void)setMyriadDeviceTrumpDelay:(double)arg1;
- (double)myriadDeviceTrumpDelay;
- (void)setMyriadDeviceSlowdown:(double)arg1;
- (double)myriadDeviceSlowdown;
- (void)setMyriadDeviceDelay:(double)arg1;
- (double)myriadDeviceDelay;
- (void)setMyriadDeviceAdjust:(float)arg1;
- (float)myriadDeviceAdjust;
- (void)setMyriadConstantGoodness:(int)arg1;
- (int)myriadConstantGoodness;
- (void)setMyriadDeviceClass:(unsigned char)arg1;
- (unsigned char)myriadDeviceClass;
- (void)setMyriadServerProvisioning:(BOOL)arg1;
- (BOOL)myriadServerProvisioning;
- (void)setMyriadServerHasProvisioned:(BOOL)arg1;
- (BOOL)myriadServerHasProvisioned;
- (void)setMyriadDeviceGroup:(id)arg1;
- (id)myriadDeviceGroup;
- (void)setMyriadDuckingEnabled:(BOOL)arg1;
- (BOOL)myriadDuckingEnabled;
- (void)setMyriadCoordinationEnabled:(BOOL)arg1;
- (BOOL)myriadCoordinationEnabled;
- (void)setStreamingDictationEnabled:(BOOL)arg1;
- (BOOL)streamingDictationEnabled;
- (void)setManualEndpointingThreshold:(id)arg1;
- (id)manualEndpointingThreshold;
- (void)setIgnoreServerManualEndpointingThreshold:(BOOL)arg1;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (void)setActivitySummaryReportDateToNow;
- (id)activitySummaryReportDate;
- (id)horsemanSupplementalLanguageDictionary;
- (id)supplementalLanguagesModificationDate;
- (id)_supplementalLanguagesDictionary;
- (id)supplementalLanguages;
- (id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2;
- (id)supplementalLanguageDictionaryForProduct:(id)arg1;
- (void)_setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3;
- (void)_setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2;
- (unsigned long long)internalUserClassification;
- (void)setInternalUserClassification:(unsigned long long)arg1;
- (id)cloudSyncEnabledModificationDate;
- (void)setCloudSyncEnabled:(BOOL)arg1;
- (BOOL)cloudSyncEnabled;
- (void)_setSuppressDictationOptInLocal:(BOOL)arg1;
- (void)setSuppressDictationOptIn:(BOOL)arg1;
- (BOOL)suppressDictationOptIn;
- (void)setSuppressAssistantOptIn:(BOOL)arg1;
- (BOOL)suppressAssistantOptIn;
- (void)setShowsHoldToTalkIndicator:(BOOL)arg1;
- (BOOL)showsHoldToTalkIndicator;
- (void)setDebugButtonIsEnabled:(BOOL)arg1;
- (BOOL)debugButtonIsEnabled;
- (void)setShowServerOnUI:(BOOL)arg1;
- (BOOL)showServerOnUI;
- (void)resetSessionLanguage;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDictationIsEnabled:(BOOL)arg1;
- (void)setAssistantIsEnabled:(BOOL)arg1;
- (void)_setDictationIsEnabledLocal:(BOOL)arg1;
- (void)_setAssistantIsEnabledLocal:(BOOL)arg1;
- (BOOL)legacyLoggingEnabled;
- (void)setOfflineDictationProfileOverridePath:(id)arg1;
- (id)offlineDictationProfileOverridePath;
- (void)setOfflineDictationOverride:(BOOL)arg1;
- (BOOL)offlineDictationOverride;
- (BOOL)dictationIsEnabled;
- (BOOL)assistantIsEnabled;
- (void)_registerForSupportedLanguageChangeNotifications;
- (void)_registerForOutputVoice;
- (void)_registerForLanguageCodeChangeNotifications;
- (void)_registerForInteralPrefs;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (void)_supportedLanguagesDidChangeExternally;
- (void)_ouputVoiceDidChangeExternally;
- (void)_languageCodeDidChangeExternally;
- (void)_internalPreferencesDidChangeExternally;
- (void)_preferencesDidChangeExternally;
- (void)setRespectsSystemMute:(BOOL)arg1;
- (BOOL)respectsSystemMute;
- (void)setHandsFreeMode:(long long)arg1;
- (long long)handsFreeMode;

@end

