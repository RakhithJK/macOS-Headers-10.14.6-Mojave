//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariUnableToSilentlyMigrateToCKBookmarksEvent : PBCodable <NSCopying>
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _reasons;
    unsigned long long _timestamp;
    CDStruct_b5306035 _has;
}

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
- (int)StringAsReasons:(id)arg1;
- (id)reasonsAsString:(int)arg1;
- (void)setReasons:(int *)arg1 count:(unsigned long long)arg2;
- (int)reasonAtIndex:(unsigned long long)arg1;
- (void)addReason:(int)arg1;
- (void)clearReasons;
@property(readonly, nonatomic) int *reasons;
@property(readonly, nonatomic) unsigned long long reasonsCount;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end

