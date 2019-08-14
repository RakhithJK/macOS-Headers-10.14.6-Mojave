//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _buildingId;
    unsigned long long _levelId;
    unsigned long long _sectionId;
    unsigned long long _venueId;
    NSMutableArray *_categorys;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _highlightDiff;
    struct {
        unsigned int buildingId:1;
        unsigned int levelId:1;
        unsigned int sectionId:1;
        unsigned int venueId:1;
        unsigned int maxResults:1;
        unsigned int highlightDiff:1;
    } _has;
}

+ (Class)categoryType;
@property(retain, nonatomic) NSMutableArray *categorys; // @synthesize categorys=_categorys;
@property(nonatomic) unsigned long long buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) unsigned long long sectionId; // @synthesize sectionId=_sectionId;
@property(nonatomic) unsigned long long levelId; // @synthesize levelId=_levelId;
@property(nonatomic) unsigned long long venueId; // @synthesize venueId=_venueId;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
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
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
@property(nonatomic) BOOL hasBuildingId;
@property(nonatomic) BOOL hasSectionId;
@property(nonatomic) BOOL hasLevelId;
@property(nonatomic) BOOL hasVenueId;
@property(nonatomic) BOOL hasHighlightDiff;
@property(nonatomic) BOOL highlightDiff; // @synthesize highlightDiff=_highlightDiff;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(readonly, nonatomic) BOOL hasQuery;

@end

