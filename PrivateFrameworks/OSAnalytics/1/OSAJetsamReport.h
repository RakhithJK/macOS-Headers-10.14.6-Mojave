//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSAnalytics/OSAAppleErrorReport.h>

#import <OSAnalytics/ConcreteReport-Protocol.h>

@class NSMutableArray, NSString;

@interface OSAJetsamReport : OSAAppleErrorReport <ConcreteReport>
{
    NSString *_largestProcess;
    NSString *_largestActiveApp;
    NSMutableArray *_killedActiveApps;
    unsigned long long _wiredBytes;
    unsigned int _killed_or_suspended_count;
    BOOL _isSuspendedOnlyJetsam;
    struct jetsam_snapshot *_snapshot;
    NSString *_event_reason;
    unsigned long long _event_code;
}

+ (long long)_daysSince1970;
- (void).cxx_destruct;
- (void)generateLogAtLevel:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)isActionable;
- (void)_setDumpedSuspendedJetsamLog;
- (_Bool)alreadyDumpedSuspendedJetsamLogToday;
- (void)acquireJetsamData;
- (void)_getSnapshotWithFlags:(unsigned int)arg1;
- (id)reportNamePrefix;
- (id)appleCareDetails;
- (id)problemType;
- (void)dealloc;
- (id)initWithIncidentID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

