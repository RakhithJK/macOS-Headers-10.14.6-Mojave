//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSVTUIAudioSessionDelegate-Protocol.h>
#import <CoreSpeech/CSVTUIEndPointDelegate-Protocol.h>
#import <CoreSpeech/SFSpeechRecognitionTaskDelegate-Protocol.h>

@class CSVTUIKeywordDetector, NSMutableArray, NSString, NSTimer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, SFSpeechRecognizer;
@protocol CSVTUIAudioSession, CSVTUITrainingSessionDelegate, OS_dispatch_queue;

@interface CSVTUITrainingSession : NSObject <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate>
{
    long long _status;
    long long _utteranceId;
    long long _sessionNumber;
    NSString *_locale;
    CSVTUIKeywordDetector *_keywordDetector;
    id <CSVTUIAudioSession> _audioSession;
    SFSpeechRecognizer *_speechRecognizer;
    SFSpeechAudioBufferRecognitionRequest *_speechRecognitionRequest;
    SFSpeechRecognitionTask *_speechRecognitionTask;
    NSTimer *_masterTimer;
    NSMutableArray *_pcmBufArray;
    BOOL _resultReported;
    BOOL _sessionProcess;
    BOOL _sessionSuspended;
    BOOL _ASRErrorOccured;
    id <CSVTUITrainingSessionDelegate> _sessionDelegate;
    CDUnknownBlockType _trainingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _numRequiredTrailingSamples;
    long long _numTrailingSamples;
}

- (void).cxx_destruct;
- (void)_registerEndPointTimeout;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)stopMasterTimer;
- (void)handleMasterTimeout:(id)arg1;
- (void)startMasterTimerWithTimeout:(float)arg1;
- (void)finishSpeechRecognitionTask;
- (void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)arg1;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)didDetectBeginOfSpeech;
- (void)audioSessionUnsupportedAudioRoute;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
- (long long)numSamplesInPCMBuffer;
- (id)createAVAudioPCMBufferWithNSData:(id)arg1;
- (void)pushAudioInputIntoPCMBuffer:(id)arg1;
- (void)computeRequiredTrailingSamples;
- (void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)arg1;
- (void)feedSpeechRecognitionWithPCMBuffer;
- (void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(CDUnknownBlockType)arg1;
- (void)handleAudioBufferForVTWithAudioInput:(id)arg1 withDetectedBlock:(CDUnknownBlockType)arg2;
- (void)updateMeterAndForward;
- (id)requestTriggeredUtterance:(id)arg1;
- (void)handleAudioInput:(id)arg1;
- (BOOL)setupPhraseSpotter;
- (void)resumeTraining;
- (void)suspendTraining;
- (void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2 complete:(CDUnknownBlockType)arg3;
- (void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2;
- (void)closeSessionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)resultAlreadyReported;
- (void)startTraining;
- (id)initWithUtteranceId:(long long)arg1 sessionNumber:(long long)arg2 Locale:(id)arg3 audioSession:(id)arg4 keywordDetector:(id)arg5 speechRecognizer:(id)arg6 speechRecognitionRequest:(id)arg7 sessionDelegate:(id)arg8 sessionDispatchQueue:(id)arg9 completion:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

