//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSLock, NSMutableDictionary, TSUSparseArray;

@interface TSUUUIDSetStore : NSObject <NSCopying>
{
    NSLock *_lock;
    TSUSparseArray *_uuidSetForIndex;
    NSMutableDictionary *_indexesUsingUuid;
    unsigned int _highestIndex;
}

- (void).cxx_destruct;
- (unsigned int)addSetForSingleUuid:(const UUIDData_60906e89 *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long count;
- (void)foreachUuidSet:(CDUnknownBlockType)arg1;
- (id)subsetStoreForIndexes:(id)arg1;
- (void)_foreachUuidSet:(CDUnknownBlockType)arg1;
- (id)indexesUsingAnyOfUuids:(const vector_4dc5f307 *)arg1;
- (id)indexesUsingUuid:(const UUIDData_60906e89 *)arg1;
- (BOOL)containsUuidSet:(id)arg1;
- (unsigned int)indexOfSet:(id)arg1;
- (id)setForIndex:(unsigned int)arg1;
- (void)removeSetAtIndex:(unsigned int)arg1;
- (void)p_addSet:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)addSetForUuids:(const vector_4dc5f307 *)arg1;
- (unsigned int)addSet:(id)arg1;
- (id)description;
- (id)init;

@end

