//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTransitLeg : PBCodable <NSCopying>
{
    CDStruct_95bda58d _restrictedToSectionIndexs;
    int _sectionOptionIndex;
    struct {
        unsigned int sectionOptionIndex:1;
    } _has;
}

@property(nonatomic) int sectionOptionIndex; // @synthesize sectionOptionIndex=_sectionOptionIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setRestrictedToSectionIndexs:(int *)arg1 count:(unsigned long long)arg2;
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1;
- (void)addRestrictedToSectionIndex:(int)arg1;
- (void)clearRestrictedToSectionIndexs;
@property(readonly, nonatomic) int *restrictedToSectionIndexs;
@property(readonly, nonatomic) unsigned long long restrictedToSectionIndexsCount;
@property(nonatomic) BOOL hasSectionOptionIndex;
- (void)dealloc;

@end

