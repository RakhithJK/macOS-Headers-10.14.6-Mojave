//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL;

@protocol ICImportNoteFileParser <NSObject>
- (void)cancelParsing;
- (void)parseFileURL:(NSURL *)arg1 newNoteBlock:(ICNote * (^)(void))arg2 updatedNoteBlock:(void (^)(ICNote *))arg3 errorBlock:(void (^)(NSError *))arg4 completedParsingBlock:(void (^)(void))arg5;
- (void)totalNotesFoundAtFileURL:(NSURL *)arg1 completionBlock:(void (^)(unsigned long long))arg2;
- (BOOL)canHandleFileURL:(NSURL *)arg1;
- (NSArray *)allowedFileTypes;
@end

