//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying>
{
    NSData *_wrappingKey;
    NSData *_wrappingKeyId;
}

@property(retain, nonatomic) NSData *wrappingKey; // @synthesize wrappingKey=_wrappingKey;
@property(retain, nonatomic) NSData *wrappingKeyId; // @synthesize wrappingKeyId=_wrappingKeyId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasWrappingKey;
@property(readonly, nonatomic) BOOL hasWrappingKeyId;

@end

