//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HFAccessoryVendor-Protocol.h>
#import <HomeUI/HFFavoritable-Protocol.h>
#import <HomeUI/HFGroupableItemProtocol-Protocol.h>
#import <HomeUI/HFHomeKitObject-Protocol.h>
#import <HomeUI/HFReorderableHomeKitObject-Protocol.h>
#import <HomeUI/HFRoomContextProviding-Protocol.h>
#import <HomeUI/HFStateDumpBuildable-Protocol.h>
#import <HomeUI/HFSymptomFixableObject-Protocol.h>
#import <HomeUI/HFSymptomsHandlerVendor-Protocol.h>
#import <HomeUI/HFSymptomsVendor-Protocol.h>
#import <HomeUI/HMMediaObject-Protocol.h>

@class ACAccount, HFAccessorySettingAdapterManager, HFMediaProfileContainerSettingsValueManager, HFServiceNameComponents, HMAccessory, HMHome, HMMediaSession, NAFuture, NSSet, NSString;
@protocol HFMediaValueSource;

@protocol HFMediaProfileContainer <HMMediaObject, HFAccessoryVendor, HFHomeKitObject, HFStateDumpBuildable, HFReorderableHomeKitObject, HFFavoritable, HFRoomContextProviding, HFGroupableItemProtocol, HFSymptomsVendor, HFSymptomsHandlerVendor, HFSymptomFixableObject>
@property(readonly, nonatomic) HFMediaProfileContainerSettingsValueManager *hf_settingsValueManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) HFAccessorySettingAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, nonatomic) NSString *hf_defaultName;
@property(readonly, nonatomic) NSString *hf_editingName;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, nonatomic) BOOL hf_showsAudioSettings;
@property(readonly, nonatomic) BOOL hf_supportsMediaSystem;
@property(readonly, nonatomic) BOOL hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) BOOL hf_isReachable;
@property(readonly, nonatomic) BOOL hf_isAppleMusicReachable;
@property(readonly, nonatomic) BOOL hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) BOOL hf_isCurrentAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjects;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, copy, nonatomic) HMMediaSession *mediaSession;
- (NSString *)hf_idsDeviceIdentifierWithError:(id *)arg1;
- (NAFuture *)hf_fetchLog:(NSString *)arg1 timeout:(double)arg2;
- (NAFuture *)hf_fetchLogListWithTimeout:(double)arg1;
- (ACAccount *)hf_appleMusicCurrentLoggedInAccount;
- (NSString *)hf_appleMusicCurrentLoggedInAccountDSID;
@end

