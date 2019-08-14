//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying>
{
    unsigned long long _preferredSlotAllocation;
    NSMutableArray *_embedFonts;
    NSString *_urlString;
    struct {
        unsigned int preferredSlotAllocation:1;
    } _has;
}

+ (Class)embedFontsType;
@property(nonatomic) unsigned long long preferredSlotAllocation; // @synthesize preferredSlotAllocation=_preferredSlotAllocation;
@property(retain, nonatomic) NSMutableArray *embedFonts; // @synthesize embedFonts=_embedFonts;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPreferredSlotAllocation;
- (id)embedFontsAtIndex:(unsigned long long)arg1;
- (unsigned long long)embedFontsCount;
- (void)addEmbedFonts:(id)arg1;
- (void)clearEmbedFonts;
@property(readonly, nonatomic) BOOL hasUrlString;
- (void)dealloc;

@end

