//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface GEORPPlaceInfo : PBCodable <NSCopying>
{
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    NSString *_sourceApplication;
    NSString *_sourceUrl;
}

@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) GEOPDPlaceResponse *placeResponse; // @synthesize placeResponse=_placeResponse;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest; // @synthesize placeRequest=_placeRequest;
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
@property(readonly, nonatomic) BOOL hasSourceUrl;
@property(readonly, nonatomic) BOOL hasSourceApplication;
@property(readonly, nonatomic) BOOL hasPlaceResponse;
@property(readonly, nonatomic) BOOL hasPlaceRequest;
- (void)clearLocations;
- (void)_clearLocationsFromPlaceResponse;
- (void)_clearLocationsFromPlaceRequest;
- (void)clearSessionId;

@end

