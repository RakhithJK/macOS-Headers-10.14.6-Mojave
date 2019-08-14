//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorageImplementation-Protocol.h>

@class CPLResource, CPLScopedIdentifier, NSArray;
@protocol NSFastEnumeration;

@protocol CPLEngineResourceDownloadQueueImplementation <CPLEngineStorageImplementation>
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id <NSFastEnumeration>)enumeratorForDownloadedResources;
- (BOOL)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (NSArray *)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)removeBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)reenqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(BOOL)arg3 didDiscard:(char *)arg4 error:(id *)arg5;
- (BOOL)enqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 downloading:(BOOL)arg2 error:(id *)arg3;
- (unsigned long long)newTaskIdentifier;
@end
