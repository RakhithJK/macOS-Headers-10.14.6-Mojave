//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebDatabaseManager : NSObject
{
}

+ (void)scheduleEmptyDatabaseRemoval;
+ (void)removeEmptyDatabaseFiles;
+ (id)sharedWebDatabaseManager;
- (void)setIDBPerOriginQuota:(unsigned long long)arg1;
- (void)deleteAllIndexedDatabases;
- (BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (BOOL)deleteOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)databasesWithOrigin:(id)arg1;
- (id)origins;
- (id)init;

@end

