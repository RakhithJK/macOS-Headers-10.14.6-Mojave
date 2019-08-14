//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WebNotificationPrivate;

@interface WebNotification : NSObject
{
    WebNotificationPrivate *_private;
}

- (void)dispatchErrorEvent;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchShowEvent;
- (unsigned long long)notificationID;
- (id)origin;
- (id)dir;
- (id)lang;
- (id)iconURL;
- (id)tag;
- (id)body;
- (id)title;
- (void)dealloc;
- (id)init;

@end

