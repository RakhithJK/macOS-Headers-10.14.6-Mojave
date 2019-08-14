//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutCacheType-Protocol.h"
#import "NSCopying-Protocol.h"

@class FRFeedCollectionViewLayoutAdCache, NSArray, NSDictionary, NSOrderedSet, NSString;

@interface FRFeedCollectionViewLayoutCache : NSObject <FRFeedCollectionViewLayoutCacheType, NSCopying>
{
    struct NSDictionary *_layoutInfos;
    struct NSDictionary *_sectionLayoutAttributes;
    struct NSDictionary *_layoutInfoBuckets;
    struct NSDictionary *_sectionBuckets;
    struct NSDictionary *_layoutInfoIndexPaths;
    NSDictionary *_layoutInfoRanks;
    NSOrderedSet *_groupDisplayOrderRanks;
    NSDictionary *_underlyingTileInfoIDsToParentLayoutInfoIDs;
    FRFeedCollectionViewLayoutAdCache *_adCache;
    NSArray *_gapTileInfoIds;
    struct CGSize _viewportSize;
}

@property(retain, nonatomic) NSArray *gapTileInfoIds; // @synthesize gapTileInfoIds=_gapTileInfoIds;
@property(retain, nonatomic) FRFeedCollectionViewLayoutAdCache *adCache; // @synthesize adCache=_adCache;
@property(retain, nonatomic) NSDictionary *underlyingTileInfoIDsToParentLayoutInfoIDs; // @synthesize underlyingTileInfoIDsToParentLayoutInfoIDs=_underlyingTileInfoIDsToParentLayoutInfoIDs;
@property(retain, nonatomic) NSOrderedSet *groupDisplayOrderRanks; // @synthesize groupDisplayOrderRanks=_groupDisplayOrderRanks;
@property(retain, nonatomic) NSDictionary *layoutInfoRanks; // @synthesize layoutInfoRanks=_layoutInfoRanks;
@property(retain, nonatomic) NSDictionary *layoutInfoIndexPaths; // @synthesize layoutInfoIndexPaths=_layoutInfoIndexPaths;
@property(retain, nonatomic) NSDictionary *sectionBuckets; // @synthesize sectionBuckets=_sectionBuckets;
@property(retain, nonatomic) NSDictionary *layoutInfoBuckets; // @synthesize layoutInfoBuckets=_layoutInfoBuckets;
@property(retain, nonatomic) NSDictionary *sectionLayoutAttributes; // @synthesize sectionLayoutAttributes=_sectionLayoutAttributes;
@property(retain, nonatomic) NSDictionary *layoutInfos; // @synthesize layoutInfos=_layoutInfos;
@property(nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
- (void).cxx_destruct;
- (void)_buildCacheFromBlueprint:(id)arg1;
- (id)sectionsIDsIntersectingWithRect:(struct CGRect)arg1;
- (id)allGapLayoutTileInfos;
- (id)findClosestGapToLayoutInfoID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2 withInDistance:(double)arg3;
- (id)allLayoutTileInfos;
- (id)layoutTileInfoIDOfAdInOrder:(unsigned long long)arg1 relativeToLayoutTileInfoID:(id)arg2;
- (id)allLayoutTileInfoIDs;
- (long long)yOriginOfLayoutTileInfoID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2;
- (id)indexPathForLayoutTileInfoID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2;
- (id)layoutTileInfoForID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2;
- (unsigned long long)groupDisplayRankForSectionID:(id)arg1;
- (unsigned long long)rankForLayoutTileInfoID:(id)arg1;
- (id)layoutTileInfoForIndexPath:(id)arg1;
- (id)layoutTileInfosInRect:(struct CGRect)arg1;
- (id)layoutTileInfoForLayoutTileInfoID:(id)arg1;
- (id)supplimentaryLayoutAttributesForSectionID:(id)arg1;
- (id)layoutAttributesInRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlueprint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

