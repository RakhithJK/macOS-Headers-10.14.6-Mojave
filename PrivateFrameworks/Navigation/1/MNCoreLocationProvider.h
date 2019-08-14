//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/CLLocationManagerDelegate-Protocol.h>
#import <Navigation/MNLocationProvider-Protocol.h>

@class CLLocationManager, NSBundle, NSLock, NSString;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, MNLocationProvider>
{
    BOOL _waitingForAuthorization;
    BOOL _hasQueriedAuthorization;
    NSLock *_authorizationLock;
    BOOL _alternate;
    CLLocationManager *_clLocationManager;
    id <MNLocationProviderDelegate> _delegate;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    CDUnknownBlockType _authorizationRequestBlock;
    BOOL _updatingLocations;
}

@property BOOL updatingLocations; // @synthesize updatingLocations=_updatingLocations;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) BOOL isTracePlayer;
@property(readonly, nonatomic) BOOL isSimulation;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) BOOL matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)_resetForNewEffectiveBundle;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)requestLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)_updateAuthorizationStatus;
@property(readonly, nonatomic) BOOL usesCLMapCorrection;
@property(readonly, nonatomic) CLLocationManager *_clLocationManager;
- (void)_createCLLocationManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
