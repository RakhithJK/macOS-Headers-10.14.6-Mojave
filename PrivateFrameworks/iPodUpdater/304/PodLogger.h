//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSFileHandle;

__attribute__((visibility("hidden")))
@interface PodLogger : NSObject
{
    int _loggingLevel;
    NSFileHandle *_logFile;
    NSDateFormatter *_formatter;
}

+ (id)sharedLoggerWithPath:(id)arg1;
- (void)writeLineToLog:(id)arg1;
- (id)logStringForType:(int)arg1;
- (void)logType:(int)arg1 withFormat:(id)arg2;
- (void)logType:(int)arg1 withString:(id)arg2;
- (void)logType:(int)arg1 inFunction:(const char *)arg2 atLine:(int)arg3 withFormat:(id)arg4;
- (void)logType:(int)arg1 inFunction:(const char *)arg2 atLine:(int)arg3 withString:(id)arg4;
- (int)loggingLevel;
- (void)setLoggingLevel:(int)arg1;
- (id)initWithPath:(id)arg1;

@end

