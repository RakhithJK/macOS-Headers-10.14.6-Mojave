//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionManifest : PBCodable <NSCopying>
{
    double _timestamp;
    NSMutableArray *_actionComponentMapEntries;
    NSMutableArray *_searchAttributionSources;
    NSString *_sourceURL;
    CDStruct_b5306035 _has;
}

+ (Class)actionComponentMapEntriesType;
+ (Class)searchAttributionSourcesType;
@property(retain, nonatomic) NSMutableArray *actionComponentMapEntries; // @synthesize actionComponentMapEntries=_actionComponentMapEntries;
@property(retain, nonatomic) NSMutableArray *searchAttributionSources; // @synthesize searchAttributionSources=_searchAttributionSources;
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
- (id)actionComponentMapEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionComponentMapEntriesCount;
- (void)addActionComponentMapEntries:(id)arg1;
- (void)clearActionComponentMapEntries;
- (id)searchAttributionSourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchAttributionSourcesCount;
- (void)addSearchAttributionSources:(id)arg1;
- (void)clearSearchAttributionSources;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) BOOL hasSourceURL;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;

@end

