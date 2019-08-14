//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, CKSQLite, CKSQLitePool, NSDate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDRecordCache : NSObject
{
    CKSQLite *_db;
    CKSQLitePool *_dbPool;
    CKDClientContext *_context;
    long long _scope;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastExpiryAttempt;
}

+ (id)_expiryDateFormatter;
@property(retain, nonatomic) NSDate *lastExpiryAttempt; // @synthesize lastExpiryAttempt=_lastExpiryAttempt;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(retain, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) CKSQLitePool *dbPool; // @synthesize dbPool=_dbPool;
@property(retain, nonatomic) CKSQLite *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)scheduleRecordExpirationWithExpiryDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)sqlBatchCount;
- (unsigned long long)recordCacheSizeLimit;
- (void)_attemptRecordExpiryIfNeeded;
- (unsigned long long)_lockedSizeOfAllRecordsInDb;
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1;
- (void)clearAllRecordsForZoneWithID:(id)arg1;
- (void)clearAllRecords;
- (void)deleteRecordWithID:(id)arg1;
- (id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2;
- (void)addRecord:(id)arg1 knownUserKeys:(id)arg2;
- (id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2;
- (id)recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;
- (id)_recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (BOOL)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;
- (BOOL)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;
- (id)_dsid;
- (void)close;
- (void)open;
- (void)releaseDatabase;
- (id)initWithDatabase:(id)arg1 dbPool:(id)arg2 context:(id)arg3 scope:(long long)arg4;

@end

