//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/NSObject-Protocol.h>

@class EWSSubscription, NSArray, NSError;

@protocol EWSSubscriptionDelegate <NSObject>

@optional
- (void)subscription:(EWSSubscription *)arg1 failedWithError:(NSError *)arg2;
- (void)subscription:(EWSSubscription *)arg1 receivedEvents:(NSArray *)arg2;
- (void)subscriptionDidUnsubscribe:(EWSSubscription *)arg1;
- (void)subscriptionDidSubscribe:(EWSSubscription *)arg1;
@end

