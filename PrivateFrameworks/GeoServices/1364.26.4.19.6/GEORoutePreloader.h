//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadSession-Protocol.h>

@class GEOApplicationAuditToken, GEOComposedRoute, NSMutableDictionary, NSString;
@protocol GEORoutePreloadSessionDelegate, OS_os_log;

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession>
{
    GEOComposedRoute *_route;
    NSMutableDictionary *_tileSetStyles;
    BOOL _loggingEnabled;
    BOOL _minimalDebuggingEnabled;
    BOOL _fullDebuggingEnabled;
    BOOL _enabled;
    BOOL _paused;
    double _currentRoutePosition;
    int _downloadState;
    CDUnknownBlockType _batteryHandler;
    unsigned long long _networkQuality;
    id <GEORoutePreloadSessionDelegate> _delegate;
    CDUnknownBlockType _tileKeyIsDownloadedPredicate;
    double _stepSizeInMeters;
    GEOApplicationAuditToken *_token;
    struct GEOOnce_s _didTearDown;
}

+ (id)preloaderForRoute:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType tileKeyIsDownloadedPredicate; // @synthesize tileKeyIsDownloadedPredicate=_tileKeyIsDownloadedPredicate;
@property(copy, nonatomic) CDUnknownBlockType batteryHandler; // @synthesize batteryHandler=_batteryHandler;
@property(nonatomic) unsigned long long networkQuality; // @synthesize networkQuality=_networkQuality;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property __weak id <GEORoutePreloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)tilesChanged;
- (void)reachabilityChanged:(id)arg1;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)setTraits:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
- (void)updateWithRouteMatch:(id)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)_start;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)beginLoading;
- (BOOL)loggingEnabled;
- (BOOL)fullDebuggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (BOOL)isSufficientlyLoaded;
- (void)performTearDown;
- (void)dealloc;
- (void)tearDown;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

