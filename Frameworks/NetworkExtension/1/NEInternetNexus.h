//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkExtension/NENexus.h>

@class NWRemotePacketProxy;

@interface NEInternetNexus : NENexus
{
    struct nw_protocol *_utunProtocol;
    NWRemotePacketProxy *_packetProxy;
}

@property(retain) NWRemotePacketProxy *packetProxy; // @synthesize packetProxy=_packetProxy;
@property struct nw_protocol *utunProtocol; // @synthesize utunProtocol=_utunProtocol;
- (void).cxx_destruct;
- (BOOL)setUseFlowswitch:(BOOL)arg1;
- (void)disconnectFlow:(id)arg1;
- (void)connectNewFlow:(id)arg1;
- (void)setRemotePacketProxy:(id)arg1;
- (BOOL)setDefaultInputHandler:(struct nw_protocol *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(BOOL)arg3;

// Remaining properties
@property(readonly) struct NEVirtualInterface_s *virtualInterface; // @dynamic virtualInterface;

@end

