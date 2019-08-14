//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>

@class NSArray, NSCollectionView, NSCollectionViewLayoutInvalidationContext, NSDynamicAnimator, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, _NSCollectionViewCore;

@interface NSCollectionViewLayout : NSObject <NSCoding>
{
    _NSCollectionViewCore *_collectionViewCore;
    struct CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableDictionary *_deletedDecorationIndexPathsDict;
    NSMutableDictionary *_insertedDecorationIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSMutableDictionary *_decorationViewExternalObjectsTables;
    NSCollectionViewLayout *_transitioningFromLayout;
    NSCollectionViewLayout *_transitioningToLayout;
    NSDynamicAnimator *_animator;
    NSCollectionViewLayoutInvalidationContext *_invalidationContext;
    struct CGRect _frame;
    NSIndexSet *_sections;
    NSIndexSet *_items;
    NSArray *_elementKinds;
    NSCollectionViewLayout *_siblingLayout;
    struct CGPoint _layoutOffset;
    unsigned long long _layoutOffsetEdges;
    struct {
        unsigned int inTransitionFromTransitionLayout:1;
        unsigned int inTransitionToTransitionLayout:1;
        unsigned int prepared:1;
        unsigned int wantsRightToLeftHorizontalMirroringIfNeeded:1;
    } _layoutFlags;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (BOOL)_shouldRelayoutImmediatelyForNewCollectionViewSize;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (BOOL)_estimatesSizes;
@property(nonatomic, getter=_isPrepared, setter=_setPrepared:) BOOL prepared;
@property(nonatomic, getter=_sublayoutType, setter=_setSublayoutType:) long long sublayoutType;
@property(nonatomic, getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:) unsigned long long layoutOffsetEdges;
@property(nonatomic, getter=_layoutOffset, setter=_setLayoutOffset:) struct CGPoint layoutOffset;
@property(nonatomic, getter=_siblingLayout, setter=_setSiblingLayout:) NSCollectionViewLayout *siblingLayout;
@property(copy, nonatomic, getter=_elementKinds, setter=_setElementKinds:) NSArray *elementKinds;
@property(copy, nonatomic, getter=_items, setter=_setItems:) NSIndexSet *items;
@property(copy, nonatomic, getter=_sections, setter=_setSections:) NSIndexSet *sections;
- (struct CGRect)_bounds;
@property(nonatomic, getter=_frame, setter=_setFrame:) struct CGRect frame;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)_finalizeCollectionViewItemAnimations;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint)arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint)arg4;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize)arg1;
@property(readonly) __weak NSCollectionView *collectionView;
- (void)_setCollectionViewCore:(id)arg1;
- (id)_collectionViewCore;
- (struct CGPoint)updatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)transitionContentOffsetForProposedContentOffset:(struct CGPoint)arg1 keyItemIndexPath:(id)arg2;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (void)finalizeLayoutTransition;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)_finalizeLayoutTransition;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGPoint)collectionViewContentOrigin;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)layoutAttributesForNextItemInDirection:(struct CGPoint)arg1 fromIndexPath:(id)arg2 constrainedToRect:(struct CGRect)arg3;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

