//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, PLCoreStorage, PLTimer;
@protocol OS_dispatch_queue;

@interface PLOperator : NSObject
{
    NSMutableDictionary *_localCache;
    NSMutableDictionary *_filterDefinitions;
    NSMutableDictionary *_filterDeltaLastEntryIDs;
    NSMutableArray *_bufferedEntries;
    PLTimer *_triggerBufferFlush;
    NSMutableDictionary *_lastLogDateForEntryKey;
}

+ (id)trimConditionsWithEntryKey:(id)arg1 withTrimDate:(id)arg2 withCount:(id)arg3 withStartDateKey:(id)arg4;
+ (id)trimConditionsWithEntryKey:(id)arg1 withTrimDate:(id)arg2 withDuration:(id)arg3 withStartDateKey:(id)arg4;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryKeys;
+ (id)entryDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (BOOL)fullMode;
+ (id)defaults;
+ (BOOL)isDebugEnabledForKey:(id)arg1;
+ (BOOL)isDebugEnabled;
+ (void)setEnabled:(BOOL)arg1;
+ (BOOL)isEnabled;
+ (id)entryKeyForType:(id)arg1 andName:(id)arg2 isDynamic:(BOOL)arg3;
+ (id)entryKeyForType:(id)arg1 andName:(id)arg2;
+ (id)operator;
+ (id)storageQueueName;
+ (id)className;
+ (void)load;
@property(retain) NSMutableDictionary *lastLogDateForEntryKey; // @synthesize lastLogDateForEntryKey=_lastLogDateForEntryKey;
@property(retain) PLTimer *triggerBufferFlush; // @synthesize triggerBufferFlush=_triggerBufferFlush;
@property(retain) NSMutableArray *bufferedEntries; // @synthesize bufferedEntries=_bufferedEntries;
@property(retain) NSMutableDictionary *filterDeltaLastEntryIDs; // @synthesize filterDeltaLastEntryIDs=_filterDeltaLastEntryIDs;
@property(retain) NSMutableDictionary *filterDefinitions; // @synthesize filterDefinitions=_filterDefinitions;
@property(retain) NSMutableDictionary *localCache; // @synthesize localCache=_localCache;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (id)tablesToTrimConditionsForTrimDate:(id)arg1;
- (void)setupFilterRequest:(id)arg1;
- (void)logRequestNotification:(id)arg1;
- (void)subscribeNotificationsForEntries;
- (id)entryKeys;
- (id)entryDefinitions;
- (BOOL)postFilteredNotificationForEntry:(id)arg1 withFilteredDefition:(id)arg2 withNotificationName:(id)arg3;
- (void)postEntries:(id)arg1 withGroupID:(id)arg2;
- (void)postEntries:(id)arg1;
- (BOOL)shouldWriteEntry:(id)arg1 withDebug:(BOOL)arg2;
- (void)updateEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)logEntries:(id)arg1 withGroupID:(id)arg2;
- (void)logEntry:(id)arg1;
- (void)logProportionateAggregateEntry:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (void)enableBufferFlushTimer:(unsigned long long)arg1;
- (void)flushBuffer;
- (void)logFromCFCallback:(id)arg1;
- (void)log;
- (double)timeIntervalSinceLastLogForEntryKey:(id)arg1;
- (BOOL)isDebugEnabledForKey:(id)arg1;
- (BOOL)isDebugEnabled;
- (long long)defaultLongForKey:(id)arg1;
- (double)defaultDoubleForKey:(id)arg1;
- (BOOL)defaultBoolForKey:(id)arg1;
- (id)defaultObjectForKey:(id)arg1;
@property(readonly) __weak NSString *storageQueueName;
@property(readonly) __weak NSString *className;
@property(readonly) __weak PLCoreStorage *storage;
@property(readonly) __weak NSObject<OS_dispatch_queue> *storageQueue;
@property(readonly) __weak NSObject<OS_dispatch_queue> *workQueue;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)dealloc;
- (id)init;

@end
