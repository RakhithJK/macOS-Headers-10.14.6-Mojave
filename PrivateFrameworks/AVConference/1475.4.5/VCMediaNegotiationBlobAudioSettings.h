//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying>
{
    unsigned int _audioUnitModel;
    unsigned int _payloadFlags;
    unsigned int _rtpSSRC;
    unsigned int _secondaryFlags;
    unsigned int _supportFlags;
    BOOL _useSBR;
    struct {
        unsigned int audioUnitModel:1;
    } _has;
}

+ (int)payloadFromNegotiationPayload:(int)arg1;
+ (int)negotiationPayloadFromPayload:(int)arg1;
@property(nonatomic) BOOL useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) unsigned int secondaryFlags; // @synthesize secondaryFlags=_secondaryFlags;
@property(nonatomic) unsigned int payloadFlags; // @synthesize payloadFlags=_payloadFlags;
@property(nonatomic) unsigned int supportFlags; // @synthesize supportFlags=_supportFlags;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAudioUnitModel;
- (void)printWithLogFile:(void *)arg1;
- (id)newAudioRuleCollection;
- (void)setAudioRuleCollection:(id)arg1;
@property(readonly, nonatomic) BOOL allowAudioRecording;
- (id)initWithSSRC:(unsigned int)arg1 audioRuleCollection:(id)arg2 allowAudioRecording:(BOOL)arg3 audioUnitNumber:(unsigned int)arg4;

@end

