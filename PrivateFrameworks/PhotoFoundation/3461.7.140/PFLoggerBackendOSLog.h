//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSMutableDictionary, NSString;

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter
{
    NSMutableDictionary *_osLogs;
    NSString *_sender;
    struct os_unfair_lock_s _lock;
}

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
- (void).cxx_destruct;
- (void)_logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 type:(unsigned int)arg3;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (BOOL)outputsToDebuggerConsole;
- (BOOL)formatsMessage;
- (BOOL)allowsConcurrentAccess;
- (id)initWithSender:(id)arg1;

@end

