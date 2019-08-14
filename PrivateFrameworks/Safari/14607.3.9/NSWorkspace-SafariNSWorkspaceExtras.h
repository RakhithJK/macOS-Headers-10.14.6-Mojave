//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWorkspace.h>

@interface NSWorkspace (SafariNSWorkspaceExtras)
+ (id)safari_userDesktopDirectory;
- (BOOL)safari_haveQuicktimePlayer;
- (BOOL)safari_haveiTunes;
- (id)createZipArchive:(id)arg1;
- (BOOL)isFilePackageOrAliasToFilePackageAtPath:(id)arg1;
- (id)downloadAssessmentForPath:(id)arg1;
- (void)sendNotificationsForFinishedDownloadAtPath:(id)arg1;
- (BOOL)safari_createInternetLocationFileAtURL:(id)arg1 withURL:(id)arg2 title:(id)arg3 error:(id *)arg4;
- (void)createInternetLocationFileInDirectory:(id)arg1 withURL:(id)arg2 title:(id)arg3;
- (id)safari_internetLocationFileNameForURL:(id)arg1 title:(id)arg2;
- (id)URLForInternetLocationFileAtPath:(id)arg1;
- (BOOL)URL:(id *)arg1 title:(id *)arg2 forInternetLocationFileAtPath:(id)arg3;
- (id)safari_internetLocationFileTypeForURL:(id)arg1;
- (id)internetLocationFileExtensionForURL:(id)arg1;
- (BOOL)isInternetLocationFileAtPath:(id)arg1;
- (id)_internetLocationFileExtensionsArray;
- (id)_safari_internetLocationFileTypes;
- (id)_internetLocationFileExtensions;
- (void)safari_moveFileToTrash:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)infoForLaunchedApplicationAtPath:(id)arg1;
- (id)launchApplicationAtURL:(id)arg1 event:(id)arg2;
- (BOOL)launchApplicationWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)pathForApplicationForURL:(id)arg1;
- (id)pathForApplicationWithBundleIdentifier:(id)arg1;
- (id)infoForLaunchedApplicationWithBundleID:(id)arg1 preferringPath:(id)arg2;
- (BOOL)safari_revealFile:(id)arg1;
- (BOOL)openURL:(id)arg1 withApplicationWithBundleIdentifier:(id)arg2;
- (BOOL)openURL:(id)arg1 withApplicationAtPath:(id)arg2;
- (BOOL)fileHasQuarantineAttributesAtPath:(id)arg1;
- (BOOL)removeFileFromQuarantineAtPath:(id)arg1;
@end

