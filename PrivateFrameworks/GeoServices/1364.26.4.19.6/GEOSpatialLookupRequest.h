//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupRequest : PBRequest <NSCopying>
{
    CDStruct_95bda58d _categorys;
    GEOLatLng *_center;
    int _maxResults;
    int _radius;
    struct {
        unsigned int maxResults:1;
        unsigned int radius:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
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
- (int)StringAsCategorys:(id)arg1;
- (id)categorysAsString:(int)arg1;
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (void)addCategory:(int)arg1;
- (void)clearCategorys;
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) BOOL hasRadius;
@property(nonatomic) int radius; // @synthesize radius=_radius;
- (void)dealloc;

@end

