//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPCloudRepeatableTask, NSArray, NSDate, NSError, NSObject, NSOperation, NSPredicate, NSString, NSUUID;
@protocol MSPCloudRecord, MSPCloudReference, MSPCloudRequest, MSPCloudRequestGroup, OS_dispatch_queue;

@protocol MSPCloudAccess <NSObject>
@property(copy, nonatomic) CDUnknownBlockType contentsDidChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType availabilityDidChangeHandler;
- (BOOL)shouldRetryAfterError:(NSError *)arg1 isCancelation:(char *)arg2 afterDelay:(out id *)arg3 withResolvingTask:(out id *)arg4;
- (void)checkForAvailabilityWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 schedulePreAvailabilityOperationHandler:(void (^)(NSOperation *))arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (NSOperation<MSPCloudRequest> *)newSubscriptionRegistrationRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 successHandler:(void (^)(NSError *))arg2;
- (NSOperation<MSPCloudRequest> *)newModifyClientRegistrationRecordRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 editedRecord:(id <MSPCloudRecord>)arg2;
- (NSOperation<MSPCloudRequest> *)newFetchRequestForCurrentClientRegistrationRecordWithGroup:(id <MSPCloudRequestGroup>)arg1 successHandler:(void (^)(id <MSPCloudRecord>))arg2;
- (NSOperation<MSPCloudRequest> *)newCombinedCachingFetchRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 forTask:(MSPCloudRepeatableTask *)arg2 successHandler:(void (^)(id <MSPCloudCachingFetchResult>, id <MSPCloudCachingFetchResult>, id <MSPCloudRecord>))arg3;
- (NSOperation<MSPCloudRequest> *)newQueryRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 forRecordsOfType:(NSString *)arg2 predicate:(NSPredicate *)arg3 sortDescriptors:(NSArray *)arg4 successHandler:(void (^)(NSArray *))arg5;
- (NSOperation<MSPCloudRequest> *)newModifyRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 forRecordsToModify:(NSArray *)arg2 namesOfRecordsToDelete:(NSArray *)arg3;
- (NSOperation<MSPCloudRequest> *)newFetchRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 forRecordsWithNames:(NSArray *)arg2 successHandler:(void (^)(NSArray *))arg3;
- (id <MSPCloudRequestGroup>)newRequestGroupWithName:(NSString *)arg1 size:(long long)arg2;
- (id <MSPCloudReference>)newReferenceToRecord:(id <MSPCloudRecord>)arg1;
- (id <MSPCloudReference>)newReferenceToRecordWithName:(NSString *)arg1;
- (id <MSPCloudRecord>)newRecordOfType:(NSString *)arg1 name:(NSString *)arg2;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (NSDate *)minimumStartDate;
- (void)setClientRegistrationIdentifier:(NSUUID *)arg1;
@end

