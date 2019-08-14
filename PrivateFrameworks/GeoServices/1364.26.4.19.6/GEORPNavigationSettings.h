//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying>
{
    unsigned long long _distanceUnits;
    unsigned long long _maxAlternateRouteCount;
    unsigned long long _voiceVolume;
    int _userPreferredTransportType;
    NSString *_voiceLanguage;
    BOOL _beepBeforeInstruction;
    BOOL _muteSpeechOverride;
    BOOL _pauseSpokenAudio;
    BOOL _shouldUseGuidanceEventManager;
    BOOL _speechEnabled;
    struct {
        unsigned int distanceUnits:1;
        unsigned int maxAlternateRouteCount:1;
        unsigned int voiceVolume:1;
        unsigned int userPreferredTransportType:1;
        unsigned int beepBeforeInstruction:1;
        unsigned int muteSpeechOverride:1;
        unsigned int pauseSpokenAudio:1;
        unsigned int shouldUseGuidanceEventManager:1;
        unsigned int speechEnabled:1;
    } _has;
}

@property(nonatomic) BOOL shouldUseGuidanceEventManager; // @synthesize shouldUseGuidanceEventManager=_shouldUseGuidanceEventManager;
@property(retain, nonatomic) NSString *voiceLanguage; // @synthesize voiceLanguage=_voiceLanguage;
@property(nonatomic) BOOL beepBeforeInstruction; // @synthesize beepBeforeInstruction=_beepBeforeInstruction;
@property(nonatomic) unsigned long long maxAlternateRouteCount; // @synthesize maxAlternateRouteCount=_maxAlternateRouteCount;
@property(nonatomic) BOOL speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(nonatomic) BOOL muteSpeechOverride; // @synthesize muteSpeechOverride=_muteSpeechOverride;
@property(nonatomic) BOOL pauseSpokenAudio; // @synthesize pauseSpokenAudio=_pauseSpokenAudio;
@property(nonatomic) unsigned long long distanceUnits; // @synthesize distanceUnits=_distanceUnits;
@property(nonatomic) unsigned long long voiceVolume; // @synthesize voiceVolume=_voiceVolume;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsUserPreferredTransportType:(id)arg1;
- (id)userPreferredTransportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasUserPreferredTransportType;
@property(nonatomic) int userPreferredTransportType; // @synthesize userPreferredTransportType=_userPreferredTransportType;
@property(nonatomic) BOOL hasShouldUseGuidanceEventManager;
@property(readonly, nonatomic) BOOL hasVoiceLanguage;
@property(nonatomic) BOOL hasBeepBeforeInstruction;
@property(nonatomic) BOOL hasMaxAlternateRouteCount;
@property(nonatomic) BOOL hasSpeechEnabled;
@property(nonatomic) BOOL hasMuteSpeechOverride;
@property(nonatomic) BOOL hasPauseSpokenAudio;
@property(nonatomic) BOOL hasDistanceUnits;
@property(nonatomic) BOOL hasVoiceVolume;

@end

