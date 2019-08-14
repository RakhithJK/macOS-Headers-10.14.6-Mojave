//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, MTScheduledObject, MTTimer, NSArray;
@protocol MTNotificationResponseDelegate;

@protocol MTNotificationCenter <NSObject>
- (void)dismissNotificationsForTimer:(MTTimer *)arg1;
- (void)postNotificationForScheduledTimer:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1;
- (void)postNotificationForScheduledAlarm:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;

@optional
- (void)removeAllDeliveredNotifications;
- (void)registerResponseDelegate:(id <MTNotificationResponseDelegate>)arg1;
- (void)dismissNotificationsWithIdentifiers:(NSArray *)arg1;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 dismissAction:(unsigned long long)arg2;
@end

