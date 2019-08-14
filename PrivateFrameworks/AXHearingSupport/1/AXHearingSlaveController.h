//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AXHearingSupport/AXIDCSlaveController.h>

#import <AXHearingSupport/AXHARemoteControllerProtocol-Protocol.h>
#import <AXHearingSupport/AXHARemoteUpdateProtocol-Protocol.h>
#import <AXHearingSupport/NSNetServiceDelegate-Protocol.h>

@class AXDispatchTimer, AXRemoteHearingAidDevice, NSString;

@interface AXHearingSlaveController : AXIDCSlaveController <NSNetServiceDelegate, AXHARemoteUpdateProtocol, AXHARemoteControllerProtocol>
{
    BOOL didValidateHIID;
    AXDispatchTimer *_communicationTimer;
    AXRemoteHearingAidDevice *_localDevice;
}

@property(retain, nonatomic) AXRemoteHearingAidDevice *localDevice; // @synthesize localDevice=_localDevice;
@property(retain, nonatomic) AXDispatchTimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) BOOL didValidateHIID; // @synthesize didValidateHIID;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (id)device;
- (void)resetConnection;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1;
- (void)didCommunicate;
- (void)openConnectionIfNecessary;
- (void)validatePairedAid;
- (BOOL)shouldAcceptConnection;
- (double)searchTimeout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

