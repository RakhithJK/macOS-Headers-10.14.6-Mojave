//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying>
{
    unsigned long long _batchSize;
    NSMutableArray *_perLabelSupports;
    float _support;
    struct {
        unsigned int batchSize:1;
        unsigned int support:1;
    } _has;
}

+ (Class)perLabelSupportType;
+ (id)statsWithSize:(unsigned long long)arg1 support:(float)arg2;
+ (id)statsWithPerLabelCounts:(id)arg1;
@property(retain, nonatomic) NSMutableArray *perLabelSupports; // @synthesize perLabelSupports=_perLabelSupports;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) float support; // @synthesize support=_support;
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
- (id)perLabelSupportAtIndex:(unsigned long long)arg1;
- (unsigned long long)perLabelSupportsCount;
- (void)addPerLabelSupport:(id)arg1;
- (void)clearPerLabelSupports;
@property(nonatomic) BOOL hasBatchSize;
@property(nonatomic) BOOL hasSupport;
- (id)combineWithStats:(id)arg1;
- (float)supportForLabel:(unsigned long long)arg1;
- (id)toDictionary;

@end

