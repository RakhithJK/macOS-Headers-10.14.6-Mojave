//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSData;

@interface ADOptOutRequest : PBRequest <NSCopying>
{
    double _statusChangeTimestamp;
    double _transmitTimestamp;
    NSData *_dPID;
    NSData *_iAdID;
    float _timezone;
    BOOL _optedOutStatus;
    struct {
        unsigned int statusChangeTimestamp:1;
        unsigned int transmitTimestamp:1;
        unsigned int timezone:1;
        unsigned int optedOutStatus:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(nonatomic) float timezone; // @synthesize timezone=_timezone;
@property(nonatomic) double statusChangeTimestamp; // @synthesize statusChangeTimestamp=_statusChangeTimestamp;
@property(nonatomic) double transmitTimestamp; // @synthesize transmitTimestamp=_transmitTimestamp;
@property(nonatomic) BOOL optedOutStatus; // @synthesize optedOutStatus=_optedOutStatus;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
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
@property(readonly, nonatomic) BOOL hasDPID;
@property(nonatomic) BOOL hasTimezone;
@property(nonatomic) BOOL hasStatusChangeTimestamp;
@property(nonatomic) BOOL hasTransmitTimestamp;
@property(nonatomic) BOOL hasOptedOutStatus;
@property(readonly, nonatomic) BOOL hasIAdID;

@end

