//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

@class FCMTWriterLock, NSDictionary, NSMutableDictionary, NSOrderedSet, NSSet;
@protocol FCTagRanking;

@interface FCSubscriptionList : FCPrivateDataController
{
    NSOrderedSet *_orderedSubscribedTagIDs;
    NSSet *_subscribedTagIDs;
    NSSet *_mutedTagIDs;
    NSSet *_autoFavoriteTagIDs;
    NSSet *_groupableTagIDs;
    NSSet *_ignoredTagIDs;
    id <FCTagRanking> _subscribedTagRanker;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
    FCMTWriterLock *_itemsLock;
}

+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMTWriterLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain, nonatomic) NSMutableDictionary *mutableSubscriptionsBySubscriptionID; // @synthesize mutableSubscriptionsBySubscriptionID=_mutableSubscriptionsBySubscriptionID;
@property(retain, nonatomic) id <FCTagRanking> subscribedTagRanker; // @synthesize subscribedTagRanker=_subscribedTagRanker;
@property(copy, nonatomic) NSSet *ignoredTagIDs; // @synthesize ignoredTagIDs=_ignoredTagIDs;
@property(copy, nonatomic) NSSet *groupableTagIDs; // @synthesize groupableTagIDs=_groupableTagIDs;
@property(copy, nonatomic) NSSet *autoFavoriteTagIDs; // @synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs;
@property(copy, nonatomic) NSSet *mutedTagIDs; // @synthesize mutedTagIDs=_mutedTagIDs;
@property(copy, nonatomic) NSSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
@property(copy, nonatomic) NSOrderedSet *orderedSubscribedTagIDs; // @synthesize orderedSubscribedTagIDs=_orderedSubscribedTagIDs;
- (void).cxx_destruct;
- (unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)arg1;
- (id)t_reconcileSubscriptions:(id)arg1;
- (id)_reconcileSubscriptions:(id)arg1;
- (void)_regenerateSortedSubscriptions;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4;
- (id)_subscriptionFromRecord:(id)arg1;
- (long long)_orderOfHighestRankedTagSubscription;
- (id)_newSubscriptionOrder;
- (void)_assignOrderToTagSubscriptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_removeRemoteSubscription:(id)arg1;
- (void)_removeRemoteSubscriptions:(id)arg1;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (void)_addRemoteSubscriptions:(id)arg1;
- (BOOL)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (BOOL)hasIgnoredSubscriptionForTagID:(id)arg1;
- (BOOL)hasMutedSubscriptionForTagID:(id)arg1;
- (BOOL)setNotificationsEnabled:(BOOL)arg1 forTagID:(id)arg2;
- (BOOL)hasNotificationsEnabledForTagID:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *allSubscribedTagIDs;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTagIDOfAnyType:(id)arg1;
- (id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)hasSubscriptionForTagID:(id)arg1;
- (BOOL)canAddSubscription;
- (id)subscriptionsForType:(unsigned long long)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 eventInitiationLevel:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 originProvider:(CDUnknownBlockType)arg3 eventInitiationLevelProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5;
- (BOOL)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(BOOL)arg5 eventInitiationLevel:(long long)arg6;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(CDUnknownBlockType)arg2 originProvider:(CDUnknownBlockType)arg3 groupID:(id)arg4 notificationsEnabled:(BOOL)arg5 eventInitiationLevelProvider:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (id)recordsForRestoringZoneName:(id)arg1;
- (BOOL)canHelpRestoreZoneName:(id)arg1;
- (void)handleSyncCompletion;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

@end

