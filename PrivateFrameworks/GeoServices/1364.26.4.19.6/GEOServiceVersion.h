//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOServiceVersion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _minimumVersion;
    NSMutableArray *_versionDomains;
    struct {
        unsigned int minimumVersion:1;
    } _has;
}

+ (Class)versionDomainType;
@property(nonatomic) unsigned int minimumVersion; // @synthesize minimumVersion=_minimumVersion;
@property(retain, nonatomic) NSMutableArray *versionDomains; // @synthesize versionDomains=_versionDomains;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMinimumVersion;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)addVersionDomain:(id)arg1;
- (void)clearVersionDomains;

@end

