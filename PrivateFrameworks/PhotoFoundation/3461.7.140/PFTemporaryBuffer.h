//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PFTemporaryBuffer : NSObject
{
    NSString *_name;
    unsigned long long _maximumSize;
    unsigned long long _roundTo;
    float _maximumWaste;
    unsigned long long _maximumRetiredCount;
    NSObject<OS_dispatch_queue> *_recentQueue;
    NSMutableArray *_recentList;
    int _currentPartition;
    NSObject<OS_dispatch_queue> *_retiredQueue[4];
    NSMutableArray *_retiredList[4];
    long long _recentBytes;
    int _recentCount;
    long long _recentHitBytes;
    int _recentHitCount;
    long long _retiredBytes;
    int _retiredCount;
    long long _retiredHitBytes;
    int _retiredHitCount;
    long long _newTemporaryBuffersBytes;
    int _newTemporaryBuffersCount;
    long long _purgedBytes;
    int _purgedCount;
    long long _recycledBytes;
    int _recycledCount;
    long long _recycledPurgableBytes;
    int _recycledPurgableCount;
    long long _recycledPurgedBytes;
    int _recycledPurgedCount;
    BOOL _retireRecentScheduled;
    char _retiredMaximumScheduled[4];
}

+ (void)recylePurgeableData:(id)arg1;
+ (id)newRecycledPurgeableDataWithMinimumSize:(unsigned long long)arg1;
+ (id)obtainBuffer:(unsigned long long)arg1;
+ (id)newBuffer:(unsigned long long)arg1;
+ (void)withTemporaryBufferOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (void)flush;
+ (id)temporaryBuffers;
+ (id)temporaryBufferFactoryForSize:(unsigned long long)arg1;
@property(readonly) unsigned long long maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)flush;
- (id)statistics;
- (void)recylePurgeableData:(id)arg1;
- (id)newBufferWithSize:(unsigned long long)arg1;
- (id)newFindRecycledDataWithMinimumSize:(unsigned long long)arg1;
- (void)_retireRecent;
- (void)_enforceRetiredMaximum:(int)arg1;
- (void)_scheduleEnforceRetiredMaximum:(int)arg1;
- (void)_scheduleRetireRecent;
- (void)_pruneRetired:(int)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 maximumSize:(unsigned long long)arg2 maximumRetiredCount:(unsigned long long)arg3 roundTo:(unsigned long long)arg4 maximumWaste:(float)arg5;

@end
