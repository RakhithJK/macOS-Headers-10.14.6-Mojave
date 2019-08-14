//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSError.h>

@interface NSError (MDLTSUIO)
+ (id)mdltsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)mdltsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)mdltsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)mdltsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)mdltsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)mdltsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) BOOL mdltsu_isWriteError;
@property(readonly, nonatomic) BOOL mdltsu_isCorruptedError;
@property(readonly, nonatomic) BOOL mdltsu_isReadError;
@end

