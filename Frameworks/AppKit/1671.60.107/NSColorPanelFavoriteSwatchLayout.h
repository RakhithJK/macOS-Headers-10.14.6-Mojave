//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSCollectionViewLayout.h>

__attribute__((visibility("hidden")))
@interface NSColorPanelFavoriteSwatchLayout : NSCollectionViewLayout
{
    struct CGSize _itemSize;
    double _itemSpacing;
    struct NSEdgeInsets _sectionInset;
}

@property struct NSEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGRect)enclosingBounds;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (long long)numberOfItemsFittingInBoundsWidth:(double)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)init;

@end

