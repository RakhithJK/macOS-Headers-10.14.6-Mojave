//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation
{
    BOOL _isFetchAllSubscriptionsOperation;
    NSMutableArray *_subscriptions;
    CDUnknownBlockType _subscriptionFetchedProgressBlock;
    NSArray *_subscriptionIDs;
}

@property(nonatomic) BOOL isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property(retain, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property(copy, nonatomic) CDUnknownBlockType subscriptionFetchedProgressBlock; // @synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

