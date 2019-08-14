//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCoreConfigurationManager-Protocol.h>
#import <NewsCore/FCFeldsparIDProviderObserving-Protocol.h>
#import <NewsCore/FCMagazinesConfigurationManager-Protocol.h>
#import <NewsCore/FCNewsAppConfigurationManager-Protocol.h>

@class FCAsyncSerialQueue, FCContextConfiguration, FCKeyValueStore, FCNewsAppConfig, NSArray, NSData, NSDictionary, NSHashTable, NSString, RCConfigurationManager;
@protocol FCCoreConfiguration, FCFeldsparIDProvider, FCNewsAppConfiguration, FCNewsAppConfiguration><FCJSONEncodableObjectProviding, OS_dispatch_queue;

@interface FCConfigurationManager : NSObject <FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager>
{
    BOOL _shouldIgnoreCache;
    BOOL _attemptedAppConfigFetch;
    BOOL _runningUnitTests;
    RCConfigurationManager *_remoteConfigurationManager;
    FCContextConfiguration *_contextConfiguration;
    id <FCFeldsparIDProvider> _feldsparIDProvider;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_requestSerialQueue;
    FCKeyValueStore *_localStore;
    FCNewsAppConfig *_currentAppConfiguration;
    NSArray *_treatmentIDs;
    NSArray *_segmentSetIDs;
    NSArray *_widgetChangeTags;
    NSDictionary *_cachedWidgetConfigurationDict;
    NSData *_currentMagazinesConfiguration;
    NSHashTable *_appConfigObservers;
    NSHashTable *_coreConfigObservers;
}

+ (id)overrideAppConfigID;
+ (id)internalOverrideAdditionalSegmentSetIDs;
+ (id)internalOverrideSegmentSetIDs;
@property(nonatomic, getter=isRunningUnitTests) BOOL runningUnitTests; // @synthesize runningUnitTests=_runningUnitTests;
@property(nonatomic) BOOL attemptedAppConfigFetch; // @synthesize attemptedAppConfigFetch=_attemptedAppConfigFetch;
@property(retain, nonatomic) NSHashTable *coreConfigObservers; // @synthesize coreConfigObservers=_coreConfigObservers;
@property(retain, nonatomic) NSHashTable *appConfigObservers; // @synthesize appConfigObservers=_appConfigObservers;
@property(copy, nonatomic) NSData *currentMagazinesConfiguration; // @synthesize currentMagazinesConfiguration=_currentMagazinesConfiguration;
@property(retain, nonatomic) NSDictionary *cachedWidgetConfigurationDict; // @synthesize cachedWidgetConfigurationDict=_cachedWidgetConfigurationDict;
@property(copy, nonatomic) NSArray *widgetChangeTags; // @synthesize widgetChangeTags=_widgetChangeTags;
@property(nonatomic) BOOL shouldIgnoreCache; // @synthesize shouldIgnoreCache=_shouldIgnoreCache;
@property(copy, nonatomic) NSArray *segmentSetIDs; // @synthesize segmentSetIDs=_segmentSetIDs;
@property(copy, nonatomic) NSArray *treatmentIDs; // @synthesize treatmentIDs=_treatmentIDs;
@property(copy, nonatomic) FCNewsAppConfig *currentAppConfiguration; // @synthesize currentAppConfiguration=_currentAppConfiguration;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(readonly, nonatomic) FCAsyncSerialQueue *requestSerialQueue; // @synthesize requestSerialQueue=_requestSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) id <FCFeldsparIDProvider> feldsparIDProvider; // @synthesize feldsparIDProvider=_feldsparIDProvider;
@property(readonly, nonatomic) FCContextConfiguration *contextConfiguration; // @synthesize contextConfiguration=_contextConfiguration;
@property(readonly, nonatomic) RCConfigurationManager *remoteConfigurationManager; // @synthesize remoteConfigurationManager=_remoteConfigurationManager;
- (void).cxx_destruct;
- (id)_deserializeChangeTags:(id)arg1;
- (id)_serializeChangeTags:(id)arg1;
- (id)_changeTagsInRecords:(id)arg1;
- (id)_changeTagsInWidgetConfigurationDict:(id)arg1;
- (id)_mergeRecords:(id)arg1 withCachedRecords:(id)arg2;
- (id)_mergeCachedDataWithWidgetConfigurationData:(id)arg1;
- (unsigned long long)_configurationSourceForSourceName:(id)arg1;
- (id)_recordIDForRequestKey:(id)arg1 storefrontID:(id)arg2;
- (id)_permanentURLForRequestKey:(id)arg1 storefrontID:(id)arg2;
- (unsigned long long)_remoteConfigurationEnvironmentForContextIdentifier:(long long)arg1;
- (id)_responseKeyForRequestKey:(id)arg1;
- (id)_configurationSettingsWithRequestInfos:(id)arg1 feldsparID:(id)arg2 storefrontID:(id)arg3 contextConfiguration:(id)arg4 useBackgroundRefreshRate:(BOOL)arg5;
- (id)_requestInfoForRequestKey:(id)arg1 storefrontID:(id)arg2 additionalChangeTags:(id)arg3;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)arg1;
- (BOOL)_checkIfShouldIgnoreCache;
- (void)_loadConfigurationFromStore:(id)arg1;
- (void)_configurationDidChangeSignificantConfigChange:(BOOL)arg1;
- (id)_storefrontID;
- (void)_fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchAppWidgetConfigurationIfNeededUseBackgroundRefreshRate:(BOOL)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAppConfigurationWithConfigurationSettings:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 shouldRefresh:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <FCCoreConfiguration> configuration;
@property(readonly, copy, nonatomic) NSString *feldsparID;
- (void)removeAppConfigObserver:(id)arg1;
- (void)addAppConfigObserver:(id)arg1;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAppWidgetConfigurationUseBackgroundRefreshRate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *magazinesConfigurationData;
@property(readonly, nonatomic) id <FCNewsAppConfiguration><FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration;
@property(readonly, nonatomic) id <FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property(readonly, nonatomic) id <FCNewsAppConfiguration> appConfiguration;
- (id)initWithContextConfiguration:(id)arg1 contentHostDirectoryFileURL:(id)arg2 feldsparIDProvider:(id)arg3;
- (id)initForTesting;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

