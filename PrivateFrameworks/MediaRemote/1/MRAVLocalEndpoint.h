//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRAVConcreteEndpoint.h>

#import <MediaRemote/MROutputContextDataSourceDelegate-Protocol.h>
#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRAVOutputContext, MROutputContextController, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRAVLocalEndpoint : MRAVConcreteEndpoint <NSSecureCoding, MROutputContextDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRAVOutputContext *_outputContext;
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MROutputContextController *_outputContextController;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_reloadOutputDevicesFromContext;
- (void)_localizeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3;
- (void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolume:(float)arg3;
- (void)outputContextDataSource:(id)arg1 didRemoveOutputDevice:(id)arg2;
- (void)outputContextDataSource:(id)arg1 didAddOutputDevice:(id)arg2;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)canModifyGroupMembership;
- (BOOL)isProxyGroupPlayer;
- (long long)connectionType;
- (id)uniqueIdentifier;
@property(copy, nonatomic) NSArray *outputDevices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithOutputDevices:(id)arg1;
- (id)initWithOutputContext:(id)arg1;
- (id)initWithOutputContext:(id)arg1 wantsUpdates:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

