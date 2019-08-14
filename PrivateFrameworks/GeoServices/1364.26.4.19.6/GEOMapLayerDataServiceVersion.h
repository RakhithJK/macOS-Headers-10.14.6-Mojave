//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying>
{
    unsigned int _dataVersion;
    unsigned int _formatVersion;
    unsigned int _patchVersion;
    struct {
        unsigned int dataVersion:1;
        unsigned int formatVersion:1;
        unsigned int patchVersion:1;
    } _has;
}

@property(nonatomic) unsigned int patchVersion; // @synthesize patchVersion=_patchVersion;
@property(nonatomic) unsigned int formatVersion; // @synthesize formatVersion=_formatVersion;
@property(nonatomic) unsigned int dataVersion; // @synthesize dataVersion=_dataVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPatchVersion;
@property(nonatomic) BOOL hasFormatVersion;
@property(nonatomic) BOOL hasDataVersion;

@end

