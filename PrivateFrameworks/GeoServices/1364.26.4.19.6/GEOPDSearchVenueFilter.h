//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchVenueFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDVenueIdentifier *_venueFilter;
    int _venueSearchType;
    struct {
        unsigned int venueSearchType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDVenueIdentifier *venueFilter; // @synthesize venueFilter=_venueFilter;
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
- (int)StringAsVenueSearchType:(id)arg1;
- (id)venueSearchTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasVenueSearchType;
@property(nonatomic) int venueSearchType; // @synthesize venueSearchType=_venueSearchType;
@property(readonly, nonatomic) BOOL hasVenueFilter;

@end

