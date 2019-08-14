//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODataSetDescription, GEOURLInfoSet, GEOVersionManifest, NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOActiveTileGroup : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    CDStruct_95bda58d _activeScales;
    CDStruct_95bda58d _activeScenarios;
    NSString *_abExperimentURLLegacy;
    NSMutableArray *_activeResources;
    NSString *_addressCorrectionInitURLLegacy;
    NSString *_addressCorrectionUpdateURLLegacy;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURLLegacy;
    NSMutableArray *_attributions;
    NSString *_backgroundDispatcherURLLegacy;
    NSString *_backgroundRevGeoURLLegacy;
    NSString *_batchReverseGeocoderURLLegacy;
    NSString *_batchTrafficProbeURLLegacy;
    NSString *_bluePOIURLLegacy;
    NSString *_businessPortalBaseURLLegacy;
    GEODataSetDescription *_dataSet;
    NSString *_directionsURLLegacy;
    NSString *_dispatcherURLLegacy;
    NSString *_etaURLLegacy;
    NSData *_flyoverRegionVersions;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _identifier;
    NSMutableArray *_locationShiftEnabledRegions;
    unsigned int _locationShiftVersion;
    NSString *_logMessageUsageURLLegacy;
    NSString *_logMessageUsageV3URLLegacy;
    unsigned int _modelVersion;
    NSString *_polyLocationShiftURLLegacy;
    NSString *_proactiveRoutingURLLegacy;
    NSString *_problemCategoriesURLLegacy;
    NSString *_problemOptInURLLegacy;
    NSString *_problemStatusURLLegacy;
    NSString *_problemSubmissionURLLegacy;
    NSString *_realtimeTrafficProbeURLLegacy;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSMutableArray *_regionalResources;
    NSString *_regionalResourcesURLLegacy;
    NSString *_releaseInfo;
    NSData *_reserved;
    NSMutableArray *_resources;
    NSString *_resourcesURLLegacy;
    NSString *_reverseGeocoderVersionsURLLegacy;
    NSString *_searchAttributionManifestURLLegacy;
    NSString *_simpleETAURLLegacy;
    NSString *_spatialLookupURLLegacy;
    NSMutableArray *_staleResources;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    GEOURLInfoSet *_urlInfoSet;
    GEOVersionManifest *_versionManifest;
    NSString *_wifiConnectionQualityProbeURLLegacy;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
    struct {
        unsigned int locationShiftVersion:1;
        unsigned int modelVersion:1;
    } _has;
}

+ (Class)staleResourceType;
+ (Class)regionalResourceType;
+ (Class)activeResourceType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)xmlChecksumType;
+ (Class)xmlType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)textureChecksumType;
+ (Class)textureType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)regionalResourceRegionType;
+ (Class)regionalResourceTileType;
+ (Class)attributionType;
+ (Class)resourceType;
+ (Class)tileSetType;
@property(retain, nonatomic) GEOURLInfoSet *urlInfoSet; // @synthesize urlInfoSet=_urlInfoSet;
@property(retain, nonatomic) NSData *flyoverRegionVersions; // @synthesize flyoverRegionVersions=_flyoverRegionVersions;
@property(retain, nonatomic) NSString *wifiConnectionQualityProbeURLLegacy; // @synthesize wifiConnectionQualityProbeURLLegacy=_wifiConnectionQualityProbeURLLegacy;
@property(retain, nonatomic) NSString *backgroundRevGeoURLLegacy; // @synthesize backgroundRevGeoURLLegacy=_backgroundRevGeoURLLegacy;
@property(retain, nonatomic) NSString *bluePOIURLLegacy; // @synthesize bluePOIURLLegacy=_bluePOIURLLegacy;
@property(retain, nonatomic) NSString *backgroundDispatcherURLLegacy; // @synthesize backgroundDispatcherURLLegacy=_backgroundDispatcherURLLegacy;
@property(retain, nonatomic) NSString *proactiveRoutingURLLegacy; // @synthesize proactiveRoutingURLLegacy=_proactiveRoutingURLLegacy;
@property(retain, nonatomic) NSString *logMessageUsageV3URLLegacy; // @synthesize logMessageUsageV3URLLegacy=_logMessageUsageV3URLLegacy;
@property(retain, nonatomic) NSString *batchTrafficProbeURLLegacy; // @synthesize batchTrafficProbeURLLegacy=_batchTrafficProbeURLLegacy;
@property(retain, nonatomic) NSString *realtimeTrafficProbeURLLegacy; // @synthesize realtimeTrafficProbeURLLegacy=_realtimeTrafficProbeURLLegacy;
@property(retain, nonatomic) GEODataSetDescription *dataSet; // @synthesize dataSet=_dataSet;
@property(retain, nonatomic) NSMutableArray *staleResources; // @synthesize staleResources=_staleResources;
@property(nonatomic) unsigned int modelVersion; // @synthesize modelVersion=_modelVersion;
@property(retain, nonatomic) NSMutableArray *regionalResources; // @synthesize regionalResources=_regionalResources;
@property(retain, nonatomic) NSMutableArray *activeResources; // @synthesize activeResources=_activeResources;
@property(retain, nonatomic) NSString *spatialLookupURLLegacy; // @synthesize spatialLookupURLLegacy=_spatialLookupURLLegacy;
@property(retain, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(nonatomic) unsigned int locationShiftVersion; // @synthesize locationShiftVersion=_locationShiftVersion;
@property(retain, nonatomic) NSMutableArray *locationShiftEnabledRegions; // @synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions;
@property(retain, nonatomic) NSString *logMessageUsageURLLegacy; // @synthesize logMessageUsageURLLegacy=_logMessageUsageURLLegacy;
@property(retain, nonatomic) NSString *businessPortalBaseURLLegacy; // @synthesize businessPortalBaseURLLegacy=_businessPortalBaseURLLegacy;
@property(retain, nonatomic) NSString *abExperimentURLLegacy; // @synthesize abExperimentURLLegacy=_abExperimentURLLegacy;
@property(retain, nonatomic) NSMutableArray *xmlChecksums; // @synthesize xmlChecksums=_xmlChecksums;
@property(retain, nonatomic) NSMutableArray *xmls; // @synthesize xmls=_xmls;
@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *fontChecksums; // @synthesize fontChecksums=_fontChecksums;
@property(retain, nonatomic) NSMutableArray *fonts; // @synthesize fonts=_fonts;
@property(retain, nonatomic) NSMutableArray *textureChecksums; // @synthesize textureChecksums=_textureChecksums;
@property(retain, nonatomic) NSMutableArray *textures; // @synthesize textures=_textures;
@property(retain, nonatomic) NSMutableArray *styleSheetChecksums; // @synthesize styleSheetChecksums=_styleSheetChecksums;
@property(retain, nonatomic) NSMutableArray *styleSheets; // @synthesize styleSheets=_styleSheets;
@property(retain, nonatomic) GEOVersionManifest *versionManifest; // @synthesize versionManifest=_versionManifest;
@property(retain, nonatomic) NSString *problemOptInURLLegacy; // @synthesize problemOptInURLLegacy=_problemOptInURLLegacy;
@property(retain, nonatomic) NSString *dispatcherURLLegacy; // @synthesize dispatcherURLLegacy=_dispatcherURLLegacy;
@property(retain, nonatomic) NSMutableArray *announcementsSupportedLanguages; // @synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages;
@property(retain, nonatomic) NSString *announcementsURLLegacy; // @synthesize announcementsURLLegacy=_announcementsURLLegacy;
@property(retain, nonatomic) NSString *problemCategoriesURLLegacy; // @synthesize problemCategoriesURLLegacy=_problemCategoriesURLLegacy;
@property(retain, nonatomic) NSString *reverseGeocoderVersionsURLLegacy; // @synthesize reverseGeocoderVersionsURLLegacy=_reverseGeocoderVersionsURLLegacy;
@property(retain, nonatomic) NSString *problemStatusURLLegacy; // @synthesize problemStatusURLLegacy=_problemStatusURLLegacy;
@property(retain, nonatomic) NSString *problemSubmissionURLLegacy; // @synthesize problemSubmissionURLLegacy=_problemSubmissionURLLegacy;
@property(retain, nonatomic) NSString *polyLocationShiftURLLegacy; // @synthesize polyLocationShiftURLLegacy=_polyLocationShiftURLLegacy;
@property(retain, nonatomic) NSString *addressCorrectionUpdateURLLegacy; // @synthesize addressCorrectionUpdateURLLegacy=_addressCorrectionUpdateURLLegacy;
@property(retain, nonatomic) NSString *addressCorrectionInitURLLegacy; // @synthesize addressCorrectionInitURLLegacy=_addressCorrectionInitURLLegacy;
@property(retain, nonatomic) NSString *simpleETAURLLegacy; // @synthesize simpleETAURLLegacy=_simpleETAURLLegacy;
@property(retain, nonatomic) NSString *resourcesURLLegacy; // @synthesize resourcesURLLegacy=_resourcesURLLegacy;
@property(retain, nonatomic) NSString *releaseInfo; // @synthesize releaseInfo=_releaseInfo;
@property(retain, nonatomic) NSString *batchReverseGeocoderURLLegacy; // @synthesize batchReverseGeocoderURLLegacy=_batchReverseGeocoderURLLegacy;
@property(retain, nonatomic) NSString *etaURLLegacy; // @synthesize etaURLLegacy=_etaURLLegacy;
@property(retain, nonatomic) NSString *directionsURLLegacy; // @synthesize directionsURLLegacy=_directionsURLLegacy;
@property(retain, nonatomic) NSString *searchAttributionManifestURLLegacy; // @synthesize searchAttributionManifestURLLegacy=_searchAttributionManifestURLLegacy;
@property(retain, nonatomic) NSString *regionalResourcesURLLegacy; // @synthesize regionalResourcesURLLegacy=_regionalResourcesURLLegacy;
@property(retain, nonatomic) NSMutableArray *regionalResourceRegions; // @synthesize regionalResourceRegions=_regionalResourceRegions;
@property(retain, nonatomic) NSMutableArray *regionalResourceTiles; // @synthesize regionalResourceTiles=_regionalResourceTiles;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) BOOL hasUrlInfoSet;
@property(readonly, nonatomic) BOOL hasFlyoverRegionVersions;
@property(readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURLLegacy;
@property(readonly, nonatomic) BOOL hasBackgroundRevGeoURLLegacy;
@property(readonly, nonatomic) BOOL hasBluePOIURLLegacy;
@property(readonly, nonatomic) BOOL hasBackgroundDispatcherURLLegacy;
@property(readonly, nonatomic) BOOL hasProactiveRoutingURLLegacy;
@property(readonly, nonatomic) BOOL hasLogMessageUsageV3URLLegacy;
@property(readonly, nonatomic) BOOL hasBatchTrafficProbeURLLegacy;
@property(readonly, nonatomic) BOOL hasRealtimeTrafficProbeURLLegacy;
@property(readonly, nonatomic) BOOL hasDataSet;
- (id)staleResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)staleResourcesCount;
- (void)addStaleResource:(id)arg1;
- (void)clearStaleResources;
- (int)StringAsActiveScenarios:(id)arg1;
- (id)activeScenariosAsString:(int)arg1;
- (void)setActiveScenarios:(int *)arg1 count:(unsigned long long)arg2;
- (int)activeScenarioAtIndex:(unsigned long long)arg1;
- (void)addActiveScenario:(int)arg1;
- (void)clearActiveScenarios;
@property(readonly, nonatomic) int *activeScenarios;
@property(readonly, nonatomic) unsigned long long activeScenariosCount;
- (int)StringAsActiveScales:(id)arg1;
- (id)activeScalesAsString:(int)arg1;
- (void)setActiveScales:(int *)arg1 count:(unsigned long long)arg2;
- (int)activeScaleAtIndex:(unsigned long long)arg1;
- (void)addActiveScale:(int)arg1;
- (void)clearActiveScales;
@property(readonly, nonatomic) int *activeScales;
@property(readonly, nonatomic) unsigned long long activeScalesCount;
@property(nonatomic) BOOL hasModelVersion;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourcesCount;
- (void)addRegionalResource:(id)arg1;
- (void)clearRegionalResources;
- (id)activeResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeResourcesCount;
- (void)addActiveResource:(id)arg1;
- (void)clearActiveResources;
@property(readonly, nonatomic) BOOL hasSpatialLookupURLLegacy;
@property(readonly, nonatomic) BOOL hasReserved;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
- (void)clearHybridUnavailableRegions;
@property(readonly, nonatomic) struct GEOTileSetRegion *hybridUnavailableRegions;
@property(readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
@property(nonatomic) BOOL hasLocationShiftVersion;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)clearLocationShiftEnabledRegions;
@property(readonly, nonatomic) BOOL hasLogMessageUsageURLLegacy;
@property(readonly, nonatomic) BOOL hasBusinessPortalBaseURLLegacy;
@property(readonly, nonatomic) BOOL hasAbExperimentURLLegacy;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlChecksumsCount;
- (void)addXmlChecksum:(id)arg1;
- (void)clearXmlChecksums;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlsCount;
- (void)addXml:(id)arg1;
- (void)clearXmls;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (void)addIconChecksum:(id)arg1;
- (void)clearIconChecksums;
- (id)iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontChecksumsCount;
- (void)addFontChecksum:(id)arg1;
- (void)clearFontChecksums;
- (id)fontAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontsCount;
- (void)addFont:(id)arg1;
- (void)clearFonts;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureChecksumsCount;
- (void)addTextureChecksum:(id)arg1;
- (void)clearTextureChecksums;
- (id)textureAtIndex:(unsigned long long)arg1;
- (unsigned long long)texturesCount;
- (void)addTexture:(id)arg1;
- (void)clearTextures;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetChecksumsCount;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)clearStyleSheetChecksums;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetsCount;
- (void)addStyleSheet:(id)arg1;
- (void)clearStyleSheets;
@property(readonly, nonatomic) BOOL hasVersionManifest;
@property(readonly, nonatomic) BOOL hasProblemOptInURLLegacy;
@property(readonly, nonatomic) BOOL hasDispatcherURLLegacy;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)clearAnnouncementsSupportedLanguages;
@property(readonly, nonatomic) BOOL hasAnnouncementsURLLegacy;
@property(readonly, nonatomic) BOOL hasProblemCategoriesURLLegacy;
@property(readonly, nonatomic) BOOL hasReverseGeocoderVersionsURLLegacy;
@property(readonly, nonatomic) BOOL hasProblemStatusURLLegacy;
@property(readonly, nonatomic) BOOL hasProblemSubmissionURLLegacy;
@property(readonly, nonatomic) BOOL hasPolyLocationShiftURLLegacy;
@property(readonly, nonatomic) BOOL hasAddressCorrectionUpdateURLLegacy;
@property(readonly, nonatomic) BOOL hasAddressCorrectionInitURLLegacy;
@property(readonly, nonatomic) BOOL hasSimpleETAURLLegacy;
@property(readonly, nonatomic) BOOL hasResourcesURLLegacy;
@property(readonly, nonatomic) BOOL hasReleaseInfo;
@property(readonly, nonatomic) BOOL hasBatchReverseGeocoderURLLegacy;
@property(readonly, nonatomic) BOOL hasEtaURLLegacy;
@property(readonly, nonatomic) BOOL hasDirectionsURLLegacy;
@property(readonly, nonatomic) BOOL hasSearchAttributionManifestURLLegacy;
@property(readonly, nonatomic) BOOL hasRegionalResourcesURLLegacy;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceRegionsCount;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)clearRegionalResourceRegions;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceTilesCount;
- (void)addRegionalResourceTile:(id)arg1;
- (void)clearRegionalResourceTiles;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
@property(readonly, nonatomic) BOOL hasUniqueIdentifier;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)addResource:(id)arg1;
- (void)clearResources;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)clearTileSets;
- (void)dealloc;
- (void)enumerateFlyoverRegions:(CDUnknownBlockType)arg1;
- (unsigned int)dataVersionForFlyoverRegion:(unsigned int)arg1;
- (BOOL)hasDataVersionForFlyoverRegion:(unsigned int)arg1;
- (unsigned int)versionForFlyoverRegion:(unsigned int)arg1;
- (id)_decodedFlyoverRegionVersions;
- (void)_setDecodedFlyoverRegionVersions:(id)arg1;
- (void)iterateActiveTileSets:(CDUnknownBlockType)arg1;
- (id)regionalResourcesForMapRect:(CDStruct_90e2a262)arg1;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey *)arg1;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey *)arg1 scale:(int)arg2 scenarios:(id)arg3;
- (BOOL)hasRegionalResourcesForTileKey:(const struct _GEOTileKey *)arg1;
- (void)_resetBestLanguages;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (BOOL)useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (BOOL)isHybridModeAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (void)populateRegionalResources:(id)arg1;
- (void)clearModernFormatFields;
- (void)populateLegacyFormat;

@end

