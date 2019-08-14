//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVRoute, MPAVRoutingControllerSelectionQueue, MPAVRoutingDataSource, NSArray, NSMutableArray, NSSet, NSString;
@protocol MPAVOutputDevicePlaybackDataSource, MPAVRoutingControllerDelegate;

@interface MPAVRoutingController : NSObject
{
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    NSMutableArray *_asyncFetchingCompletionHandlers;
    BOOL _asyncFetchingRoutes;
    long long _externalScreenType;
    BOOL _hasExternalScreenType;
    BOOL _scheduledSendDelegateRoutesChanged;
    long long _volumeControlStateForPickedRoute;
    MPAVRoutingControllerSelectionQueue *_routingControllerSelectionQueue;
    int _deviceAvailabilityNotifyToken;
    BOOL _deviceAvailabilityOverrideState;
    BOOL _fetchAvailableRoutesSynchronously;
    BOOL _representsLongFormVideoContent;
    id <MPAVRoutingControllerDelegate> _delegate;
    MPAVRoutingDataSource *_dataSource;
    NSString *_name;
    long long _discoveryMode;
    NSString *_category;
    long long _routeTypes;
    MPAVRoute *_legacyCachedRoute;
    id <MPAVOutputDevicePlaybackDataSource> _playbackDataSource;
    NSString *_presentedBundleID;
    NSString *_representedBundleID;
}

+ (void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_currentDeviceRoutingIconImageName;
+ (BOOL)bundleIdRepresentsLongFormVideoContent:(id)arg1;
+ (id)systemRouteWithContextUID:(id)arg1;
+ (id)systemRoute;
+ (void)setActiveRoute:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setActiveRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getActiveRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_currentDeviceRoutingIconImage;
+ (id)_iconImageForRoute:(id)arg1;
+ (id)_sharedSerialQueue;
@property(readonly, nonatomic) BOOL representsLongFormVideoContent; // @synthesize representsLongFormVideoContent=_representsLongFormVideoContent;
@property(copy, nonatomic) NSString *representedBundleID; // @synthesize representedBundleID=_representedBundleID;
@property(copy, nonatomic) NSString *presentedBundleID; // @synthesize presentedBundleID=_presentedBundleID;
@property(nonatomic) __weak id <MPAVOutputDevicePlaybackDataSource> playbackDataSource; // @synthesize playbackDataSource=_playbackDataSource;
@property(retain, nonatomic) MPAVRoute *legacyCachedRoute; // @synthesize legacyCachedRoute=_legacyCachedRoute;
@property(nonatomic) long long routeTypes; // @synthesize routeTypes=_routeTypes;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) BOOL fetchAvailableRoutesSynchronously; // @synthesize fetchAvailableRoutesSynchronously=_fetchAvailableRoutesSynchronously;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MPAVRoutingDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MPAVRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)removePickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)removePickedRoute:(id)arg1;
- (BOOL)addPickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)addPickedRoute:(id)arg1;
@property(readonly, nonatomic) BOOL supportsMultipleSelection;
- (BOOL)_pickRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)pickRoute:(id)arg1;
- (void)_registerNotifications;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (long long)_volumeControlStateForPickedRoute;
- (void)_updateCachedRoutes;
- (void)_unregisterNotifications;
- (void)_setVolumeControlStateForPickedRoute:(long long)arg1;
- (void)_setExternalScreenType:(long long)arg1;
- (void)_sendDelegatePickedRoutesChanged;
- (void)_sendDelegateFailedToPickRouteWithError:(id)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_promptForHijackIfNeeded:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_pickedRoutesInArray:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (void)_onQueueSetExternalScreenType:(long long)arg1;
- (void)_onQueue_clearCachedRoutes;
- (long long)_externalScreenType:(char *)arg1;
- (BOOL)_deviceAvailabilityOverrideState;
- (void)_clearLegacyCachedRoute;
- (void)unpickTVRoutes;
- (void)clearCachedRoutes;
- (BOOL)wirelessDisplayRoutesAvailable;
- (BOOL)wirelessDisplayRouteIsPicked;
- (id)videoRouteForRoute:(id)arg1;
- (void)unpickAirPlayScreenRouteWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)routeOtherThanHandsetAvailable;
- (BOOL)routeOtherThanHandsetAndSpeakerAvailable;
- (BOOL)receiverRouteIsPicked;
- (BOOL)speakerRouteIsPicked;
- (void)selectRoute:(id)arg1 operation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)pickSpeakerRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickBestDeviceRoute;
- (BOOL)handsetRouteIsPicked;
- (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)airtunesRouteIsPicked;
@property(readonly, nonatomic) BOOL volumeControlIsAvailable;
- (BOOL)routeIsPendingPick:(id)arg1;
- (BOOL)routeIsLeaderOfEndpoint:(id)arg1;
@property(readonly, nonatomic) NSSet *pendingPickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pendingPickedRoute;
@property(readonly, nonatomic) NSArray *pickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pickedRoute;
@property(readonly, nonatomic) BOOL hasPendingPickedRoutes;
@property(readonly, nonatomic) long long externalScreenType;
@property(readonly, copy, nonatomic) NSArray *availableRoutes;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithDataSource:(id)arg1 name:(id)arg2;

@end

