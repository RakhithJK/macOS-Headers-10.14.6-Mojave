//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXCollection-Protocol.h"
#import "IPXSelectionProviderContainer-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, RDAlbum, RDMoment, RDMomentCollection, RDMomentYear;
@protocol IPXCollection;

@interface IPXCollection : NSObject <IPXSelectionProviderContainer, IPXCollection>
{
    unsigned long long _lifetimeSequence;
    NSString *_uuid;
    NSString *_name;
    NSArray *_objectsArray;
    NSMutableDictionary *_userInfo;
    id <IPXCollection> _unfilteredCollection;
    unsigned long long _cachedHashValue;
}

+ (id)userInfoWithEarliestDate:(id)arg1 latestDate:(id)arg2;
+ (id)localizedDateRangeForEarliestDate:(id)arg1 latestDate:(id)arg2;
+ (id)momentUserInfoWithUserInfo:(id)arg1 moment:(id)arg2;
+ (id)momentCollectionUserInfoWithUserInfo:(id)arg1 momentCollection:(id)arg2;
+ (id)albumUserInfoWithUserInfo:(id)arg1 album:(id)arg2;
+ (id)momentYearUserInfoWithUserInfo:(id)arg1 momentYear:(id)arg2;
+ (id)collectionForLegacyCollection:(id)arg1 withLifetimeSequence:(unsigned long long)arg2;
- (void).cxx_destruct;
- (BOOL)conformsToIPXCollection;
- (id)unfilteredCollection;
- (id)filteredCollectionContainingObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)filteredCollectionContainingObjectsAtIndexes:(id)arg1;
- (id)localizedDateRangeForCollectionObjects;
- (id)latestDateForCollectionObjects;
- (id)earliestDateForCollectionObjects;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfo;
- (id)collectionObjects;
- (void)enumerateCollectionObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)collectionObjectsAtIndexes:(id)arg1;
- (id)collectionObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfCollectionObject:(id)arg1;
- (unsigned long long)collectionObjectCount;
- (id)summarizedCountsString;
- (unsigned long long)collectionLifetimeSequence;
- (id)collectionName;
- (id)collectionUUID;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)_descriptionForCollectionObjects:(id)arg1;
- (id)_descriptionForCollectionObject:(id)arg1;
- (id)initWithUnfilteredCollection:(id)arg1 filteredObjects:(id)arg2;
- (id)initWithUnfilteredCollection:(id)arg1 objectIndexes:(id)arg2;
- (id)initWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 objects:(id)arg4 userInfo:(id)arg5;
- (id)initWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3;
@property(readonly) NSString *momentSecondaryPlaceString;
@property(readonly) NSString *momentPrimaryPlaceString;
@property(readonly) NSString *momentTitleString;
@property(readonly) NSArray *momentTitleComponents;
@property(readonly) RDMoment *moment;
@property(readonly) NSString *momentCollectionTitleString;
@property(readonly) NSArray *momentCollectionTitleComponents;
@property(readonly) RDMomentCollection *momentCollection;
@property(readonly) RDAlbum *album;
@property(readonly) BOOL locationAvailable;
@property(readonly) NSString *locationSecondaryString;
@property(readonly) NSString *locationPrimaryString;
- (id)collectionObjectsAtIndexPaths:(id)arg1 notFoundIndicatorObject:(id)arg2;
- (id)collectionObjectsAtIndexPaths:(id)arg1;
- (id)collectionObjectAtIndexPath:(id)arg1;
- (id)indexPathsOfCollectionObjects:(id)arg1 additionallyPassingTest:(CDUnknownBlockType)arg2;
- (id)indexPathsOfCollectionObjects:(id)arg1;
- (id)indexPathOfCollectionObject:(id)arg1;
- (BOOL)findCollectionObject:(id)arg1 owningCollection:(id *)arg2 index:(unsigned long long *)arg3;
- (id)leafCollectionObjects;
- (BOOL)containsAnyCollectionObjects:(id)arg1;
@property(readonly) RDMomentYear *momentYear;
- (id)legacyCollection;
- (id)selectedContainerTitle;
- (unsigned long long)containerType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

