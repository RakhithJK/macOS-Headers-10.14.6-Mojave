//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying>
{
    double _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    struct {
        unsigned int durationInOldState:1;
    } _has;
}

+ (Class)stateTransitionFeedbackType;
@property(nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
@property(retain, nonatomic) NSMutableArray *stateTransitionFeedbacks; // @synthesize stateTransitionFeedbacks=_stateTransitionFeedbacks;
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
@property(nonatomic) BOOL hasDurationInOldState;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateTransitionFeedbacksCount;
- (void)addStateTransitionFeedback:(id)arg1;
- (void)clearStateTransitionFeedbacks;

@end

