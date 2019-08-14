//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSFastEnumeration-Protocol.h>
#import <CoreFoundation/NSMutableCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)orderedSetWithSet:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)orderedSet;
+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSetWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)newOrderedSetWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)_alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
- (id)initWithObjects:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(BOOL)arg3;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)set;
- (id)array;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)reversedOrderedSet;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)lastObject;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned long long)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)getObjects:(id *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)firstObject;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)containsObject:(id)arg1;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)allObjects;
- (BOOL)isNSOrderedSet__;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
@property(readonly) unsigned long long count;

@end

