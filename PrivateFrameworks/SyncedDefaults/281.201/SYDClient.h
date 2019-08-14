//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SYDClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSString *_bundleIdentifier;
    NSString *_storeIdentifier;
    BOOL _additionalSource;
}

- (void).cxx_destruct;
- (void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageWithName:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)sendMessageWithName:(id)arg1;
- (void)_sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_sendMessageNoReply:(id)arg1;
- (id)_sendMessageWithReplySync:(id)arg1;
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)shutdown;
- (void)_resetConnection;
- (void)_createConnectionIfNecessary;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3;
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3 additionalSource:(BOOL)arg4;

@end

