//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSearchElementAlternateBirthdayPredicates : NSObject
{
}

+ (id)isNotNilPredicate;
+ (id)predicateForKey:(id)arg1 value:(id)arg2 comparison:(long long)arg3;
+ (id)predicateForKey:(id)arg1 integerValue:(long long)arg2 comparison:(long long)arg3;
+ (id)reducedOrPredicateWithClauses:(id)arg1;
+ (id)notEqualPredicateWithValueClauses:(id)arg1;
+ (id)equalPredicateWithValueClauses:(id)arg1;
+ (id)aggregatePredicateWithValueClauses:(id)arg1 comparison:(long long)arg2;
+ (id)componentValuePredicatesForComponents:(id)arg1 comparison:(long long)arg2;
+ (id)predicateForComparisonToNil:(long long)arg1;
+ (id)predicateForValue:(id)arg1 comparison:(long long)arg2;

@end

