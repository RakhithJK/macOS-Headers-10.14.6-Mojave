//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAccessorySettingsObserver-Protocol.h>
#import <Home/HFMediaObjectObserver-Protocol.h>

@class HFHomeKitDispatcher, HFMediaProfileContainerSettingsValueManager, HMAccessory, HMAccessorySettings, HMHome, NSMutableDictionary, NSSet, NSString;
@protocol HFMediaProfileContainer;

@interface HFAccessorySettingAdapter : NSObject <HFAccessorySettingsObserver, HFMediaObjectObserver>
{
    HFMediaProfileContainerSettingsValueManager *_valueManager;
    unsigned long long _mode;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSSet *_keyPaths;
    CDUnknownBlockType _updateHandler;
    HFHomeKitDispatcher *_dispatcher;
    NSMutableDictionary *_watchedSettings;
    NSMutableDictionary *_keyPathStringToFuture;
    HMAccessory *_accessory;
    HMAccessorySettings *_accessorySettings;
}

+ (id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg1;
@property(readonly, nonatomic) HMAccessorySettings *accessorySettings; // @synthesize accessorySettings=_accessorySettings;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSMutableDictionary *keyPathStringToFuture; // @synthesize keyPathStringToFuture=_keyPathStringToFuture;
@property(retain, nonatomic) NSMutableDictionary *watchedSettings; // @synthesize watchedSettings=_watchedSettings;
@property(retain, nonatomic) HFHomeKitDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, copy, nonatomic) NSSet *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)_endMonitoringSettingsKeyPath:(id)arg1;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (void)_reportUpdatedValueForSetting:(id)arg1;
- (void)_teardownSetting:(id)arg1;
- (void)_watchSetting:(id)arg1;
- (void)_tearDownKeyPaths;
- (void)_setupMissingKeyPaths;
- (id)_missingKeyPaths;
- (BOOL)_setupKeyPaths;
- (BOOL)_updateRootAccessorySettings;
- (BOOL)_updateRootAccessorySettingsIfNeeded;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (void)settingsDidUpdate:(id)arg1;
- (void)accessorySettings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)accessorySettings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (void)accessorySettings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (id)settingForKeyPath:(id)arg1;
- (id)updateSetting:(id)arg1 value:(id)arg2;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) HFMediaProfileContainerSettingsValueManager *valueManager; // @synthesize valueManager=_valueManager;
@property(readonly, nonatomic) HMHome *home; // @dynamic home;
- (id)settingWatchFutureForKeyPath:(id)arg1;
- (id)updateSettingWithKeyPath:(id)arg1 value:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

