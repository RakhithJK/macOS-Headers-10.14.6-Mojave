//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioMix, AVComposition, AVVideoComposition, CIImage, NSArray, NSError, NUComposition, NUGeometrySpaceMap, NUImageGeometry, NUObservatory, NUPriority, NURenderJobStatistics, NURenderNode, NURenderPipeline, NURenderRequest;
@protocol NUDevice, NUExtentPolicy, NURenderStatistics, NURenderer, NUScalePolicy, OS_dispatch_group, OS_dispatch_queue;

@interface NURenderJob : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    NUObservatory *_observatory;
    NURenderJobStatistics *_stats;
    NSError *_error;
    BOOL _isAborted;
    BOOL _failed;
    BOOL _isExecuting;
    BOOL _isCanceled;
    BOOL _isFinished;
    int _rendererType;
    long long _currentStage;
    NURenderRequest *_request;
    unsigned long long _number;
    NSArray *_dependentJobs;
    NURenderNode *_prepareNode;
    NURenderNode *_renderNode;
    NUImageGeometry *_outputGeometry;
    NSObject<OS_dispatch_group> *_replyGroup;
    id <NUDevice> _device;
    NUComposition *_composition;
    NURenderPipeline *_renderPipeline;
    NUGeometrySpaceMap *_resolvedSpaceMap;
    NUImageGeometry *_fullSizeGeometry;
    CIImage *_outputImage;
    AVComposition *_outputVideo;
    AVVideoComposition *_outputVideoComposition;
    AVAudioMix *_outputAudioMix;
    CDStruct_1e2b2e48 _renderScale;
}

@property(retain, nonatomic) AVAudioMix *outputAudioMix; // @synthesize outputAudioMix=_outputAudioMix;
@property(retain, nonatomic) AVVideoComposition *outputVideoComposition; // @synthesize outputVideoComposition=_outputVideoComposition;
@property(retain, nonatomic) AVComposition *outputVideo; // @synthesize outputVideo=_outputVideo;
@property(retain, nonatomic) CIImage *outputImage; // @synthesize outputImage=_outputImage;
@property(retain, nonatomic) NUImageGeometry *fullSizeGeometry; // @synthesize fullSizeGeometry=_fullSizeGeometry;
@property(retain, nonatomic) NUGeometrySpaceMap *resolvedSpaceMap; // @synthesize resolvedSpaceMap=_resolvedSpaceMap;
@property(nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property(retain, nonatomic) NURenderPipeline *renderPipeline; // @synthesize renderPipeline=_renderPipeline;
@property(retain, nonatomic) NUComposition *composition; // @synthesize composition=_composition;
@property(readonly, nonatomic) int rendererType; // @synthesize rendererType=_rendererType;
@property(readonly, nonatomic) id <NUDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *replyGroup; // @synthesize replyGroup=_replyGroup;
@property(retain, nonatomic) NUImageGeometry *outputGeometry; // @synthesize outputGeometry=_outputGeometry;
@property(retain, nonatomic) NURenderNode *renderNode; // @synthesize renderNode=_renderNode;
@property(retain, nonatomic) NURenderNode *prepareNode; // @synthesize prepareNode=_prepareNode;
@property(readonly) BOOL isAborted; // @synthesize isAborted=_isAborted;
@property(retain) NSArray *dependentJobs; // @synthesize dependentJobs=_dependentJobs;
@property(readonly) unsigned long long number; // @synthesize number=_number;
@property(readonly) NURenderRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) id <NURenderStatistics> statistics; // @synthesize statistics=_stats;
@property(readonly) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
- (void).cxx_destruct;
- (void)_notifyCanceled:(long long)arg1;
- (void)_notifyStageTransition:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addCancelObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addStageObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(readonly) NSError *error; // @dynamic error;
@property(readonly) BOOL failed; // @dynamic failed;
- (void)fail:(id)arg1;
- (BOOL)complete:(out id *)arg1;
- (BOOL)render:(out id *)arg1;
- (id)generateVideoComposition:(out id *)arg1;
- (BOOL)requiresVideoComposition;
- (id)renderNodeWithPipelineState:(id)arg1 error:(out id *)arg2;
- (id)evaluateOutputGeometry:(out id *)arg1;
- (id)evaluateComposition:(id)arg1 pipeline:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)prepareNodeWithPipelineState:(id)arg1 error:(out id *)arg2;
- (id)pipelineForComposition:(id)arg1 error:(out id *)arg2;
- (id)validateComposition:(out id *)arg1;
- (BOOL)prepare:(out id *)arg1;
- (void)_reply:(id)arg1;
- (void)reply:(id)arg1;
@property(readonly) BOOL succeeded; // @dynamic succeeded;
- (void)_setCurrentStage:(long long)arg1;
- (void)_finish;
- (void)finish;
- (void)finalize:(BOOL)arg1;
- (void)cleanUp;
- (id)result;
- (void)respond;
- (void)abortComplete;
- (void)abortRender;
- (void)abortPrepare;
- (void)abortStage:(long long)arg1;
- (CDStruct_7ddbbeae)_atomicCancel;
- (void)_cancelCoalescedJob;
- (void)cancelCoalescedJob;
- (BOOL)_shouldCancelCoalescedJob;
- (void)_cancel;
- (void)cancel;
@property(readonly) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(readonly) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(readonly) long long currentStage; // @synthesize currentStage=_currentStage;
- (BOOL)_shouldWaitForDependentJobs;
- (long long)_nextStageForStage:(long long)arg1;
- (BOOL)runStage:(long long)arg1 error:(out id *)arg2;
- (void)didRun;
- (void)_didPrepare;
- (long long)willRun;
@property(readonly, nonatomic) BOOL wantsRenderScaleClampedToNativeScale;
@property(readonly, nonatomic) BOOL wantsRenderNodeCached;
@property(readonly, nonatomic) BOOL wantsPrepareNodeCached;
@property(readonly, nonatomic) BOOL wantsCompleteStage;
@property(readonly, nonatomic) BOOL wantsRenderStage;
@property(readonly, nonatomic) BOOL wantsOutputVideo;
@property(readonly, nonatomic) BOOL wantsOutputVideoFrame;
@property(readonly, nonatomic) BOOL wantsOutputImage;
@property(readonly, nonatomic) BOOL wantsOutputGeometry;
@property(readonly, nonatomic) id <NURenderer> renderer;
@property(readonly) id <NUExtentPolicy> extentPolicy;
@property(readonly) id <NUScalePolicy> scalePolicy;
@property(readonly) NUPriority *priority;
- (void)_run:(long long)arg1;
- (void)run:(long long)arg1;
- (id)description;
@property(readonly) CDStruct_912cb5d2 imageSize;
- (long long)resolvedSampleMode:(long long)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)initWithRequest:(id)arg1;
- (id)init;
- (id)renderImage:(id)arg1 into:(id)arg2 colorSpace:(id)arg3 roi:(id)arg4 imageSize:(CDStruct_912cb5d2)arg5 error:(out id *)arg6;
- (BOOL)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 colorSpace:(id)arg4 error:(out id *)arg5;

@end

