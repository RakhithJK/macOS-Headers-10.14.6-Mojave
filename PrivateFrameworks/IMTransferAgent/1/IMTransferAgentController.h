//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCSController;

@interface IMTransferAgentController : NSObject
{
    MMCSController *_controller;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MMCSController *controller; // @synthesize controller=_controller;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 progressBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(BOOL)arg7 fileSize:(unsigned long long)arg8 progressBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (BOOL)_isWhiteListedURL:(id)arg1;
- (id)_defaultMMCSWhiteList;
- (void)cancelSendTransferID:(id)arg1;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 userInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 retryAttemptCount:(unsigned long long)arg4 userInfo:(id)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)dealloc;

@end

