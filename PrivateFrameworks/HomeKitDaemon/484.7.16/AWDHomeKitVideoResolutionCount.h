//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitVideoResolutionCount : PBCodable <NSCopying>
{
    unsigned int _count;
    int _resolution;
    struct {
        unsigned int count:1;
        unsigned int resolution:1;
    } _has;
}

@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCount;
- (int)StringAsResolution:(id)arg1;
- (id)resolutionAsString:(int)arg1;
@property(nonatomic) BOOL hasResolution;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;

@end

