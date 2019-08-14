//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface LabelNavRouteLabeler : NSObject
{
    BOOL _needsLayout;
    BOOL _drawRoadSigns;
    VKPolylineOverlay *_route;
    NSString *_currentLocationText;
    BOOL _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned long long _stepIndex;
    BOOL _checkOnRouteLabelsAlignment;
    BOOL _disableTileParseForOneLayout;
    NSMutableSet *_tiles;
    NSMutableSet *_pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    vector_1ad5c848 _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    unsigned long long _countVisibleOnRouteRoadSigns;
    unsigned long long _countVisibleOffRouteRoadSigns;
    unsigned long long _countVisibleRoadSigns;
    unsigned long long _maxVisibleOnRouteRoadSigns;
    unsigned long long _maxVisibleOffRouteRoadSigns;
    unsigned long long _maxVisibleRoadSigns;
    unsigned long long _maxOnRoadGraphRoadSigns;
    unsigned long long _minVisibleOffRoadGraphRoadSigns;
    unsigned long long _minVisibleProceedToRouteRoadSigns;
    BOOL _preferRightSideLabelPlacement;
    float _minSignOffsetDistance;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSString *_currentRoadName;
    long long _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    BOOL _checkIfRouteSubrangeChanged;
    BOOL _useRouteSubrange;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
    struct VKLabelNavArtworkCache *_artworkCache;
    struct shared_ptr<md::NavCurrentRoadSign> _currentRoadSign;
    BOOL _debugDisableRoadSignLimit;
    unsigned long long _debugCachedMaxVisibleOffRouteRoadSigns;
    unsigned long long _debugCachedMaxVisibleOnRouteRoadSigns;
    BOOL _debugEnableShieldsOnRouteLine;
    shared_ptr_a3c46825 _styleManager;
    BOOL _shouldLabelOppositeCarriageways;
    vector_83fb13fb _externalCollisionLabelsForLayout;
    BOOL _hasPendingTilesInSnappingRegion;
}

@property(nonatomic) struct VKLabelNavArtworkCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(nonatomic) BOOL debugEnableShieldsOnRouteLine; // @synthesize debugEnableShieldsOnRouteLine=_debugEnableShieldsOnRouteLine;
@property(nonatomic) BOOL debugDisableRoadSignLimit; // @synthesize debugDisableRoadSignLimit=_debugDisableRoadSignLimit;
@property(retain, nonatomic) NSString *currentShieldGroup; // @synthesize currentShieldGroup=_currentShieldGroup;
@property(retain, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property(readonly, nonatomic) const vector_1ad5c848 *activeSigns; // @synthesize activeSigns=_activeSigns;
@property(retain, nonatomic) NSString *currentLocationText; // @synthesize currentLocationText=_currentLocationText;
@property(nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;
@property(nonatomic) BOOL drawRoadSigns; // @synthesize drawRoadSigns=_drawRoadSigns;
@property(retain, nonatomic) VKPolylineOverlay *route; // @synthesize route=_route;
@property(readonly, nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix_8746f91e *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (BOOL)_updateActiveRouteRange;
- (BOOL)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(vector_34e67f61 *)arg2 lookBackward:(BOOL)arg3 firstOverlap:(long long *)arg4 secondOverlap:(long long *)arg5;
- (void)_updateCurrentRoadInfo;
- (void)_initalizeCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadsInGuidance;
- (void)_updateRoadStarts;
- (void)_updateUniqueOffRouteRoads;
- (BOOL)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3 useAllJunctions:(BOOL)arg4 placeShieldsFrontToBack:(BOOL)arg5;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3;
- (void)layoutWithNavContext:(struct NavContext *)arg1 externalCollisionLabels:(const vector_83fb13fb *)arg2;
- (unsigned char)orientationForRoadSign:(id)arg1 roadLabel:(id)arg2 navContext:(struct NavContext *)arg3;
- (void)_generateCurrentRoadSignWithContext:(struct NavContext *)arg1;
- (BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext *)arg3 labelCollisionEnabled:(BOOL)arg4;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext *)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)grabTilesFromScene:(id)arg1;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)clearSceneIsMemoryWarning:(BOOL)arg1;
- (BOOL)isNavMode;
- (void)dealloc;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (id)init;
@property(readonly, nonatomic) float currentRoadSignPixelHeight;
@property(readonly, nonatomic) struct NavCurrentRoadSign *currentRoadSign;

@end

