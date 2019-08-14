//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMDBAccess : NSObject
{
    int _state;
}

+ (int)databaseTypeAtPath:(id)arg1;
+ (id)remoteDSDBWithPath:(id)arg1;
+ (id)localODDB;
+ (id)rawODDBWithPath:(id)arg1;
+ (id)remoteDBWithPath:(id)arg1;
+ (id)localDB;
- (BOOL)deleteEntryAtPath:(id)arg1;
- (BOOL)createEntry:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (BOOL)addMemberRecord:(id)arg1 ofType:(id)arg2 atPath:(id)arg3;
- (BOOL)removeValuesForKey:(id)arg1 atPath:(id)arg2;
- (BOOL)insertValue:(id)arg1 forKey:(id)arg2 atPath:(id)arg3;
- (BOOL)removeValue:(id)arg1 forKey:(id)arg2 atPath:(id)arg3;
- (long long)addValue:(id)arg1 forKey:(id)arg2 atPath:(id)arg3;
- (BOOL)entryExistsAtPath:(id)arg1;
- (id)recordTypes;
- (id)entriesAtPath:(id)arg1;
- (id)entryAtPath:(id)arg1;
- (void)closeDatabase;
- (BOOL)openDatabaseForWriting:(BOOL)arg1;
- (BOOL)openDatabase;
- (void)setState:(int)arg1;
- (int)state;
- (id)init;

@end

