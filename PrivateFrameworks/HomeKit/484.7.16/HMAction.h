//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMActionSet, HMFUnfairLock, NSString, NSUUID, _HMContext;

@interface HMAction : NSObject <HMObjectMerge>
{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    HMActionSet *_actionSet;
    unsigned long long _actionType;
    _HMContext *_context;
}

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (BOOL)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
@property __weak HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)_invalidate;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

