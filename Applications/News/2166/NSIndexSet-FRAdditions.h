//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (FRAdditions)
+ (id)indexSetWithIndexesInArray:(id)arg1;
+ (id)indexSetWithIndexCount:(unsigned long long)arg1;
- (id)mapFromOldToNewIndexesWithRemovedIndexes:(id)arg1;
- (id)mapFromOldToNewIndexesWithInsertedIndexes:(id)arg1;
- (unsigned long long)countOfContiguousIndexesGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)countOfIndexesLessThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)countOfIndexesLessThanIndex:(unsigned long long)arg1;
- (id)indexSetByAddingIndexesFromSet:(id)arg1;
@end
