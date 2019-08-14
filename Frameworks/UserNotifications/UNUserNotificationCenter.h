//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/UNUserNotificationCenterDelegateConnectionListenerDelegate-Protocol.h>
#import <UserNotifications/UNUserNotificationServiceConnectionObserver-Protocol.h>

@class NSString;
@protocol UNUserNotificationCenterDelegate;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate>
{
    id <UNUserNotificationCenterDelegate> _delegate;
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsContentExtensions;
+ (id)currentNotificationCenter;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property __weak id <UNUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidateAndUnregister;
- (void)willPresentNotification:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getBadgeNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)badgeNumber;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)getDeliveredNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllPendingNotificationRequests;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addNotificationRequest:(id)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)pendingNotificationRequests;
- (void)getNotificationCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)notificationCategories;
- (void)setNotificationCategories:(id)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)notificationSettings;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWantsNotificationResponsesDelivered;
@property(readonly) BOOL supportsContentExtensions;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
