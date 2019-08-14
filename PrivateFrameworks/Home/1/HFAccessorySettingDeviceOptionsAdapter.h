//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFAccessorySettingAdapter.h>

#import <Home/HFAccessorySettingAdapterButtonHandling-Protocol.h>
#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@class NAFuture, NSString, RPCompanionLinkClient;

@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating>
{
    RPCompanionLinkClient *_client;
    NAFuture *_inProgressSysdiagnoseCollectionFuture;
    NAFuture *_linkIsActivatedFuture;
    NAFuture *_accessoryCompanionLinkDeviceFuture;
}

@property(readonly, nonatomic) NAFuture *accessoryCompanionLinkDeviceFuture; // @synthesize accessoryCompanionLinkDeviceFuture=_accessoryCompanionLinkDeviceFuture;
@property(readonly, nonatomic) NAFuture *linkIsActivatedFuture; // @synthesize linkIsActivatedFuture=_linkIsActivatedFuture;
@property(retain, nonatomic) NAFuture *inProgressSysdiagnoseCollectionFuture; // @synthesize inProgressSysdiagnoseCollectionFuture=_inProgressSysdiagnoseCollectionFuture;
@property(readonly, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)_home;
- (id)_homeKitAccessoryUniqueIdentifier;
- (void)_updateDevices;
- (void)_resetRapportClientWithInvalidation:(BOOL)arg1;
- (void)_setupRapportClient;
- (id)_sendRapportMessageWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3;
- (id)inProgressButtonPressFutureForEntity:(id)arg1;
- (BOOL)supportButtonPressForEntity:(id)arg1;
- (id)handleButtonPressForEntity:(id)arg1;
- (BOOL)shouldShowSettingsEntity:(id)arg1;
- (id)identifyAccessory;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

