//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NRPBCompressedData : PBCodable <NSCopying>
{
    NSData *_possiblyCompressedData;
    BOOL _compressed;
    struct {
        unsigned int compressed:1;
    } _has;
}

@property(retain, nonatomic) NSData *possiblyCompressedData; // @synthesize possiblyCompressedData=_possiblyCompressedData;
@property(nonatomic) BOOL compressed; // @synthesize compressed=_compressed;
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
@property(readonly, nonatomic) BOOL hasPossiblyCompressedData;
@property(nonatomic) BOOL hasCompressed;

@end
