//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSSQLiteAdapter, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject
{
    NSSQLiteStatement *_statement;
    NSSQLiteAdapter *_adapter;
    NSMutableString *_sqlString;
    NSMutableString *_whereClause;
    NSMutableString *_selectList;
}

+ (void)initialize;
- (void)prepareDeleteStatementWithRow:(id)arg1;
- (void)prepareUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(struct __CFBitVector *)arg3;
- (void)prepareConstrainedValuesUpdateStatementWithRow:(id)arg1;
- (void)buildWhereClauseForRow:(id)arg1 optLock:(long long)arg2;
- (void)prepareDeleteStatementForRelationship:(id)arg1;
- (void)prepareReorderStatementForRelationship:(id)arg1;
- (void)prepareMasterReorderStatementPart2ForRelationship:(id)arg1;
- (void)prepareMasterReorderStatementForRelationship:(id)arg1;
- (void)prepareInsertStatementForRelationship:(id)arg1;
- (void)prepareInsertStatementWithRow:(id)arg1 includeConstraints:(BOOL)arg2;
- (void)prepareInsertStatementWithRow:(id)arg1;
- (void)appendWhereClauseToSQL;
- (void)appendSQL:(id)arg1;
- (void)_startSQL:(id)arg1;
- (void)appendWhereClause:(id)arg1;
- (id)sqlString;
- (id)initWithStatement:(id)arg1 forAdapter:(id)arg2;
- (void)dealloc;

@end

