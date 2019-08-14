//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPhoto, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCaptionedPhoto : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_author;
    NSString *_caption;
    NSString *_licenseDescription;
    NSString *_licenseUrl;
    GEOPDPhoto *_photo;
    BOOL _displayFullPhotoInline;
    BOOL _highQuality;
    BOOL _isBusinessOwned;
    BOOL _useGallery;
    struct {
        unsigned int displayFullPhotoInline:1;
        unsigned int highQuality:1;
        unsigned int isBusinessOwned:1;
        unsigned int useGallery:1;
    } _has;
}

+ (id)captionedPhotosForPlaceData:(id)arg1;
@property(nonatomic) BOOL isBusinessOwned; // @synthesize isBusinessOwned=_isBusinessOwned;
@property(nonatomic) BOOL highQuality; // @synthesize highQuality=_highQuality;
@property(nonatomic) BOOL useGallery; // @synthesize useGallery=_useGallery;
@property(nonatomic) BOOL displayFullPhotoInline; // @synthesize displayFullPhotoInline=_displayFullPhotoInline;
@property(retain, nonatomic) GEOPDPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSString *licenseUrl; // @synthesize licenseUrl=_licenseUrl;
@property(retain, nonatomic) NSString *licenseDescription; // @synthesize licenseDescription=_licenseDescription;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
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
@property(nonatomic) BOOL hasIsBusinessOwned;
@property(nonatomic) BOOL hasHighQuality;
@property(nonatomic) BOOL hasUseGallery;
@property(nonatomic) BOOL hasDisplayFullPhotoInline;
@property(readonly, nonatomic) BOOL hasPhoto;
@property(readonly, nonatomic) BOOL hasLicenseUrl;
@property(readonly, nonatomic) BOOL hasLicenseDescription;
@property(readonly, nonatomic) BOOL hasAuthor;
@property(readonly, nonatomic) BOOL hasCaption;

@end

