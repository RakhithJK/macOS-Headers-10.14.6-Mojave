//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSArray;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSFileAccessProcessManager : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _suspensionHandler;
    NSArray *_urls;
    BKSApplicationStateMonitor *_monitor;
    id _assertionToken;
    int _pendingMessageCount;
}

+ (BOOL)needToManageConnection:(id)arg1 forURLs:(id)arg2;
- (void)invalidate;
- (void)allowSuspension;
- (void)preventSuspensionWithActivityName:(id)arg1;
- (void)safelySendMessageWithReplyUsingBlock:(CDUnknownBlockType)arg1;
- (void)killProcessWithMessage:(id)arg1;
@property(copy) NSArray *URLs;
@property(copy) CDUnknownBlockType suspensionHandler;
- (void)_ensureMonitor;
- (void)dealloc;
- (id)initWithClient:(id)arg1 queue:(id)arg2;

@end

