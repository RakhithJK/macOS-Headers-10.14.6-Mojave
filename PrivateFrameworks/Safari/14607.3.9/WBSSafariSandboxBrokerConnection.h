//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSSafariSandboxBrokerProtocol-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)relatedExtensionsForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_connectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ensureConnected:(CDUnknownBlockType)arg1;

@end

