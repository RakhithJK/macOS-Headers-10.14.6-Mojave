//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDObjectLookup : HMFObject <HMFLogging>
{
    NSMapTable *_uuidToObjectMapping;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMapTable *uuidToObjectMapping; // @synthesize uuidToObjectMapping=_uuidToObjectMapping;
- (void).cxx_destruct;
- (void)applyChange:(id)arg1 previous:(id)arg2 onObject:(id)arg3 result:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_scanThroughObjects;
- (id)_lookupObjectWithUUID:(id)arg1 applyObjectChange:(id)arg2 previous:(id)arg3 result:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithWorkQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

