//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PASampling/PASerializable-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID, PASampleTaskDataPrivateData, PASampleTimeInsensitiveTaskData;

@interface PASampleTaskData : NSObject <PASerializable>
{
    NSMutableDictionary *_sampleThreadsDict;
    PASampleTimeInsensitiveTaskData *_timeInsensitiveTaskData;
    PASampleTaskDataPrivateData *_privateData;
    NSSet *_donatingUniqueIds;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
@property(readonly) NSDictionary *sampleThreads; // @synthesize sampleThreads=_sampleThreadsDict;
@property(retain) NSSet *donatingUniqueIds; // @synthesize donatingUniqueIds=_donatingUniqueIds;
- (void).cxx_destruct;
- (BOOL)isSameAsTask:(id)arg1;
- (id)initWithTimeInsensitiveTaskData:(id)arg1;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 andTimeInsensitiveTaskData:(id)arg2 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg3 machTimebase:(struct mach_timebase_info)arg4;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 andTimeInsensitiveTaskData:(id)arg2 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg3 machTimebase:(struct mach_timebase_info)arg4;
- (id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2 machTimebase:(struct mach_timebase_info)arg3;
@property(readonly) BOOL wqExceededTotalThreadLimit;
@property(readonly) BOOL wqExceededConstrainedThreadLimit;
@property(readonly) BOOL isDirty;
@property(readonly) BOOL wqAndDirtyAreStatic;
@property(readonly) BOOL isLiveImpDonor;
@property(readonly) BOOL isImpDonor;
@property(readonly) BOOL isTimerThrottled;
@property(readonly) BOOL isSuppressed;
@property(readonly) BOOL isBoosted;
@property(readonly) BOOL isForeground;
@property(readonly) BOOL isNonVisible;
@property(readonly) BOOL isVisible;
@property(readonly) BOOL isDarwinExtBG;
@property(readonly) BOOL isDarwinBG;
@property(readonly) BOOL isFrozen;
@property(readonly) BOOL isPidSuspended;
@property(readonly) BOOL isTerminatedSnapshot;
@property(readonly) BOOL isTaskResourceFlagged;
@property(readonly) unsigned long long ss_flags;
@property(readonly) unsigned long long terminatedThreadsCycles;
@property(readonly) unsigned long long terminatedThreadsInstructions;
@property(readonly) unsigned long long terminatedThreadsSystemTimeInNs;
@property(readonly) unsigned long long terminatedThreadsUserTimeInNs;
@property(readonly) unsigned int latency_qos;
@property(readonly) int numberOfPageIns;
@property(readonly) int numberOfCopyOnWritePageFaults;
@property(readonly) int numberOfPageFaults;
@property(readonly) long long taskSizeInBytes;
@property(readonly) int suspendCount;
- (id)architectureString;
@property(readonly) double mostRecentTimeSamplingOnlyMainThread;
@property(readonly) BOOL isTranslocated;
@property(readonly) BOOL isThirdParty;
@property(readonly) BOOL allowsIdleExit;
@property(readonly) BOOL usesSuddenTermination;
@property(readonly) double timeOfLastResponse;
@property(readonly) BOOL isUnresponsive;
@property(readonly) NSString *mainBinaryPath;
@property(readonly) unsigned long long mainBinaryOffset;
- (struct _CSArchitecture)architecture;
@property(readonly) NSUUID *mainBinaryUuid;
@property(readonly) NSArray *imageInfos;
@property(readonly) unsigned long long uniquePid;
@property(readonly) NSString *bundleName;
@property(copy) NSString *name;
@property(readonly) unsigned int uid;
@property(readonly) int rpid;
@property(readonly) int ppid;
@property(readonly) int pid;
@property(readonly, copy) NSString *debugDescription;
- (id)timeInsensitiveTaskData;
- (id)sampleThreadForTid:(unsigned long long)arg1;
- (id)mutableSampleThreads;
- (void)setSampleThreads:(id)arg1;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

