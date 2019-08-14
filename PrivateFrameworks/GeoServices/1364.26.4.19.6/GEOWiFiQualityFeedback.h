//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOWiFiQualityFeedback : PBCodable <NSCopying>
{
    unsigned int _maxValue;
    int _type;
    unsigned int _value;
    struct {
        unsigned int maxValue:1;
        unsigned int type:1;
        unsigned int value:1;
    } _has;
}

@property(nonatomic) unsigned int maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) unsigned int value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMaxValue;
@property(nonatomic) BOOL hasValue;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

