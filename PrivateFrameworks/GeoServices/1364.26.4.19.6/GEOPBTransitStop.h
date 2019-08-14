//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOStyleAttributes, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    unsigned int _hallIndex;
    GEOLatLng *_latLng;
    NSString *_nameDisplayString;
    unsigned int _stopIndex;
    GEOStyleAttributes *_styleAttributes;
    NSString *_timezone;
    NSMutableArray *_zoomNames;
    struct {
        unsigned int muid:1;
        unsigned int hallIndex:1;
        unsigned int stopIndex:1;
    } _has;
}

+ (Class)zoomNameType;
@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) NSMutableArray *zoomNames; // @synthesize zoomNames=_zoomNames;
@property(nonatomic) unsigned int hallIndex; // @synthesize hallIndex=_hallIndex;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int stopIndex; // @synthesize stopIndex=_stopIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasNameDisplayString;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoomNamesCount;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
@property(nonatomic) BOOL hasHallIndex;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
@property(readonly, nonatomic) BOOL hasTimezone;
@property(readonly, nonatomic) BOOL hasLatLng;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) BOOL hasStopIndex;
- (id)identifier;
- (id)bestNameWithLocale:(out id *)arg1;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

