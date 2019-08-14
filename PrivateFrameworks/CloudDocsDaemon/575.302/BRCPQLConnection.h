//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <prequelite/PQLConnection.h>

@class br_pacer;

__attribute__((visibility("hidden")))
@interface BRCPQLConnection : PQLConnection
{
    br_pacer *_batchingPacer;
    int _changeCount;
    double _flushInterval;
    BOOL _flushImmediately;
    BOOL _autovacuumInProgress;
    long long _changesOverride;
    unsigned long long _vmStepsExecuted;
}

@property(readonly, nonatomic) unsigned long long vmStepsExecuted; // @synthesize vmStepsExecuted=_vmStepsExecuted;
- (void).cxx_destruct;
- (void)autovacuumIfNeeded;
- (BOOL)needsAutovacuum;
- (long long)sizeInBytes;
- (void)brc_close;
- (void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3;
- (BOOL)_shouldFlushWithChangeCount:(int)arg1;
- (void)disableProfilingForQueriesInBlock:(CDUnknownBlockType)arg1;
- (BOOL)executeWithErrorHandler:(CDUnknownBlockType)arg1 sql:(id)arg2;
- (BOOL)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (BOOL)executeWithExpectedIndex:(id)arg1 sql:(id)arg2;
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (void)setProfilingHook:(CDUnknownBlockType)arg1;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (BOOL)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id *)arg3;
@property(nonatomic) BOOL profilingEnabled;
- (long long)changes;
- (BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;
- (void)_setLockedHandler;
- (void)_setErrorHandlerWithDBCorruptionHandler:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType lockedHandler; // @dynamic lockedHandler;

@end

