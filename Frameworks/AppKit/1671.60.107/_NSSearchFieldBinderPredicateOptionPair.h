//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString, _NSFilterPredicateVisitor;

__attribute__((visibility("hidden")))
@interface _NSSearchFieldBinderPredicateOptionPair : NSObject
{
    NSString *_predicateString;
    NSString *_predicateName;
    NSPredicate *_predicate;
    _NSFilterPredicateVisitor *_visitor;
}

- (id)visitor;
- (id)predicate;
- (void)setPredicateName:(id)arg1;
- (id)predicateName;
- (void)setPredicateString:(id)arg1;
- (id)predicateString;
- (void)dealloc;
- (id)init;

@end

