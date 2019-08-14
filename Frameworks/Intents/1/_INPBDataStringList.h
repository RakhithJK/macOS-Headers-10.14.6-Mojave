//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDataStringList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBDataStringList : PBCodable <_INPBDataStringList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_conditionType;
    NSArray *_dataStrings;
}

+ (Class)dataStringType;
@property(copy, nonatomic) NSArray *dataStrings; // @synthesize dataStrings=_dataStrings;
@property(retain, nonatomic) _INPBCondition *conditionType; // @synthesize conditionType=_conditionType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dataStringAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dataStringsCount;
- (void)addDataString:(id)arg1;
- (void)clearDataStrings;
@property(readonly, nonatomic) BOOL hasConditionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

