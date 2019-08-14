//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSData;

@interface _DKPREventData : PBCodable <NSCopying>
{
    unsigned long long _uncompressedLength;
    NSData *_event;
    unsigned int _version;
    struct {
        unsigned int uncompressedLength:1;
    } _has;
}

@property(nonatomic) unsigned long long uncompressedLength; // @synthesize uncompressedLength=_uncompressedLength;
@property(retain, nonatomic) NSData *event; // @synthesize event=_event;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
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
@property(nonatomic) BOOL hasUncompressedLength;

@end

