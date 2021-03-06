//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXHearingSupport/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

@interface TTYTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate>
{
    BOOL _headphoneJackSupportsTTY;
    CTXPCServiceSubscriptionContext *_defaultVoiceContext;
    unsigned long long _activeContextCount;
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_telephonyUpdateQueue;
}

+ (id)relayPhoneNumberForContext:(id)arg1;
+ (BOOL)relayIsSupportedForContext:(id)arg1;
+ (BOOL)shouldUseRTTForContext:(id)arg1;
+ (BOOL)softwareTTYIsSupportedForContext:(id)arg1;
+ (BOOL)hardwareTTYIsSupportedForContext:(id)arg1;
+ (BOOL)isOnlyRTTSupportedForContext:(id)arg1;
+ (BOOL)isRTTSupportedForContext:(id)arg1;
+ (BOOL)isTTYSupportedForContext:(id)arg1;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (BOOL)shouldUseRTT;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)isRTTSupported;
+ (BOOL)isTTYSupported;
+ (BOOL)TTYSoftwareEnabledForAnyActiveContext;
+ (BOOL)TTYHardwareEnabledForAnyActiveContext;
+ (BOOL)isAppleInternalBuild;
+ (id)sharedUtilityProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyUpdateQueue; // @synthesize telephonyUpdateQueue=_telephonyUpdateQueue;
@property(retain, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(nonatomic) unsigned long long activeContextCount; // @synthesize activeContextCount=_activeContextCount;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *defaultVoiceContext; // @synthesize defaultVoiceContext=_defaultVoiceContext;
- (void).cxx_destruct;
- (id)relayNumberForContext:(id)arg1;
- (BOOL)isTTYSupportedForContext:(id)arg1;
- (BOOL)isTTYOverIMSSupportedForContext:(id)arg1;
- (id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2;
- (id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2;
- (void)reloadDefaultVoiceContext;
- (void)reloadRelayPhoneNumbers;
- (id)subscriptionContexts;
- (void)simLessSubscriptionsDidChange;
- (void)activeSubscriptionsDidChange;
- (void)subscriptionInfoDidChange;
- (void)carrierSettingsDidChange;
- (id)phoneNumberFromUUID:(id)arg1;
- (BOOL)contactPathIsMe:(id)arg1;
- (id)phoneNumberForContext:(id)arg1;
- (id)myPhoneNumber;
- (BOOL)relayIsSupported;
- (BOOL)contactIsTTYContact:(id)arg1;
- (unsigned long long)currentPreferredTransportMethodForContext:(id)arg1;
- (unsigned long long)currentPreferredTransportMethod;
- (void)headphoneStateChangedNotification:(id)arg1;
- (void)updateHeadphoneState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

