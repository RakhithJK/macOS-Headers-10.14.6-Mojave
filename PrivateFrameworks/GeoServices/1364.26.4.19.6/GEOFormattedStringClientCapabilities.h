//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    BOOL _concatenatingFormatStringsSupported;
    BOOL _timestampFormatPatternSupported;
    struct {
        unsigned int concatenatingFormatStringsSupported:1;
        unsigned int timestampFormatPatternSupported:1;
    } _has;
}

@property(nonatomic) BOOL timestampFormatPatternSupported; // @synthesize timestampFormatPatternSupported=_timestampFormatPatternSupported;
@property(nonatomic) BOOL concatenatingFormatStringsSupported; // @synthesize concatenatingFormatStringsSupported=_concatenatingFormatStringsSupported;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimestampFormatPatternSupported;
@property(nonatomic) BOOL hasConcatenatingFormatStringsSupported;

@end

