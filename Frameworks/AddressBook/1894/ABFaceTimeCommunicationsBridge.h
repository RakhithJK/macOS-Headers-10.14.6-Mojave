//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ABFaceTimeCommunicationsBridgeDelegate, CNCancelable;

@interface ABFaceTimeCommunicationsBridge : NSObject
{
    BOOL _telephonySupported;
    id <ABFaceTimeCommunicationsBridgeDelegate> _delegate;
    id <CNCancelable> _messagingAvailabilityChangedToken;
    id <CNCancelable> _faceTimeAvailabilityChangedToken;
    id <CNCancelable> _telephonyAvailaibilityChangedToken;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <CNCancelable> telephonyAvailaibilityChangedToken; // @synthesize telephonyAvailaibilityChangedToken=_telephonyAvailaibilityChangedToken;
@property(retain, nonatomic) id <CNCancelable> faceTimeAvailabilityChangedToken; // @synthesize faceTimeAvailabilityChangedToken=_faceTimeAvailabilityChangedToken;
@property(retain, nonatomic) id <CNCancelable> messagingAvailabilityChangedToken; // @synthesize messagingAvailabilityChangedToken=_messagingAvailabilityChangedToken;
@property(nonatomic) __weak id <ABFaceTimeCommunicationsBridgeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isTelephonySupported) BOOL telephonySupported; // @synthesize telephonySupported=_telephonySupported;
- (void).cxx_destruct;
- (id)supplementalDialTelephonyCallString;
- (void)makeFaceTimeCallWithEndpoint:(id)arg1 isAudio:(BOOL)arg2;
- (void)makeFaceTimeCallWithContactIdentifier:(id)arg1 isAudio:(BOOL)arg2;
- (void)telephonyAvailaibilityChanged:(BOOL)arg1;
- (void)messagingAvailabilityChanged:(BOOL)arg1 forEndpoint:(id)arg2;
- (void)faceTimeAvailabilityChanged:(BOOL)arg1 forContactIdentifier:(id)arg2;
- (void)notifyClientOfResult:(id)arg1 fromEndpoints:(id)arg2 service:(id)arg3 forIdentifier:(id)arg4;
- (void)telophonySupportChanged:(id)arg1;
- (void)startTelephonySupportLookup;
- (id)validEndpointFromResults:(id)arg1 forService:(id)arg2;
- (id)loggingNameForService:(id)arg1;
- (id)searchAvailabilityCacheForEndpoints:(id)arg1 service:(id)arg2;
- (void)startAvailabilityCheckForContactIdentifier:(id)arg1 service:(id)arg2 endpoints:(id)arg3;
- (void)startMessagingAvailabilityLookupForEndpoint:(id)arg1;
- (void)startFaceTimeAvailabilityLookupForIdentifier:(id)arg1 endpoints:(id)arg2;
- (void)dealloc;
- (id)init;

@end
