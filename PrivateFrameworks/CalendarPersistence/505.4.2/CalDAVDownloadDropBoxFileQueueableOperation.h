//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

@class CALEntity, NSFileHandle, NSMutableArray, NSString, NSURL;

@interface CalDAVDownloadDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation
{
    NSString *_attachmentName;
    NSString *_etag;
    CALEntity *_masterEntity;
    NSFileHandle *_destFileHandle;
    NSURL *_dropBoxURL;
    NSMutableArray *_urlsToTry;
    BOOL _isUserRequested;
    BOOL _isLastInBatch;
}

@property BOOL isLastInBatch; // @synthesize isLastInBatch=_isLastInBatch;
@property BOOL isUserRequested; // @synthesize isUserRequested=_isUserRequested;
@property(retain) NSFileHandle *destFileHandle; // @synthesize destFileHandle=_destFileHandle;
- (void).cxx_destruct;
- (void)finishOperation;
- (BOOL)_isLowPriority;
- (void)performOperation;
- (void)_doFetchAtNextURL;
- (id)_popNextURLToTry;
- (void)_addURLToTry:(id)arg1;
- (void)_handleDownloadResponseHeaders:(id)arg1 url:(id)arg2 error:(id)arg3;
- (void)_processFileWithContentType:(id)arg1 etag:(id)arg2;
- (id)_managedAttachmentByFilename:(id)arg1 inContext:(id)arg2;
- (void)setQuarantineProperties;
- (id)extraUserInfoForRebuiltError;
- (id)masterEntity;
- (id)initWithChangeRequest:(id)arg1 attachmentName:(id)arg2 etag:(id)arg3 entity:(id)arg4 dropBoxURL:(id)arg5 fromSource:(id)arg6;

@end

