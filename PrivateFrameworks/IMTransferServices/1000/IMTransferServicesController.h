//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMTransferServicesController : NSObject
{
}

+ (id)sharedInstance;
- (void)preWarmMMCSForOwnerID:(id)arg1;
- (void)cancelSendTransferID:(id)arg1;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(unsigned long long)arg9 progressBlock:(CDUnknownBlockType)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(BOOL)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(BOOL)arg5 retries:(int)arg6 progressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

