//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDataString-Protocol.h>

@class NSArray, NSString;

@interface _INPBDataString : PBCodable <_INPBDataString, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_alternatives;
    NSString *_localizedValue;
    NSString *_vocabularyIdentifier;
}

+ (Class)alternativesType;
@property(copy, nonatomic) NSString *vocabularyIdentifier; // @synthesize vocabularyIdentifier=_vocabularyIdentifier;
@property(copy, nonatomic) NSString *localizedValue; // @synthesize localizedValue=_localizedValue;
@property(copy, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasVocabularyIdentifier;
@property(readonly, nonatomic) BOOL hasLocalizedValue;
- (id)alternativesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long alternativesCount;
- (void)addAlternatives:(id)arg1;
- (void)clearAlternatives;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

