//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetMessageAttributeIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <_INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int attribute:1;
    } _has;
    int _attribute;
    NSArray *_identifiers;
    _INPBIntentMetadata *_intentMetadata;
}

@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(nonatomic) int attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (id)identifierAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long identifiersCount;
- (void)addIdentifier:(id)arg1;
- (void)clearIdentifiers;
- (int)StringAsAttribute:(id)arg1;
- (id)attributeAsString:(int)arg1;
@property(nonatomic) BOOL hasAttribute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

