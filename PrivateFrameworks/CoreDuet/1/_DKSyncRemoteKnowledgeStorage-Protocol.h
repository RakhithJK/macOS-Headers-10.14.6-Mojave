//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDate, NSString, _DKSyncDeletedEventIDs, _DKSyncPeer;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@protocol _DKSyncRemoteKnowledgeStorage
@property(readonly) BOOL isAvailable;
- (long long)transportType;
- (NSString *)name;
- (void)updateStorageWithAddedEvents:(NSArray *)arg1 deletedEventIDs:(_DKSyncDeletedEventIDs *)arg2 highPriority:(BOOL)arg3 completion:(void (^)(NSError *))arg4;
- (void)setFetchDelegate:(id <_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1;
- (void)fetchSourceDeviceIDFromPeer:(_DKSyncPeer *)arg1 highPriority:(BOOL)arg2 completion:(void (^)(NSUUID *, NSError *))arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(_DKSyncPeer *)arg1 highPriority:(BOOL)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)fetchDeletedEventIDsFromPeer:(_DKSyncPeer *)arg1 sinceDate:(NSDate *)arg2 streamNames:(NSArray *)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(void (^)(NSArray *, NSDate *, NSError *))arg6;
- (void)fetchAdditionsHighWaterMarkWithPeer:(_DKSyncPeer *)arg1 highPriority:(BOOL)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)fetchEventsFromPeer:(_DKSyncPeer *)arg1 creationDateBetweenDate:(NSDate *)arg2 andDate:(NSDate *)arg3 streamNames:(NSArray *)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(BOOL)arg7 completion:(void (^)(NSArray *, NSDate *, NSDate *, NSError *))arg8;
- (void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(_DKSyncPeer *)arg2;
- (BOOL)hasDeletionsFlagForPeer:(_DKSyncPeer *)arg1;
- (void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(_DKSyncPeer *)arg2;
- (BOOL)hasAdditionsFlagForPeer:(_DKSyncPeer *)arg1;
- (void)clearPrewarmedFlag;
- (void)prewarmFetchWithCompletion:(void (^)(NSError *))arg1;
- (void)cancelOutstandingOperations;
- (void)start;
@end

