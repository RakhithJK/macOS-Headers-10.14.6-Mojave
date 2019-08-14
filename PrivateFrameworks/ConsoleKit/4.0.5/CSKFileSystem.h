//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSKFileSystem : NSObject
{
    NSObject<OS_dispatch_queue> *_systemSerialQueue;
}

+ (id)userDiagnosticReportsPath;
+ (id)userLibraryLogsPath;
+ (id)unarchiveExecutablePathForExtension:(id)arg1;
+ (BOOL)isFileAtURLASLFile:(id)arg1;
+ (BOOL)isFileAtPathValidASLFile:(id)arg1;
+ (BOOL)isFileAtPathValidLogArchive:(id)arg1;
+ (BOOL)isExtensionAnArchive:(id)arg1;
+ (id)archiveFileExtensions;
+ (BOOL)doesURLPointToValidFile:(id)arg1 withExtension:(id)arg2;
+ (BOOL)doesURLPointToValidFile:(id)arg1;
+ (BOOL)doesURLPointToValidDirectory:(id)arg1 withExtension:(id)arg2;
+ (BOOL)doesURLPointToValidDirectory:(id)arg1;
+ (void)enumerateContentAtURL:(id)arg1 properties:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)_realUserHomeDirectory;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *systemSerialQueue; // @synthesize systemSerialQueue=_systemSerialQueue;
- (void).cxx_destruct;
- (void)asyncFetchDirectoriesAtURL:(id)arg1 target:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)asyncDeepFetchFilesAtURL:(id)arg1 target:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)asyncFetchFilesAtURL:(id)arg1 target:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchFilesAtURL:(id)arg1 deep:(BOOL)arg2 target:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

