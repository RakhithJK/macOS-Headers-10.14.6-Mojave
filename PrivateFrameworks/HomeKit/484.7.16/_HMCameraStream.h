//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/_HMCameraSource.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface _HMCameraStream : _HMCameraSource <HMFMessageReceiver>
{
    unsigned long long _audioStreamSetting;
    NSNumber *_audioVolume;
}

- (void).cxx_destruct;
- (void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAudioVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAudioVolume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSNumber *audioVolume; // @synthesize audioVolume=_audioVolume;
@property(nonatomic) unsigned long long audioStreamSetting; // @synthesize audioStreamSetting=_audioStreamSetting;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 audioStreamSetting:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

