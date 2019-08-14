//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AFLocalization : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tables;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_loadInfoForMacOSVoicesWithLanguageCode:(id)arg1;
- (id)_voiceLanguageMapForMacOS;
- (id)loadInfoForVoicesWithLanguageCode:(id)arg1;
- (id)defaultOutputVoiceForSiriSessionLanguage:(id)arg1;
- (id)allOutputVoiceIdentifiersForSiriLanguage:(id)arg1;
- (id)localizedNameOfVoiceGender:(long long)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedGenderOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameOfOutputVoiceWithIdentifier:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)localizedCompactNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2;
- (id)compactDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;
- (id)longDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 languageCode:(id)arg4;
- (id)init;

@end

