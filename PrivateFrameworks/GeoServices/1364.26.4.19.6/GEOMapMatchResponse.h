//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOMapMatchResponse : PBCodable <NSCopying>
{
    int _matchingStatus;
    int _status;
    NSData *_zilchPoints;
    struct {
        unsigned int matchingStatus:1;
        unsigned int status:1;
    } _has;
}

@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
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
@property(readonly, nonatomic) BOOL hasZilchPoints;
- (int)StringAsMatchingStatus:(id)arg1;
- (id)matchingStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasMatchingStatus;
@property(nonatomic) int matchingStatus; // @synthesize matchingStatus=_matchingStatus;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

