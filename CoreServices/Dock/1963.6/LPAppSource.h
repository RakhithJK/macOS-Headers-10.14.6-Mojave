//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LPStorageStorable-Protocol.h"

@class LPAppManager, LPStorage, NSOperationQueue, NSString;
@protocol OS_dispatch_source;

@interface LPAppSource : NSObject <LPStorageStorable>
{
    LPAppManager *_owningManager;
    LPStorage *_storage;
    NSString *_path;
    NSString *_devicePath;
    char *_rawDevicePath;
    unsigned char _rawDevicePathLen;
    struct __FSEventStream *_fsStream;
    struct __FSEventStream *_fsStreamOffline;
    unsigned long long _fsEventLastID;
    long long _fsEventPendingCount;
    unsigned long long _fsEventMaxPendingID;
    NSObject<OS_dispatch_source> *_fsEventPendingID_timer;
    NSString *_fsEventUUID;
    NSObject<OS_dispatch_source> *_online_delay_timer;
    unsigned long long _shallowPathDepth;
    NSOperationQueue *_processQueue;
    void *_fsEventAppMap;
    void *_fsEventMovedPathSet;
    unsigned long long _lastMovedID;
    unsigned long long _lastAliasSearchID;
    NSObject<OS_dispatch_source> *_moved_folder_timer;
    NSObject<OS_dispatch_source> *_moved_file_timer;
    struct __CFUUID *_localVolumeUUID;
    int _sourceFD;
    unsigned long long _flags;
    long long _type;
    unsigned int _setup:1;
    unsigned int _online:1;
    unsigned int _initialBringupComplete:1;
    long long _location;
}

+ (void)updateLatestEventIDs:(unsigned long long)arg1;
+ (void)initialize;
+ (struct __DASession *)diskarbitration_session;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(nonatomic) __weak LPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) struct __CFUUID *localVolumeUUID; // @synthesize localVolumeUUID=_localVolumeUUID;
@property(nonatomic) BOOL initialBringupComplete; // @synthesize initialBringupComplete=_initialBringupComplete;
@property(nonatomic) BOOL online; // @synthesize online=_online;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) __weak LPAppManager *owningManager; // @synthesize owningManager=_owningManager;
- (void).cxx_destruct;
- (void)_fsEventHistoryDone;
- (void)_fsEventFolderRenamed:(const char *)arg1 flags:(unsigned int)arg2 eventID:(unsigned long long)arg3;
- (void)_fsEventFileDeleted:(const char *)arg1 flags:(unsigned int)arg2 eventID:(unsigned long long)arg3;
- (void)_fsEventFileModified:(const char *)arg1 flags:(unsigned int)arg2 eventID:(unsigned long long)arg3;
- (void)_fileNotFoundMayBeAlias:(unsigned long long)arg1;
- (void)_markPathRenamedC:(const char *)arg1 event:(unsigned long long)arg2;
- (void)_markAppChangedC:(const char *)arg1 event:(unsigned long long)arg2;
- (void)_fsEventRescanAtPath:(const char *)arg1 eventID:(unsigned long long)arg2;
- (void)_fsEventRootRenamedWithEventID:(unsigned long long)arg1;
- (void)_fsEventFinishedEvent:(unsigned long long)arg1;
- (void)_fsEventPendingEvent:(unsigned long long)arg1;
- (void)_stopWatchingForChanges;
- (BOOL)_startWatchingForChanges:(char *)arg1;
- (void)_stopWatchingOfflineFolder;
- (void)_startWatchingOfflineFolder:(id)arg1;
- (void)_bringOffline;
- (void)_bringOnlineIfPossible;
- (void)_bringOnlineIfPossibleDelayed;
- (void)rescan;
@property(readonly, nonatomic) BOOL isWidgetSource;
@property(readonly, nonatomic) BOOL isNetworkSource;
@property(readonly, nonatomic) BOOL isShallow;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)commonInit;
- (id)initForLocation:(long long)arg1 type:(long long)arg2;
- (void)updateFlagsStorage;
- (void)updateFSEventIDStorage;
- (void)updateFSEventSourceStorage;
@property(readonly, copy) NSString *sourceTableName;
- (id)storageCreationDictionary;
- (id)initWithSQLStatement:(struct sqlite3_stmt *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

