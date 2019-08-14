//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPCorrectedField : PBCodable <NSCopying>
{
    NSString *_correctedValue;
    int _field;
    NSString *_fieldName;
    NSString *_originalValue;
    BOOL _isMarkedIncorrect;
    struct {
        unsigned int field:1;
        unsigned int isMarkedIncorrect:1;
    } _has;
}

@property(nonatomic) BOOL isMarkedIncorrect; // @synthesize isMarkedIncorrect=_isMarkedIncorrect;
@property(retain, nonatomic) NSString *correctedValue; // @synthesize correctedValue=_correctedValue;
@property(retain, nonatomic) NSString *originalValue; // @synthesize originalValue=_originalValue;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
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
@property(nonatomic) BOOL hasIsMarkedIncorrect;
@property(readonly, nonatomic) BOOL hasCorrectedValue;
@property(readonly, nonatomic) BOOL hasOriginalValue;
@property(readonly, nonatomic) BOOL hasFieldName;
- (int)StringAsField:(id)arg1;
- (id)fieldAsString:(int)arg1;
@property(nonatomic) BOOL hasField;
@property(nonatomic) int field; // @synthesize field=_field;

@end

