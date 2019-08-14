//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDStreamInterface.h>

#import <HomeKitDaemon/AVCAudioStreamDelegate-Protocol.h>

@class AVCAudioStream, NSNumber, NSString;
@protocol HMDAudioStreamInterfaceDelegate;

@interface HMDAudioStreamInterface : HMDStreamInterface <AVCAudioStreamDelegate>
{
    BOOL _streamStarted;
    AVCAudioStream *_audioStream;
    id <HMDAudioStreamInterfaceDelegate> _delegate;
    unsigned long long _audioStreamSetting;
    double _rtcpSendIntervalSec;
}

+ (id)logCategory;
@property(nonatomic) double rtcpSendIntervalSec; // @synthesize rtcpSendIntervalSec=_rtcpSendIntervalSec;
@property(nonatomic) unsigned long long audioStreamSetting; // @synthesize audioStreamSetting=_audioStreamSetting;
@property(nonatomic) BOOL streamStarted; // @synthesize streamStarted=_streamStarted;
@property(readonly) __weak id <HMDAudioStreamInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCAudioStream *audioStream; // @synthesize audioStream=_audioStream;
- (void).cxx_destruct;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
- (void)streamDidStop:(id)arg1;
- (void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (void)setRtcpSendInterval:(double)arg1;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property(nonatomic) long long direction;
- (void)_callStopped:(id)arg1;
- (void)_callResumed:(id)arg1;
- (void)_callPaused:(id)arg1;
- (void)_callStarted:(id)arg1;
@property(nonatomic, getter=isMuted) BOOL mute;
- (void)_resumeStream;
- (void)_pauseStream;
- (void)stopStream;
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_updateAudioSetting:(unsigned long long)arg1;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)_startStream:(id)arg1;
- (void)startStream:(id)arg1;
- (BOOL)_initializeStreamRemoteLocal;
- (BOOL)_initializeStreamRemoteSender:(id)arg1;
- (BOOL)_initializeStreamRemoteSocketReceiver:(id)arg1;
- (BOOL)_initializeStreamRemoteDestinationReceiver:(id)arg1;
- (BOOL)_createLocalSocket;
@property(readonly, nonatomic) NSNumber *syncSource;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

