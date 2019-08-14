//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICNotesImporterClient : NSObject
{
    NSXPCConnection *_connectionToService;
    NSObject<OS_dispatch_queue> *_requestCountQueue;
    unsigned long long _requestCount;
}

@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue; // @synthesize requestCountQueue=_requestCountQueue;
- (void).cxx_destruct;
- (void)suspendConnectionIfNeeded;
- (void)resumeConnectionIfNeeded;
- (void)cleanupArchiveId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseTitleFromHTMLString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

