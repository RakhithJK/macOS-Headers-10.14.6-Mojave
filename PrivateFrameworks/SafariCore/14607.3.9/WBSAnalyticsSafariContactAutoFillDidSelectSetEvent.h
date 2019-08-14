//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariContactAutoFillDidSelectSetEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _selectedSet;
    BOOL _hadPreviouslyCustomizedSet;
    struct {
        unsigned int timestamp:1;
        unsigned int selectedSet:1;
        unsigned int hadPreviouslyCustomizedSet:1;
    } _has;
}

@property(nonatomic) BOOL hadPreviouslyCustomizedSet; // @synthesize hadPreviouslyCustomizedSet=_hadPreviouslyCustomizedSet;
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
@property(nonatomic) BOOL hasHadPreviouslyCustomizedSet;
- (int)StringAsSelectedSet:(id)arg1;
- (id)selectedSetAsString:(int)arg1;
@property(nonatomic) BOOL hasSelectedSet;
@property(nonatomic) int selectedSet; // @synthesize selectedSet=_selectedSet;
@property(nonatomic) BOOL hasTimestamp;

@end

