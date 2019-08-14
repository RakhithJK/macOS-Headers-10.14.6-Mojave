//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource, NSObject;
@protocol CPLEngineTransportTask, OS_dispatch_queue;

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportTask> _transportTask;
    CPLResource *_cloudResource;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _completionHandler;
}

+ (id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CDUnknownBlockType launchHandler; // @synthesize launchHandler=_launchHandler;
@property(retain, nonatomic) CPLResource *cloudResource; // @synthesize cloudResource=_cloudResource;
- (void).cxx_destruct;
- (void)launchTransportTask:(id)arg1;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (void)cancelTask;
- (void)launch;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

