//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMDBAccess.h>

@class NSURL, ODNode, ODSession;

@interface SMODDBAccess : SMDBAccess
{
    ODSession *_session;
    NSURL *_path;
    long long accessCount;
    ODNode *_node;
}

+ (id)sharedDBToPathMap;
+ (id)sharedQueue;
@property(retain) ODNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (BOOL)setRequirePasswordResetOnNextLoginForUser:(id)arg1 error:(id *)arg2;
- (BOOL)setPassword:(id)arg1 forUser:(id)arg2 error:(id *)arg3;
- (void)removeEmptyAttributes:(id)arg1;
- (BOOL)deleteEntryAtPath:(id)arg1;
- (BOOL)addMemberRecord:(id)arg1 ofType:(id)arg2 atPath:(id)arg3;
- (BOOL)removeValuesForKey:(id)arg1 atPath:(id)arg2;
- (BOOL)insertValue:(id)arg1 forKey:(id)arg2 atPath:(id)arg3;
- (BOOL)removeValue:(id)arg1 forKey:(id)arg2 atPath:(id)arg3;
- (long long)addValue:(id)arg1 forKey:(id)arg2 atPath:(id)arg3;
- (BOOL)createEntry:(id)arg1 atPath:(id)arg2 mergeAttributes:(id)arg3 error:(id *)arg4;
- (BOOL)createEntry:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (BOOL)entryExistsAtPath:(id)arg1;
- (id)recordTypes;
- (id)entryAtPath:(id)arg1;
- (id)entriesAtPath:(id)arg1;
- (BOOL)replaceUserRecord:(id)arg1 withRecord:(id)arg2 attributes:(id)arg3 password:(id)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (BOOL)enableSecureTokenForUser:(id)arg1 withPassword:(id)arg2 andDiskPassword:(id)arg3 returningError:(id *)arg4;
- (BOOL)establishCredentialsForSecureTokenWithName:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)closeDatabase;
- (BOOL)openDatabaseForWriting:(BOOL)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;

@end

