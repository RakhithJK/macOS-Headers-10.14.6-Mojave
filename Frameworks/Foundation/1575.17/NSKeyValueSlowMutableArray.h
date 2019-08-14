//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSKeyValueMutableArray.h>

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray
{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyArrays;
    char _padding[3];
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;
- (unsigned long long)count;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

