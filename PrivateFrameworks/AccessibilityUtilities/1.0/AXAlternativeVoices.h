//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface AXAlternativeVoices : NSObject
{
    NSMutableDictionary *_voiceClassesMap;
    NSMutableDictionary *_voiceNameMap;
}

+ (BOOL)supportsAlex;
+ (BOOL)supportsSiri;
+ (id)sharedInstance;
+ (BOOL)inUnitTestMode;
+ (void)setInUnitTestMode:(BOOL)arg1;
@property(retain, nonatomic) NSMutableDictionary *voiceNameMap; // @synthesize voiceNameMap=_voiceNameMap;
@property(retain, nonatomic) NSMutableDictionary *voiceClassesMap; // @synthesize voiceClassesMap=_voiceClassesMap;
- (void).cxx_destruct;
- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3;
- (BOOL)_siriSupportsLanguage:(id)arg1;
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (id)nameForVoiceIdentifier:(id)arg1;
- (id)alternativeVoiceIdentifiersForLangauge:(id)arg1;
- (BOOL)isAlexAvailableForLanguage:(id)arg1;
- (BOOL)isNashvilleSystemVoice:(id)arg1;
- (BOOL)isSiriVoiceIdentifier:(id)arg1;
- (BOOL)isOldSiriVoiceIdentifier:(id)arg1;
- (BOOL)isAlternativeVoice:(id)arg1;
- (BOOL)isAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *supportedSiriLanguages;

@end
