//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLForceSyncTask.h>

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLEngineLibrary, CPLEngineSyncTask, CPLMinglePulledChangesTask, CPLPullFromTransportTask, CPLPushToTransportTask, CPLScopeFilter, NSObject, NSString;
@protocol CPLEngineForceSyncTaskDelegate, OS_dispatch_queue;

@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _reallyCancelled;
    CPLEngineSyncTask *_currentTask;
    CPLPushToTransportTask *_pushTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLScopeFilter *_filter;
    CPLEngineLibrary *_engineLibrary;
    id <CPLEngineForceSyncTaskDelegate> _delegate;
    CDUnknownBlockType _taskDidFinishWithErrorBlock;
}

@property(copy, nonatomic) CDUnknownBlockType taskDidFinishWithErrorBlock; // @synthesize taskDidFinishWithErrorBlock=_taskDidFinishWithErrorBlock;
@property(nonatomic) __weak id <CPLEngineForceSyncTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(retain, nonatomic) CPLScopeFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)reallyCancel;
- (void)launch;
- (void)_dispatchMingleTask;
- (void)_dispatchPullTask;
- (void)_dispatchPushTask;
- (void)_dispatchSyncTask:(id)arg1;
- (void)cancelTask;
- (id)initWithScopeIdentifiers:(id)arg1 engineLibrary:(id)arg2 filter:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

