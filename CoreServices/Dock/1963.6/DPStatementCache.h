//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DPStatementCache : NSObject
{
    NSMapTable *_statements;
}

- (void).cxx_destruct;
- (void)finalize;
- (struct sqlite3_stmt *)statementWithString:(id)arg1 database:(struct sqlite3 *)arg2 result:(int *)arg3;
- (void)dealloc;
- (id)init;

@end

