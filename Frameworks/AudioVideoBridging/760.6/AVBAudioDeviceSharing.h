//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol ADDDeviceService;

@interface AVBAudioDeviceSharing : NSObject
{
    NSXPCConnection *_daemonConnection;
    id <ADDDeviceService> _daemonObject;
}

+ (id)audioDeviceSharing;
- (void)dealloc;
- (void)getSimpleVirtualAudioInterfaceList:(CDUnknownBlockType)arg1;
- (void)removeSimpleVirtualAudioOnInterface:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSimpleVirtualAudioOnInterface:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCustomVirtualAudioEntityUIDList:(CDUnknownBlockType)arg1;
- (void)getCustomVirtualAudioEntityConfigForUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeCustomVirtualAudioEntityInterfaceWithName:(id)arg1 fromEntityWithUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addCustomVirtualAudioEntityInterfaceWithName:(id)arg1 toEntityWithUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)addCustomVirtualAudioEntityWithConfig:(id)arg1 forUID:(id)arg2 error:(id *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getCoreAudioDeviceList:(CDUnknownBlockType)arg1;
- (void)getAVFoundationDeviceList:(CDUnknownBlockType)arg1;
- (void)removeCoreAudioDevice:(id)arg1;
- (void)addCoreAudioDevice:(id)arg1;
- (void)removeAVFoundationDevice:(id)arg1;
- (void)addAVFoundationDevice:(id)arg1;
- (id)init;

@end

