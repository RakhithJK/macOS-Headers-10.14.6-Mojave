//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface RMMigrationContext : NSObject
{
    NSMutableDictionary *_uniqueIdentifierToCloudObjectID;
    NSMutableDictionary *_uniqueIdentifierToLocalObjectID;
    NSMutableSet *_deletedObjectIDs;
    NSMutableSet *_filledObjectIDs;
}

- (void).cxx_destruct;
- (BOOL)deleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (BOOL)deleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (id)createLocalObjectForCloudObject:(id)arg1;
- (id)createCloudObjectForLocalObject:(id)arg1;
- (id)localObjectMatchingCloudObject:(id)arg1 error:(id *)arg2;
- (id)cloudObjectMatchingLocalObject:(id)arg1 error:(id *)arg2;
- (BOOL)fillLocalObject:(id)arg1 fromCloudObject:(id)arg2 localDelta:(id)arg3 cloudDelta:(id)arg4 error:(id *)arg5;
- (BOOL)fillCloudObject:(id)arg1 fromLocalObject:(id)arg2 cloudDelta:(id)arg3 localDelta:(id)arg4 error:(id *)arg5;
- (id)localObjectIDForUniqueIdentifier:(id)arg1;
- (id)cloudObjectIDForUniqueIdentifier:(id)arg1;
- (BOOL)newDeleteLocalObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (BOOL)newDeleteCloudObjectWithUniqueIdentifier:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (id)updateCloudObjectWithUniqueIdentifier:(id)arg1 dictionary:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
- (BOOL)initializeCachesWithManagedObjectContext:(id)arg1 withCloudStore:(id)arg2 andLocalStore:(id)arg3 error:(id *)arg4;
- (id)init;

@end
