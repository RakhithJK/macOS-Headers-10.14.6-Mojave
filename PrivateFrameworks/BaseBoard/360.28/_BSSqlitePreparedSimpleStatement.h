//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BaseBoard/BSSqlitePreparedStatement.h>

#import <BaseBoard/BSSqliteDatabaseConnectionObserver-Protocol.h>

@class NSString;

@interface _BSSqlitePreparedSimpleStatement : BSSqlitePreparedStatement <BSSqliteDatabaseConnectionObserver>
{
    struct sqlite3_stmt *_statement;
}

- (int)_bindParameterIndex:(int)arg1 dataValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 numberValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 stringValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 nullValue:(id)arg2;
- (int)_bindKey:(id)arg1 value:(id)arg2;
- (id)_sqliteError:(int)arg1;
- (void)sqliteDatabaseConnectionWillClose:(id)arg1;
- (BOOL)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1 statement:(struct sqlite3_stmt *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

