//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNGuidanceManagerDelegate-Protocol.h>
#import <Navigation/MNLocationManagerHeadingObserver-Protocol.h>
#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNLocationTrackerDelegate-Protocol.h>
#import <Navigation/MNNavigationAudioSessionDelegate-Protocol.h>
#import <Navigation/MNTimeAndDistanceUpdaterDelegate-Protocol.h>
#import <Navigation/MNTracePlayerObserver-Protocol.h>
#import <Navigation/MNVoiceControllerObserver-Protocol.h>

@class GEOApplicationAuditToken, GEOComposedWaypoint, GEOMotionContext, GEONavigationGuidanceState, MNClassicGuidanceManager, MNGuidanceEventManager, MNGuidanceSignInfo, MNLocation, MNLocationTracker, MNNavigationAudioSession, MNNavigationTraceManager, MNObserverHashTable, MNRouteManager, MNTimeAndDistanceUpdater, MNTrafficIncidentAlert, NSString, NSUUID;
@protocol MNAudioSession, MNGuidanceManager;

__attribute__((visibility("hidden")))
@interface MNNavigationSession : NSObject <MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNNavigationAudioSessionDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVoiceControllerObserver>
{
    int _navigationType;
    MNRouteManager *_routeManager;
    GEOComposedWaypoint *_destination;
    MNLocationTracker *_locationTracker;
    GEOMotionContext *_motionContext;
    MNNavigationAudioSession *_audioSession;
    id <MNGuidanceManager> _guidanceManager;
    MNClassicGuidanceManager *_classicGuidanceManager;
    MNGuidanceEventManager *_guidanceEventManager;
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;
    NSString *_voiceLanguage;
    MNNavigationTraceManager *_traceManager;
    MNTrafficIncidentAlert *_activeTrafficIncidentAlert;
    BOOL _guidancePromptsEnabled;
    BOOL _isConnectedToCarplay;
    BOOL _isSpeakingTrafficIncidentAlert;
    GEONavigationGuidanceState *_guidanceState;
    MNObserverHashTable *_observers;
    NSString *_tileLoaderClient;
    GEOApplicationAuditToken *_auditToken;
    MNGuidanceSignInfo *_lastSignInfo;
    NSUUID *_lastLaneID;
    BOOL _isAllowedToSwitchTransportTypes;
}

@property(nonatomic) BOOL isConnectedToCarplay; // @synthesize isConnectedToCarplay=_isConnectedToCarplay;
@property(nonatomic) BOOL guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(readonly, nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) BOOL isAllowedToSwitchTransportTypes; // @synthesize isAllowedToSwitchTransportTypes=_isAllowedToSwitchTransportTypes;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOMotionContext *motionContext; // @synthesize motionContext=_motionContext;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) id <MNAudioSession> audioSession; // @synthesize audioSession=_audioSession;
- (void).cxx_destruct;
- (void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)voiceController:(id)arg1 didActivateAudioSession:(BOOL)arg2;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (void)tracePlayerDidStart:(id)arg1;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)guidanceManager:(id)arg1 didArriveWithAnnouncement:(id)arg2;
- (void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2;
- (void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 stage:(unsigned long long)arg4 hasSecondaryManeuver:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManager:(id)arg1 usePersistentDisplay:(BOOL)arg2;
- (void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)guidanceManagerEndGuidanceUpdate:(id)arg1;
- (void)guidanceManagerBeginGuidanceUpdate:(id)arg1;
- (void)guidanceManagerHideSecondaryStep:(id)arg1;
- (void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
- (void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)guidanceManager:(id)arg1 didStartWithAnnouncement:(id)arg2;
- (void)audioSessionDidFinishAnnouncingArrival:(id)arg1;
- (void)audioSessionWillAnnounceArrival:(id)arg1;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)locationTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
- (void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)locationTracker:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (void)locationTracker:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
- (void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTracker:(id)arg1 didChangeState:(int)arg2;
- (void)_stopTravelTimeUpdates;
- (void)_startTravelTimeUpdates;
- (void)_stopGuidance;
- (void)_startGuidanceAllowMidRouteStart:(BOOL)arg1;
- (void)_stopAudioSession;
- (void)_startAudioSession;
- (void)_stopETAUpdates;
- (void)_startETAUpdates;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
- (void)_stopLocationUpdates;
- (void)_startLocationUpdates;
- (void)_stopLocationTracking;
- (void)_startLocationTracking;
- (id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2;
- (void)_closeTileLoader;
- (void)_openTileLoader;
- (void)_setVolumeFromDefaults;
- (void)setIsNavigatingInLowGuidance:(BOOL)arg1;
- (void)traceJumpedInTime;
- (BOOL)isCurrentlySpeaking;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (void)stopCurrentGuidancePrompt;
- (BOOL)vibrateForPrompt:(unsigned long long)arg1;
- (BOOL)repeatCurrentTrafficAlert;
- (BOOL)repeatCurrentGuidance;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigationSession;
- (void)startNavigationSessionWithDetails:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) double distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart;
@property(readonly, nonatomic) double remainingDistance;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation;
- (void)dealloc;
- (id)initWithRouteManager:(id)arg1 auditToken:(id)arg2 traceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

