//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface NSApplication (AppScriptability)
- (void)removeFromDatabasesAtIndex:(unsigned int)arg1;
- (void)insertInDatabases:(id)arg1;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)valueInDatabasesWithName:(id)arg1;
- (int)openAndInsertInDatabases:(id)arg1 atIndex:(unsigned int)arg2;
- (id)databases;
- (void)resetIdleTimer;
- (void)setQuitDelay:(unsigned long long)arg1;
- (unsigned long long)quitDelay;
@end

