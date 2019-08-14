//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol GEOLogAdaptor, OS_dispatch_queue;

@interface GEOLogManager : NSObject
{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSMutableArray *_logAdaptors;
    id <GEOLogAdaptor> _serverLogAdaptorManager;
    void *_loggingQueueIdentityKey;
    void *_loggingQueueIdentityValue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <GEOLogAdaptor> serverLogAdaptorManager; // @synthesize serverLogAdaptorManager=_serverLogAdaptorManager;
- (void).cxx_destruct;
- (void)_setupDefaultAdaptors;
- (BOOL)_disableUsageLoggingForCountry;
- (void)_removeAllLogAdaptors;
- (void)_removeLogAdaptor:(id)arg1;
- (void)_addLogAdaptor:(id)arg1;
- (void)_unregisterLogMsgStateOfType:(int)arg1;
- (void)_registerLogMsgState:(id)arg1;
- (void)_updateAdaptorPolicyConfiguration:(id)arg1;
- (void)_forceFlushLogs;
- (void)_flushLogs;
- (void)_queueLogMessage:(id)arg1;
- (void)removeAllLogAdators;
- (void)removeLogAdaptor:(id)arg1;
- (void)addLogAdaptor:(id)arg1;
- (void)waitForEmptyLoggingQueue:(CDUnknownBlockType)arg1;
- (void)updateAdaptorPolicyConfiguration:(id)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)forceFlushLogs;
- (void)flushLogs;
- (void)queueLogMessage:(id)arg1;
- (void)_applicationDeactivating:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (BOOL)shouldSendUsageUsingNewLogManager;
- (void)dealloc;
- (id)init;

@end
