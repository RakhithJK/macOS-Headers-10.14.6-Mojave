//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable <NSCopying>
{
    NTPBRecordBase *_base;
    NSMutableArray *_tagIDs;
}

+ (Class)tagIDsType;
@property(retain, nonatomic) NSMutableArray *tagIDs; // @synthesize tagIDs=_tagIDs;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)tagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tagIDsCount;
- (void)addTagIDs:(id)arg1;
- (void)clearTagIDs;
@property(readonly, nonatomic) BOOL hasBase;
- (void)dealloc;

@end
