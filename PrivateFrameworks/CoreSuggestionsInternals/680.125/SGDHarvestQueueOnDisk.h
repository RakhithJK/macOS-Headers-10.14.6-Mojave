//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class NSObject, NSString, SGDHarvestQueueFileReader, SGDHarvestQueueFileWriter, SGSqliteDatabase;
@protocol OS_dispatch_queue;

@interface SGDHarvestQueueOnDisk : SGDHarvestQueue
{
    NSString *_dirPath;
    SGSqliteDatabase *_db;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_backingQueue;
    SGDHarvestQueueFileWriter *_writerHighPriority;
    SGDHarvestQueueFileWriter *_writerLowPriority;
    SGDHarvestQueueFileReader *_reader;
    long long _idCounter;
    // Error parsing type: AQ, name: _count
    // Error parsing type: AQ, name: _countHighPriority
    // Error parsing type: AQ, name: _maxQueueItems
    // Error parsing type: AQ, name: _pendingWrites
    // Error parsing type: AQ, name: _maxPendingWrites
    id _lockStateChangeToken;
}

- (void).cxx_destruct;
- (void)writePermafail:(id)arg1;
- (void)_trimPermafailDirectory;
- (void)deleteWithItemId:(long long)arg1 fileId:(int)arg2;
- (void)markAsFailedWithId:(long long)arg1;
- (void)_popWithStringAfterWhereClause:(id)arg1 binder:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)popByItemId:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)popHighPriority:(CDUnknownBlockType)arg1;
- (void)pop:(CDUnknownBlockType)arg1;
- (void)_read:(CDStruct_beb4cc23)arg1 fileId:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 item:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)_openFilesForProcessingWhileLocked;
- (void)_unlinkFileWithIdLocked:(int)arg1;
- (void)_garbageCollectFilesAsync;
- (void)close;
@property(nonatomic) unsigned long long maxPendingWrites;
@property(nonatomic) unsigned long long maxQueueItems;
- (void)countHighPriorityItems:(unsigned long long *)arg1 lowPriorityItems:(unsigned long long *)arg2;
- (unsigned long long)count;
- (void)_initIdCounter;
- (id)_getDb;
- (id)_recreateDb;
- (BOOL)_migrateDb:(id)arg1;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1;

@end

