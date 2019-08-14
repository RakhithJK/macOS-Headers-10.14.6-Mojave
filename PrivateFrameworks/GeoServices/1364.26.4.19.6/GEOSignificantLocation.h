//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString;

@interface GEOSignificantLocation : PBCodable <NSCopying>
{
    double _confidence;
    NSString *_identifier;
    GEOLocation *_location;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
    struct {
        unsigned int confidence:1;
        unsigned int locationIndex:1;
        unsigned int numberOfVisitsBucket:1;
    } _has;
}

@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int numberOfVisitsBucket; // @synthesize numberOfVisitsBucket=_numberOfVisitsBucket;
@property(nonatomic) unsigned int locationIndex; // @synthesize locationIndex=_locationIndex;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
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
@property(nonatomic) BOOL hasConfidence;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(nonatomic) BOOL hasNumberOfVisitsBucket;
@property(nonatomic) BOOL hasLocationIndex;
@property(readonly, nonatomic) BOOL hasLocation;

@end

