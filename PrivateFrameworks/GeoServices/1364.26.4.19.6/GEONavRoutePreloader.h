//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEORoutePreloader.h>

#import <GeoServices/GEORoutePreloaderSubclass-Protocol.h>

@class GEOTileKeyList, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject, NSTimer;
@protocol GEORoutePreloadCamera, OS_os_log;

@interface GEONavRoutePreloader : GEORoutePreloader <GEORoutePreloaderSubclass>
{
    id <GEORoutePreloadCamera> _camera;
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    GEOTileKeyList *_tilesMissed;
    NSMutableArray *_steps;
    NSMutableArray *_failedSubscriptions;
    NSMutableDictionary *_subscriptions;
    unsigned int _stepGeneration;
    BOOL _tooFarFromRoute;
    long long _currentLoadingSteps;
    NSMapTable *_stepErrors;
    NSMapTable *_stepLifetimeErrors;
    BOOL _anyErrors;
    BOOL _finished;
    double _beginTime;
    double _mostRecentErrorTime;
    BOOL _hadEnoughTilesToDisableNetworking;
    NSTimer *_geodCrashTimer;
    double _maneuverSizeInMeters;
}

@property(retain, nonatomic) id <GEORoutePreloadCamera> camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)setTraits:(id)arg1;
- (void)updateWithRouteMatch:(id)arg1;
- (void)stopLoading;
- (void)beginLoading;
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
- (void)_performNextRequests;
- (void)_performTileRequestsPreemptedStepIndex:(long long)arg1 currentRoutePositionStepIndex:(long long)arg2 firstErrorStepIndex:(long long)arg3 firstLoadStepIndex:(long long)arg4 loadStepsAhead:(long long)arg5 loadStepsAheadIfNoWiFi:(long long)arg6;
- (void)_cancelRequestsInPast;
- (id)_descriptionForStep:(id)arg1;
- (void)_incrementErrorForStep:(id)arg1;
- (BOOL)_loadStep:(id)arg1 requireWiFi:(BOOL)arg2;
- (void)_evaluateNetworkPerformance:(id)arg1;
- (void)_cancelAllSteps;
- (void)_cancelStep:(id)arg1;
- (void)_accumulateSteps;
- (void)_geodCrashed:(id)arg1;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)_resetErrCounts;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (BOOL)isSufficientlyLoaded;
- (BOOL)fullDebuggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (BOOL)loggingEnabled;
- (void)performTearDown;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(CDUnknownBlockType)arg5;

@end

