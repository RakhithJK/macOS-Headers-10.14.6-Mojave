//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserNotificationCenter;

@interface ACUIAccountNotifier : NSObject
{
    NSUserNotificationCenter *_notificationCenter;
}

+ (id)sharedNotifier;
@property(retain) NSUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)dismissNotificationsForAccount:(id)arg1;
- (void)postNewMultipleAddNotificationForAccount;
- (void)postNewAddNotificationForAccount:(id)arg1;
- (void)postInvalidCredentialNotificationForAccount:(id)arg1;
- (void)registerNotificationCenter;
- (id)_getACUINotificationForAccount:(id)arg1;
- (void)_initNotificationCenterIfNeeded;
- (id)init;

@end
