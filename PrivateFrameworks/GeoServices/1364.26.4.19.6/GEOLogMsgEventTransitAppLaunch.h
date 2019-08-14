//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSString;

@interface GEOLogMsgEventTransitAppLaunch : PBCodable <NSCopying>
{
    double _timestamp;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    CDStruct_b5306035 _has;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) GEOLatLng *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOLatLng *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
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
@property(nonatomic) BOOL hasTimestamp;
@property(readonly, nonatomic) BOOL hasDestination;
@property(readonly, nonatomic) BOOL hasSource;
@property(readonly, nonatomic) BOOL hasBundleIdentifier;

@end

