//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMSharedUtilities/IMEventListener.h>

@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener
{
    NSString *_registeredNotificationName;
    NSString *_notificationName;
    id _notificationObject;
}

+ (id)eventListenerForNotificationName:(id)arg1 object:(id)arg2;
+ (id)eventListenerForNotificationName:(id)arg1;
@property(readonly) __weak id notificationObject; // @synthesize notificationObject=_notificationObject;
@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly, nonatomic) NSString *registeredNotificationName; // @synthesize registeredNotificationName=_registeredNotificationName;
- (void).cxx_destruct;
- (void)willReset;
- (void)willStopListening;
- (void)willStartListening;
- (BOOL)isListening;
- (void)dealloc;
- (void)registerForNotificationName:(id)arg1 object:(id)arg2;
- (void)registerForNotificationName:(id)arg1;
- (void)_notification:(id)arg1;
@property(readonly) BOOL isRegisteredForNotification;

@end

