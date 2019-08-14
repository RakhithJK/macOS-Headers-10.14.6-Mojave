//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@interface VCPProtoLivePhotoVariationParams : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    int _errorCode;
    int _loopFadeLen;
    int _loopPeriod;
    int _loopStart;
    struct {
        unsigned int loopFadeLen:1;
        unsigned int loopPeriod:1;
        unsigned int loopStart:1;
    } _has;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(nonatomic) int loopStart; // @synthesize loopStart=_loopStart;
@property(nonatomic) int loopPeriod; // @synthesize loopPeriod=_loopPeriod;
@property(nonatomic) int loopFadeLen; // @synthesize loopFadeLen=_loopFadeLen;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLoopStart;
@property(nonatomic) BOOL hasLoopPeriod;
@property(nonatomic) BOOL hasLoopFadeLen;
- (id)exportToLegacyDictionary;

@end

