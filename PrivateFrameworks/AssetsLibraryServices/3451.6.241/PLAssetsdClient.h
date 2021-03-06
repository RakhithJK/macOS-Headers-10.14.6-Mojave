//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLAssetsdClientXPCConnection, PLAssetsdCloudClient, PLAssetsdCloudInternalClient, PLAssetsdDebugClient, PLAssetsdDemoClient, PLAssetsdDiagnosticsClient, PLAssetsdLibraryClient, PLAssetsdLibraryInternalClient, PLAssetsdLibraryManagementClient, PLAssetsdMigrationClient, PLAssetsdNotificationClient, PLAssetsdPhotoKitClient, PLAssetsdResourceClient, PLAssetsdResourceInternalClient, PLAssetsdResourceWriteOnlyClient, PLAssetsdSyncClient, PLAutoBindingProxyFactory;
@protocol OS_dispatch_queue;

@interface PLAssetsdClient : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdClientXPCConnection *_nonBindingProxyFactory;
    PLAutoBindingProxyFactory *_autoBindingProxyFactory;
    PLAssetsdLibraryClient *_libraryClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdLibraryInternalClient *_libraryInternalClient;
    PLAssetsdPhotoKitClient *_photoKitClient;
    PLAssetsdResourceClient *_resourceClient;
    PLAssetsdResourceWriteOnlyClient *_resourceWriteOnlyClient;
    PLAssetsdResourceInternalClient *_resourceInternalClient;
    PLAssetsdCloudClient *_cloudClient;
    PLAssetsdCloudInternalClient *_cloudInternalClient;
    PLAssetsdMigrationClient *_migrationClient;
    PLAssetsdSyncClient *_syncClient;
    PLAssetsdNotificationClient *_notificationClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdDiagnosticsClient *_diagnosticsClient;
    PLAssetsdDebugClient *_debugClient;
}

+ (id)sharedSystemLibraryAssetsdClient;
+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1;
- (void).cxx_destruct;
- (void)prepareToShutdown;
- (void)waitUntilConnectionSendsAllMessages;
- (void)sendDaemonJob:(id)arg1 shouldRunSerially:(BOOL)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_updateLibraryStateConnectionInterrupted:(id)arg1;
@property(readonly) PLAssetsdDebugClient *debugClient;
@property(readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property(readonly) PLAssetsdDemoClient *demoClient;
@property(readonly) PLAssetsdNotificationClient *notificationClient;
@property(readonly) PLAssetsdSyncClient *syncClient;
@property(readonly) PLAssetsdMigrationClient *migrationClient;
@property(readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property(readonly) PLAssetsdCloudClient *cloudClient;
@property(readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
- (id)resourceWriteOnlyClient;
@property(readonly) PLAssetsdResourceClient *resourceClient;
@property(readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property(readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property(readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property(readonly) PLAssetsdLibraryClient *libraryClient;
- (id)_setupClientClass:(Class)arg1 proxyGetter:(SEL)arg2 autoBinding:(BOOL)arg3;
- (void)addPhotoLibraryUnavailabilityHandler:(CDUnknownBlockType)arg1;
- (id)initWithNonBindingProxyFactory:(id)arg1 autoBindingProxyFactory:(id)arg2;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (id)init;

@end

