//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TDLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _verbosity;
    int _logMaxVerbosity;
}

+ (id)defaultLogger;
+ (id)logger;
- (void)waitForLoggingToComplete;
- (BOOL)isVerbosityLogEverything;
- (BOOL)isVerbosityLogWarningsAndErrors;
- (BOOL)isVerbosityLogErrorsOnly;
- (void)logErrorWithFormat:(id)arg1;
- (void)logWarningWithFormat:(id)arg1;
- (void)logInfoWithFormat:(id)arg1;
- (void)logExtraWithFormat:(id)arg1;
- (void)logError:(id)arg1;
- (void)logWarning:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logExtra:(id)arg1;
- (void)logMessage:(id)arg1 whenVerbosity:(int)arg2;
- (void)dealloc;
@property(nonatomic) int verbosity;
- (id)init;

@end

