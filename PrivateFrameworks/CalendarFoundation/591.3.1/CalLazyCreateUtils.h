//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalLazyCreateUtils : NSObject
{
}

+ (void)addItem:(id)arg1 withKey:(id)arg2 toStrongTableOfArrays:(id *)arg3;
+ (void)addArray:(id)arg1 withKey:(id)arg2 toStrongTableOfArrays:(id *)arg3;
+ (void)addSet:(id)arg1 withKey:(id)arg2 toDictionaryOfSets:(id *)arg3;
+ (void)addItem:(id)arg1 withKey:(id)arg2 toDictionaryOfSets:(id *)arg3;
+ (void)addArray:(id)arg1 withKey:(id)arg2 toDictionaryOfSets:(id *)arg3;
+ (void)addItem:(id)arg1 withKey:(id)arg2 toDictionaryOfArrays:(id *)arg3;
+ (void)addArray:(id)arg1 withKey:(id)arg2 toDictionaryOfArrays:(id *)arg3;
+ (void)addSet:(id)arg1 toSet:(id *)arg2;
+ (void)addObject:(id)arg1 toSet:(id *)arg2;
+ (void)setValue:(id)arg1 withKey:(id)arg2 inDictionary:(id *)arg3;
+ (void)addObject:(id)arg1 toArray:(id *)arg2;
+ (void)addArray:(id)arg1 toArray:(id *)arg2;

@end

