//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/_PFAncillaryModelFactory-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>
{
}

+ (unsigned long long)ancillaryEntityOffset;
+ (unsigned long long)ancillaryEntityCount;
+ (id)ancillaryModelNamespace;
+ (void)createModelsWithTombstoneCount:(int)arg1 andOptions:(id)arg2;
+ (id)_tombstonesColumnsForEntity:(id)arg1;
+ (id)_tombstonesForEntity:(id)arg1;
+ (BOOL)_hasTombstonesInUserInfo:(id)arg1;
+ (int)_maxCountOfTombstonesInModel:(id)arg1;
+ (void)resetCaches;
+ (id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2;
+ (id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

