//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying>
{
    int _flag;
    BOOL _correctedValue;
    BOOL _originalValue;
    struct {
        unsigned int flag:1;
        unsigned int correctedValue:1;
        unsigned int originalValue:1;
    } _has;
}

@property(nonatomic) BOOL correctedValue; // @synthesize correctedValue=_correctedValue;
@property(nonatomic) BOOL originalValue; // @synthesize originalValue=_originalValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCorrectedValue;
@property(nonatomic) BOOL hasOriginalValue;
- (int)StringAsFlag:(id)arg1;
- (id)flagAsString:(int)arg1;
@property(nonatomic) BOOL hasFlag;
@property(nonatomic) int flag; // @synthesize flag=_flag;

@end

