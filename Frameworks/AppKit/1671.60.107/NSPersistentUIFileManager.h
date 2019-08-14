//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentUIPreservedStateDirectory, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSPersistentUIFileManager : NSObject
{
    NSURL *_persistentStateDirectoryURL;
    NSPersistentUIPreservedStateDirectory *_rawStateDirectoryAtLaunch;
    BOOL _rawHadValidStateDirectoryAtLaunch;
    NSObject<OS_dispatch_queue> *_IOQueue;
    int _stateFileFD;
    int _publicPlistFD;
    unsigned long long _currentFileSize;
    unsigned long long _fileSizeAfterLastRewrite;
    unsigned int _publicPlistChecksum;
    BOOL _stateDirectoryHasBeenRefreshed;
    BOOL _stateFileHasBeenCreated;
    BOOL _elideAllFileWrites;
}

+ (id)persistentStateDirectoryURLForBundleID:(id)arg1;
@property(setter=_setRawHadValidStateDirectoryAtLaunch:) BOOL _rawHadValidStateDirectoryAtLaunch; // @synthesize _rawHadValidStateDirectoryAtLaunch;
@property(retain, setter=_setRawStateDirectoryAtLaunch:) NSPersistentUIPreservedStateDirectory *_rawStateDirectoryAtLaunch; // @synthesize _rawStateDirectoryAtLaunch;
@property(readonly, copy) NSURL *persistentStateDirectoryURL; // @synthesize persistentStateDirectoryURL=_persistentStateDirectoryURL;
- (void)finishPendingChangesImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateStateDirectoryAtLaunch;
- (id)stateDirectoryAtLaunch;
- (BOOL)hasPersistentStateToRestore;
- (id)_persistentStateFileURL;
- (void)discardPersistentState;
- (void)tryCreatingPersistentStateDirectoryForURL:(id)arg1;
- (void)writePublicPlistData:(id)arg1;
- (void)_writePublicPlistData:(id)arg1;
- (void)writeRecords:(id)arg1 withWindowInfos:(id)arg2 flushingStaleData:(BOOL)arg3;
- (void)_writeRecords:(id)arg1 withWindowInfos:(id)arg2 flushingStaleData:(BOOL)arg3;
- (void)rewriteFile:(int)arg1 withWindowInfos:(id)arg2 withImpendingRecords:(id)arg3;
- (unsigned long long)writeRecords:(id)arg1 toFile:(int)arg2;
- (BOOL)_trySystemCallDescribedBy:(const char *)arg1 executor:(CDUnknownBlockType)arg2;
- (void)_elideAllFileWrites;
- (int)openPersistentStateFile;
- (void)refreshStateDirectoryIfNecessary;
- (BOOL)_refreshStateDirectoryIfNecessary;
- (void)reopenPersistentState;
- (void)dealloc;
- (void)preserveStateDirectoryAtLaunch;
- (id)initWithBundleID:(id)arg1;
- (id)initWithPersistentStateDirectoryURL:(id)arg1;

@end

