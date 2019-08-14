//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AXHearingSupport/AXIDCRemoteController.h>

#import <AXHearingSupport/AXHARemoteControllerProtocol-Protocol.h>

@class AXDispatchTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_receivedPacketQueue;
    BOOL didValidateHIID;
    AXDispatchTimer *_communicationTimer;
}

@property(retain, nonatomic) AXDispatchTimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) BOOL didValidateHIID; // @synthesize didValidateHIID;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendDataChunk;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1;
- (BOOL)outputStreamReady;
- (void)didCommunicate;
- (void)validatePairedAid;
- (void)closeConnectionWithError:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

