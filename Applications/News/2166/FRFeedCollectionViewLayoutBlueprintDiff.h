//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSString;

@interface FRFeedCollectionViewLayoutBlueprintDiff : NSObject
{
    NSIndexSet *_insertedSections;
    NSIndexSet *_removedSections;
    NSIndexSet *_updatedSections;
    NSArray *_insertedIndexPaths;
    NSArray *_removedIndexPaths;
    NSArray *_updatedIndexPaths;
    NSArray *_insertedRegionIndexPaths;
    NSArray *_removedRegionIndexPaths;
    NSString *_sourceBlueprintIdentifier;
    NSString *_destinationBlueprintIdentifier;
    NSMutableIndexSet *_mutableInsertedSections;
    NSMutableIndexSet *_mutableRemovedSections;
    NSMutableIndexSet *_mutableUpdatedSections;
    NSMutableOrderedSet *_mutableInsertedRegionsIndexPaths;
    NSMutableOrderedSet *_mutableRemovedRegionsIndexPaths;
    NSMutableOrderedSet *_mutableInsertedIndexPaths;
    NSMutableOrderedSet *_mutableRemovedIndexPaths;
    NSMutableOrderedSet *_mutableUpdatedIndexPaths;
}

@property(retain, nonatomic) NSMutableOrderedSet *mutableUpdatedIndexPaths; // @synthesize mutableUpdatedIndexPaths=_mutableUpdatedIndexPaths;
@property(retain, nonatomic) NSMutableOrderedSet *mutableRemovedIndexPaths; // @synthesize mutableRemovedIndexPaths=_mutableRemovedIndexPaths;
@property(retain, nonatomic) NSMutableOrderedSet *mutableInsertedIndexPaths; // @synthesize mutableInsertedIndexPaths=_mutableInsertedIndexPaths;
@property(retain, nonatomic) NSMutableOrderedSet *mutableRemovedRegionsIndexPaths; // @synthesize mutableRemovedRegionsIndexPaths=_mutableRemovedRegionsIndexPaths;
@property(retain, nonatomic) NSMutableOrderedSet *mutableInsertedRegionsIndexPaths; // @synthesize mutableInsertedRegionsIndexPaths=_mutableInsertedRegionsIndexPaths;
@property(retain, nonatomic) NSMutableIndexSet *mutableUpdatedSections; // @synthesize mutableUpdatedSections=_mutableUpdatedSections;
@property(retain, nonatomic) NSMutableIndexSet *mutableRemovedSections; // @synthesize mutableRemovedSections=_mutableRemovedSections;
@property(retain, nonatomic) NSMutableIndexSet *mutableInsertedSections; // @synthesize mutableInsertedSections=_mutableInsertedSections;
@property(copy, nonatomic) NSString *destinationBlueprintIdentifier; // @synthesize destinationBlueprintIdentifier=_destinationBlueprintIdentifier;
@property(copy, nonatomic) NSString *sourceBlueprintIdentifier; // @synthesize sourceBlueprintIdentifier=_sourceBlueprintIdentifier;
@property(readonly, nonatomic) NSArray *removedRegionIndexPaths; // @synthesize removedRegionIndexPaths=_removedRegionIndexPaths;
@property(readonly, nonatomic) NSArray *insertedRegionIndexPaths; // @synthesize insertedRegionIndexPaths=_insertedRegionIndexPaths;
@property(readonly, nonatomic) NSArray *updatedIndexPaths; // @synthesize updatedIndexPaths=_updatedIndexPaths;
@property(readonly, nonatomic) NSArray *removedIndexPaths; // @synthesize removedIndexPaths=_removedIndexPaths;
@property(readonly, nonatomic) NSArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
@property(readonly, nonatomic) NSIndexSet *updatedSections; // @synthesize updatedSections=_updatedSections;
@property(readonly, nonatomic) NSIndexSet *removedSections; // @synthesize removedSections=_removedSections;
@property(readonly, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)debugDescription;
- (id)description;
- (void)fin;
- (id)init;

@end

