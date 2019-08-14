//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOURLExtraStorage, GEOUserSessionEntity, NSString, NSURL;

@interface GEOMapURLParser : NSObject
{
    NSURL *_url;
    int _mapType;
    int _transportType;
    int _trackingMode;
    BOOL _trackingModeSpecified;
    BOOL _exactPositionSpecified;
    CDStruct_2c43369c _centerCoordinate;
    CDStruct_951efa70 _span;
    float _zoomLevel;
    NSString *_addressString;
    NSString *_directionsSourceAddressString;
    NSString *_directionsDestinationAddressString;
    NSString *_searchQuery;
    CDStruct_2c43369c _searchCoordinate;
    struct {
        CDStruct_2c43369c center;
        CDStruct_951efa70 span;
    } _searchRegion;
    int _searchProviderID;
    unsigned long long _searchUID;
    NSString *_contentProvider;
    NSString *_contentProviderID;
    NSString *_abRecordID;
    NSString *_abAddressID;
    NSString *_cnContactIdentifier;
    NSString *_cnAddressIdentifier;
    GEOUserSessionEntity *_userSessionEntity;
    double _altitude;
    double _rotation;
    double _tilt;
    double _roll;
    unsigned long long _lineMUID;
    NSString *_lineName;
    long long _favoritesType;
    BOOL _tester;
    GEOURLExtraStorage *_extraStorage;
    NSString *_label;
}

+ (BOOL)isValidMapsURLForAppendingSharedSessionID:(id)arg1;
+ (BOOL)isValidMapsCategoryURL:(id)arg1;
+ (BOOL)isValidMapURL:(id)arg1;
@property(readonly) GEOURLExtraStorage *extraStorage; // @synthesize extraStorage=_extraStorage;
@property(readonly) BOOL tester; // @synthesize tester=_tester;
@property(readonly) long long favoritesType; // @synthesize favoritesType=_favoritesType;
@property(readonly, copy) NSString *lineName; // @synthesize lineName=_lineName;
@property(readonly) unsigned long long lineMUID; // @synthesize lineMUID=_lineMUID;
@property(readonly) double roll; // @synthesize roll=_roll;
@property(readonly) double tilt; // @synthesize tilt=_tilt;
@property(readonly) double rotation; // @synthesize rotation=_rotation;
@property(readonly) double altitude; // @synthesize altitude=_altitude;
@property(readonly) GEOUserSessionEntity *userSessionEntity; // @synthesize userSessionEntity=_userSessionEntity;
@property(readonly) NSString *cnAddressIdentifier; // @synthesize cnAddressIdentifier=_cnAddressIdentifier;
@property(readonly) NSString *cnContactIdentifier; // @synthesize cnContactIdentifier=_cnContactIdentifier;
@property(readonly) NSString *abAddressID; // @synthesize abAddressID=_abAddressID;
@property(readonly) NSString *abRecordID; // @synthesize abRecordID=_abRecordID;
@property(readonly) NSString *contentProviderID; // @synthesize contentProviderID=_contentProviderID;
@property(readonly) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(readonly) unsigned long long searchUID; // @synthesize searchUID=_searchUID;
@property(readonly) int searchProviderID; // @synthesize searchProviderID=_searchProviderID;
@property(readonly) CDStruct_90e2a262 searchRegion; // @synthesize searchRegion=_searchRegion;
@property(readonly) CDStruct_c3b9c2ee searchCoordinate; // @synthesize searchCoordinate=_searchCoordinate;
@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly) NSString *directionsDestinationAddressString; // @synthesize directionsDestinationAddressString=_directionsDestinationAddressString;
@property(readonly) NSString *directionsSourceAddressString; // @synthesize directionsSourceAddressString=_directionsSourceAddressString;
@property(readonly) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly) CDStruct_c3b9c2ee span; // @synthesize span=_span;
@property(readonly) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(readonly) BOOL exactPositionSpecified; // @synthesize exactPositionSpecified=_exactPositionSpecified;
@property(readonly) BOOL trackingModeSpecified; // @synthesize trackingModeSpecified=_trackingModeSpecified;
@property(readonly) int trackingMode; // @synthesize trackingMode=_trackingMode;
@property(readonly) int transportType; // @synthesize transportType=_transportType;
@property(readonly) int mapType; // @synthesize mapType=_mapType;
- (void).cxx_destruct;
- (BOOL)parseIncludingCustomParameters:(BOOL)arg1;
- (id)initWithURL:(id)arg1;

@end

