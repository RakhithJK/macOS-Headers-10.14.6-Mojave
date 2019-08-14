//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout
{
    id *_attributes;
    double *_headerWidths;
    long long _arrayLength;
}

+ (Class)invalidationContextClass;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (void)_setAttributes:(id)arg1 ForSection:(long long)arg2;
- (void)dealloc;

@end

