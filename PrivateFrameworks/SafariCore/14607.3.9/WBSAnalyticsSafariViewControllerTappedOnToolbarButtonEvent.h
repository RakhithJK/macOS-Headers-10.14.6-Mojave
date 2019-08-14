//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariViewControllerTappedOnToolbarButtonEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _button;
    BOOL _usedLongTap;
    CDStruct_9b2e609f _has;
}

@property(nonatomic) BOOL usedLongTap; // @synthesize usedLongTap=_usedLongTap;
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
@property(nonatomic) BOOL hasUsedLongTap;
- (int)StringAsButton:(id)arg1;
- (id)buttonAsString:(int)arg1;
@property(nonatomic) BOOL hasButton;
@property(nonatomic) int button; // @synthesize button=_button;
@property(nonatomic) BOOL hasTimestamp;

@end

