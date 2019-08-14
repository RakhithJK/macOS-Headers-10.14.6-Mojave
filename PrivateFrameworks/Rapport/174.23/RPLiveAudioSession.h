//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/AVVoiceControllerRecordDelegate-Protocol.h>

@class AVVoiceController, NSSet, NSString;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPLiveAudioSession : NSObject <AVVoiceControllerRecordDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id _selfRef;
    struct NSMutableDictionary *_peerSessionMap;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
    NSSet *_destinationIDs;
    id <RPMessageable> _messenger;
}

@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) NSSet *destinationIDs; // @synthesize destinationIDs=_destinationIDs;
- (void).cxx_destruct;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)_voiceControllerStart;
- (void)voiceControllerTearDown;
- (BOOL)voiceControllerSetupAndReturnError:(id *)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
