//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSIndexSet, NSString;
@protocol IPXCollection;

@protocol IPXCollection <NSObject>
- (id <IPXCollection>)unfilteredCollection;
- (id <IPXCollection>)filteredCollectionContainingObjectsPassingTest:(BOOL (^)(id, unsigned long long, char *))arg1;
- (id <IPXCollection>)filteredCollectionContainingObjectsAtIndexes:(NSIndexSet *)arg1;
- (NSDictionary *)userInfo;
- (NSString *)localizedDateRangeForCollectionObjects;
- (NSDate *)latestDateForCollectionObjects;
- (NSDate *)earliestDateForCollectionObjects;
- (NSArray *)collectionObjects;
- (void)enumerateCollectionObjectsWithBlock:(void (^)(id, unsigned long long, char *))arg1;
- (NSArray *)collectionObjectsAtIndexes:(NSIndexSet *)arg1;
- (id)collectionObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfCollectionObject:(id)arg1;
- (unsigned long long)collectionObjectCount;
- (unsigned long long)collectionLifetimeSequence;
- (NSString *)collectionName;
- (NSString *)collectionUUID;
- (BOOL)conformsToIPXCollection;
@end

