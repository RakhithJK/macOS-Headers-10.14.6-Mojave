//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface GEOMapsServerMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_mapsSearchResults;
    NSMutableArray *_suggestionEntryMetadataDisplayeds;
    NSData *_suggestionEntryMetadataTappedOn;
}

+ (Class)mapsSearchResultType;
+ (Class)suggestionEntryMetadataDisplayedType;
@property(retain, nonatomic) NSMutableArray *mapsSearchResults; // @synthesize mapsSearchResults=_mapsSearchResults;
@property(retain, nonatomic) NSMutableArray *suggestionEntryMetadataDisplayeds; // @synthesize suggestionEntryMetadataDisplayeds=_suggestionEntryMetadataDisplayeds;
@property(retain, nonatomic) NSData *suggestionEntryMetadataTappedOn; // @synthesize suggestionEntryMetadataTappedOn=_suggestionEntryMetadataTappedOn;
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
- (id)mapsSearchResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapsSearchResultsCount;
- (void)addMapsSearchResult:(id)arg1;
- (void)clearMapsSearchResults;
- (id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryMetadataDisplayedsCount;
- (void)addSuggestionEntryMetadataDisplayed:(id)arg1;
- (void)clearSuggestionEntryMetadataDisplayeds;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadataTappedOn;

@end

