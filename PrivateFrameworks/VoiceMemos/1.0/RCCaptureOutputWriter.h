//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>

@class AVAssetWriter, AVCaptureAudioDataOutput, AVCaptureSession, NSDate, NSMutableArray, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue, RCCaptureOutputWriterDelegate;

@interface RCCaptureOutputWriter : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    BOOL _waitingForAVCaptureSessionDidStart;
    BOOL _handledAVCaptureSessionTerminatedAbnormally;
    BOOL _handledAVCaptureSessionFailedToStart;
    BOOL _isProcessingSamples;
    long long _AVCaptureSessionStartupState;
    unsigned long long _sampleBuffersWritten;
    NSMutableArray *_delegateBlocks;
    struct {
        long long value;
        int timescale;
        unsigned int flags;
        long long epoch;
    } _sampleBuffersWrittenDuration;
    BOOL _finalizedAssetEncounteredError;
    double _storeDemoTimeLimit;
    unsigned long long _maxRecordedFileSize;
    AVCaptureSession *_AVCaptureSession;
    long long _writerState;
    id <RCCaptureOutputWriterDelegate> _captureOutputDelegate;
    NSURL *_finalizedAssetURL;
    double _finalizedAssetDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_recordingSessionID;
    NSURL *_activeOutputFileURL;
    NSDate *_recordingCreationDate;
    NSString *_recordingUniqueID;
    AVAssetWriter *_assetWriter;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    AVCaptureAudioDataOutput *_sampleBufferDataOutput;
}

@property(retain, nonatomic) AVCaptureAudioDataOutput *sampleBufferDataOutput; // @synthesize sampleBufferDataOutput=_sampleBufferDataOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferQueue; // @synthesize sampleBufferQueue=_sampleBufferQueue;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) NSString *recordingUniqueID; // @synthesize recordingUniqueID=_recordingUniqueID;
@property(retain, nonatomic) NSDate *recordingCreationDate; // @synthesize recordingCreationDate=_recordingCreationDate;
@property(retain, nonatomic) NSURL *activeOutputFileURL; // @synthesize activeOutputFileURL=_activeOutputFileURL;
@property(copy, nonatomic) NSUUID *recordingSessionID; // @synthesize recordingSessionID=_recordingSessionID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BOOL finalizedAssetEncounteredError; // @synthesize finalizedAssetEncounteredError=_finalizedAssetEncounteredError;
@property(readonly, nonatomic) double finalizedAssetDuration; // @synthesize finalizedAssetDuration=_finalizedAssetDuration;
@property(readonly, nonatomic) NSURL *finalizedAssetURL; // @synthesize finalizedAssetURL=_finalizedAssetURL;
@property(nonatomic) __weak id <RCCaptureOutputWriterDelegate> captureOutputDelegate; // @synthesize captureOutputDelegate=_captureOutputDelegate;
@property(nonatomic) long long writerState; // @synthesize writerState=_writerState;
@property(readonly, nonatomic) AVCaptureSession *AVCaptureSession; // @synthesize AVCaptureSession=_AVCaptureSession;
- (void).cxx_destruct;
- (long long)_writerState;
- (void)_setWriterState:(long long)arg1;
- (void)_checkIfRecordingSessionEverStarted:(id)arg1;
- (void)_clearSampleDataOutput;
- (void)_prepareCaptureSessionOutputsIfNecessary;
- (void)_scheduleMainThreadDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_finalizeAssetWriting;
- (BOOL)_setupAssetWriter:(id *)arg1 sampleBufferRef:(struct opaqueCMSampleBuffer *)arg2;
- (void)_unregisterForCatpureSessionNotifications;
- (void)_registerForCatpureSessionNotifications;
- (BOOL)_handleEncounteredFatalAssetWriterError;
- (void)_sessionErrored:(id)arg1;
- (void)_sessionDidStopRunning:(id)arg1;
- (BOOL)_handleNotificationAsSessionStartFailure;
- (void)_sessionDidStartRunning:(id)arg1;
- (void)_interruptionDidBegin:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopCaptureSession;
- (void)enforceMaxRecordingDuration;
- (void)startMaximumRecordingDurationTimer;
- (BOOL)startCaptureSession;
- (void)endWriting;
- (void)resumeWriting;
- (void)pauseWriting;
- (BOOL)startWritingToOutputFileURL:(id)arg1 creationDate:(id)arg2 uniqueID:(id)arg3 beginPaused:(BOOL)arg4 captureOutputDelegate:(id)arg5;
@property(nonatomic) unsigned long long maxRecordedFileSize; // @synthesize maxRecordedFileSize=_maxRecordedFileSize;
@property(nonatomic) double storeDemoTimeLimit; // @synthesize storeDemoTimeLimit=_storeDemoTimeLimit;
@property(readonly, nonatomic) double assetWritingCheckpointInterval;
- (void)dealloc;
- (id)initWithAVCaptureSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

