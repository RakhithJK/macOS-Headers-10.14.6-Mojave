//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient
{
}

- (void)setSharedMemoryForDeferredLogging:(id)arg1;
- (void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)getPhotosXPCEndpoint:(id *)arg1 error:(id *)arg2;
- (BOOL)incompleteRestoreProcesses:(id *)arg1 error:(id *)arg2;
- (BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(id *)arg1 error:(id *)arg2;
- (BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)arg1 error:(id *)arg2;

@end

