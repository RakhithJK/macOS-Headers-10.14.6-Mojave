//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@protocol GEONavigationServerRequestStateXPCInterface <NSObject>
- (void)requestNavigationVoiceVolume;
- (void)requestTrafficIncidentDetailsData;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestStepNameInfo;
- (void)requestStepIndex;
- (void)requestActiveRouteDetailsData;
- (void)requestUpdates;
- (void)requestGuidanceState;
- (void)requestTransitSummary;
- (void)requestRouteSummary;
@end

