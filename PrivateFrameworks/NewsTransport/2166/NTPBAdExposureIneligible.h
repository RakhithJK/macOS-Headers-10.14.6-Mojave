//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBAdExposureIneligible : PBCodable <NSCopying>
{
    int _exposureIneligibleLocationType;
    NSString *_exposureIneligibleLocationTypeId;
    int _exposureIneligibleReason;
    int _feedType;
    struct {
        unsigned int exposureIneligibleLocationType:1;
        unsigned int exposureIneligibleReason:1;
        unsigned int feedType:1;
    } _has;
}

@property(retain, nonatomic) NSString *exposureIneligibleLocationTypeId; // @synthesize exposureIneligibleLocationTypeId=_exposureIneligibleLocationTypeId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasExposureIneligibleReason;
@property(nonatomic) int exposureIneligibleReason; // @synthesize exposureIneligibleReason=_exposureIneligibleReason;
@property(readonly, nonatomic) BOOL hasExposureIneligibleLocationTypeId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) BOOL hasExposureIneligibleLocationType;
@property(nonatomic) int exposureIneligibleLocationType; // @synthesize exposureIneligibleLocationType=_exposureIneligibleLocationType;

@end

