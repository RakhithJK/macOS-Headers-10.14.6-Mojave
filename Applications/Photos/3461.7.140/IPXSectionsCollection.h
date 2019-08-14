//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollection.h"

@class NSDictionary;

@interface IPXSectionsCollection : IPXCollection
{
    NSDictionary *_uuidIndexMap;
    unsigned long long _cachedTotalNumberOfItems;
    unsigned int _cachedHasItemsCalculated:1;
    unsigned int _cachedHasItems:1;
}

+ (id)collectionForSingleCollection:(id)arg1;
+ (id)collectionWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 forSingleCollection:(id)arg4;
- (void).cxx_destruct;
- (unsigned long long)indexOfCollectionObject:(id)arg1;
- (id)summarizedCountsString;
- (id)collectionOfLeafCollectionObjects;
- (id)leafCollectionObjects;
- (BOOL)hasItems;
- (unsigned long long)totalNumberOfItems;
- (id)filteredSectionsCollectionWithItemsPassingTest:(CDUnknownBlockType)arg1;
- (id)filteredSectionsCollectionWithSectionItemsPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 collections:(id)arg4;
- (id)initWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 collections:(id)arg4 earliestDate:(id)arg5 latestDate:(id)arg6;
- (id)filteredSectionsCollectionContainingVersionsWithDatabaseModelIds:(id)arg1;
- (id)filteredSectionsCollectionContainingVersionsWithUUIDs:(id)arg1;

@end

