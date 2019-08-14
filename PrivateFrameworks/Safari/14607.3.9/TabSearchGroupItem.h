//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/TabSearchItem.h>

@class NSArray, NSIndexSet, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TabSearchGroupItem : TabSearchItem
{
    NSMutableArray *_children;
    NSMutableArray *_filteredChildren;
    NSString *_type;
    NSIndexSet *_filteredChildIndexes;
}

@property(readonly, nonatomic) NSIndexSet *filteredChildIndexes; // @synthesize filteredChildIndexes=_filteredChildIndexes;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)enumerateFilteredChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeFilteredChildItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFilteredChildItem:(id)arg1;
- (id)filteredChildItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFilteredChildren;
- (void)removeFilter;
- (void)filterChildrenWithIndexes:(id)arg1;
- (BOOL)_shouldFilterItems;
- (void)insertChildItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildItem:(id)arg1;
- (void)removeChildItemAtIndex:(unsigned long long)arg1;
- (void)removeAllChildItems;
- (unsigned long long)indexOfChildItem:(id)arg1;
- (id)childItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
@property(copy, nonatomic) NSArray *children;
- (id)init;

@end

