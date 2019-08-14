//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCachedFetchRequestInfo, NSMutableArray, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLiteStatement : NSObject
{
    NSSQLEntity *_entity;
    NSMutableArray *_bindVariables;
    NSMutableArray *_bindIntarrays;
    NSString *_sqlString;
    BOOL _isImpossibleCondition;
    BOOL _trackChangedRowCount;
    NSSQLEntity *_fakeEntityForFetch;
    NSCachedFetchRequestInfo *_cachedStatementInfo;
    struct sqlite3_stmt *_cachedSQLiteStatement;
    void *_owner;
}

@property(nonatomic) BOOL trackChangedRowCount; // @synthesize trackChangedRowCount=_trackChangedRowCount;
@property(retain, nonatomic) NSCachedFetchRequestInfo *cachedStatementInfo; // @synthesize cachedStatementInfo=_cachedStatementInfo;
- (void)setCachedSQLiteStatement:(struct sqlite3_stmt *)arg1 forConnection:(id)arg2;
- (struct sqlite3_stmt *)cachedSQLiteStatement;
- (BOOL)isReadOnly;
- (void)cacheFakeEntityForFetch:(id)arg1;
- (id)fakeEntityForFetch;
- (void)setImpossibleCondition:(BOOL)arg1;
- (BOOL)isImpossibleCondition;
- (void)removeAllBindIntarrays;
- (void)setBindIntarrays:(id)arg1;
- (unsigned int)addBindIntarray:(id)arg1;
- (id)bindIntarrays;
- (void)removeAllBindVariables;
- (void)setBindVariables:(id)arg1;
- (unsigned int)addBindVariable:(id)arg1;
- (id)bindVariables;
- (void)setSQLString:(id)arg1;
- (id)sqlString;
- (id)entity;
- (void)dealloc;
- (void)clearCaches:(BOOL)arg1;
- (id)initWithEntity:(id)arg1;
- (id)description;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;

@end

