//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCondition-Protocol.h>

@class NSString;

@interface _INPBCondition : PBCodable <_INPBCondition, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int conditionalOperator:1;
    } _has;
    int _conditionalOperator;
}

@property(nonatomic) int conditionalOperator; // @synthesize conditionalOperator=_conditionalOperator;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsConditionalOperator:(id)arg1;
- (id)conditionalOperatorAsString:(int)arg1;
@property(nonatomic) BOOL hasConditionalOperator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
