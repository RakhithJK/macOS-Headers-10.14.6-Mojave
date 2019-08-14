//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIAssociationTable : NSObject
{
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (void).cxx_destruct;
- (BOOL)hasRightValuesForLeftValue:(id)arg1;
- (BOOL)hasLeftValuesForRightValue:(id)arg1;
- (id)rightValueEnumerableForLeftValue:(id)arg1;
- (id)leftValueEnumerableForRightValue:(id)arg1;
- (id)rightValuesForLeftValue:(id)arg1;
- (id)leftValuesForRightValue:(id)arg1;
- (id)rightValueEnumerable;
- (id)leftValueEnumerable;
- (id)rightValues;
- (id)leftValues;
- (BOOL)isEmpty;
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (id)description;
- (id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2;

@end

