//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSALogWriter : NSObject
{
}

+ (void)makeDirectoryAtPath:(id)arg1 mode:(unsigned short)arg2 uid:(unsigned int)arg3 createHierarchy:(BOOL)arg4;
+ (void)createSystemProblemReportDirectoryWithUID:(unsigned int)arg1;
+ (void)createUserProblemReportDirectoryAtPath:(id)arg1 uid:(unsigned int)arg2;
+ (id)sharedObject;
- (BOOL)hasXAttrAt:(const char *)arg1 withName:(const char *)arg2;
- (id)stringXAttrAt:(const char *)arg1 withName:(const char *)arg2;
- (int)setXattrAt:(const char *)arg1 key:(id)arg2 value:(id)arg3;
- (void)throttleUnsubmittedProblemReportsAt:(id)arg1 logType:(id)arg2 appName:(id)arg3;
- (void)logSavedProblemReportForLogType:(id)arg1 additionalHeaders:(id)arg2 writingOptions:(id)arg3 logLocation:(const char *)arg4;
- (id)fileNameForLogType:(id)arg1 fileNamePrefix:(id)arg2 additionalHeaders:(id)arg3 attemptIndex:(unsigned long long)arg4;
- (BOOL)writeLogWithType:(id)arg1 fileNamePrefix:(id)arg2 additionalHeaders:(id)arg3 writingOptions:(id)arg4 writerBlock:(CDUnknownBlockType)arg5;

@end

