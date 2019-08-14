//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAutoloopVideoTaskDelegate-Protocol.h>

@class AVAsset, NSArray, NSString, PXAutoloopVideoInput, PXAutoloopVideoRecipe, PXAutoloopVideoTask;
@protocol OS_dispatch_queue, PXAutoloopVideoPipelinePerformerDelegate;

@interface PXAutoloopVideoPipelinePerformer : NSObject <PXAutoloopVideoTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    void *_ivarQueueIdentifier;
    long long _ivarQueue_status;
    double _ivarQueue_progress;
    id <PXAutoloopVideoPipelinePerformerDelegate> _ivarQueue_delegate;
    CDStruct_d0cf029a _ivarQueue_delegateFlags;
    AVAsset *_asset;
    PXAutoloopVideoRecipe *_recipe;
    NSArray *__internalQueue_taskQueue;
    long long __internalQueue_currentTaskIndex;
    PXAutoloopVideoInput *__internalQueue_input;
    CDUnknownBlockType __internalQueue_currentResultHandler;
    PXAutoloopVideoTask *__internalQueue_currentTask;
    PXAutoloopVideoRecipe *__internalQueue_outputRecipe;
    AVAsset *__internalQueue_outputVideo;
}

@property(copy, nonatomic, setter=_internalQueue_setOutputVideo:) AVAsset *_internalQueue_outputVideo; // @synthesize _internalQueue_outputVideo=__internalQueue_outputVideo;
@property(retain, nonatomic, setter=_internalQueue_setOutputRecipe:) PXAutoloopVideoRecipe *_internalQueue_outputRecipe; // @synthesize _internalQueue_outputRecipe=__internalQueue_outputRecipe;
@property(retain, nonatomic, setter=_internalQueue_setCurrentTask:) PXAutoloopVideoTask *_internalQueue_currentTask; // @synthesize _internalQueue_currentTask=__internalQueue_currentTask;
@property(copy, nonatomic, setter=_internalQueue_setCurrentResultHandler:) CDUnknownBlockType _internalQueue_currentResultHandler; // @synthesize _internalQueue_currentResultHandler=__internalQueue_currentResultHandler;
@property(retain, nonatomic, setter=_internalQueue_setInput:) PXAutoloopVideoInput *_internalQueue_input; // @synthesize _internalQueue_input=__internalQueue_input;
@property(nonatomic, setter=_internalQueue_setCurrentTaskIndex:) long long _internalQueue_currentTaskIndex; // @synthesize _internalQueue_currentTaskIndex=__internalQueue_currentTaskIndex;
@property(copy, nonatomic, setter=_internalQueue_setTaskQueue:) NSArray *_internalQueue_taskQueue; // @synthesize _internalQueue_taskQueue=__internalQueue_taskQueue;
@property(readonly, nonatomic) PXAutoloopVideoRecipe *recipe; // @synthesize recipe=_recipe;
@property(readonly, copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)autoloopVideoTaskStatusDidChange:(id)arg1;
- (void)autoloopVideoTaskProgressDidChange:(id)arg1;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (BOOL)_isOnIvarQueue;
- (void)_updateStatus;
- (void)_updateProgress;
@property(nonatomic, setter=_setStatus:) long long status;
@property(nonatomic, setter=_setProgress:) double progress;
@property(nonatomic) __weak id <PXAutoloopVideoPipelinePerformerDelegate> delegate;
- (BOOL)_isRunning;
- (void)_performNextTask;
- (void)_cancel;
- (void)cancel;
- (void)runWithResultHandler:(CDUnknownBlockType)arg1;
- (void)runWithRenderer:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithAsset:(id)arg1 recipe:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

