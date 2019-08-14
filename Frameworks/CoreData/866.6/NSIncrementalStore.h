//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentStore.h>

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore
{
    NSDictionary *_storeMetadata;
    unsigned long long _lastIdentifier;
    void *_reserveda;
    void *_reservedb;
}

+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (id)identifierForNewStoreAtURL:(id)arg1;
- (id)referenceObjectForObjectID:(id)arg1;
- (id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (BOOL)loadMetadata:(id *)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (BOOL)load:(id *)arg1;
- (void)dealloc;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (void)_setMetadata:(id)arg1 includeVersioning:(BOOL)arg2;
- (void)_preflightCrossCheck;
- (id)_rawMetadata__;

@end

