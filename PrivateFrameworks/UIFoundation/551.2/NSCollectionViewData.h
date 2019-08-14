//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCollectionViewLayout, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, _NSCollectionViewCore;

@interface NSCollectionViewData : NSObject
{
    _NSCollectionViewCore *_collectionView;
    NSCollectionViewLayout *_layout;
    NSMapTable *_screenPageMap;
    NSMutableIndexSet *_globalIndexesOfItemsAwaitingValidation;
    id *_globalItems;
    NSMutableDictionary *_supplementaryLayoutAttributes;
    NSMutableDictionary *_decorationLayoutAttributes;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    struct CGRect _validLayoutRect;
    long long _numItems;
    long long _numSections;
    long long *_sectionItemCounts;
    long long _lastSectionTestedForNumberOfItemsBeforeSection;
    long long _lastResultForNumberOfItemsBeforeSection;
    struct CGSize _contentSize;
    NSMutableArray *_clonedCellAttributes;
    NSMutableArray *_clonedSupplementaryAttributes;
    NSMutableArray *_clonedDecorationAttributes;
    struct {
        unsigned int contentSizeIsValid:1;
        unsigned int itemCountsAreValid:1;
        unsigned int layoutIsPrepared:1;
        unsigned int layoutLocked:1;
    } _collectionViewDataFlags;
}

+ (void)initialize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) NSArray *clonedDecorationAttributes; // @synthesize clonedDecorationAttributes=_clonedDecorationAttributes;
@property(readonly, nonatomic) NSArray *clonedSupplementaryAttributes; // @synthesize clonedSupplementaryAttributes=_clonedSupplementaryAttributes;
@property(readonly, nonatomic) NSArray *clonedCellAttributes; // @synthesize clonedCellAttributes=_clonedCellAttributes;
- (void).cxx_destruct;
@property(nonatomic, getter=isLayoutLocked) BOOL layoutLocked;
@property(readonly, nonatomic) BOOL layoutIsPrepared;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)knownDecorationElementKinds;
- (id)knownSupplementaryElementKinds;
- (id)existingSupplementaryLayoutAttributes;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)arg1;
- (id)layoutAttributesForCellsInRect:(struct CGRect)arg1 validateLayout:(BOOL)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInSection:(long long)arg1;
- (id)layoutAttributesForGlobalItemIndex:(long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)rectForGlobalItemIndex:(long long)arg1;
- (struct CGRect)collectionViewContentRect;
- (struct CGRect)rectForItemAtIndexPath:(id)arg1;
- (BOOL)dataSourceMatchesCurrentCounts;
- (id)indexPathForItemAtGlobalIndex:(long long)arg1;
- (long long)globalIndexForItemAtIndexPath:(id)arg1;
- (id)validatedIndexPathForItemAtGlobalIndex:(long long)arg1;
- (long long)validatedGlobalIndexForItemAtIndexPath:(id)arg1;
- (BOOL)isIndexPathValid:(id)arg1;
- (BOOL)isGlobalIndexValid:(long long)arg1;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (BOOL)hasValidItemCounts;
- (void)validateLayoutInRect:(struct CGRect)arg1;
- (void)_loadEverything;
- (void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2;
- (id)_screenPageForPoint:(struct CGPoint)arg1;
- (void)_prepareToLoadData;
- (void)_prepareLayoutIfNeeded;
- (void)_validateContentSize;
- (void)_validateItemCounts;
- (void)_updateItemCounts;
- (void)invalidate:(BOOL)arg1;
- (void)validateDecorationViews;
- (void)validateSupplementaryViews;
- (void)invalidateDecorationIndexPaths:(id)arg1;
- (void)invalidateSupplementaryIndexPaths:(id)arg1;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2;

@end

