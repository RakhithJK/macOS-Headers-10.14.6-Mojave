//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSArray, NSMutableSet, NSSet;

@interface FCThreadSafeMutableSet : NSObject
{
    NFUnfairLock *_lock;
    NSMutableSet *_set;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *readOnlySet;
@property(readonly, copy) NSArray *allObjects;
@property(readonly) BOOL isEmpty;
@property(readonly) unsigned long long count;
- (void)readWriteWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end
