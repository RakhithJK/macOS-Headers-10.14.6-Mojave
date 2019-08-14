//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HTTPServer/DDLogger-Protocol.h>

@class NSString;
@protocol DDLogFormatter, OS_dispatch_queue;

@interface DDAbstractLogger : NSObject <DDLogger>
{
    id <DDLogFormatter> formatter;
    NSObject<OS_dispatch_queue> *loggerQueue;
}

- (void).cxx_destruct;
- (BOOL)isOnInternalLoggerQueue;
- (BOOL)isOnGlobalLoggingQueue;
- (id)loggerName;
- (id)loggerQueue;
- (void)setLogFormatter:(id)arg1;
- (id)logFormatter;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

