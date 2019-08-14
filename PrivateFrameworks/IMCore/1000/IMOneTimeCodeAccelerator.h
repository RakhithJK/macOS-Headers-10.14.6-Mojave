//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDaemonController;
@protocol IMRemoteDaemonProtocol;

@interface IMOneTimeCodeAccelerator : NSObject
{
    BOOL _requestedOneTimeCodeStatusForConnection;
    IMDaemonController<IMRemoteDaemonProtocol> *_daemon;
    CDUnknownBlockType _updateBlock;
}

@property(nonatomic) BOOL requestedOneTimeCodeStatusForConnection; // @synthesize requestedOneTimeCodeStatusForConnection=_requestedOneTimeCodeStatusForConnection;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) IMDaemonController<IMRemoteDaemonProtocol> *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (void)daemonConnectionLost;
- (void)daemonControllerDidDisconnect;
- (void)daemonControllerDidConnect;
- (void)daemonControllerWillConnect;
- (void)_incomingCodeUpdateFromDaemon:(id)arg1;
- (void)setUpConnectionToDaemaon;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)consumeCodeWithGuid:(id)arg1;
- (id)initWithBlockForUpdates:(CDUnknownBlockType)arg1;

@end

