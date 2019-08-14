//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBUnknownFields;

@interface GEOBusiness : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _uID;
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSMutableArray *_photos;
    NSMutableArray *_placeDataAmendments;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    NSString *_uRL;
    BOOL _isClosed;
    struct {
        unsigned int uID:1;
        unsigned int isClosed:1;
    } _has;
}

+ (Class)placeDataAmendmentType;
+ (Class)starRatingType;
+ (Class)sourceType;
+ (Class)attributionType;
+ (Class)localizedCategoriesType;
+ (Class)openHoursType;
+ (Class)attributeKeyValueType;
+ (Class)photoType;
+ (Class)categoryType;
+ (Class)ratingType;
@property(retain, nonatomic) NSMutableArray *placeDataAmendments; // @synthesize placeDataAmendments=_placeDataAmendments;
@property(retain, nonatomic) NSMutableArray *starRatings; // @synthesize starRatings=_starRatings;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *localizedCategories; // @synthesize localizedCategories=_localizedCategories;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) NSMutableArray *openHours; // @synthesize openHours=_openHours;
@property(retain, nonatomic) NSMutableArray *attributeKeyValues; // @synthesize attributeKeyValues=_attributeKeyValues;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *categorys; // @synthesize categorys=_categorys;
@property(retain, nonatomic) NSMutableArray *ratings; // @synthesize ratings=_ratings;
@property(retain, nonatomic) NSString *mapsURL; // @synthesize mapsURL=_mapsURL;
@property(nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long uID; // @synthesize uID=_uID;
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
- (id)placeDataAmendmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeDataAmendmentsCount;
- (void)addPlaceDataAmendment:(id)arg1;
- (void)clearPlaceDataAmendments;
- (id)starRatingAtIndex:(unsigned long long)arg1;
- (unsigned long long)starRatingsCount;
- (void)addStarRating:(id)arg1;
- (void)clearStarRatings;
- (id)sourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourcesCount;
- (void)addSource:(id)arg1;
- (void)clearSources;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategoriesCount;
- (void)addLocalizedCategories:(id)arg1;
- (void)clearLocalizedCategories;
@property(readonly, nonatomic) BOOL hasCenter;
- (id)openHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)openHoursCount;
- (void)addOpenHours:(id)arg1;
- (void)clearOpenHours;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeyValuesCount;
- (void)addAttributeKeyValue:(id)arg1;
- (void)clearAttributeKeyValues;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photosCount;
- (void)addPhoto:(id)arg1;
- (void)clearPhotos;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
- (id)ratingAtIndex:(unsigned long long)arg1;
- (unsigned long long)ratingsCount;
- (void)addRating:(id)arg1;
- (void)clearRatings;
@property(readonly, nonatomic) BOOL hasMapsURL;
@property(nonatomic) BOOL hasIsClosed;
@property(readonly, nonatomic) BOOL hasURL;
@property(readonly, nonatomic) BOOL hasTelephone;
@property(readonly, nonatomic) BOOL hasPhoneticName;
@property(readonly, nonatomic) BOOL hasName;
@property(nonatomic) BOOL hasUID;
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6;
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;

@end

