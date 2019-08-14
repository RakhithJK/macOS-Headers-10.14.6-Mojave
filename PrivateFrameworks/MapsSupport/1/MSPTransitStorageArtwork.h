//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitArtworkDataSource-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class MSPTransitStorageIcon, MSPTransitStorageShield, NSString, PBUnknownFields;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource;

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityText;
    long long _artworkSourceType;
    long long _artworkUseType;
    MSPTransitStorageIcon *_icon;
    MSPTransitStorageShield *_iconFallbackShield;
    MSPTransitStorageShield *_shield;
    BOOL _hasRoutingIncidentBadge;
    struct {
        unsigned int artworkSourceType:1;
        unsigned int artworkUseType:1;
        unsigned int hasRoutingIncidentBadge:1;
    } _has;
}

@property(retain, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) BOOL hasRoutingIncidentBadge; // @synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge;
@property(retain, nonatomic) MSPTransitStorageShield *iconFallbackShield; // @synthesize iconFallbackShield=_iconFallbackShield;
@property(retain, nonatomic) MSPTransitStorageIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) MSPTransitStorageShield *shield; // @synthesize shield=_shield;
@property(nonatomic) long long artworkUseType; // @synthesize artworkUseType=_artworkUseType;
@property(nonatomic) long long artworkSourceType; // @synthesize artworkSourceType=_artworkSourceType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasAccessibilityText;
@property(nonatomic) BOOL hasHasRoutingIncidentBadge;
@property(readonly, nonatomic) BOOL hasIconFallbackShield;
@property(readonly, nonatomic) BOOL hasIcon;
@property(readonly, nonatomic) BOOL hasShield;
- (long long)StringAsArtworkUseType:(id)arg1;
- (id)artworkUseTypeAsString:(long long)arg1;
@property(nonatomic) BOOL hasArtworkUseType;
- (long long)StringAsArtworkSourceType:(id)arg1;
- (id)artworkSourceTypeAsString:(long long)arg1;
@property(nonatomic) BOOL hasArtworkSourceType;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
- (id)initWithArtwork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
