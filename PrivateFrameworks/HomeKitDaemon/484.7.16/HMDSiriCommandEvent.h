//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDSiriCommandEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned long long _duration;
    NSString *_actionType;
    NSString *_outcome;
    unsigned long long _numberOfEntities;
    unsigned long long _numberOfFailures;
    unsigned long long _numberOfIncompletions;
    unsigned long long _configurationVersion;
    unsigned long long _lastSyncedConfigurationVersion;
    unsigned long long _serverConfigurationVersion;
}

+ (id)commandEventWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property(readonly, nonatomic) unsigned long long lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property(readonly, nonatomic) unsigned long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, nonatomic) unsigned long long numberOfIncompletions; // @synthesize numberOfIncompletions=_numberOfIncompletions;
@property(readonly, nonatomic) unsigned long long numberOfFailures; // @synthesize numberOfFailures=_numberOfFailures;
@property(readonly, nonatomic) unsigned long long numberOfEntities; // @synthesize numberOfEntities=_numberOfEntities;
@property(readonly, nonatomic) NSString *outcome; // @synthesize outcome=_outcome;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)initWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

