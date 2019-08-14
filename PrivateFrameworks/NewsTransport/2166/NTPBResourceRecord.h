//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBRecordBase;

@interface NTPBResourceRecord : PBCodable <NSCopying>
{
    NTPBRecordBase *_base;
    NSString *_encoding;
    NSString *_mimeType;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUrl;
@property(readonly, nonatomic) BOOL hasEncoding;
@property(readonly, nonatomic) BOOL hasMimeType;
@property(readonly, nonatomic) BOOL hasBase;
- (void)dealloc;

@end

