//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@interface AWDCallHistoryCommCenterMigration : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _recordCount;
    unsigned int _version;
    BOOL _success;
    struct {
        unsigned int timestamp:1;
        unsigned int recordCount:1;
        unsigned int version:1;
        unsigned int success:1;
    } _has;
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasVersion;
@property(nonatomic) BOOL hasRecordCount;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL hasTimestamp;

@end

