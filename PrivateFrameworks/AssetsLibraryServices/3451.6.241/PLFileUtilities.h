//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLFileUtilities : NSObject
{
}

+ (BOOL)URLIsInTrash:(id)arg1;
+ (BOOL)filePath:(id)arg1 isEqualToFilePath:(id)arg2;
+ (BOOL)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (id)realPathForPath:(id)arg1 error:(id *)arg2;
+ (BOOL)fileURL:(id)arg1 isEqualToFileURL:(id)arg2;
+ (id)_mobileOwnerAttributes;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (BOOL)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)createDirectoryAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (BOOL)_isFileExistsError:(id)arg1;
+ (BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id *)arg3;
+ (BOOL)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
+ (id)descriptionForFileIngestionType:(long long)arg1;
+ (BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id *)arg2;
+ (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)fileManager;
+ (BOOL)isAPFSForFileSystemAtURL:(id)arg1;
+ (BOOL)canEnableCloudPhotoLibraryForFileSystemAtURL:(id)arg1 isLocal:(out char *)arg2;
+ (BOOL)isLocalFileSystemAtURL:(id)arg1;
+ (BOOL)_getFileSystemType:(unsigned int *)arg1 subType:(unsigned int *)arg2 typeName:(id *)arg3 forURL:(id)arg4;
+ (BOOL)supportsClone;
+ (BOOL)setPhotoLibraryBasePath:(id)arg1;
+ (id)_relocateLibraryPath;
+ (id)relocateLibraryIndicatorFilePath;
+ (id)systemLibraryURL;
+ (id)defaultSystemLibraryURL;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (id)defaultSystemPhotoDataDirectory;

@end

