//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewLayout.h>

@class TIconSpatialDataController, TOverlappingController;

@interface TIconCollectionViewFreeFormLayout : NSCollectionViewLayout
{
    struct TNSRef<TIconSpatialDataController, void> _spatialDataController;
    struct TNSRef<TViewGridLayoutController, void> _gridLayoutController;
    struct TNSRef<TOverlappingController, void> _overlappingController;
    struct TFENode _targetNode;
    struct CGSize _iconViewSize;
    struct CGPoint _iconViewAnchorPoint;
    struct CGSize _contentSize;
    struct TPointQuadTree<unsigned long> _anchorPointQuadTree;
    struct unordered_map<TFENode, long, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, long>>> _nodeToZIndexCache;
    long long _maxZIndex;
    struct unordered_map<TFENode, IconSpatialData, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, IconSpatialData>>> _nodeToSpatialDataCache;
}

+ (Class)invalidationContextClass;
@property(nonatomic) struct CGPoint iconViewAnchorPoint; // @synthesize iconViewAnchorPoint=_iconViewAnchorPoint;
@property(nonatomic) struct CGSize iconViewSize; // @synthesize iconViewSize=_iconViewSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unordered_set_931aff12)nodesOverlappedByNode:(const struct TFENode *)arg1 iconViewFrame:(struct CGRect)arg2 checkZIndex:(long long)arg3;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)_prepareLayout;
- (void)updateAnchorPointQuadTree:(const struct TFENodeVector *)arg1;
- (struct CGPoint)anchorPointForLayoutAttributes:(id)arg1;
- (struct CGRect)iconViewFrameForAnchorPoint:(const struct CGPoint *)arg1;
- (void)nodesForSpatialDataFromNodes:(const struct TFENodeVector *)arg1 outOverlapping:(struct TFENodeVector *)arg2;
- (struct CGRect)estimatedLayoutBounds:(const struct CGSize *)arg1;
- (struct CGRect)iconViewFrameForSpatialData:(const struct IconSpatialData *)arg1;
- (struct CGRect)iconViewFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)iconViewFrameForIndexPath:(id)arg1;
- (vector_55f57b11)spatialDataForNodes:(const struct TFENodeVector *)arg1;
- (vector_55f57b11)spatialDataForNodes:(const struct TFENodeVector *)arg1 forParent:(struct TFENode)arg2;
- (struct IconSpatialData)spatialDataForNode:(const struct TFENode *)arg1;
- (struct CGPoint)anchorPointForIndex:(unsigned long long)arg1 inBounds:(const struct CGRect *)arg2;
- (struct CGPoint)anchorPointForIndex:(unsigned long long)arg1;
- (struct CGPoint)anchorPointForNode:(const struct TFENode *)arg1;
- (vector_e1abc270)occupyAndReturnNewGridSpots:(unsigned long long)arg1;
- (_Bool)snapIndexes:(id)arg1 ofAnchorPointsToGrid:(vector_e1abc270 *)arg2 unique:(_Bool)arg3;
- (void)updateGridLayoutController:(const struct CGRect *)arg1;
- (void)updateGridLayoutController;
- (struct TFENodeVector)nodesInCollectionView;
- (void)bumpZIndexForNodes:(const struct TFENodeVector *)arg1;
- (long long)zIndexForNode:(const struct TFENode *)arg1;
- (long long)zIndexForNodeNoRefresh:(const struct TFENode *)arg1;
- (void)refreshNodeToZIndexCacheIfNeeded:(_Bool)arg1;
- (long long)scrollDirection;
- (void)setTargetNode:(const struct TFENode *)arg1;
- (struct TFENode)targetNode;
@property(nonatomic) _Bool layoutInRows; // @dynamic layoutInRows;
@property(readonly) TOverlappingController *overlappingController; // @dynamic overlappingController;
@property(readonly) TIconSpatialDataController *spatialDataController; // @dynamic spatialDataController;
- (id)iconCollectionView;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)init;

@end

