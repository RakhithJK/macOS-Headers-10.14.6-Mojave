//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSDevice : NSObject
{
}

+ (BOOL)deviceIsSeedBuild;
+ (BOOL)deviceIsInternalBuild;
+ (id)_systemVersionDictionary;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (id)_compatibleProductType;
+ (BOOL)deviceIsiPod;
+ (BOOL)deviceIsiPhone;
+ (BOOL)deviceIsiPad;
+ (BOOL)deviceIsAppleWatch;
+ (BOOL)deviceIsAppleTV;
+ (BOOL)deviceIsAudioAccessory;
+ (id)uniqueDeviceId;
+ (id)thinnedAppVariantId;
+ (id)serialNumber;
+ (id)screenScale;
+ (id)productVersion;
+ (id)productType;
+ (id)MLBSerialNumber;
+ (id)macAddressData;
+ (id)macAddress;
+ (id)localIPAddress;
+ (BOOL)isRunningInStoreDemoMode;
+ (id)hardwarePlatform;
+ (id)deviceName;
+ (id)deviceGUID;
+ (id)buildVersion;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3;
+ (BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 logKey:(id)arg4;
+ (BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 logKey:(id)arg3;
+ (id)deviceOffersForProductType:(unsigned long long)arg1;
+ (BOOL)deviceOffersContainProductType:(unsigned long long)arg1;
+ (void)_performAuth;
+ (id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2;
+ (id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5;
+ (BOOL)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3;
+ (BOOL)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2;
+ (BOOL)shouldPresentSetupOffersForAccount:(id)arg1 issues:(long long *)arg2;
+ (BOOL)shouldPresentSetupOffersForAccount:(id)arg1;
+ (void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1;
+ (BOOL)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5;
+ (BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (BOOL)deviceOffersContainType:(unsigned long long)arg1;
+ (BOOL)isGift;
+ (BOOL)isEligibleForOffers;
+ (BOOL)expressedIntent;
+ (id)deviceOffers;
+ (void)_startListeningForDeviceLanguageChangeWithBagContract:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)_appleLanguagesObservable;
+ (void)stopListeningForDeviceLanguageChange;
+ (void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1;
+ (id)language;

@end

