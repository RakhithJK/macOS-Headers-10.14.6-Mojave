//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _NSLazyFetchingArray : NSMutableArray
{
    NSMutableArray *_objects;
    NSIndexSet *_fetchedIndexes;
    unsigned long long _batchSize;
    id _owner;
    BOOL _shouldFetchAllRanges;
    BOOL _hasChanges;
    BOOL _madeMutable;
}

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)filterUsingPredicate:(id)arg1;
- (void)sortUsingDescriptors:(id)arg1;
- (void)_sortUsingDescriptors:(id)arg1;
- (void)_fetchAllRanges;
- (void)_contextDidSave;
- (void)setShouldFetchAllRanges:(BOOL)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (void)addObjectsIDsFromArray:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (id)mutableCopy;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)_underlyingArrayObjectAtIndex:(unsigned long long)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)count;
- (void)_fetchBatchForIndexes:(id)arg1;
- (void)contextDidSave;
- (void)setArray:(id)arg1;
- (void)_ensureContentArrayIsMutable;
- (void)updateBatchSizeForRange:(struct _NSRange)arg1;
- (id)_fetchedIndexes;
- (void)setOwner:(id)arg1;
- (void)dealloc;
- (id)init;

@end

