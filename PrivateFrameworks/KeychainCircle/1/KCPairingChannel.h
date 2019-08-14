//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KCPairingChannelContext, NSXPCConnection;

@interface KCPairingChannel : NSObject
{
    BOOL _needInitialSync;
    _Bool _initator;
    _Bool _acceptorWillSendInitialSyncCredentials;
    unsigned int _counter;
    KCPairingChannelContext *_peerVersionContext;
    NSXPCConnection *_connection;
    CDUnknownBlockType _nextState;
}

+ (_Bool)isSupportedPlatform;
+ (id)pairingChannelAcceptor:(id)arg1;
+ (id)pairingChannelInitiator:(id)arg1;
@property(copy) CDUnknownBlockType nextState; // @synthesize nextState=_nextState;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property _Bool acceptorWillSendInitialSyncCredentials; // @synthesize acceptorWillSendInitialSyncCredentials=_acceptorWillSendInitialSyncCredentials;
@property unsigned int counter; // @synthesize counter=_counter;
@property _Bool initator; // @synthesize initator=_initator;
@property KCPairingChannelContext *peerVersionContext; // @synthesize peerVersionContext=_peerVersionContext;
@property(readonly) BOOL needInitialSync; // @synthesize needInitialSync=_needInitialSync;
- (void).cxx_destruct;
- (void)setXPCConnectionObject:(id)arg1;
- (id)exchangePacket:(id)arg1 complete:(_Bool *)arg2 error:(id *)arg3;
- (void)exchangePacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)validateStart:(CDUnknownBlockType)arg1;
- (_Bool)ensureControlChannel;
- (void)acceptorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)acceptorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)acceptorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initatorFourthPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initatorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initatorCompleteSecondPacket:(CDUnknownBlockType)arg1;
- (void)initatorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initatorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)decompressData:(id)arg1;
- (id)compressData:(id)arg1;
- (void)setNextStateError:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)oneStepTooMany:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)initAsInitiator:(_Bool)arg1 version:(id)arg2;

@end

