//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassKit/CLSQuery-Protocol.h>

@class NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol CLSFaultProcessorDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CLSFaultProcessor : NSObject <CLSQuery>
{
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSMapTable *_objects;
    NSMapTable *_relations;
    NSMapTable *_objectsIdsByParentID;
    NSMutableSet *_rootObjectIDs;
    id <CLSFaultProcessorDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <CLSFaultProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;
- (oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (oneway void)clientRemote_invalidate;
- (void)_inGroup:(CDUnknownBlockType)arg1;
- (id)_childParentRelationForObject:(id)arg1;
- (BOOL)_isRootObject:(id)arg1 withRelation:(id)arg2;
- (BOOL)_isRootObject:(id)arg1;
- (void)_addObject:(id)arg1;
- (void)_faultObject:(id)arg1;
- (void)_faultRelation:(id)arg1 fromObject:(id)arg2;
- (BOOL)waitUntilDone:(double)arg1;
- (void)completionNotify:(CDUnknownBlockType)arg1;
- (void)_descendIntoObject:(id)arg1 idsToProcess:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (void)faultObjects:(id)arg1;
- (void)faultObject:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

