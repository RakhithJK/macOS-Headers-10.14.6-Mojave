//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSIndexPath, NSString;

@protocol _NSBindingTree
- (BOOL)isExpandableAtArrangedObjectIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)countForIndexPath:(NSIndexPath *)arg1;
- (id)nodeAtIndexPath:(NSIndexPath *)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (BOOL)_validateValue:(id *)arg1 forKeyPath:(NSString *)arg2 ofObjectAtIndexPath:(NSIndexPath *)arg3 error:(id *)arg4;
- (void)_invokeSelector:(SEL)arg1 withArguments:(NSArray *)arg2 onKeyPath:(NSString *)arg3 ofObjectAtIndexPath:(NSIndexPath *)arg4;
- (void)_setValue:(id)arg1 forKeyPath:(NSString *)arg2 ofObjectAtIndexPath:(NSIndexPath *)arg3;
- (id)_valueForKeyPath:(NSString *)arg1 ofObjectAtIndexPath:(id)arg2;
@end

