//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureAudioFileOutputInternal, NSArray, NSDictionary;

@interface AVCaptureAudioFileOutput : AVCaptureFileOutput
{
    AVCaptureAudioFileOutputInternal *_internal;
}

+ (id)availableOutputFileTypes;
+ (id)_avMetadataToID3Metadata:(id)arg1;
+ (id)new;
+ (void)initialize;
- (CDStruct_1b6d18a9)_syncTime;
- (int)_compressorDidRenderConnection:(id)arg1 busNumber:(unsigned int)arg2 processHints:(unsigned int *)arg3 sampleBuffer:(struct opaqueCMSampleBuffer **)arg4;
- (void)_operationFailed:(id)arg1;
- (void)_filesCompleted:(id)arg1;
- (void)_forciblyStopFileWritingForRunningRecordingOperation;
- (void)_stopFileWritingForConnection:(id)arg1 fileControlToken:(struct OpaqueFileWritingControlToken *)arg2 runningRecordingOperationDescriptor:(id)arg3 stopWritingFlags:(unsigned int)arg4 stopError:(id)arg5;
- (void)_startFileWritingForConnection:(id)arg1 fileControlToken:(struct OpaqueFileWritingControlToken *)arg2 runningRecordingOperationDescriptor:(id)arg3;
- (void)_controlFileWritingForConnection:(id)arg1 busNumber:(unsigned int)arg2 fileControlToken:(struct OpaqueFileWritingControlToken *)arg3;
- (unsigned int)_fileWriterUnitElementForConnection:(id)arg1;
- (void)_updateCompressorNodesForConnection:(id)arg1;
- (BOOL)getAudioSplitterNode:(int *)arg1 andAudioMixerNode:(int *)arg2 forConnection:(id)arg3;
- (void)graphWillStopForSession:(id)arg1 error:(id)arg2;
- (void)graphWillStartForSession:(id)arg1;
- (BOOL)setEnabled:(BOOL)arg1 forConnection:(id)arg2;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (id)notReadyError;
- (void)_cancelAllOperations;
- (void)_handleCanceledOperations:(id)arg1;
- (void)_setNoDataConnections:(id)arg1;
- (id)_noDataConnections;
- (void)_removeActiveConnection:(id)arg1;
- (void)_addActiveConnection:(id)arg1;
- (id)_activeConnections;
- (void)_setStopError:(id)arg1;
- (id)_stopError;
- (BOOL)_removeRunningRecordingOperationDescriptorEqualTo:(id)arg1;
- (void)_setRunningRecordingOperationDescriptor:(id)arg1;
- (id)_runningRecordingOperationDescriptor;
- (void)_fileControlCallbackTimeout:(id)arg1;
- (void)_cancelFileControlCallbackTimeoutTimer;
- (void)_startFileControlCallbackTimeoutTimer;
- (void)_setPaused:(BOOL)arg1;
- (void)_refreshRecordingState;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)stopRecording;
- (void)_startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (long long)recordedFileSize;
- (CDStruct_1b6d18a9)recordedDuration;
- (id)stopError;
- (BOOL)isRecordingPaused;
- (BOOL)isRecording;
- (id)outputFileURL;
- (void)startRecordingToOutputFileURL:(id)arg1 outputFileType:(id)arg2 recordingDelegate:(id)arg3;
@property(copy, nonatomic) NSDictionary *audioSettings;
@property(copy, nonatomic) NSArray *metadata;
- (void)dealloc;
- (id)init;

@end

