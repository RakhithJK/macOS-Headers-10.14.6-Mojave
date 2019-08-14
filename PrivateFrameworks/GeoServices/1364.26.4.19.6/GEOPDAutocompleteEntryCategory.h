//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOPDVenueIdentifier, GEOStyleAttributes, NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_displayName;
    GEOStyleAttributes *_styleAttributes;
    NSData *_suggestionEntryMetadata;
    GEOPDVenueIdentifier *_venueIdentifier;
}

@property(retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier; // @synthesize venueIdentifier=_venueIdentifier;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEOLocalizedString *displayName; // @synthesize displayName=_displayName;
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
@property(readonly, nonatomic) BOOL hasVenueIdentifier;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
@property(readonly, nonatomic) BOOL hasDisplayName;

@end

