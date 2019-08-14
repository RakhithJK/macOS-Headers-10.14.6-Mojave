//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioConverterDelegate-Protocol.h>
#import <CoreSpeech/CSAudioRouteChangeMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSpIdSpeakerRecognizerDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechManagerDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerDelegate-Protocol.h>

@class CSAudioConverter, CSAudioSampleRateConverter, CSAudioZeroCounter, CSEndpointerProxy, CSPlainAudioFileWriter, CSSpIdImplicitTraining, CSSpeakerIdRecognizerFactory, CSSpeechEndHostTimeEstimator, CSSpeechManager, NSDictionary, NSString;
@protocol CSEndpointAnalyzer, CSSpIdSpeakerRecognizer, CSSpeechControllerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface CSSpeechController : NSObject <CSAudioConverterDelegate, CSSpIdSpeakerRecognizerDelegate, CSAudioRouteChangeMonitorDelegate, CSVoiceTriggerDelegate, CSSpeechManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioConverter *_opusAudioConverter;
    CSAudioConverter *_narrowBandOpusConverter;
    CSAudioConverter *_audioConverter;
    CSAudioSampleRateConverter *_downsampler;
    NSDictionary *_requestedRecordSettings;
    NSDictionary *_lastVoiceTriggerInfo;
    CSAudioZeroCounter *_continuousZeroCounter;
    NSObject<OS_dispatch_queue> *_audibleFeedbackQueue;
    NSObject<OS_dispatch_group> *_twoShotAudibleFeedbackDecisionGroup;
    BOOL _isOpus;
    BOOL _isActivated;
    BOOL _isNarrowBand;
    BOOL _twoShotNotificationEnabled;
    BOOL _isMediaPlaying;
    BOOL _isAlarmPlaying;
    BOOL _isTimerPlaying;
    BOOL _isSoundPlaying;
    BOOL _isRemoteVADAvailableStream;
    BOOL _myriadPreventingTwoShotFeedback;
    BOOL _needsPostGain;
    id <CSSpeechControllerDelegate> _delegate;
    CSEndpointerProxy *_endpointerProxy;
    CSSpeechManager *_speechManager;
    NSDictionary *_avvcContext;
    CSPlainAudioFileWriter *_audioFileWriter;
    CSSpeakerIdRecognizerFactory *_spIdFactory;
    id <CSSpIdSpeakerRecognizer> _spIdRecognizer;
    CSSpIdImplicitTraining *_voiceTriggerImplicitTraining;
    NSDictionary *_spIdUserScores;
    unsigned long long _activeChannel;
    CSSpeechEndHostTimeEstimator *_speechEndHostTimeEstimator;
}

+ (BOOL)isSmartSiriVolumeAvailable;
+ (id)sharedController;
@property(retain, nonatomic) CSSpeechEndHostTimeEstimator *speechEndHostTimeEstimator; // @synthesize speechEndHostTimeEstimator=_speechEndHostTimeEstimator;
@property(nonatomic) BOOL needsPostGain; // @synthesize needsPostGain=_needsPostGain;
@property(nonatomic) BOOL myriadPreventingTwoShotFeedback; // @synthesize myriadPreventingTwoShotFeedback=_myriadPreventingTwoShotFeedback;
@property(nonatomic) BOOL isRemoteVADAvailableStream; // @synthesize isRemoteVADAvailableStream=_isRemoteVADAvailableStream;
@property(nonatomic) BOOL isSoundPlaying; // @synthesize isSoundPlaying=_isSoundPlaying;
@property(nonatomic) BOOL isTimerPlaying; // @synthesize isTimerPlaying=_isTimerPlaying;
@property(nonatomic) BOOL isAlarmPlaying; // @synthesize isAlarmPlaying=_isAlarmPlaying;
@property(nonatomic) BOOL isMediaPlaying; // @synthesize isMediaPlaying=_isMediaPlaying;
@property(nonatomic) BOOL twoShotNotificationEnabled; // @synthesize twoShotNotificationEnabled=_twoShotNotificationEnabled;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(retain, nonatomic) NSDictionary *spIdUserScores; // @synthesize spIdUserScores=_spIdUserScores;
@property(retain, nonatomic) CSSpIdImplicitTraining *voiceTriggerImplicitTraining; // @synthesize voiceTriggerImplicitTraining=_voiceTriggerImplicitTraining;
@property(retain, nonatomic) id <CSSpIdSpeakerRecognizer> spIdRecognizer; // @synthesize spIdRecognizer=_spIdRecognizer;
@property(retain, nonatomic) CSSpeakerIdRecognizerFactory *spIdFactory; // @synthesize spIdFactory=_spIdFactory;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(nonatomic) BOOL isNarrowBand; // @synthesize isNarrowBand=_isNarrowBand;
@property(nonatomic) BOOL isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) BOOL isOpus; // @synthesize isOpus=_isOpus;
@property(retain, nonatomic) NSDictionary *avvcContext; // @synthesize avvcContext=_avvcContext;
@property(nonatomic) __weak CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) CSEndpointerProxy *endpointerProxy; // @synthesize endpointerProxy=_endpointerProxy;
@property(nonatomic) __weak id <CSSpeechControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;
- (void)speakerRecognizerFinishedProcessing:(id)arg1 withFinalSpeakerIdInfo:(id)arg2;
- (void)speakerRecognizer:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)_setSoundPlayingState;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)endWaitingForMyriadWithDecision:(unsigned long long)arg1;
- (void)beginWaitingForMyriad;
- (float)getSmartSiriVolume;
- (BOOL)isSmartSiriVolumeAvailable;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateEndpointerDelayedTrigger:(BOOL)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (id)endpointerModelVersion;
- (double)lastEndOfVoiceActivityTime;
- (unsigned long long)_phaticPlaybackReason;
- (float)_scheduledPhaticDelay;
- (BOOL)_shouldSchedulePhaticAtStartRecording;
- (BOOL)_canPlayPhaticDuringMediaPlayback;
- (id)_getRecordSettings;
- (id)_contextToString:(id)arg1;
- (void)_deviceAudioLogging;
- (id)_getSpeechIdentifier;
- (void)processServerEndpointFeatures:(id)arg1;
- (void)resetEndpointer;
- (long long)_currentAudioRecorderSampleRate;
- (void)setEndpointAnalyzerDelegate:(id)arg1;
@property(readonly, nonatomic) id <CSEndpointAnalyzer> endpointAnalyzer;
- (id)metrics;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (id)voiceTriggerInfo;
- (unsigned long long)outputReferenceChannel;
- (float)averagePowerForOutputReference;
- (float)peakPowerForOutputReference;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4;
- (BOOL)_setupAudioConverter:(BOOL)arg1;
- (void)_setupDownsamplerIfNeeded;
- (void)speechManagerDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)speechManagerDetectedSystemVolumeChange:(id)arg1 withVolume:(float)arg2 forReason:(unsigned long long)arg3;
- (void)speechManagerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (id)speechManagerRecordingContext;
- (BOOL)_shouldEstimateSpeechEndHosttime;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (BOOL)_isJarvisButtonPress;
- (BOOL)_isJarvisVoiceTriggered;
- (BOOL)_isHearstDoubleTap;
- (BOOL)_isHearstVoiceTriggered;
- (BOOL)_isSpeakerIdTrainingTriggered;
- (BOOL)_isAutoPrompted;
- (BOOL)_isVoiceTriggered;
- (BOOL)isRTSTriggered;
- (BOOL)isJarvisVoiceTriggered;
- (BOOL)isHearstVoiceTriggered;
- (BOOL)isVoiceTriggered;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (BOOL)isRecording;
- (void)stopRecording;
- (BOOL)startRecording:(id *)arg1;
- (BOOL)_lastVoiceTriggerWasHearst;
- (BOOL)_shouldSetStartSampleCount;
- (BOOL)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (void)_setupSpeakerId;
@property(nonatomic) BOOL duckOthersOption;
- (double)getRecordBufferDuration;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (void)setSynchronousCallbackEnabled:(BOOL)arg1;
- (struct AudioStreamBasicDescription)getLPCMAudioStreamBasicDescription;
- (id)recordSettings;
- (void)reset;
- (void)resetAudioSession;
- (void)prewarmAudioSession;
- (void)preheat;
- (BOOL)setCurrentContext:(id)arg1 error:(id *)arg2;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (void)startController;
- (BOOL)initializeRecordSessionWithContext:(id)arg1;
- (void)_initializeTimerState;
- (void)_initializeAlarmState;
- (void)_initializeMediaPlayingState;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

