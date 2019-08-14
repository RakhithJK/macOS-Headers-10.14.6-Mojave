//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdResourceWriteOnlyServiceProtocol-Protocol.h>

@class NSArray, NSData, NSDictionary, NSProgress, NSString, NSURL;

@protocol PLAssetsdResourceServiceProtocol <PLAssetsdResourceWriteOnlyServiceProtocol>
- (void)updateInternalResourcePath:(NSString *)arg1 objectURI:(NSURL *)arg2 sandboxExtension:(NSData *)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (NSProgress *)consolidateAssets:(NSArray *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)generateOnDemandResourcesForAsset:(NSURL *)arg1 reply:(void (^)(void))arg2;
- (void)downloadCloudSharedAsset:(NSURL *)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 reply:(void (^)(BOOL, NSURL *, NSError *))arg5;
- (void)estimatedFileLengthOfVideo:(NSURL *)arg1 fallbackFilePath:(NSString *)arg2 exportPreset:(NSString *)arg3 exportProperties:(NSDictionary *)arg4 reply:(void (^)(long long))arg5;
- (void)asynchronousAdjustmentDataForAsset:(NSURL *)arg1 networkAccessAllowed:(BOOL)arg2 withDataBlob:(BOOL)arg3 reply:(void (^)(NSString *, NSString *, long long, BOOL, PLXPCFileDescriptor *, PLXPCFileDescriptor *, NSError *))arg4;
- (void)asynchronousVideoURLForAsset:(NSURL *)arg1 format:(unsigned short)arg2 networkAccessAllowed:(BOOL)arg3 streamingAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 restrictToPlayable:(BOOL)arg6 reply:(void (^)(NSURL *, unsigned short, NSString *, BOOL, NSString *, NSString *, NSError *))arg7;
- (void)getSandboxExtensionForFileSystemBookmark:(NSURL *)arg1 reply:(void (^)(BOOL, NSURL *, NSString *, NSError *))arg2;
- (void)getSandboxExtensionForAssetResourcePath:(NSString *)arg1 reply:(void (^)(BOOL, NSString *, NSError *))arg2;
- (void)imageDataForAssetWithObjectURI:(NSURL *)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 reply:(void (^)(PLXPCGenericObject *, NSNumber *, long long, BOOL, NSURL *, NSString *, NSString *, long long, NSString *, NSString *, NSError *))arg7;
- (void)fileDescriptorForPersistentURL:(NSURL *)arg1 withAdjustments:(BOOL)arg2 reply:(void (^)(BOOL, PLXPCFileDescriptor *, NSString *, NSError *))arg3;
- (void)filePathForPersistentURL:(NSURL *)arg1 withAdjustments:(BOOL)arg2 reply:(void (^)(BOOL, NSURL *, NSError *))arg3;
- (void)addAssetWithURL:(NSURL *)arg1 toAlbum:(NSString *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)addAssetGroupWithName:(NSString *)arg1 reply:(void (^)(BOOL, NSURL *))arg2;
@end

