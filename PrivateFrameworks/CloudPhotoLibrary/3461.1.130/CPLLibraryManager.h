//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLChangeSession, CPLConfiguration, CPLPlatformObject, CPLStatus, NSError, NSString, NSURL, _CPLWeakLibraryManager;
@protocol CPLLibraryManagerDelegate, CPLLibraryManagerForceSyncDelegate, CPLLibraryManagerOwner, CPLResourceProgressDelegate, OS_dispatch_queue;

@interface CPLLibraryManager : NSObject <CPLAbstractObject>
{
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    BOOL _sizeOfResourcesToUploadIsSet;
    NSObject<OS_dispatch_queue> *_initLock;
    CPLConfiguration *_configuration;
    CPLStatus *_syncStatus;
    _CPLWeakLibraryManager *_weakSelf;
    BOOL _preventObserving;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    unsigned long long _libraryOptions;
    NSString *_libraryVersion;
    unsigned long long _estimatedInitialSizeForLocalLibrary;
    unsigned long long _estimatedInitialAssetCountForLocalLibrary;
    unsigned long long _sizeOfResourcesToUpload;
    unsigned long long _sizeOfOriginalResourcesToUpload;
    unsigned long long _numberOfImagesToUpload;
    unsigned long long _numberOfVideosToUpload;
    unsigned long long _numberOfOtherItemsToUpload;
    id <CPLLibraryManagerDelegate> _delegate;
    id <CPLResourceProgressDelegate> _resourceProgressDelegate;
    id <CPLLibraryManagerForceSyncDelegate> _forceSyncDelegate;
    id <CPLLibraryManagerOwner> _owner;
    unsigned long long _status;
    NSError *_statusError;
    unsigned long long _state;
    NSString *_userOverride;
    NSString *_effectiveClientBundleIdentifier;
}

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (void)useCloudPhotoLibraryEngineImplementation;
@property(copy, nonatomic) NSString *effectiveClientBundleIdentifier; // @synthesize effectiveClientBundleIdentifier=_effectiveClientBundleIdentifier;
@property(copy, nonatomic) NSString *userOverride; // @synthesize userOverride=_userOverride;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSError *statusError; // @synthesize statusError=_statusError;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <CPLLibraryManagerOwner> owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id <CPLLibraryManagerForceSyncDelegate> forceSyncDelegate; // @synthesize forceSyncDelegate=_forceSyncDelegate;
@property(nonatomic) __weak id <CPLResourceProgressDelegate> resourceProgressDelegate; // @synthesize resourceProgressDelegate=_resourceProgressDelegate;
@property(nonatomic) __weak id <CPLLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long numberOfOtherItemsToUpload; // @synthesize numberOfOtherItemsToUpload=_numberOfOtherItemsToUpload;
@property(readonly, nonatomic) unsigned long long numberOfVideosToUpload; // @synthesize numberOfVideosToUpload=_numberOfVideosToUpload;
@property(readonly, nonatomic) unsigned long long numberOfImagesToUpload; // @synthesize numberOfImagesToUpload=_numberOfImagesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload; // @synthesize sizeOfOriginalResourcesToUpload=_sizeOfOriginalResourcesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfResourcesToUpload; // @synthesize sizeOfResourcesToUpload=_sizeOfResourcesToUpload;
@property(nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary; // @synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary;
@property(nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary; // @synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary;
@property(readonly, copy, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(readonly, nonatomic) unsigned long long libraryOptions; // @synthesize libraryOptions=_libraryOptions;
@property(readonly, copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // @synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL;
@property(readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // @synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL;
@property(readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // @synthesize clientLibraryBaseURL=_clientLibraryBaseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)addInfoToLog:(id)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL diagnosticsEnabled;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableMingling;
- (void)disableMingling;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)arg1 persist:(BOOL)arg2;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(BOOL)arg2;
- (void)acknowledgeChangedStatuses:(id)arg1;
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusForRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)setShouldOverrideSystemBudgetsForSyncSession:(BOOL)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (id)addSubscriberUsingPublishingHandler:(CDUnknownBlockType)arg1;
- (void)startSyncSession;
- (void)resetStatus;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (BOOL)_setStatus:(unsigned long long)arg1 andError:(id)arg2;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_mappedUnscopedIdentifiersFromScopedIdentifiers:(id)arg1;
- (void)_getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acceptMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)publishResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginDownloadForResource:(id)arg1 highPriority:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setLibraryVersion:(id)arg1;
- (void)_setCurrentSession:(id)arg1;
- (void)discardCurrentSession;
- (id)currentSession;
@property(readonly, nonatomic) CPLStatus *syncStatus;
- (void)_statusDidChange;
@property(readonly, nonatomic) CPLConfiguration *configuration;
- (void)_configurationDidChange;
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableMainScopeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableMainScopeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deactivateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_closeDeactivating:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)blockEngineElement:(id)arg1;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)reportSetting:(id)arg1 hasBeenEnabled:(BOOL)arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

