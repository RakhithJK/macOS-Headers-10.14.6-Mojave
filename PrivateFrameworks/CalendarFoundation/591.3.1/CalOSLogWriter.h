//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarFoundation/CalLogWriter.h>

@class NSObject;
@protocol OS_os_log;

@interface CalOSLogWriter : CalLogWriter
{
    NSObject<OS_os_log> *CalOSLogClient;
}

+ (id)autoLogNamespaces;
- (void).cxx_destruct;
- (unsigned long long)_indexToSplitOnForIndex:(unsigned long long)arg1 chunkBytes:(const char *)arg2;
- (void)_logStringInChunks:(id)arg1;
- (void)write:(id)arg1;
- (void)_configureAutoLogNamespaces;
- (void)_configureOSLogClient;
- (id)initWithParameters:(id)arg1;

@end

