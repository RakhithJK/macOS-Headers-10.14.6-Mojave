//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _industryCode;
    NSString *_mapsCategoryId;
    NSString *_walletCategoryId;
    struct {
        unsigned int industryCode:1;
    } _has;
}

@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(retain, nonatomic) NSString *walletCategoryId; // @synthesize walletCategoryId=_walletCategoryId;
@property(retain, nonatomic) NSString *mapsCategoryId; // @synthesize mapsCategoryId=_mapsCategoryId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIndustryCode;
@property(readonly, nonatomic) BOOL hasWalletCategoryId;
@property(readonly, nonatomic) BOOL hasMapsCategoryId;

@end

