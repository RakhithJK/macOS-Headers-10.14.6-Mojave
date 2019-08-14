//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionProviderContext.h>

#import <NetworkExtension/NEExtensionTunnelProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionTunnelProviderProtocol-Protocol.h>

@class NEIPC, NSObject, NSString;
@protocol OS_dispatch_source;

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol>
{
    NEIPC *_ipc;
    NSObject<OS_dispatch_source> *_ipcIdleTimer;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(retain) NSObject<OS_dispatch_source> *ipcIdleTimer; // @synthesize ipcIdleTimer=_ipcIdleTimer;
@property(retain) NEIPC *ipc; // @synthesize ipc=_ipc;
- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (void)establishIPCWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetIPCIdleTimer;
- (void)handleIPCDetached;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didSetReasserting:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

