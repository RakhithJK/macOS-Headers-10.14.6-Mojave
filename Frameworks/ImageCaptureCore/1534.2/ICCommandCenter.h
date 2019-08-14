//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ImageCaptureCore/icddProtocol-Protocol.h>

@class NSLock, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ICCommandCenter : NSObject <icddProtocol>
{
    int _selfPID;
    NSMutableDictionary *_pendingCommands;
    BOOL _openSession;
    NSXPCConnection *_connection;
    unsigned int _connectionAttempts;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_serialCommandQueue;
    NSMutableDictionary *_replyDict;
    NSObject<OS_dispatch_semaphore> *_msgSem;
}

+ (id)defaultCenter;
- (void)unlockConnection;
- (void)lockConnection;
- (void)releaseConnection;
- (void)resetConnection;
- (BOOL)sendMessageCmd:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)getConnection;
- (void)dealloc;
- (void)sendCommand:(id)arg1 from:(id)arg2;
- (void)handleCompletionError:(id)arg1;
- (void)handleCompletionEvent:(id)arg1;
- (void)handleNotificationEvent:(id)arg1;
- (void)messageFromClient:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)messageFromDevice:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)messageFromICDD:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)icddConnectionSetup:(id)arg1;
- (id)init;

@end

