//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation, NSString;

@interface AWDHomeKitAccessoryRelaySetup : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _actionType;
    int _certified;
    unsigned int _duration;
    int _errorCode;
    NSString *_reason;
    AWDHomeKitVendorInformation *_vendorDetails;
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
        unsigned int certified:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
    } _has;
}

@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) BOOL hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) BOOL hasVendorDetails;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) BOOL hasReason;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasTimestamp;

@end

