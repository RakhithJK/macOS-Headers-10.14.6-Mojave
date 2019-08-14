//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

#import <CloudDocs/NSProgressReporting-Protocol.h>

@class BRGlobalProgressProxy, BRUploadAllFilesForLogOutOperation, NSMutableArray, NSOperationQueue, NSString;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>
{
    BRGlobalProgressProxy *_progress;
    NSMutableArray *_fileCoordinators;
    CDUnknownBlockType _downloadAllFilesCompletionBlock;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}

@property(retain) BRGlobalProgressProxy *progress; // @synthesize progress=_progress;
@property(copy) CDUnknownBlockType downloadAllFilesCompletionBlock; // @synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
