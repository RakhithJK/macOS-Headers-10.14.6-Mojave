//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEORPSuggestionEntry : PBCodable <NSCopying>
{
    NSMutableArray *_displayLines;
    unsigned int _serverSearchCompletionEntryIndex;
    unsigned int _serverSearchCompletionSectionIndex;
    int _type;
    struct {
        unsigned int serverSearchCompletionEntryIndex:1;
        unsigned int serverSearchCompletionSectionIndex:1;
        unsigned int type:1;
    } _has;
}

+ (Class)displayLineType;
@property(nonatomic) unsigned int serverSearchCompletionEntryIndex; // @synthesize serverSearchCompletionEntryIndex=_serverSearchCompletionEntryIndex;
@property(nonatomic) unsigned int serverSearchCompletionSectionIndex; // @synthesize serverSearchCompletionSectionIndex=_serverSearchCompletionSectionIndex;
@property(retain, nonatomic) NSMutableArray *displayLines; // @synthesize displayLines=_displayLines;
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
@property(nonatomic) BOOL hasServerSearchCompletionEntryIndex;
@property(nonatomic) BOOL hasServerSearchCompletionSectionIndex;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLinesCount;
- (void)addDisplayLine:(id)arg1;
- (void)clearDisplayLines;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

