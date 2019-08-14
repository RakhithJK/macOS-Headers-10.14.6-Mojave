//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSEventMonitorDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject <CSEventMonitorDelegate>
{
    NSDictionary *_csAssetsDictionary;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_observers;
}

+ (id)sharedController;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (id)getEndpointAssetTypeString;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)predicateForAssetType:(unsigned long long)arg1 language:(id)arg2;
+ (id)predicateForfetchRemoteMetadataForAssetType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;
- (id)_defaultDownloadOptions;
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 localOnly:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;
- (BOOL)_isReadyToUse;
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_assetQueryForAssetType:(unsigned long long)arg1 withPredicate:(id)arg2 localOnly:(BOOL)arg3;
- (id)_findLatestInstalledAsset:(id)arg1;
- (void)_installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

