//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying>
{
    unsigned long long _label;
    unsigned long long _supervisionType;
    unsigned long long _timestamp;
    float _confidenceScore;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatFeatures;
    struct {
        unsigned int label:1;
        unsigned int supervisionType:1;
        unsigned int timestamp:1;
        unsigned int confidenceScore:1;
    } _has;
}

@property(nonatomic) float confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(nonatomic) unsigned long long supervisionType; // @synthesize supervisionType=_supervisionType;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures; // @synthesize sparseFloatFeatures=_sparseFloatFeatures;
@property(nonatomic) unsigned long long label; // @synthesize label=_label;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasConfidenceScore;
@property(nonatomic) BOOL hasSupervisionType;
@property(readonly, nonatomic) BOOL hasSparseFloatFeatures;
@property(nonatomic) BOOL hasLabel;
@property(readonly, nonatomic) BOOL hasModelInfo;
@property(nonatomic) BOOL hasTimestamp;

@end

