//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface WBSMutableOrderedSet : NSObject
{
    NSMutableOrderedSet *_mutableOrderedSet;
    unsigned long long _maximumCount;
}

- (void).cxx_destruct;
- (void)_moveObjectAtIndexToLast:(unsigned long long)arg1;
- (void)markObjectAsRecentlyUsed:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *array;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (id)init;

@end
