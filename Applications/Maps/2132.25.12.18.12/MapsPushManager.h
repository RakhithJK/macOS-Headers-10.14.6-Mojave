//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class APSConnection, IDSService, NSArray, NSString;
@protocol MapsPushDelegate;

__attribute__((visibility("hidden")))
@interface MapsPushManager : NSObject <APSConnectionDelegate, IDSServiceDelegate>
{
    IDSService *_service;
    NSArray *_devices;
    id <MapsPushDelegate> _delegate;
    APSConnection *_apsConnection;
    CDUnknownBlockType _devicePushTokenCompletion;
}

+ (id)fakeDevicesFromNames:(id)arg1;
+ (id)defaultManager;
@property(copy, nonatomic) CDUnknownBlockType devicePushTokenCompletion; // @synthesize devicePushTokenCompletion=_devicePushTokenCompletion;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property __weak id <MapsPushDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)fetchProblemStatus:(id)arg1 problemReportIDs:(id)arg2 manifestToken:(id)arg3;
- (void)simulateProblemResolution;
- (id)_simulatedProblemResolutionResponse;
- (id)_simulatedNotification;
- (id)_simulatedProblemStatus;
- (id)_simulatedDetails;
- (id)_simulatedPlace;
- (void)registerForMapsICloudPushTopic;
- (id)devicePushToken;
@property BOOL shouldUseDevAPNS;
- (void)setUpPushConnection;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)pushItem:(id)arg1 toDevice:(id)arg2;
- (void)_updateDevices;
- (id)initPushManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

