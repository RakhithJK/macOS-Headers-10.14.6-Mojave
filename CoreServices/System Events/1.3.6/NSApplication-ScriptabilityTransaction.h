//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface NSApplication (ScriptabilityTransaction)
- (void)removeTransactionObject:(id)arg1;
- (void)insertTransactionObject:(id)arg1;
- (id)fetchTransactionObjectWithClass:(Class)arg1 andName:(id)arg2;
- (id)abortTransaction:(id)arg1;
- (id)endTransaction:(id)arg1;
- (id)beginTransaction:(id)arg1;
@end

