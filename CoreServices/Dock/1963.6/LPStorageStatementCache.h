//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LPStorageStatementCache : NSObject
{
    NSMapTable *_statements;
    NSObject<OS_dispatch_source> *_clearTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)clearStatements;
- (int)statementWithString:(const char *)arg1 database:(struct sqlite3 *)arg2 statement:(struct sqlite3_stmt **)arg3;
- (int)statmentWithNSString:(id)arg1 database:(struct sqlite3 *)arg2 statement:(struct sqlite3_stmt **)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

