//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <Navigation/MNLocationProviderDelegate-Protocol.h>

@class CLHeading, GEOLocationShifter, MNLocation, NSBundle, NSDate, NSError, NSHashTable, NSLock, NSString;
@protocol MNLocationProvider, MNLocationRecorder;

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate>
{
    unsigned long long _locationProviderType;
    id <MNLocationProvider> _locationProvider;
    id <MNLocationRecorder> _locationRecorder;
    NSString *_effectiveBundleIdentifier;
    NSBundle *_effectiveBundle;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    NSLock *_observersLock;
    NSLock *_lastLocationLock;
    MNLocation *_lastLocation;
    MNLocation *_lastGoodLocation;
    GEOLocationShifter *_locationShifter;
    double _lastLocationUpdateTime;
    double _lastLocationReportTime;
    double _locationUpdateStartTime;
    double _expectedGpsUpdateInterval;
    CLHeading *_heading;
    NSDate *_lastUpdatedHeadingDate;
    BOOL _hasCustomDesiredAccuracy;
    BOOL _trackingLocation;
    BOOL _logStartStopLocationUpdates;
    BOOL _isLastLocationStale;
    BOOL _lastLocationPushed;
    BOOL _useCourseForHeading;
    BOOL _trackingHeading;
    int _headingOrientation;
    CDUnknownBlockType _locationCorrector;
    NSError *_locationError;
    long long _activityType;
}

+ (id)sharedLocationManager;
@property(retain, nonatomic) id <MNLocationProvider> locationProvider; // @synthesize locationProvider=_locationProvider;
@property(readonly, nonatomic) unsigned long long locationProviderType; // @synthesize locationProviderType=_locationProviderType;
@property(retain, nonatomic) id <MNLocationRecorder> locationRecorder; // @synthesize locationRecorder=_locationRecorder;
@property(nonatomic) int headingOrientation; // @synthesize headingOrientation=_headingOrientation;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) NSError *locationError; // @synthesize locationError=_locationError;
@property(readonly, nonatomic) BOOL isLastLocationStale; // @synthesize isLastLocationStale=_isLastLocationStale;
@property(readonly, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(copy, nonatomic) CDUnknownBlockType locationCorrector; // @synthesize locationCorrector=_locationCorrector;
- (void).cxx_destruct;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (BOOL)isLocationServicesRestricted;
- (BOOL)isLocationServicesDenied;
- (BOOL)isLocationServicesAuthorizationNeeded;
- (BOOL)isLocationServicesAvailable;
- (BOOL)isLocationServicesApproved;
- (BOOL)isLocationServicesPossiblyAvailable:(id *)arg1;
- (BOOL)isLocationServicesPossiblyAvailable;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationSuccess;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_setTrackingHeading:(BOOL)arg1;
- (void)_setTrackingLocation:(BOOL)arg1;
- (void)_reset;
- (void)_setLastLocationReceivedFromMaps:(id)arg1;
- (void)pushLocation:(id)arg1;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)useTraceLocationProvider:(id)arg1;
- (void)useHybridLocationProvider;
- (void)useLeechedLocationProvider;
- (void)useGPSLocationProvider;
- (void)stop;
- (void)setLocationProviderType:(unsigned long long)arg1;
- (void)removeLocationListener:(id)arg1;
- (void)addLocationListener:(id)arg1;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)setLastLocation:(id)arg1;
@property(readonly, nonatomic) MNLocation *lastLocation;
@property(readonly, nonatomic) BOOL isHeadingServicesAvailable;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

