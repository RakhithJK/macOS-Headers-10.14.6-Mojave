//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, GEOStructuredAddress, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGeocodingParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxResults;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    CDStruct_4f8569d5 _has;
}

@property(retain, nonatomic) GEOStructuredAddress *structuredAddress; // @synthesize structuredAddress=_structuredAddress;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
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
@property(readonly, nonatomic) BOOL hasStructuredAddress;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) BOOL hasQueryString;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;

@end

