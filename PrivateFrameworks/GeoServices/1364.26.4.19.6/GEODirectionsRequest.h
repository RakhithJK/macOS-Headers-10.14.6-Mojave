//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEOOriginalRoute, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray, NSString;

@interface GEODirectionsRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionID;
    double _requestTime;
    double _sessionRelativeTimestamp;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    NSMutableArray *_deviceHistoricalLocations;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocation *_lastKnownRoadLocation;
    NSString *_loggedAbExperiment;
    unsigned int _mainTransportTypeMaxRouteCount;
    NSData *_nonRecommendedRoutesCache;
    int _nonRecommendedRoutesOption;
    NSData *_originalDirectionsResponseID;
    GEOOriginalRoute *_originalRoute;
    NSData *_originalRouteID;
    int _originalRoutePurpose;
    NSData *_originalRouteZilchPoints;
    int _requestMode;
    GEORouteAttributes *_routeAttributes;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    unsigned int _timeSinceLastRerouteRequest;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSMutableArray *_waypointTypeds;
    BOOL _getRouteForZilchPoints;
    BOOL _isFromAPI;
    BOOL _needLatency;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int requestTime:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int departureTime:1;
        unsigned int mainTransportTypeMaxRouteCount:1;
        unsigned int nonRecommendedRoutesOption:1;
        unsigned int originalRoutePurpose:1;
        unsigned int requestMode:1;
        unsigned int sequenceNumber:1;
        unsigned int timeSinceLastRerouteRequest:1;
        unsigned int getRouteForZilchPoints:1;
        unsigned int isFromAPI:1;
        unsigned int needLatency:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

+ (Class)serviceTagType;
+ (Class)deviceHistoricalLocationType;
+ (Class)waypointTypedType;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) NSData *nonRecommendedRoutesCache; // @synthesize nonRecommendedRoutesCache=_nonRecommendedRoutesCache;
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations; // @synthesize deviceHistoricalLocations=_deviceHistoricalLocations;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata; // @synthesize abClientMetadata=_abClientMetadata;
@property(retain, nonatomic) GEOLocation *lastKnownRoadLocation; // @synthesize lastKnownRoadLocation=_lastKnownRoadLocation;
@property(retain, nonatomic) NSString *loggedAbExperiment; // @synthesize loggedAbExperiment=_loggedAbExperiment;
@property(retain, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property(nonatomic) BOOL isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) GEOOriginalRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(retain, nonatomic) NSMutableArray *waypointTypeds; // @synthesize waypointTypeds=_waypointTypeds;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property(retain, nonatomic) GEOMapRegion *currentMapRegion; // @synthesize currentMapRegion=_currentMapRegion;
@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(readonly, nonatomic) BOOL hasNonRecommendedRoutesCache;
- (int)StringAsNonRecommendedRoutesOption:(id)arg1;
- (id)nonRecommendedRoutesOptionAsString:(int)arg1;
@property(nonatomic) BOOL hasNonRecommendedRoutesOption;
@property(nonatomic) int nonRecommendedRoutesOption; // @synthesize nonRecommendedRoutesOption=_nonRecommendedRoutesOption;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
@property(readonly, nonatomic) BOOL hasAbClientMetadata;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
@property(nonatomic) BOOL hasOriginalRoutePurpose;
@property(nonatomic) int originalRoutePurpose; // @synthesize originalRoutePurpose=_originalRoutePurpose;
@property(readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property(readonly, nonatomic) BOOL hasLoggedAbExperiment;
@property(readonly, nonatomic) BOOL hasCommonOptions;
@property(nonatomic) BOOL hasIsFromAPI;
@property(readonly, nonatomic) BOOL hasSessionState;
@property(nonatomic) BOOL hasSequenceNumber;
@property(readonly, nonatomic) BOOL hasOriginalRoute;
- (id)waypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointTypedsCount;
- (void)addWaypointTyped:(id)arg1;
- (void)clearWaypointTypeds;
@property(readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property(readonly, nonatomic) BOOL hasFeedback;
@property(nonatomic) BOOL hasSessionRelativeTimestamp;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasGetRouteForZilchPoints;
@property(nonatomic) BOOL getRouteForZilchPoints; // @synthesize getRouteForZilchPoints=_getRouteForZilchPoints;
@property(nonatomic) BOOL hasDepartureTime;
@property(readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
@property(nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property(nonatomic) unsigned int timeSinceLastRerouteRequest; // @synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest;
@property(readonly, nonatomic) BOOL hasOriginalRouteZilchPoints;
@property(readonly, nonatomic) BOOL hasOriginalRouteID;
@property(readonly, nonatomic) BOOL hasCurrentMapRegion;
@property(readonly, nonatomic) BOOL hasCurrentUserLocation;
@property(nonatomic) BOOL hasMainTransportTypeMaxRouteCount;
@property(nonatomic) unsigned int mainTransportTypeMaxRouteCount; // @synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount;
@property(readonly, nonatomic) BOOL hasRouteAttributes;
@property(nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property(nonatomic) BOOL useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) BOOL hasTrafficSnapshot;
@property(nonatomic) BOOL hasNeedLatency;
@property(nonatomic) BOOL needLatency;
- (int)StringAsRequestMode:(id)arg1;
- (id)requestModeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestMode;
@property(nonatomic) int requestMode;
@property(nonatomic) BOOL hasRequestTime;
@property(nonatomic) double requestTime;
- (id)initWithFeedback:(id)arg1;
- (id)init;
- (id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2;
- (void)clearLocations;
- (void)clearSessionId;

@end

