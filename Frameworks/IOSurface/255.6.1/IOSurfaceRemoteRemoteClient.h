//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IOSurfaceRemoteRemoteClient : NSObject
{
    int _pid;
    NSMapTable *_ioSurfaceClients;
    NSObject<OS_xpc_object> *_remoteConnection;
    NSObject<OS_dispatch_queue> *_logQueue;
    CDUnknownBlockType _logBlock;
    NSObject<OS_dispatch_queue> *_disconnectedQueue;
    CDUnknownBlockType _disconnectedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType disconnectedHandler; // @synthesize disconnectedHandler=_disconnectedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *disconnectedQueue; // @synthesize disconnectedQueue=_disconnectedQueue;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(retain, nonatomic) NSMapTable *ioSurfaceClients; // @synthesize ioSurfaceClients=_ioSurfaceClients;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1;
- (struct __IOSurfaceClient *)_getClient:(unsigned int)arg1;
- (BOOL)_removeClient:(unsigned int)arg1;
- (void)_addClient:(struct __IOSurfaceClient *)arg1;
- (void)_handleError:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRemoteConnection:(id)arg1 logQueue:(id)arg2 logBlock:(CDUnknownBlockType)arg3 disconnectedQueue:(id)arg4 disconnectedHandler:(CDUnknownBlockType)arg5;

@end

