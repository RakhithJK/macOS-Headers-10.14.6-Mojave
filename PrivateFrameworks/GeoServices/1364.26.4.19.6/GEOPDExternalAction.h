//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalAction : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _componentType;
    NSMutableArray *_externalActionDetails;
    struct {
        unsigned int componentType:1;
    } _has;
}

+ (Class)externalActionDetailType;
@property(retain, nonatomic) NSMutableArray *externalActionDetails; // @synthesize externalActionDetails=_externalActionDetails;
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
- (id)externalActionDetailAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalActionDetailsCount;
- (void)addExternalActionDetail:(id)arg1;
- (void)clearExternalActionDetails;
- (int)StringAsComponentType:(id)arg1;
- (id)componentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasComponentType;
@property(nonatomic) int componentType; // @synthesize componentType=_componentType;

@end

